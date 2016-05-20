/*
*******************************************************************************
*
* Copyright (C) 2014 Texas Instruments Incorporated - http://www.ti.com/
* ALL RIGHTS RESERVED
*
*******************************************************************************
*/

/*
*******************************************************************************
*
* IMPORTANT NOTE:
*  This file is AUTO-GENERATED by Vision SDK use case generation tool
*
*******************************************************************************
*/

#ifndef _chains_networkRxDecDisplay_H_
#define _chains_networkRxDecDisplay_H_

#include <include/link_api/system.h>
#include <include/link_api/nullSrcLink.h>
#include <include/link_api/ipcLink.h>
#include <include/link_api/decLink.h>
#include <include/link_api/grpxSrcLink.h>
#include <include/link_api/displayLink.h>

typedef struct {
       UInt32    NullSourceLinkID;
       UInt32    IPCOut_A15_0_IPU1_0_0LinkID;
       UInt32    IPCIn_IPU1_0_A15_0_0LinkID;
       UInt32    DecodeLinkID;
       UInt32    Display_VideoLinkID;
       UInt32    GrpxSrcLinkID;
       UInt32    Display_GrpxLinkID;

       NullSrcLink_CreateParams                NullSourcePrm;
       IpcLink_CreateParams                    IPCOut_A15_0_IPU1_0_0Prm;
       IpcLink_CreateParams                    IPCIn_IPU1_0_A15_0_0Prm;
       DecLink_CreateParams                    DecodePrm;
       DisplayLink_CreateParams                Display_VideoPrm;
       GrpxSrcLink_CreateParams                GrpxSrcPrm;
       DisplayLink_CreateParams                Display_GrpxPrm;
} chains_networkRxDecDisplayObj;

Void chains_networkRxDecDisplay_SetLinkId(chains_networkRxDecDisplayObj *pObj);

Void chains_networkRxDecDisplay_ResetLinkPrms(chains_networkRxDecDisplayObj *pObj);

Void chains_networkRxDecDisplay_SetPrms(chains_networkRxDecDisplayObj *pObj);

Void chains_networkRxDecDisplay_ConnectLinks(chains_networkRxDecDisplayObj *pObj);

Int32 chains_networkRxDecDisplay_Create(chains_networkRxDecDisplayObj *pObj, Void *appObj);

Int32 chains_networkRxDecDisplay_Start(chains_networkRxDecDisplayObj *pObj);

Int32 chains_networkRxDecDisplay_Stop(chains_networkRxDecDisplayObj *pObj);

Int32 chains_networkRxDecDisplay_Delete(chains_networkRxDecDisplayObj *pObj);

Void chains_networkRxDecDisplay_printBufferStatistics(chains_networkRxDecDisplayObj *pObj);

Void chains_networkRxDecDisplay_printStatistics(chains_networkRxDecDisplayObj *pObj);

Void chains_networkRxDecDisplay_SetAppPrms(chains_networkRxDecDisplayObj *pObj, Void *appObj);

#endif /* _chains_networkRxDecDisplay_H_ */