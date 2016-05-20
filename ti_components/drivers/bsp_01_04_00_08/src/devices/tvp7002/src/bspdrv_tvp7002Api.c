/******************************************************************************
 *                                                                            *
 * Copyright (c) 2012 Texas Instruments Incorporated - http://www.ti.com/     *
 *                                                                            *
 * All rights reserved. Property of Texas Instruments Incorporated.           *
 * Restricted rights to use, duplicate or disclose this code are              *
 * granted through contract.                                                  *
 *                                                                            *
 * The program may not be used without the written permission                 *
 * of Texas Instruments Incorporated or against the terms and conditions      *
 * stipulated in the agreement under which this program has been              *
 * supplied.                                                                  *
 *                                                                            *
 *****************************************************************************/

/**
 *  \file bspdrv_tvp7002Api.c
 *
 *  \brief TVP7002 video encoder FVID2 driver API file.
 *
 */

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */

#include <tvp7002/src/bspdrv_tvp7002Priv.h>

/* ========================================================================== */
/*                           Macros & Typedefs                                */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                         Structure Declarations                             */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                          Function Declarations                             */
/* ========================================================================== */
/**
 *  Below ifdef __cplusplus is added so that C++ build passes without
 *  typecasting. This is because the prototype is build as C type
 *  whereas this file is build as CPP file. Hence we get C++ build error.
 *  Also if tyecasting is used, then we get MisraC error Rule 11.1.
 */
#ifdef __cplusplus
extern "C" {
#endif
static Fdrv_Handle Bsp_tvp7002Create(UInt32                   drvId,
                                     UInt32                   instId,
                                     Ptr                      createPrms,
                                     Ptr                      createStatusArgs,
                                     const Fvid2_DrvCbParams *fdmCbPrms);
static Int32 Bsp_tvp7002Delete(Fdrv_Handle handle, Ptr deleteArgs);
static Int32 Bsp_tvp7002Control(Fdrv_Handle handle,
                                UInt32      cmd,
                                Ptr         cmdArgs,
                                Ptr         cmdStatusArgs);
#ifdef __cplusplus
}
#endif
static Bsp_Tvp7002HandleObj *Bsp_tvp7002AllocObj(void);
static Int32 Bsp_tvp7002FreeObj(Bsp_Tvp7002HandleObj *pObj);

static Int32 Bsp_tvp7002LockObj(Bsp_Tvp7002HandleObj *pObj);
static Int32 Bsp_tvp7002UnlockObj(Bsp_Tvp7002HandleObj *pObj);
static Int32 Bsp_tvp7002Lock(void);
static Int32 Bsp_tvp7002Unlock(void);

/* ========================================================================== */
/*                            Global Variables                                */
/* ========================================================================== */

/** \brief TVP7002 driver function pointer. */
static const Fvid2_DrvOps gBspTvp7002DrvOps =
{
    FVID2_VID_DEC_TVP7002_DRV,      /* Driver ID */
    &Bsp_tvp7002Create,             /* Create */
    &Bsp_tvp7002Delete,             /* Delete */
    &Bsp_tvp7002Control,            /* Control */
    NULL,                           /* Queue */
    NULL,                           /* Dequeue */
    NULL,                           /* ProcessFrames */
    NULL,                           /* GetProcessedFrames */
    NULL,                           /* ProcessRequest */
    NULL                            /* GetProcessedRequest */
};

/**
 *  \brief Global object storing all information related to all TVP7002 driver
 *  handles.
 */
static Bsp_Tvp7002Obj     gBspTvp7002Obj;

/* ========================================================================== */
/*                          Function Definitions                              */
/* ========================================================================== */

/**
 *  \brief System init for TVP7002 driver
 *
 *  This API
 *      - create semaphore locks needed
 *      - registers driver to FVID2 sub-system
 *      - gets called as part of Bsp_deviceInit()
 *
 *  \return                 Returns FVID2_SOK on success else returns
 *                          appropriate error code.
 */
