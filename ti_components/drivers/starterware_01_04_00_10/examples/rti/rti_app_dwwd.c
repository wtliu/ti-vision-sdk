/**
 *  \file     rti_app_dwwd.c
 *
 *  \brief    This file contains RTI DWWD test code for window size 12.5%.
 *
 *  \details  DWWD window size is set to 12.5%.
 *            RTI clock source is selected as 32KHz.
 *            DWWD preload value is set for 10sec.
 *            DWWD time-out value is specified in "APP_RTI_DWWD_TIMEOUT_VALUE"
 *            macro in mili-seconds.
 *            RTI 4 suspend lines are tied to IPUC0 for this test.
 *            Test runs in two stages:
 *                  stage 1: DWWD will expire in 10sec and generate Reset to
 *                           System.
 *                  stage 2: DWWD is serviced and should not generate Reset
 *                           within 10 seconds.
 *
 *  \copyright Copyright (C) 2014 Texas Instruments Incorporated =
 *             http://www.ti.com/
 */

/* ======================================================================
 *   Copyright (C) 2014 Texas Instruments Incorporated
 *
 *   All rights reserved. Property of Texas Instruments Incorporated.
 *   Restricted rights to use, duplicate or disclose this code are
 *   granted through contract.
 *
 *   The program may not be used without the written permission
 *   of Texas Instruments Incorporated or against the terms and conditions
 *   stipulated in the agreement under which this program has been
 *   supplied.
 * ==================================================================== */

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */
#include <stdint.h>
#include "common/stw_dataTypes.h"
#include "common/stw_types.h"
#include "hw_types.h"
#include "hw_ctrl_core_sec.h"
#include "soc_defines.h"
#include "platform.h"
#include "uartStdio.h"
#include "hw_device_prm.h"
#include "hw_rti.h"
#include "rti.h"

/* ========================================================================== */
/*                                Macros                                      */
/* ========================================================================== */
#define APP_RTI_MODULE                 (SOC_RTI4_BASE)
#define APP_RTI_DWWD_WINDOW_SIZE       (RTI_DWWD_WINDOWSIZE_12_5_PERCENT)
#define APP_RTI_DWWD_TIMEOUT_VALUE     (10000U)
#define APP_RTI_DWWD_REACTION          (RTI_DWWD_REACTION_GENERATE_RESET)

#define RTI_CLOCK_SOURCE_SYSCLK1_FREQ_KHz      (20000U / 4U)
#define RTI_CLOCK_SOURCE_SYSCLK2_FREQ_KHz      (20000U / 4U)
#define RTI_CLOCK_SOURCE_32KHZ_FREQ_KHz        (32U)

#define SOC_I_DRM_BASE_SUSPEND_CTRL20   (0x250U)
#define SOC_I_DRM_BASE_SUSPEND_CTRL21   (0x254U)
#define SOC_I_DRM_BASE_SUSPEND_CTRL22   (0x258U)
#define SOC_I_DRM_BASE_SUSPEND_CTRL23   (0x25CU)
#define SOC_I_DRM_BASE_SUSPEND_CTRL24   (0x260U)

/**
 * \brief  Enum to report the last system reset status.
 */
typedef enum deviceLastResetStatus
{
    DEVICE_LAST_RESET_STATUS_WDT_GENERATED,
    /**< Last device reset is generated by WDT */
    DEVICE_LAST_RESET_STATUS_NOT_WDT_GENERATED
    /**< Last device reset is not generated by WDT */
}deviceLastResetStaus_t;

/**
 * \brief  Enum to select the clock source for RTI module.
 */
typedef enum rtiClockSource
{
    RTI_CLOCK_SOURCE_SYSCLK1 = CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL_RTI1_SYS_CLK1,
    /**< to select clock frequency of (sysclk1/4) */
    RTI_CLOCK_SOURCE_SYSCLK2 = CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL_RTI1_SYS_CLK2,
    /**< to select clock frequency of (sysclk1/4) */
    RTI_CLOCK_SOURCE_32KHZ = CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL_RTI1_XREF_CLK
                             /**< to select clock frequency of 32KHz */
}rtiClockSource_t;

