/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A75
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_ipc_transports_TransportNetworkDummy__include
#define ti_sdo_ipc_transports_TransportNetworkDummy__include

#ifndef __nested__
#define __nested__
#define ti_sdo_ipc_transports_TransportNetworkDummy__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_ipc_transports_TransportNetworkDummy___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/ipc/transports/package/package.defs.h>

#include <ti/sdo/ipc/interfaces/INetworkTransport.h>


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
typedef xdc_Bits32 CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsEnabled ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsIncluded ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsMask ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__gateObj ti_sdo_ipc_transports_TransportNetworkDummy_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__gatePrms ti_sdo_ipc_transports_TransportNetworkDummy_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__id;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__id ti_sdo_ipc_transports_TransportNetworkDummy_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerDefined ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerObj ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn0 ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn1 ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn2 ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn4 ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn8 ti_sdo_ipc_transports_TransportNetworkDummy_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__startupDoneFxn ti_sdo_ipc_transports_TransportNetworkDummy_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_ipc_transports_TransportNetworkDummy_Object__count;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Object__count ti_sdo_ipc_transports_TransportNetworkDummy_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_ipc_transports_TransportNetworkDummy_Object__heap;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Object__heap ti_sdo_ipc_transports_TransportNetworkDummy_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_ipc_transports_TransportNetworkDummy_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Object__sizeof ti_sdo_ipc_transports_TransportNetworkDummy_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_ipc_transports_TransportNetworkDummy_Object__table;
__extern __FAR__ const CT__ti_sdo_ipc_transports_TransportNetworkDummy_Object__table ti_sdo_ipc_transports_TransportNetworkDummy_Object__table__C;


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_ipc_transports_TransportNetworkDummy_Params {
    size_t __size;
    const void *__self;
    void *__fxns;
    xdc_runtime_IInstance_Params *instance;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_ipc_transports_TransportNetworkDummy_Struct {
    const ti_sdo_ipc_transports_TransportNetworkDummy_Fxns__ *__fxns;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_ipc_transports_TransportNetworkDummy_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2 *__sysp;
    xdc_Int (*bind)(ti_sdo_ipc_transports_TransportNetworkDummy_Handle, xdc_UInt32);
    xdc_Int (*unbind)(ti_sdo_ipc_transports_TransportNetworkDummy_Handle, xdc_UInt32);
    xdc_Bool (*put)(ti_sdo_ipc_transports_TransportNetworkDummy_Handle, xdc_Ptr);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_ipc_transports_TransportNetworkDummy_Fxns__ ti_sdo_ipc_transports_TransportNetworkDummy_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Module_startup( state ) (-1)

/* Instance_init__E */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Instance_init__E, "ti_sdo_ipc_transports_TransportNetworkDummy_Instance_init")
__extern xdc_Void ti_sdo_ipc_transports_TransportNetworkDummy_Instance_init__E(ti_sdo_ipc_transports_TransportNetworkDummy_Object *, const ti_sdo_ipc_transports_TransportNetworkDummy_Params *);

/* Handle__label__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Handle__label__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Handle__label__S")
__extern xdc_runtime_Types_Label *ti_sdo_ipc_transports_TransportNetworkDummy_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label *lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Module__startupDone__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Module__startupDone__S")
__extern xdc_Bool ti_sdo_ipc_transports_TransportNetworkDummy_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Object__create__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Object__create__S")
__extern xdc_Ptr ti_sdo_ipc_transports_TransportNetworkDummy_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar *__pa, xdc_SizeT __psz, xdc_runtime_Error_Block *__eb );

/* create */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_create, "ti_sdo_ipc_transports_TransportNetworkDummy_create")
__extern ti_sdo_ipc_transports_TransportNetworkDummy_Handle ti_sdo_ipc_transports_TransportNetworkDummy_create( const ti_sdo_ipc_transports_TransportNetworkDummy_Params *__prms, xdc_runtime_Error_Block *__eb );

/* construct */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_construct, "ti_sdo_ipc_transports_TransportNetworkDummy_construct")
__extern void ti_sdo_ipc_transports_TransportNetworkDummy_construct( ti_sdo_ipc_transports_TransportNetworkDummy_Struct *__obj, const ti_sdo_ipc_transports_TransportNetworkDummy_Params *__prms );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Object__delete__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Object__delete__S")
__extern xdc_Void ti_sdo_ipc_transports_TransportNetworkDummy_Object__delete__S( xdc_Ptr instp );

