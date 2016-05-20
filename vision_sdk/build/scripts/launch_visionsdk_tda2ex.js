//
//File Name: launch_visionsdk.js
//Description:
//   Add entries in CCS menu to do common activities
//
//Usage:
//From Command Window without CCS
//  1. Open a command window
//  2. cd <ccs_install_dir>\csv5\ccs_base\scripting\bin
//  3. dss.bat <location_of_script>\launch_visionsdk_tda2Ex.js
//
//From CCS Scripting console
//  1. loadJSFile "C:\\ti\\launch_visionsdk_tda2Ex.js"
//     <Ignore the error observed on the CCS scripting console
//     "Wrapped java.io.IOException: The handle is invalid (<location_of_script>\
//     launch_visionsdk.js#93)">
//
//Note:
//  1. Search for "edit this" to look at changes that need to be edited
//     for your usage.
//

// Import the DSS packages into our namespace to save on typing
importPackage(Packages.com.ti.debug.engine.scripting)
importPackage(Packages.com.ti.ccstudio.scripting.environment)
importPackage(Packages.java.lang)
importPackage(java.io);
importPackage(java.lang);

//Path to CCXML file
//<edit this>
configFilePath = "C:\\Users\\x0066085\\ti\\CCSTargetConfigurations\\TDA2Ex.ccxml";
//<edit this>
disableGels=0

function updateScriptVars(printEnable)
{
 //<edit this> <start>
    //Path to vision-sdk binaries
    baseDir = "Z:\\vision_sdk\\binaries\\vision_sdk\\bin\\tda2ex-evm\\"
    releaseMode = 1;
    A15_0_en = 1;
    IP1_0_en = 1; //IP1_0
    IP1_1_en = 1; //IP1_1
    DSP_0_en = 1;
    testsuite = 0;
    runAfterLoad = 1;
 //<edit this> <end>

    if(releaseMode)
    {
        A15_0_exe = "vision_sdk_a15_0_debug.xa15fg"
        IP1_0_exe = "vision_sdk_ipu1_0_release.xem4"
        IP1_1_exe = "vision_sdk_ipu1_1_release.xem4"
        DSP_0_exe = "vision_sdk_c66xdsp_1_release.xe66"
    }
    else
    {
        A15_0_exe = "vision_sdk_a15_0_debug.xa15fg"
        IP1_0_exe = "vision_sdk_ipu1_0_debug.xem4"
        IP1_1_exe = "vision_sdk_ipu1_1_debug.xem4"
        DSP_0_exe = "vision_sdk_c66xdsp_1_debug.xe66"
    }

	if (testsuite == 1)
	{
	   if(releaseMode == 1)
	   {
	       IP1_0_exe = "vision_sdk_ipu1_0_release_testsuite.xem4";
	   }
	   else 
	   {
           IP1_0_exe = "vision_sdk_ipu1_0_debug_testsuite.xem4";
	   }
	}

    //Open a debug session
    dsA15_0 = debugServer.openSession( ".*CortexA15_0" );
    dsIP1_0 = debugServer.openSession( ".*Cortex_M4_IPU1_C0" );
    dsIP1_1 = debugServer.openSession( ".*Cortex_M4_IPU1_C1" );
    dsDSP_0 = debugServer.openSession( ".*C66xx_DSP1" );
    if(printEnable == "1")
    {
        print("\nCores Enabled:");
        if(A15_0_en) print("A15_0 is enabled!");
        if(IP1_0_en) print("IP1_0 is enabled!");
        if(IP1_1_en) print("IP1_1 is enabled!");
        if(DSP_0_en) print("DSP_0 is enabled!");
    }
}

function printVars()
{
    updateScriptVars("1");
}