/**
 * \brief  Enum to select the Suspend lines for RTI module.
 */
typedef enum rtiSuspendLineCore
{
    RTI_SUSPEND_LINE_CORE_IPU_C0 = 0x00000031U,
    /**< to select suspend line for IPU core 0 */
    RTI_SUSPEND_LINE_CORE_IPU_C1 = 0x00000041U,
    /**< to select suspend line for IPU core  */
    RTI_SUSPEND_LINE_CORE_DSP_C0 = 0x00000001U,
    /**< to select suspend line for DSP core 0 */
    RTI_SUSPEND_LINE_CORE_DSP_C1 = 0x00000071U,
    /**< to select suspend line for DSP core 1 */
    RTI_SUSPEND_LINE_CORE_EVE = 0x000000A1U
                                /**< to select suspend line for EVE */
}rtiSuspendLineCore_t;
/* ========================================================================== */
/*                            Global Variables                                */
/* ========================================================================== */

/*  None */

/* ========================================================================== */
/*                 Internal Function Declarations                             */
/* ========================================================================== */
/**
 * \brief   This API return the status of the last system Reset.
 *
 * \param   none.
 *
 * \return  status          Last device reset status.
 *                          values given by enum #deviceLastResetStaus_t
 */
static deviceLastResetStaus_t DeviceGetLastResetStatus(void);

/**
 * \brief   This API to select clock source for RTI module.
 *
 * \param   rtiModule       RTI module instance
 *
 * \param   rtiClockSource  RTI module clock source
 *                          Values given by enum #rtiClockSource_t
 *
 * \return  none.
 */
static void RTISetClockSource(uint32_t rtiModuleSelect,
                              uint32_t rtiClockSourceSelect);

/**
 * \brief   This API to select suspend lines for RTI module.
 *
 * \param   rtiModule       RTI module instance
 *
 * \param   deviceCore      Device core to which suspend lines for given RTI
 *                          module needs to be tied off.
 *                          Values given by enum #rtiSuspendLineCore_t.
 *
 * \return  none.
 */
void RTISetSuspendLine(uint32_t rtiModule, uint32_t deviceCore);

/**
 * \brief   This API to calculate preload value from given time-out value.
 *
 * \param   rtiClockSource  RTI module clock source
 *                          Values given by enum #rtiClockSource_t
 *
 * \param   timeoutVal      RTI DWWD time-out value in mili-seconds.
 *
 * \return  Preload value   Time-out value in RTI source clock cycles.
 */
uint32_t RTIGetPreloadValue(uint32_t rtiClkSource, uint32_t timeoutVal);

/**
 * \brief   This API is for infinite loop. To avoid compile time warning.
 *
 * \param   None.
 *
 * \return  None.
 */
void infiniteLoop(void);