Int32 Bsp_tvp7002Init(void)
{
    Int32 retVal = FVID2_SOK;
    Int32 initValue;

    /* Memset global object */
    BspUtils_memset(&gBspTvp7002Obj, 0, sizeof (gBspTvp7002Obj));

    /* Create global TVP7002 lock */
    initValue = 1;
    gBspTvp7002Obj.lock = BspOsal_semCreate(initValue, (Bool)TRUE);
    if (NULL == gBspTvp7002Obj.lock)
    {
        GT_0trace(BspDeviceTrace, GT_ERR, "Global semaphore create failed\n");
        retVal = FVID2_EALLOC;
    }

    if (FVID2_SOK == retVal)
    {
        /* Register TVP7002 driver with FVID2 sub-system */
        retVal = Fvid2_registerDriver(&gBspTvp7002DrvOps);
        if (FVID2_SOK != retVal)
        {
            GT_0trace(BspDeviceTrace, GT_ERR,
                      "Registering to FVID2 driver manager failed\n");
            /* Error - free acquired resources */
            BspOsal_semDelete(&gBspTvp7002Obj.lock);
        }
    }

    return (retVal);
}

/**
 *  \brief System de-init for TVP7002 driver
 *
 *  This API
 *      - de-registers driver from FVID2 sub-system
 *      - delete's allocated semaphore locks
 *      - gets called as part of Bsp_deviceDeInit()
 *
 *  \return                 Returns FVID2_SOK on success else returns
 *                          appropriate error code.
 */
Int32 Bsp_tvp7002DeInit(void)
{
    /* Unregister FVID2 driver */
    Fvid2_unRegisterDriver(&gBspTvp7002DrvOps);

    /* Delete semaphore's. */
    BspOsal_semDelete(&gBspTvp7002Obj.lock);

    return (FVID2_SOK);
}

/**
 *  \brief TVP7002 create API that gets called when Fvid2_create is called.
 *
 *  This API does not configure the TVP7002 is any way.
 *
 *  This API
 *      - validates parameters
 *      - allocates driver handle
 *      - stores create arguments in its internal data structure.
 *
 *  Later the create arguments will be used when doing I2C communcation with
 *  TVP7002.
 *
 *  \param drvId            [IN] Driver ID, must be
 *                          FVID2_VID_DEC_TVP7002_DRV.
 *  \param instId           [IN] Must be 0.
 *  \param createPrms       [IN] Create arguments - pointer to valid
 *                          Bsp_VidDecCreateParams. This parameter should
 *                          be non-NULL.
 *  \param createStatusArgs [OUT] TVP7002 driver return parameter -
 *                          pointer to Bsp_VidDecCreateStatus.
 *                          This parameter could be NULL and the driver fills
 *                          the retVal information only if this is not NULL.
 *  \param fdmCbPrms        [IN] Not used. Set to NULL
 *
 *  \return                 Returns NULL in case of any error. Otherwise
 *                          returns a valid handle.
 */
static Fdrv_Handle Bsp_tvp7002Create(UInt32                   drvId,
                                     UInt32                   instId,
                                     Ptr                      createPrms,
                                     Ptr                      createStatusArgs,
                                     const Fvid2_DrvCbParams *fdmCbPrms)
{
    Int32 retVal = FVID2_SOK;
    Bsp_Tvp7002HandleObj   *pObj = NULL;
    Bsp_VidDecCreateParams *vidDecCreatePrms;
    Bsp_VidDecCreateStatus *vidDecCreateStatus;

    /* Check parameters */
    if ((NULL == createPrms) ||
        (drvId != FVID2_VID_DEC_TVP7002_DRV) ||
        (instId != 0U))
    {
        GT_0trace(BspDeviceTrace, GT_ERR, "Null pointer/Invalid parameters\n");
        retVal = FVID2_EBADARGS;
    }

    if (FVID2_SOK == retVal)
    {
        vidDecCreatePrms = (Bsp_VidDecCreateParams *) createPrms;
        if (vidDecCreatePrms->deviceI2cInstId >= BSP_DEVICE_I2C_INST_ID_MAX)
        {
            GT_0trace(BspDeviceTrace, GT_ERR, "Invalid I2C instance ID\n");
            retVal = FVID2_EINVALID_PARAMS;
        }
    }

    if (FVID2_SOK == retVal)
    {
        /* Allocate driver handle */
        pObj = Bsp_tvp7002AllocObj();
        if (NULL == pObj)
        {
            GT_0trace(BspDeviceTrace, GT_ERR, "Alloc object failed\n");
            retVal = FVID2_EALLOC;
        }
    }

    if (FVID2_SOK == retVal)
    {
        /* Copy parameters to allocate driver handle */
        BspUtils_memcpy(
            &pObj->createPrms,
            vidDecCreatePrms,
            sizeof (*vidDecCreatePrms));
    }

    /* Fill the retVal if possible */
    if (NULL != createStatusArgs)
    {
        vidDecCreateStatus =
            (Bsp_VidDecCreateStatus *) createStatusArgs;
        vidDecCreateStatus->retVal = retVal;
    }

    return (pObj);
}