function connectTargets()
{
    updateScriptVars("0");

    print("Connecting to A15_0!");
    dsA15_0.target.connect();
    // Connect targets
    if(!disableGels)
    {
        script.setScriptTimeout(30000);
        print("Executing Gels");
        try
        {
            dsA15_0.expression.evaluate("DRA7xx_MULTICORE_EnableAllCores()");
        }
        catch(e)
        {
            print("Some error in GEL execution for Multicore Enable");
        }
        try
        {
            dsA15_0.expression.evaluate("TDA2Ex_MULTICORE_EnableAllCores()");
        }
        catch(e)
        {
            print("Some error in GEL execution for Multicore Enable");
        }
        try
        {
            dsA15_0.expression.evaluate("TDA2Ex_MULTICORE_EnableAllCores()");
        }
        catch(e)
        {
            print("Some error in GEL execution for Multicore Enable");
        }
        try
        {
            dsA15_0.expression.evaluate("EVE_MMU_Config()");
        }
        catch(e)
        {
            print("Some error in GEL execution for EVE MMU");
        }
        script.setScriptTimeout(-1);
    }

    print("Connecting to IP1_0!");
    if(IP1_0_en) dsIP1_0.target.connect();
    print("Connecting to IP1_1!");
    if(IP1_1_en) dsIP1_1.target.connect();

    print("Connecting to DSP_0!");
    if(DSP_0_en) dsDSP_0.target.connect();
}

function disconnectTargets()
{
    updateScriptVars("0");

    // Connect targets
    dsA15_0.target.disconnect();
    dsIP1_0.target.disconnect();
    dsIP1_1.target.disconnect();
    dsDSP_0.target.disconnect();
}

function loadTargets_A15_0() { updateScriptVars("0"); if(A15_0_en) dsA15_0.target.connect(); if(A15_0_en) dsA15_0.memory.loadProgram( baseDir + A15_0_exe ); }
function loadTargets_IP1_0() { updateScriptVars("0"); if(IP1_0_en) dsIP1_0.target.connect(); if(IP1_0_en) dsIP1_0.memory.loadProgram( baseDir + IP1_0_exe ); }
function loadTargets_IP1_1() { updateScriptVars("0"); if(IP1_1_en) dsIP1_1.target.connect(); if(IP1_1_en) dsIP1_1.memory.loadProgram( baseDir + IP1_1_exe ); }
function loadTargets_DSP_0() { updateScriptVars("0"); if(DSP_0_en) dsDSP_0.target.connect(); if(DSP_0_en) dsDSP_0.memory.loadProgram( baseDir + DSP_0_exe ); }


function loadTargets()
{
    updateScriptVars("0");

    // Load the program
	try
	{
        print("Loading A15_0_exe!");
        loadTargets_A15_0();
        print("Loading IPU_0_exe!");
        loadTargets_IP1_0();
        print("Loading IPU_1_exe!");
        loadTargets_IP1_1();
        print("Loading DSP_0_exe!");
        loadTargets_DSP_0();
        print("Loading DSP_1_exe!");
    }
    catch (e)
    {
        print("Problems while loading!");
    }
}

function loadSymbols_A15_0() { if(A15_0_en) dsA15_0.target.connect(); if(A15_0_en) dsA15_0.symbol.load( baseDir + A15_0_exe ); }
function loadSymbols_IP1_0() { if(IP1_0_en) dsIP1_0.target.connect(); if(IP1_0_en) dsIP1_0.symbol.load( baseDir + IP1_0_exe ); }
function loadSymbols_IP1_1() { if(IP1_1_en) dsIP1_1.target.connect(); if(IP1_1_en) dsIP1_1.symbol.load( baseDir + IP1_1_exe ); }
function loadSymbols_DSP_0() { if(DSP_0_en) dsDSP_0.target.connect(); if(DSP_0_en) dsDSP_0.symbol.load( baseDir + DSP_0_exe ); }

function loadSymbolsTargets()
{
    updateScriptVars("0");

    // Load the program
    loadSymbols_A15_0();
    loadSymbols_IP1_0();
    loadSymbols_IP1_1();
    loadSymbols_DSP_0();
}

function resetTargets()
{
    updateScriptVars("0");

    // Run the program
    if(dsA15_0.target.isConnected()) dsA15_0.target.reset();
    if(dsIP1_0.target.isConnected()) dsIP1_0.target.reset();
    if(dsIP1_1.target.isConnected()) dsIP1_1.target.reset();
    if(dsDSP_0.target.isConnected()) dsDSP_0.target.reset();
}

function restartTargets()
{
    updateScriptVars("0");

    // Run the program
    if(A15_0_en) dsA15_0.target.restart();
    if(IP1_0_en) dsIP1_0.target.restart();
    if(IP1_1_en) dsIP1_1.target.restart();
    if(DSP_0_en) dsDSP_0.target.restart();
}