/* ========================================================================== */
/*                          Function Definitions                              */
/* ========================================================================== */
int main(void)
{
    uint32_t rtiModule, rtiWindow_size, rtiPreload_value, rtiReaction;
    deviceLastResetStaus_t reset_status;
    int32_t  config_status;

    /* Configure UARTStdioInit */
    PlatformUartConsoleSetPinMux();
    UARTStdioInit();

    /* Configure RTI parameters */
    rtiModule        = APP_RTI_MODULE;
    rtiWindow_size   = APP_RTI_DWWD_WINDOW_SIZE;
    rtiReaction      = APP_RTI_DWWD_REACTION;
    rtiPreload_value = RTIGetPreloadValue((uint32_t) RTI_CLOCK_SOURCE_32KHZ,
                                          (uint32_t) APP_RTI_DWWD_TIMEOUT_VALUE);

    /* Select suspend lines for RTI module */
    RTISetSuspendLine(rtiModule, (uint32_t) RTI_SUSPEND_LINE_CORE_IPU_C0);
    /* Select RTI module clock source */
    RTISetClockSource(rtiModule, (uint32_t) RTI_CLOCK_SOURCE_32KHZ);
    reset_status = DeviceGetLastResetStatus();
    switch (reset_status)
    {
        case DEVICE_LAST_RESET_STATUS_NOT_WDT_GENERATED:
            config_status = RTIDwwdWindowConfig(rtiModule, rtiReaction,
                                                rtiPreload_value,
                                                rtiWindow_size);
            if (config_status == STW_EFAIL)
            {
                UARTPuts("Error during Window configuration.\n", -1);
            }
            else
            {
                UARTPuts("Run 1:.", -1);
                UARTprintf("DWWD is configured for %ums time-out.\n",
                           (uint32_t) APP_RTI_DWWD_TIMEOUT_VALUE);
                UARTPuts("DWWD will generate RESET after time-out period.\n",
                         -1);
                RTIDwwdCounterEnable(rtiModule);
                /* Let DWWD expire here */
                UARTprintf("Wait for %ums for RESET to be generated by DWWD.\n",
                           (uint32_t) APP_RTI_DWWD_TIMEOUT_VALUE);
                infiniteLoop();
            }
            break;
        case DEVICE_LAST_RESET_STATUS_WDT_GENERATED:
            if (RTI_DWWD_RESET_STATUS_GENERATED ==
                RTIDwwdGetLastResetStatus(rtiModule))
            {
                UARTPuts("Last reset was generated by DWWD.\n", -1);
                UARTPuts("Recovered from RESET generated by DWWD.\n", -1);
                UARTPuts("Run 2:", -1);
                UARTprintf("DWWD is configured for %ums time-out.\n",
                           (uint32_t) APP_RTI_DWWD_TIMEOUT_VALUE);
                UARTPuts("In this run DWWD will be serviced.\n", -1);
                UARTPuts(
                    "DWWD will not generate RESET after time-out period.\n"
                    , -1);
                config_status = RTIDwwdWindowConfig(rtiModule, rtiReaction,
                                                    rtiPreload_value,
                                                    rtiWindow_size);
                if (config_status == STW_EFAIL)
                {
                    UARTPuts(" Error during Window configuration.\n", -1);
                }
                else
                {
                    RTIDwwdCounterEnable(rtiModule);
                    while (RTIDwwdIsClosedWindow(rtiModule))
                    {}
                    RTIDwwdService(rtiModule);
                    UARTPuts("DWWD serviced.\n", -1);
                    while (RTIDwwdIsClosedWindow(rtiModule))
                    {}
                    UARTprintf(
                        "No RSEET generated since more than %ums have passed.\n"
                        , (uint32_t) APP_RTI_DWWD_TIMEOUT_VALUE);
                    UARTPuts("Wait for RESET to be generated by DWWD.\n", -1);
                    infiniteLoop();
                }
            }
            else
            {
                UARTPuts("Last RESET was not generated by DWWD.\n", -1);
                UARTPuts("Please try to run application again.\n", -1);
            }
            break;
        default:
            break;
    }
    return 0;
}

/* ========================================================================== */
/*                 Internal Function Definitions                              */
/* ========================================================================== */
static deviceLastResetStaus_t DeviceGetLastResetStatus(void)
{
    uint32_t regVal;
    deviceLastResetStaus_t status;
    regVal = HW_RD_REG32(SOC_DEVICE_PRM_BASE + PRM_RSTST);
    if (HW_GET_FIELD(regVal,
                     PRM_RSTST_SECURE_WDT_RST) == 1U)
    {
        status = DEVICE_LAST_RESET_STATUS_WDT_GENERATED;
    }
    else
    {
        status = DEVICE_LAST_RESET_STATUS_NOT_WDT_GENERATED;
    }
    return status;
}