/**
 *  \brief Delete function that is called when Fvid2_delete is called.
 *
 *  This API
 *      - free's driver handle object
 *
 *  \param handle           [IN] Driver handle.
 *  \param deleteArgs       [IN] Not used currently. Meant for future purpose.
 *                          Set this to NULL.
 *
 *  \return                 Returns FVID2_SOK on success else returns
 *                          appropriate error code. *
 */
static Int32 Bsp_tvp7002Delete(Fdrv_Handle handle, Ptr deleteArgs)
{
    Int32 retVal = FVID2_SOK;
    Bsp_Tvp7002HandleObj *pObj;

    /* Check parameters */
    if (NULL == handle)
    {
        GT_0trace(BspDeviceTrace, GT_ERR, "Null pointer\n");
        retVal = FVID2_EBADARGS;
    }

    if (FVID2_SOK == retVal)
    {
        /* Free driver handle object */
        pObj   = (Bsp_Tvp7002HandleObj *) handle;
        retVal = Bsp_tvp7002FreeObj(pObj);
        if (FVID2_SOK != retVal)
        {
            GT_0trace(BspDeviceTrace, GT_ERR, "Free object failed\n");
        }
    }

    return (retVal);
}

/**
 *  \brief Control API that gets called when Fvid2_control is called.
 *
 *  This API does handle level semaphore locking
 *
 *  \param handle           [IN] TVP7002 driver handle returned by
 *                          create function.
 *  \param cmd              [IN] Supports the standard video decoder interface
 *                          commands.
 *  \param cmdArgs          [IN] Depending on the command this will vary.
 *  \param cmdStatusArgs    [OUT] Depending on the command this will vary.
 *
 *  \return                 Returns FVID2_SOK on success else returns
 *                          appropriate error codes for illegal parameters and
 *                          I2C command RX/TX error.
 */
static Int32 Bsp_tvp7002Control(Fdrv_Handle handle,
                                UInt32      cmd,
                                Ptr         cmdArgs,
                                Ptr         cmdStatusArgs)
{
    Int32 retVal = FVID2_SOK;
    Bsp_Tvp7002HandleObj *pObj = NULL;

    /* Check parameters */
    if (NULL == handle)
    {
        GT_0trace(BspDeviceTrace, GT_ERR, "Null pointer\n");
        retVal = FVID2_EBADARGS;
    }

    if (FVID2_SOK == retVal)
    {
        pObj = (Bsp_Tvp7002HandleObj *) handle;

        /* lock handle */
        Bsp_tvp7002LockObj(pObj);

        switch (cmd)
        {
            case IOCTL_BSP_VID_DEC_RESET:
                retVal = Bsp_tvp7002Reset(pObj);
                break;

            case IOCTL_BSP_VID_DEC_GET_CHIP_ID:
                retVal = Bsp_tvp7002GetChipId(
                    pObj,
                    (Bsp_VidDecChipIdParams *) cmdArgs,
                    (Bsp_VidDecChipIdStatus *) cmdStatusArgs);
                break;

            case IOCTL_BSP_VID_DEC_SET_VIDEO_MODE:
                retVal = Bsp_tvp7002SetVideoMode(
                    pObj,
                    (Bsp_VidDecVideoModeParams *) cmdArgs);
                break;

            case IOCTL_BSP_VID_DEC_GET_VIDEO_STATUS:
                retVal = Bsp_tvp7002GetVideoStatus(
                    pObj,
                    (Bsp_VidDecVideoStatusParams *) cmdArgs,
                    (Bsp_VidDecVideoStatus *) cmdStatusArgs);
                break;

            case FVID2_START:
                retVal = Bsp_tvp7002Start(pObj);
                break;

            case FVID2_STOP:
                retVal = Bsp_tvp7002Stop(pObj);
                break;

            case IOCTL_BSP_VID_DEC_REG_WRITE:
                retVal = Bsp_tvp7002RegWrite(
                    pObj,
                    (Bsp_VidDecRegRdWrParams *) cmdArgs);
                break;

            case IOCTL_BSP_VID_DEC_REG_READ:
                retVal = Bsp_tvp7002RegRead(
                    pObj,
                    (Bsp_VidDecRegRdWrParams *) cmdArgs);
                break;

            default:
                GT_0trace(BspDeviceTrace, GT_ERR, "Unsupported command\n");
                retVal = FVID2_EUNSUPPORTED_CMD;
                break;
        }

        /* Unlock handle */
        Bsp_tvp7002UnlockObj(pObj);
    }

    return (retVal);
}