function runTargets()
{
    updateScriptVars("0");

    // Run the program
    if(A15_0_en) dsA15_0.target.runAsynch();
    //if(IP1_0_en) dsIP1_0.target.runAsynch();
    if(IP1_1_en) dsIP1_1.target.runAsynch();
    if(DSP_0_en) dsDSP_0.target.runAsynch();
}

function haltTargets()
{
    updateScriptVars("0");
    script.setScriptTimeout(5000);

	try
	{
        // Run the program
        if(dsA15_0.target.isConnected()) dsA15_0.target.halt();
        if(dsIP1_0.target.isConnected()) dsIP1_0.target.halt();
        if(dsIP1_1.target.isConnected()) dsIP1_1.target.halt();
        if(dsDSP_0.target.isConnected()) dsDSP_0.target.halt();
    }
    catch (e)
    {
        print("Problems while halting!");
    }
    script.setScriptTimeout(-1);
}

function doEverything()
{
    printVars();
    haltTargets();
    connectTargets();
    resetTargets();
    loadTargets();
    if(runAfterLoad == 1)
    {
        runTargets();
    }
}

var ds;
var debugServer;
var script;

// Check to see if running from within CCSv4 Scripting Console
var withinCCS = (ds !== undefined);

// Create scripting environment and get debug server if running standalone
if (!withinCCS)
{
    // Import the DSS packages into our namespace to save on typing
    importPackage(Packages.com.ti.debug.engine.scripting);
    importPackage(Packages.com.ti.ccstudio.scripting.environment);
    importPackage(Packages.java.lang);

    // Create our scripting environment object - which is the main entry point into any script and
    // the factory for creating other Scriptable ervers and Sessions
    script = ScriptingEnvironment.instance();

    // Get the Debug Server and start a Debug Session
    debugServer = script.getServer("DebugServer.1");
}
else // otherwise leverage existing scripting environment and debug server
{
    debugServer = ds;
    script = env;
}

debugServer.setConfig(configFilePath);

if (!withinCCS)
{
    doEverything();
    System.out.println("Press Any key to stop...");
    var reader = new BufferedReader( new InputStreamReader(System['in']) );
    reader.readLine();

    System.out.println("End of application. Exiting");

    dsA15_0.terminate();
    dsIP1_0.terminate();
    dsIP1_1.terminate();
    dsDSP_0.terminate();

    debugServer.stop();
}