/* delete */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_delete, "ti_sdo_ipc_transports_TransportNetworkDummy_delete")
__extern void ti_sdo_ipc_transports_TransportNetworkDummy_delete(ti_sdo_ipc_transports_TransportNetworkDummy_Handle *instp);

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Object__destruct__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Object__destruct__S")
__extern xdc_Void ti_sdo_ipc_transports_TransportNetworkDummy_Object__destruct__S( xdc_Ptr objp );

/* destruct */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_destruct, "ti_sdo_ipc_transports_TransportNetworkDummy_destruct")
__extern void ti_sdo_ipc_transports_TransportNetworkDummy_destruct(ti_sdo_ipc_transports_TransportNetworkDummy_Struct *obj);

/* Object__get__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Object__get__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Object__get__S")
__extern xdc_Ptr ti_sdo_ipc_transports_TransportNetworkDummy_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Object__first__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Object__first__S")
__extern xdc_Ptr ti_sdo_ipc_transports_TransportNetworkDummy_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Object__next__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Object__next__S")
__extern xdc_Ptr ti_sdo_ipc_transports_TransportNetworkDummy_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_Params__init__S, "ti_sdo_ipc_transports_TransportNetworkDummy_Params__init__S")
__extern xdc_Void ti_sdo_ipc_transports_TransportNetworkDummy_Params__init__S( xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz );

/* bind__E */
#define ti_sdo_ipc_transports_TransportNetworkDummy_bind ti_sdo_ipc_transports_TransportNetworkDummy_bind__E
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_bind__E, "ti_sdo_ipc_transports_TransportNetworkDummy_bind")
__extern xdc_Int ti_sdo_ipc_transports_TransportNetworkDummy_bind__E( ti_sdo_ipc_transports_TransportNetworkDummy_Handle __inst, xdc_UInt32 queueId );

/* unbind__E */
#define ti_sdo_ipc_transports_TransportNetworkDummy_unbind ti_sdo_ipc_transports_TransportNetworkDummy_unbind__E
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_unbind__E, "ti_sdo_ipc_transports_TransportNetworkDummy_unbind")
__extern xdc_Int ti_sdo_ipc_transports_TransportNetworkDummy_unbind__E( ti_sdo_ipc_transports_TransportNetworkDummy_Handle __inst, xdc_UInt32 queueId );

/* put__E */
#define ti_sdo_ipc_transports_TransportNetworkDummy_put ti_sdo_ipc_transports_TransportNetworkDummy_put__E
xdc__CODESECT(ti_sdo_ipc_transports_TransportNetworkDummy_put__E, "ti_sdo_ipc_transports_TransportNetworkDummy_put")
__extern xdc_Bool ti_sdo_ipc_transports_TransportNetworkDummy_put__E( ti_sdo_ipc_transports_TransportNetworkDummy_Handle __inst, xdc_Ptr msg );


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_ipc_interfaces_INetworkTransport_Module ti_sdo_ipc_transports_TransportNetworkDummy_Module_upCast( void )
{
    return (ti_sdo_ipc_interfaces_INetworkTransport_Module)&ti_sdo_ipc_transports_TransportNetworkDummy_Module__FXNS__C;
}

/* Module_to_ti_sdo_ipc_interfaces_INetworkTransport */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Module_to_ti_sdo_ipc_interfaces_INetworkTransport ti_sdo_ipc_transports_TransportNetworkDummy_Module_upCast

/* Handle_upCast */
static inline ti_sdo_ipc_interfaces_INetworkTransport_Handle ti_sdo_ipc_transports_TransportNetworkDummy_Handle_upCast( ti_sdo_ipc_transports_TransportNetworkDummy_Handle i )
{
    return (ti_sdo_ipc_interfaces_INetworkTransport_Handle)i;
}

/* Handle_to_ti_sdo_ipc_interfaces_INetworkTransport */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Handle_to_ti_sdo_ipc_interfaces_INetworkTransport ti_sdo_ipc_transports_TransportNetworkDummy_Handle_upCast

