/*
 *  Copyright 2015 by Texas Instruments Incorporated.
 *
 */

/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A65
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     FUNCTION DECLARATIONS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_targets_msp430_rts430_Settings__include
#define ti_targets_msp430_rts430_Settings__include

#ifndef __nested__
#define __nested__
#define ti_targets_msp430_rts430_Settings__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_targets_msp430_rts430_Settings___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/targets/msp430/rts430/package/package.defs.h>

#include <xdc/runtime/IModule.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_targets_msp430_rts430_Settings_Module__diagsEnabled;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__diagsEnabled ti_targets_msp430_rts430_Settings_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_targets_msp430_rts430_Settings_Module__diagsIncluded;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__diagsIncluded ti_targets_msp430_rts430_Settings_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_targets_msp430_rts430_Settings_Module__diagsMask;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__diagsMask ti_targets_msp430_rts430_Settings_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_targets_msp430_rts430_Settings_Module__gateObj;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__gateObj ti_targets_msp430_rts430_Settings_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_targets_msp430_rts430_Settings_Module__gatePrms;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__gatePrms ti_targets_msp430_rts430_Settings_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_targets_msp430_rts430_Settings_Module__id;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__id ti_targets_msp430_rts430_Settings_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_targets_msp430_rts430_Settings_Module__loggerDefined;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__loggerDefined ti_targets_msp430_rts430_Settings_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_targets_msp430_rts430_Settings_Module__loggerObj;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__loggerObj ti_targets_msp430_rts430_Settings_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn0;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn0 ti_targets_msp430_rts430_Settings_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn1;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn1 ti_targets_msp430_rts430_Settings_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn2;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn2 ti_targets_msp430_rts430_Settings_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn4;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn4 ti_targets_msp430_rts430_Settings_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn8;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__loggerFxn8 ti_targets_msp430_rts430_Settings_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_targets_msp430_rts430_Settings_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Module__startupDoneFxn ti_targets_msp430_rts430_Settings_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_targets_msp430_rts430_Settings_Object__count;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Object__count ti_targets_msp430_rts430_Settings_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_targets_msp430_rts430_Settings_Object__heap;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Object__heap ti_targets_msp430_rts430_Settings_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_targets_msp430_rts430_Settings_Object__sizeof;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Object__sizeof ti_targets_msp430_rts430_Settings_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_targets_msp430_rts430_Settings_Object__table;
__extern __FAR__ const CT__ti_targets_msp430_rts430_Settings_Object__table ti_targets_msp430_rts430_Settings_Object__table__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_targets_msp430_rts430_Settings_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(ti_targets_msp430_rts430_Settings_Module__startupDone__S, "ti_targets_msp430_rts430_Settings_Module__startupDone__S")
__extern xdc_Bool ti_targets_msp430_rts430_Settings_Module__startupDone__S( void );


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_targets_msp430_rts430_Settings_Module_startupDone() ti_targets_msp430_rts430_Settings_Module__startupDone__S()

/* Object_heap */
#define ti_targets_msp430_rts430_Settings_Object_heap() ti_targets_msp430_rts430_Settings_Object__heap__C

/* Module_heap */
#define ti_targets_msp430_rts430_Settings_Module_heap() ti_targets_msp430_rts430_Settings_Object__heap__C

/* Module_id */
static inline CT__ti_targets_msp430_rts430_Settings_Module__id ti_targets_msp430_rts430_Settings_Module_id( void ) 
{
    return ti_targets_msp430_rts430_Settings_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_targets_msp430_rts430_Settings_Module_hasMask( void ) 
{
    return ti_targets_msp430_rts430_Settings_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_targets_msp430_rts430_Settings_Module_getMask( void ) 
{
    return ti_targets_msp430_rts430_Settings_Module__diagsMask__C != NULL ? *ti_targets_msp430_rts430_Settings_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_targets_msp430_rts430_Settings_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_targets_msp430_rts430_Settings_Module__diagsMask__C != NULL) *ti_targets_msp430_rts430_Settings_Module__diagsMask__C = mask;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_targets_msp430_rts430_Settings__top__
#undef __nested__
#endif

#endif /* ti_targets_msp430_rts430_Settings__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_targets_msp430_rts430_Settings__internalaccess))

#ifndef ti_targets_msp430_rts430_Settings__include_state
#define ti_targets_msp430_rts430_Settings__include_state


#endif /* ti_targets_msp430_rts430_Settings__include_state */

#endif

/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_targets_msp430_rts430_Settings__nolocalnames)

#ifndef ti_targets_msp430_rts430_Settings__localnames__done
#define ti_targets_msp430_rts430_Settings__localnames__done

/* module prefix */
#define Settings_Module_name ti_targets_msp430_rts430_Settings_Module_name
#define Settings_Module_id ti_targets_msp430_rts430_Settings_Module_id
#define Settings_Module_startup ti_targets_msp430_rts430_Settings_Module_startup
#define Settings_Module_startupDone ti_targets_msp430_rts430_Settings_Module_startupDone
#define Settings_Module_hasMask ti_targets_msp430_rts430_Settings_Module_hasMask
#define Settings_Module_getMask ti_targets_msp430_rts430_Settings_Module_getMask
#define Settings_Module_setMask ti_targets_msp430_rts430_Settings_Module_setMask
#define Settings_Object_heap ti_targets_msp430_rts430_Settings_Object_heap
#define Settings_Module_heap ti_targets_msp430_rts430_Settings_Module_heap

#endif /* ti_targets_msp430_rts430_Settings__localnames__done */
#endif
/*
 *  @(#) ti.targets.msp430.rts430; 1, 0, 0,0; 7-10-2015 13:56:27; /db/ztree/library/trees/xdctargets/xdctargets-j04/src/ xlibrary

 */