if (withinCCS)
{
    dsA15_0 = debugServer.openSession( ".*CortexA15_0" );
    print("Look for new menu under Scripts for A15_0!");
    if(disableGels) dsA15_0.expression.evaluate("GEL_UnloadAllGels()");

    hotmenu.remove("VSDK/Do everything");
    hotmenu.remove("VSDK/Connect targets");
    hotmenu.remove("VSDK/Disconnect targets");
    hotmenu.remove("VSDK/Reset targets");
    hotmenu.remove("VSDK/Restart targets");
    hotmenu.remove("VSDK/Load targets");
    hotmenu.remove("VSDK/Run targets");
    hotmenu.remove("VSDK/Halt targets");
    
    hotmenu.remove("VSDK/Load symbols/All");
    hotmenu.remove("VSDK/Load symbols/A15_0");
    hotmenu.remove("VSDK/Load symbols/IPU1_0");
    hotmenu.remove("VSDK/Load symbols/IPU1_1");
    hotmenu.remove("VSDK/Load symbols/DSP_0");
    hotmenu.remove("VSDK/Load symbols/DSP_1");
    hotmenu.remove("VSDK/Load symbols/EVE_0");
    hotmenu.remove("VSDK/Load symbols/EVE_1");
    hotmenu.remove("VSDK/Load symbols/EVE_2");
    hotmenu.remove("VSDK/Load symbols/EVE_3");

    hotmenu.remove("VSDK/Load targets/All");
    hotmenu.remove("VSDK/Load targets/A15_0");
    hotmenu.remove("VSDK/Load targets/IPU1_0");
    hotmenu.remove("VSDK/Load targets/IPU1_1");
    hotmenu.remove("VSDK/Load targets/DSP_0");
    hotmenu.remove("VSDK/Load targets/DSP_1");
    hotmenu.remove("VSDK/Load targets/EVE_0");
    hotmenu.remove("VSDK/Load targets/EVE_1");
    hotmenu.remove("VSDK/Load targets/EVE_2");
    hotmenu.remove("VSDK/Load targets/EVE_3");

    hotmenu.remove("VSDK/Print script variables");

    hotmenu.addJSFunction("VSDK/Do everything", "doEverything()");
    hotmenu.addJSFunction("VSDK/Connect targets", "connectTargets()");
    hotmenu.addJSFunction("VSDK/Disconnect targets", "disconnectTargets()");
    hotmenu.addJSFunction("VSDK/Reset targets", "resetTargets()");
    hotmenu.addJSFunction("VSDK/Restart targets", "restartTargets()");
    hotmenu.addJSFunction("VSDK/Load targets", "loadTargets()");
    hotmenu.addJSFunction("VSDK/Run targets", "runTargets()");
    hotmenu.addJSFunction("VSDK/Halt targets", "haltTargets()");

    hotmenu.addJSFunction("VSDK/Load symbols/All",    "loadSymbolsTargets()");
    hotmenu.addJSFunction("VSDK/Load symbols/A15_0",  "loadSymbols_A15_0()");
    hotmenu.addJSFunction("VSDK/Load symbols/IPU1_0", "loadSymbols_IP1_0()");
    hotmenu.addJSFunction("VSDK/Load symbols/IPU1_1", "loadSymbols_IP1_1()");
    hotmenu.addJSFunction("VSDK/Load symbols/DSP_0",  "loadSymbols_DSP_0()");
    hotmenu.addJSFunction("VSDK/Load symbols/DSP_1",  "loadSymbols_DSP_1()");
    hotmenu.addJSFunction("VSDK/Load symbols/EVE_0",  "loadSymbols_EVE_0()");
    hotmenu.addJSFunction("VSDK/Load symbols/EVE_1",  "loadSymbols_EVE_1()");
    hotmenu.addJSFunction("VSDK/Load symbols/EVE_2",  "loadSymbols_EVE_2()");
    hotmenu.addJSFunction("VSDK/Load symbols/EVE_3",  "loadSymbols_EVE_3()");

    hotmenu.addJSFunction("VSDK/Load symbols/All",    "loadSymbolsTargets()");
    hotmenu.addJSFunction("VSDK/Load symbols/A15_0",  "loadSymbols_A15_0()");
    hotmenu.addJSFunction("VSDK/Load symbols/IPU1_0", "loadSymbols_IP1_0()");
    hotmenu.addJSFunction("VSDK/Load symbols/IPU1_1", "loadSymbols_IP1_1()");
    hotmenu.addJSFunction("VSDK/Load symbols/DSP_0",  "loadSymbols_DSP_0()");
    hotmenu.addJSFunction("VSDK/Load symbols/DSP_1",  "loadSymbols_DSP_1()");
    hotmenu.addJSFunction("VSDK/Load symbols/EVE_0",  "loadSymbols_EVE_0()");
    hotmenu.addJSFunction("VSDK/Load symbols/EVE_1",  "loadSymbols_EVE_1()");
    hotmenu.addJSFunction("VSDK/Load symbols/EVE_2",  "loadSymbols_EVE_2()");
    hotmenu.addJSFunction("VSDK/Load symbols/EVE_3",  "loadSymbols_EVE_3()");

    hotmenu.addJSFunction("VSDK/Load targets/All",    "loadTargets()");
    hotmenu.addJSFunction("VSDK/Load targets/A15_0",  "loadTargets_A15_0()");
    hotmenu.addJSFunction("VSDK/Load targets/IPU1_0", "loadTargets_IP1_0()");
    hotmenu.addJSFunction("VSDK/Load targets/IPU1_1", "loadTargets_IP1_1()");
    hotmenu.addJSFunction("VSDK/Load targets/DSP_0",  "loadTargets_DSP_0()");
    hotmenu.addJSFunction("VSDK/Load targets/DSP_1",  "loadTargets_DSP_1()");
    hotmenu.addJSFunction("VSDK/Load targets/EVE_0",  "loadTargets_EVE_0()");
    hotmenu.addJSFunction("VSDK/Load targets/EVE_1",  "loadTargets_EVE_1()");
    hotmenu.addJSFunction("VSDK/Load targets/EVE_2",  "loadTargets_EVE_2()");
    hotmenu.addJSFunction("VSDK/Load targets/EVE_3",  "loadTargets_EVE_3()");

    hotmenu.addJSFunction("VSDK/Print script variables", "printVars()");
}