/* Handle_downCast */
static inline ti_sdo_ipc_transports_TransportNetworkDummy_Handle ti_sdo_ipc_transports_TransportNetworkDummy_Handle_downCast( ti_sdo_ipc_interfaces_INetworkTransport_Handle i )
{
    ti_sdo_ipc_interfaces_INetworkTransport_Handle i2 = (ti_sdo_ipc_interfaces_INetworkTransport_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_ipc_transports_TransportNetworkDummy_Module__FXNS__C ? (ti_sdo_ipc_transports_TransportNetworkDummy_Handle)i : 0;
}

/* Handle_from_ti_sdo_ipc_interfaces_INetworkTransport */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Handle_from_ti_sdo_ipc_interfaces_INetworkTransport ti_sdo_ipc_transports_TransportNetworkDummy_Handle_downCast

/* Module_upCast2 */
static inline ti_sdo_ipc_interfaces_ITransport_Module ti_sdo_ipc_transports_TransportNetworkDummy_Module_upCast2( void )
{
    return (ti_sdo_ipc_interfaces_ITransport_Module)&ti_sdo_ipc_transports_TransportNetworkDummy_Module__FXNS__C;
}

/* Module_to_ti_sdo_ipc_interfaces_ITransport */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Module_to_ti_sdo_ipc_interfaces_ITransport ti_sdo_ipc_transports_TransportNetworkDummy_Module_upCast2

/* Handle_upCast2 */
static inline ti_sdo_ipc_interfaces_ITransport_Handle ti_sdo_ipc_transports_TransportNetworkDummy_Handle_upCast2( ti_sdo_ipc_transports_TransportNetworkDummy_Handle i )
{
    return (ti_sdo_ipc_interfaces_ITransport_Handle)i;
}

/* Handle_to_ti_sdo_ipc_interfaces_ITransport */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Handle_to_ti_sdo_ipc_interfaces_ITransport ti_sdo_ipc_transports_TransportNetworkDummy_Handle_upCast2

/* Handle_downCast2 */
static inline ti_sdo_ipc_transports_TransportNetworkDummy_Handle ti_sdo_ipc_transports_TransportNetworkDummy_Handle_downCast2( ti_sdo_ipc_interfaces_ITransport_Handle i )
{
    ti_sdo_ipc_interfaces_ITransport_Handle i2 = (ti_sdo_ipc_interfaces_ITransport_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_ipc_transports_TransportNetworkDummy_Module__FXNS__C ? (ti_sdo_ipc_transports_TransportNetworkDummy_Handle)i : 0;
}

/* Handle_from_ti_sdo_ipc_interfaces_ITransport */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Handle_from_ti_sdo_ipc_interfaces_ITransport ti_sdo_ipc_transports_TransportNetworkDummy_Handle_downCast2


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Module_startupDone() ti_sdo_ipc_transports_TransportNetworkDummy_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Object_heap() ti_sdo_ipc_transports_TransportNetworkDummy_Object__heap__C

/* Module_heap */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Module_heap() ti_sdo_ipc_transports_TransportNetworkDummy_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_ipc_transports_TransportNetworkDummy_Module__id ti_sdo_ipc_transports_TransportNetworkDummy_Module_id( void ) 
{
    return ti_sdo_ipc_transports_TransportNetworkDummy_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_ipc_transports_TransportNetworkDummy_Module_hasMask( void ) 
{
    return ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_ipc_transports_TransportNetworkDummy_Module_getMask( void ) 
{
    return ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsMask__C != NULL ? *ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_ipc_transports_TransportNetworkDummy_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsMask__C != NULL) *ti_sdo_ipc_transports_TransportNetworkDummy_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_ipc_transports_TransportNetworkDummy_Params_init( ti_sdo_ipc_transports_TransportNetworkDummy_Params *prms ) 
{
    if (prms) {
        ti_sdo_ipc_transports_TransportNetworkDummy_Params__init__S(prms, 0, sizeof(ti_sdo_ipc_transports_TransportNetworkDummy_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_ipc_transports_TransportNetworkDummy_Params_copy(ti_sdo_ipc_transports_TransportNetworkDummy_Params *dst, const ti_sdo_ipc_transports_TransportNetworkDummy_Params *src) 
{
    if (dst) {
        ti_sdo_ipc_transports_TransportNetworkDummy_Params__init__S(dst, (const void *)src, sizeof(ti_sdo_ipc_transports_TransportNetworkDummy_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Object_count() ti_sdo_ipc_transports_TransportNetworkDummy_Object__count__C

/* Object_sizeof */
#define ti_sdo_ipc_transports_TransportNetworkDummy_Object_sizeof() ti_sdo_ipc_transports_TransportNetworkDummy_Object__sizeof__C

/* Object_get */
static inline ti_sdo_ipc_transports_TransportNetworkDummy_Handle ti_sdo_ipc_transports_TransportNetworkDummy_Object_get(ti_sdo_ipc_transports_TransportNetworkDummy_Instance_State *oarr, int i) 
{
    return (ti_sdo_ipc_transports_TransportNetworkDummy_Handle)ti_sdo_ipc_transports_TransportNetworkDummy_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_ipc_transports_TransportNetworkDummy_Handle ti_sdo_ipc_transports_TransportNetworkDummy_Object_first( void )
{
    return (ti_sdo_ipc_transports_TransportNetworkDummy_Handle)ti_sdo_ipc_transports_TransportNetworkDummy_Object__first__S();
}

/* Object_next */
static inline ti_sdo_ipc_transports_TransportNetworkDummy_Handle ti_sdo_ipc_transports_TransportNetworkDummy_Object_next( ti_sdo_ipc_transports_TransportNetworkDummy_Object *obj )
{
    return (ti_sdo_ipc_transports_TransportNetworkDummy_Handle)ti_sdo_ipc_transports_TransportNetworkDummy_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label *ti_sdo_ipc_transports_TransportNetworkDummy_Handle_label( ti_sdo_ipc_transports_TransportNetworkDummy_Handle inst, xdc_runtime_Types_Label *lab )
{
    return ti_sdo_ipc_transports_TransportNetworkDummy_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline xdc_String ti_sdo_ipc_transports_TransportNetworkDummy_Handle_name( ti_sdo_ipc_transports_TransportNetworkDummy_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_ipc_transports_TransportNetworkDummy_Handle__label__S(inst, &lab)->iname;
}

/* handle */
static inline ti_sdo_ipc_transports_TransportNetworkDummy_Handle ti_sdo_ipc_transports_TransportNetworkDummy_handle( ti_sdo_ipc_transports_TransportNetworkDummy_Struct *str )
{
    return (ti_sdo_ipc_transports_TransportNetworkDummy_Handle)str;
}

/* struct */
static inline ti_sdo_ipc_transports_TransportNetworkDummy_Struct *ti_sdo_ipc_transports_TransportNetworkDummy_struct( ti_sdo_ipc_transports_TransportNetworkDummy_Handle inst )
{
    return (ti_sdo_ipc_transports_TransportNetworkDummy_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_ipc_transports_TransportNetworkDummy__top__
#undef __nested__
#endif

#endif /* ti_sdo_ipc_transports_TransportNetworkDummy__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_ipc_transports_TransportNetworkDummy__internalaccess))

#ifndef ti_sdo_ipc_transports_TransportNetworkDummy__include_state
#define ti_sdo_ipc_transports_TransportNetworkDummy__include_state

/* Object */
struct ti_sdo_ipc_transports_TransportNetworkDummy_Object {
    const ti_sdo_ipc_transports_TransportNetworkDummy_Fxns__ *__fxns;
};

#endif /* ti_sdo_ipc_transports_TransportNetworkDummy__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_ipc_transports_TransportNetworkDummy__nolocalnames)

#ifndef ti_sdo_ipc_transports_TransportNetworkDummy__localnames__done
#define ti_sdo_ipc_transports_TransportNetworkDummy__localnames__done

/* module prefix */
#define TransportNetworkDummy_Instance ti_sdo_ipc_transports_TransportNetworkDummy_Instance
#define TransportNetworkDummy_Handle ti_sdo_ipc_transports_TransportNetworkDummy_Handle
#define TransportNetworkDummy_Module ti_sdo_ipc_transports_TransportNetworkDummy_Module
#define TransportNetworkDummy_Object ti_sdo_ipc_transports_TransportNetworkDummy_Object
#define TransportNetworkDummy_Struct ti_sdo_ipc_transports_TransportNetworkDummy_Struct
#define TransportNetworkDummy_Instance_State ti_sdo_ipc_transports_TransportNetworkDummy_Instance_State
#define TransportNetworkDummy_Params ti_sdo_ipc_transports_TransportNetworkDummy_Params
#define TransportNetworkDummy_bind ti_sdo_ipc_transports_TransportNetworkDummy_bind
#define TransportNetworkDummy_unbind ti_sdo_ipc_transports_TransportNetworkDummy_unbind
#define TransportNetworkDummy_put ti_sdo_ipc_transports_TransportNetworkDummy_put
#define TransportNetworkDummy_Module_name ti_sdo_ipc_transports_TransportNetworkDummy_Module_name
#define TransportNetworkDummy_Module_id ti_sdo_ipc_transports_TransportNetworkDummy_Module_id
#define TransportNetworkDummy_Module_startup ti_sdo_ipc_transports_TransportNetworkDummy_Module_startup
#define TransportNetworkDummy_Module_startupDone ti_sdo_ipc_transports_TransportNetworkDummy_Module_startupDone
#define TransportNetworkDummy_Module_hasMask ti_sdo_ipc_transports_TransportNetworkDummy_Module_hasMask
#define TransportNetworkDummy_Module_getMask ti_sdo_ipc_transports_TransportNetworkDummy_Module_getMask
#define TransportNetworkDummy_Module_setMask ti_sdo_ipc_transports_TransportNetworkDummy_Module_setMask
#define TransportNetworkDummy_Object_heap ti_sdo_ipc_transports_TransportNetworkDummy_Object_heap
#define TransportNetworkDummy_Module_heap ti_sdo_ipc_transports_TransportNetworkDummy_Module_heap
#define TransportNetworkDummy_construct ti_sdo_ipc_transports_TransportNetworkDummy_construct
#define TransportNetworkDummy_create ti_sdo_ipc_transports_TransportNetworkDummy_create
#define TransportNetworkDummy_handle ti_sdo_ipc_transports_TransportNetworkDummy_handle
#define TransportNetworkDummy_struct ti_sdo_ipc_transports_TransportNetworkDummy_struct
#define TransportNetworkDummy_Handle_label ti_sdo_ipc_transports_TransportNetworkDummy_Handle_label
#define TransportNetworkDummy_Handle_name ti_sdo_ipc_transports_TransportNetworkDummy_Handle_name
#define TransportNetworkDummy_Instance_init ti_sdo_ipc_transports_TransportNetworkDummy_Instance_init
#define TransportNetworkDummy_Object_count ti_sdo_ipc_transports_TransportNetworkDummy_Object_count
#define TransportNetworkDummy_Object_get ti_sdo_ipc_transports_TransportNetworkDummy_Object_get
#define TransportNetworkDummy_Object_first ti_sdo_ipc_transports_TransportNetworkDummy_Object_first
#define TransportNetworkDummy_Object_next ti_sdo_ipc_transports_TransportNetworkDummy_Object_next
#define TransportNetworkDummy_Object_sizeof ti_sdo_ipc_transports_TransportNetworkDummy_Object_sizeof
#define TransportNetworkDummy_Params_copy ti_sdo_ipc_transports_TransportNetworkDummy_Params_copy
#define TransportNetworkDummy_Params_init ti_sdo_ipc_transports_TransportNetworkDummy_Params_init
#define TransportNetworkDummy_Instance_State ti_sdo_ipc_transports_TransportNetworkDummy_Instance_State
#define TransportNetworkDummy_delete ti_sdo_ipc_transports_TransportNetworkDummy_delete
#define TransportNetworkDummy_destruct ti_sdo_ipc_transports_TransportNetworkDummy_destruct
#define TransportNetworkDummy_Module_upCast ti_sdo_ipc_transports_TransportNetworkDummy_Module_upCast
#define TransportNetworkDummy_Module_to_ti_sdo_ipc_interfaces_INetworkTransport ti_sdo_ipc_transports_TransportNetworkDummy_Module_to_ti_sdo_ipc_interfaces_INetworkTransport
#define TransportNetworkDummy_Handle_upCast ti_sdo_ipc_transports_TransportNetworkDummy_Handle_upCast
#define TransportNetworkDummy_Handle_to_ti_sdo_ipc_interfaces_INetworkTransport ti_sdo_ipc_transports_TransportNetworkDummy_Handle_to_ti_sdo_ipc_interfaces_INetworkTransport
#define TransportNetworkDummy_Handle_downCast ti_sdo_ipc_transports_TransportNetworkDummy_Handle_downCast
#define TransportNetworkDummy_Handle_from_ti_sdo_ipc_interfaces_INetworkTransport ti_sdo_ipc_transports_TransportNetworkDummy_Handle_from_ti_sdo_ipc_interfaces_INetworkTransport
#define TransportNetworkDummy_Module_upCast2 ti_sdo_ipc_transports_TransportNetworkDummy_Module_upCast2
#define TransportNetworkDummy_Module_to_ti_sdo_ipc_interfaces_ITransport ti_sdo_ipc_transports_TransportNetworkDummy_Module_to_ti_sdo_ipc_interfaces_ITransport
#define TransportNetworkDummy_Handle_upCast2 ti_sdo_ipc_transports_TransportNetworkDummy_Handle_upCast2
#define TransportNetworkDummy_Handle_to_ti_sdo_ipc_interfaces_ITransport ti_sdo_ipc_transports_TransportNetworkDummy_Handle_to_ti_sdo_ipc_interfaces_ITransport
#define TransportNetworkDummy_Handle_downCast2 ti_sdo_ipc_transports_TransportNetworkDummy_Handle_downCast2
#define TransportNetworkDummy_Handle_from_ti_sdo_ipc_interfaces_ITransport ti_sdo_ipc_transports_TransportNetworkDummy_Handle_from_ti_sdo_ipc_interfaces_ITransport

#endif /* ti_sdo_ipc_transports_TransportNetworkDummy__localnames__done */
#endif