static void RTISetClockSource(uint32_t rtiModuleSelect,
                              uint32_t rtiClockSourceSelect)
{
    PlatformUnlockMMR();
    switch (rtiModuleSelect) {
        case SOC_RTI1_BASE:
            HW_WR_FIELD32(SOC_SEC_EFUSE_REGISTERS_BASE +
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL,
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL_RTI1,
                          rtiClockSourceSelect);
            break;
        case SOC_RTI2_BASE:
            HW_WR_FIELD32(SOC_SEC_EFUSE_REGISTERS_BASE +
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL,
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL_RTI2,
                          rtiClockSourceSelect);
            break;
        case SOC_RTI3_BASE:
            HW_WR_FIELD32(SOC_SEC_EFUSE_REGISTERS_BASE +
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL,
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL_RTI3,
                          rtiClockSourceSelect);
            break;
        case SOC_RTI4_BASE:
            HW_WR_FIELD32(SOC_SEC_EFUSE_REGISTERS_BASE +
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL,
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL_RTI4,
                          rtiClockSourceSelect);
            break;
        case SOC_RTI5_BASE:
            HW_WR_FIELD32(SOC_SEC_EFUSE_REGISTERS_BASE +
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL,
                          CTRL_CORE_SEC_PRCM_CLKSEL_CONTROL_RTI5,
                          rtiClockSourceSelect);
            break;
        default:
            break;
    }
    PlatformLockMMR();
}

void RTISetSuspendLine(uint32_t rtiModule, uint32_t deviceCore)
{
    switch (rtiModule) {
        case SOC_RTI1_BASE:
            HW_WR_REG32(SOC_I_DRM_BASE + SOC_I_DRM_BASE_SUSPEND_CTRL20,
                        deviceCore);
            break;
        case SOC_RTI2_BASE:
            HW_WR_REG32(SOC_I_DRM_BASE + SOC_I_DRM_BASE_SUSPEND_CTRL21,
                        deviceCore);
            break;
        case SOC_RTI3_BASE:
            HW_WR_REG32(SOC_I_DRM_BASE + SOC_I_DRM_BASE_SUSPEND_CTRL22,
                        deviceCore);
            break;
        case SOC_RTI4_BASE:
            HW_WR_REG32(SOC_I_DRM_BASE + SOC_I_DRM_BASE_SUSPEND_CTRL23,
                        deviceCore);
            break;
        case SOC_RTI5_BASE:
            HW_WR_REG32(SOC_I_DRM_BASE + SOC_I_DRM_BASE_SUSPEND_CTRL24,
                        deviceCore);
            break;
        default:
            break;
    }
}

uint32_t RTIGetPreloadValue(uint32_t rtiClkSource, uint32_t timeoutVal)
{
    uint32_t clkFreqKHz       = (uint32_t) RTI_CLOCK_SOURCE_32KHZ_FREQ_KHz,
             timeoutNumCycles = 0;

    switch (rtiClkSource)
    {
        case RTI_CLOCK_SOURCE_SYSCLK1:
            clkFreqKHz = (uint32_t) RTI_CLOCK_SOURCE_SYSCLK1_FREQ_KHz;
            break;
        case RTI_CLOCK_SOURCE_SYSCLK2:
            clkFreqKHz = (uint32_t) RTI_CLOCK_SOURCE_SYSCLK2_FREQ_KHz;
            break;
        case RTI_CLOCK_SOURCE_32KHZ:
            clkFreqKHz = (uint32_t) RTI_CLOCK_SOURCE_32KHZ_FREQ_KHz;
            break;
        default:
            break;
    }
    /* Get the clock ticks for given time-out value */
    timeoutNumCycles = timeoutVal * clkFreqKHz;
    return timeoutNumCycles;
}

void infiniteLoop(void)
{
    volatile uint32_t tempVar = 1U;
    while (tempVar)
    {}
}
