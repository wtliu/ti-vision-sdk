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

#ifndef _chains_vipStereoOnlyDisplay_H_
#define _chains_vipStereoOnlyDisplay_H_

#include <include/link_api/system.h>
#include <include/link_api/captureLink.h>
#include <include/link_api/algorithmLink_softIsp.h>
#include <include/link_api/algorithmLink_remapMerge.h>
#include <include/link_api/dupLink.h>
#include <include/link_api/algorithmLink_census.h>
#include <include/link_api/algorithmLink_disparityHamDist.h>
#include <include/link_api/mergeLink.h>
#include <include/link_api/algorithmLink_stereoPostProcess.h>
#include <include/link_api/ipcLink.h>
#include <include/link_api/vpeLink.h>
#include <include/link_api/syncLink.h>
#include <include/link_api/algorithmLink_dmaSwMs.h>
#include <include/link_api/grpxSrcLink.h>
#include <include/link_api/displayLink.h>

typedef struct {
       UInt32    CaptureLinkID;
       UInt32    IPCOut_IPU1_0_EVE1_0LinkID;
       UInt32    IPCIn_EVE1_IPU1_0_0LinkID;
       UInt32    Alg_SoftIspLinkID;
       UInt32    IPCOut_EVE1_IPU1_0_0LinkID;
       UInt32    IPCIn_IPU1_0_EVE1_0LinkID;
       UInt32    VPE_softispLinkID;
       UInt32    IPCOut_IPU1_0_EVE2_1LinkID;
       UInt32    IPCIn_EVE2_IPU1_0_0LinkID;
       UInt32    Alg_RemapMergeLinkID;
       UInt32    IPCOut_EVE2_IPU1_0_0LinkID;
       UInt32    IPCIn_IPU1_0_EVE2_1LinkID;
       UInt32    Dup_softispLinkID;
       UInt32    Sync_dispLinkID;
       UInt32    Dup_RemapOutLinkID;
       UInt32    IPCOut_IPU1_0_EVE2_2LinkID;
       UInt32    IPCIn_EVE2_IPU1_0_1LinkID;
       UInt32    Alg_CensusLinkID;
       UInt32    IPCOut_EVE2_EVE3_1LinkID;
       UInt32    IPCIn_EVE3_EVE2_0LinkID;
       UInt32    Alg_DisparityHamDistLinkID;
       UInt32    IPCOut_EVE3_IPU1_0_0LinkID;
       UInt32    IPCIn_IPU1_0_EVE3_2LinkID;
       UInt32    MergeLinkID;
       UInt32    IPCOut_IPU1_0_DSP1_3LinkID;
       UInt32    IPCIn_DSP1_IPU1_0_0LinkID;
       UInt32    Alg_StereoPostProcessLinkID;
       UInt32    IPCOut_DSP1_IPU1_0_0LinkID;
       UInt32    IPCIn_IPU1_0_DSP1_3LinkID;
       UInt32    VPE_disparityLinkID;
       UInt32    Display_disparityLinkID;
       UInt32    VPE_orgdispLinkID;
       UInt32    Sync_orgLinkID;
       UInt32    Alg_DmaSwMsLinkID;
       UInt32    Display_orgLinkID;
       UInt32    GrpxSrcLinkID;
       UInt32    Display_GrpxLinkID;

       CaptureLink_CreateParams                CapturePrm;
       IpcLink_CreateParams                    IPCOut_IPU1_0_EVE1_0Prm;
       IpcLink_CreateParams                    IPCIn_EVE1_IPU1_0_0Prm;
       AlgorithmLink_SoftIspCreateParams       Alg_SoftIspPrm;
       IpcLink_CreateParams                    IPCOut_EVE1_IPU1_0_0Prm;
       IpcLink_CreateParams                    IPCIn_IPU1_0_EVE1_0Prm;
       VpeLink_CreateParams                    VPE_softispPrm;
       IpcLink_CreateParams                    IPCOut_IPU1_0_EVE2_1Prm;
       IpcLink_CreateParams                    IPCIn_EVE2_IPU1_0_0Prm;
       AlgorithmLink_RemapMergeCreateParams    Alg_RemapMergePrm;
       IpcLink_CreateParams                    IPCOut_EVE2_IPU1_0_0Prm;
       IpcLink_CreateParams                    IPCIn_IPU1_0_EVE2_1Prm;
       DupLink_CreateParams                    Dup_softispPrm;
       SyncLink_CreateParams                   Sync_dispPrm;
       DupLink_CreateParams                    Dup_RemapOutPrm;
       IpcLink_CreateParams                    IPCOut_IPU1_0_EVE2_2Prm;
       IpcLink_CreateParams                    IPCIn_EVE2_IPU1_0_1Prm;
       AlgorithmLink_CensusCreateParams        Alg_CensusPrm;
       IpcLink_CreateParams                    IPCOut_EVE2_EVE3_1Prm;
       IpcLink_CreateParams                    IPCIn_EVE3_EVE2_0Prm;
       AlgorithmLink_DisparityHamDistCreateParams Alg_DisparityHamDistPrm;
       IpcLink_CreateParams                    IPCOut_EVE3_IPU1_0_0Prm;
       IpcLink_CreateParams                    IPCIn_IPU1_0_EVE3_2Prm;
       MergeLink_CreateParams                  MergePrm;
       IpcLink_CreateParams                    IPCOut_IPU1_0_DSP1_3Prm;
       IpcLink_CreateParams                    IPCIn_DSP1_IPU1_0_0Prm;
       AlgorithmLink_StereoPostProcessCreateParams Alg_StereoPostProcessPrm;
       IpcLink_CreateParams                    IPCOut_DSP1_IPU1_0_0Prm;
       IpcLink_CreateParams                    IPCIn_IPU1_0_DSP1_3Prm;
       VpeLink_CreateParams                    VPE_disparityPrm;
       DisplayLink_CreateParams                Display_disparityPrm;
       VpeLink_CreateParams                    VPE_orgdispPrm;
       SyncLink_CreateParams                   Sync_orgPrm;
       AlgorithmLink_DmaSwMsCreateParams       Alg_DmaSwMsPrm;
       DisplayLink_CreateParams                Display_orgPrm;
       GrpxSrcLink_CreateParams                GrpxSrcPrm;
       DisplayLink_CreateParams                Display_GrpxPrm;
} chains_vipStereoOnlyDisplayObj;