/**
 *  \brief Allocates driver object.
 *
 *  Searches in list of driver handles and allocate's a 'NOT IN USE' handle
 *  Also create's handle level semaphore lock.
 *
 *  Returns NULL in case handle could not be allocated.
 */
static Bsp_Tvp7002HandleObj *Bsp_tvp7002AllocObj(void)
{
    UInt32 handleId;
    Bsp_Tvp7002HandleObj *pObj = NULL;
    Int32 initValue;

    /* Take global lock to avoid race condition */
    Bsp_tvp7002Lock();

    /* Find a unallocated object in pool */
    for (handleId = 0U; handleId < BSP_DEVICE_MAX_HANDLES; handleId++)
    {
        if (BSP_TVP7002_OBJ_STATE_UNUSED ==
            gBspTvp7002Obj.handlePool[handleId].state)
        {
            /* Free object found */
            pObj = &gBspTvp7002Obj.handlePool[handleId];

            /* Init state and handle ID */
            BspUtils_memset(pObj, 0, sizeof (*pObj));
            pObj->state    = BSP_TVP7002_OBJ_STATE_IDLE;
            pObj->handleId = handleId;

            /* Create driver object specific semaphore lock */
            initValue = 1;
            pObj->lock = BspOsal_semCreate(initValue, (Bool)TRUE);
            if (NULL == pObj->lock)
            {
                GT_0trace(BspDeviceTrace, GT_ERR,
                          "Handle semaphore create failed\n");
                /* Error - release object */
                pObj->state = BSP_TVP7002_OBJ_STATE_UNUSED;
                pObj        = NULL;
            }
            break;
        }
    }

    /* Release global lock */
    Bsp_tvp7002Unlock();

    return (pObj);
}

/**
 *  \brief De-Allocate driver object.
 *
 *  Marks handle as 'NOT IN USE'.
 *  Also delete's handle level semaphore lock.
 */
static Int32 Bsp_tvp7002FreeObj(Bsp_Tvp7002HandleObj *pObj)
{
    /* Check for NULL pointers */
    GT_assert(BspDeviceTrace, (NULL != pObj));

    /* Take global lock to avoid race condition */
    Bsp_tvp7002Lock();

    if (pObj->state != BSP_TVP7002_OBJ_STATE_UNUSED)
    {
        /* Mark state as unused */
        pObj->state = BSP_TVP7002_OBJ_STATE_UNUSED;

        /* Delete object locking semaphore */
        BspOsal_semDelete(&pObj->lock);
    }

    /* Release global lock */
    Bsp_tvp7002Unlock();

    return (FVID2_SOK);
}

/**
 *  \brief Handle level lock.
 */
static Int32 Bsp_tvp7002LockObj(Bsp_Tvp7002HandleObj *pObj)
{
    /* Check for NULL pointers */
    GT_assert(BspDeviceTrace, (NULL != pObj));

    BspOsal_semWait(pObj->lock, BSP_OSAL_WAIT_FOREVER);

    return (FVID2_SOK);
}

/**
 *  \brief Handle level unlock
 */
static Int32 Bsp_tvp7002UnlockObj(Bsp_Tvp7002HandleObj *pObj)
{
    /* Check for NULL pointers */
    GT_assert(BspDeviceTrace, (NULL != pObj));

    BspOsal_semPost(pObj->lock);

    return (FVID2_SOK);
}

/**
 *  \brief Global driver level lock.
 */
static Int32 Bsp_tvp7002Lock(void)
{
    BspOsal_semWait(gBspTvp7002Obj.lock, BSP_OSAL_WAIT_FOREVER);

    return (FVID2_SOK);
}

/**
 *  \brief Global driver level unlock.
 */
static Int32 Bsp_tvp7002Unlock(void)
{
    BspOsal_semPost(gBspTvp7002Obj.lock);

    return (FVID2_SOK);
}