Void chains_vipStereoOnlyDisplay_SetLinkId(chains_vipStereoOnlyDisplayObj *pObj);

Void chains_vipStereoOnlyDisplay_ResetLinkPrms(chains_vipStereoOnlyDisplayObj *pObj);

Void chains_vipStereoOnlyDisplay_SetPrms(chains_vipStereoOnlyDisplayObj *pObj);

Void chains_vipStereoOnlyDisplay_ConnectLinks(chains_vipStereoOnlyDisplayObj *pObj);

Int32 chains_vipStereoOnlyDisplay_Create(chains_vipStereoOnlyDisplayObj *pObj, Void *appObj);

Int32 chains_vipStereoOnlyDisplay_Start(chains_vipStereoOnlyDisplayObj *pObj);

Int32 chains_vipStereoOnlyDisplay_Stop(chains_vipStereoOnlyDisplayObj *pObj);

Int32 chains_vipStereoOnlyDisplay_Delete(chains_vipStereoOnlyDisplayObj *pObj);

Void chains_vipStereoOnlyDisplay_printBufferStatistics(chains_vipStereoOnlyDisplayObj *pObj);

Void chains_vipStereoOnlyDisplay_printStatistics(chains_vipStereoOnlyDisplayObj *pObj);

Void chains_vipStereoOnlyDisplay_SetAppPrms(chains_vipStereoOnlyDisplayObj *pObj, Void *appObj);

#endif /* _chains_vipStereoOnlyDisplay_H_ */