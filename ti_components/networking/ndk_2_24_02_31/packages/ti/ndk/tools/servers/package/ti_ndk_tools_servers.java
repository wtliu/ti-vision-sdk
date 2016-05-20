/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-z63
 */
import java.util.*;
import org.mozilla.javascript.*;
import xdc.services.intern.xsr.*;
import xdc.services.spec.Session;

public class ti_ndk_tools_servers
{
    static final String VERS = "@(#) xdc-z63\n";

    static final Proto.Elm $$T_Bool = Proto.Elm.newBool();
    static final Proto.Elm $$T_Num = Proto.Elm.newNum();
    static final Proto.Elm $$T_Str = Proto.Elm.newStr();
    static final Proto.Elm $$T_Obj = Proto.Elm.newObj();

    static final Proto.Fxn $$T_Met = new Proto.Fxn(null, null, 0, -1, false);
    static final Proto.Map $$T_Map = new Proto.Map($$T_Obj);
    static final Proto.Arr $$T_Vec = new Proto.Arr($$T_Obj);

    static final XScriptO $$DEFAULT = Value.DEFAULT;
    static final Object $$UNDEF = Undefined.instance;

    static final Proto.Obj $$Package = (Proto.Obj)Global.get("$$Package");
    static final Proto.Obj $$Module = (Proto.Obj)Global.get("$$Module");
    static final Proto.Obj $$Instance = (Proto.Obj)Global.get("$$Instance");
    static final Proto.Obj $$Params = (Proto.Obj)Global.get("$$Params");

    static final Object $$objFldGet = Global.get("$$objFldGet");
    static final Object $$objFldSet = Global.get("$$objFldSet");
    static final Object $$proxyGet = Global.get("$$proxyGet");
    static final Object $$proxySet = Global.get("$$proxySet");
    static final Object $$delegGet = Global.get("$$delegGet");
    static final Object $$delegSet = Global.get("$$delegSet");

    Scriptable xdcO;
    Session ses;
    Value.Obj om;

    boolean isROV;
    boolean isCFG;

    Proto.Obj pkgP;
    Value.Obj pkgV;

    ArrayList<Object> imports = new ArrayList<Object>();
    ArrayList<Object> loggables = new ArrayList<Object>();
    ArrayList<Object> mcfgs = new ArrayList<Object>();
    ArrayList<Object> icfgs = new ArrayList<Object>();
    ArrayList<String> inherits = new ArrayList<String>();
    ArrayList<Object> proxies = new ArrayList<Object>();
    ArrayList<Object> sizes = new ArrayList<Object>();
    ArrayList<Object> tdefs = new ArrayList<Object>();

    void $$IMPORTS()
    {
        Global.callFxn("loadPackage", xdcO, "xdc");
        Global.callFxn("loadPackage", xdcO, "xdc.corevers");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.ndk.tools.servers.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.ndk.tools.servers", new Value.Obj("ti.ndk.tools.servers", pkgP));
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.ndk.tools.servers.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.ndk.tools.servers"));
        Scriptable cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/ndk/tools/servers/package.xs");
        om.bind("xdc.IPackage$$capsule", cap);
        Object fxn;
                fxn = Global.get(cap, "init");
                if (fxn != null) pkgP.addFxn("init", (Proto.Fxn)om.findStrict("xdc.IPackage$$init", "ti.ndk.tools.servers"), fxn);
                fxn = Global.get(cap, "close");
                if (fxn != null) pkgP.addFxn("close", (Proto.Fxn)om.findStrict("xdc.IPackage$$close", "ti.ndk.tools.servers"), fxn);
                fxn = Global.get(cap, "validate");
                if (fxn != null) pkgP.addFxn("validate", (Proto.Fxn)om.findStrict("xdc.IPackage$$validate", "ti.ndk.tools.servers"), fxn);
                fxn = Global.get(cap, "exit");
                if (fxn != null) pkgP.addFxn("exit", (Proto.Fxn)om.findStrict("xdc.IPackage$$exit", "ti.ndk.tools.servers"), fxn);
                fxn = Global.get(cap, "getLibs");
                if (fxn != null) pkgP.addFxn("getLibs", (Proto.Fxn)om.findStrict("xdc.IPackage$$getLibs", "ti.ndk.tools.servers"), fxn);
                fxn = Global.get(cap, "getSects");
                if (fxn != null) pkgP.addFxn("getSects", (Proto.Fxn)om.findStrict("xdc.IPackage$$getSects", "ti.ndk.tools.servers"), fxn);
        pkgP.bind("$capsule", cap);
        pkgV.init2(pkgP, "ti.ndk.tools.servers", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.ndk.tools.servers");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.ndk.tools.servers.");
        pkgV.bind("$vers", Global.newArray());
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.ndk.tools.servers'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/servers.ae66',\n");
            sb.append("'lib/servers_ipv4.ae66',\n");
            sb.append("'lib/servers_min.ae66',\n");
            sb.append("'lib/servers_min_ipv4.ae66',\n");
            sb.append("'lib/servers.ae66e',\n");
            sb.append("'lib/servers_ipv4.ae66e',\n");
            sb.append("'lib/servers_min.ae66e',\n");
            sb.append("'lib/servers_min_ipv4.ae66e',\n");
            sb.append("'lib/servers.ae674',\n");
            sb.append("'lib/servers_ipv4.ae674',\n");
            sb.append("'lib/servers_min.ae674',\n");
            sb.append("'lib/servers_min_ipv4.ae674',\n");
            sb.append("'lib/servers.ae9',\n");
            sb.append("'lib/servers_ipv4.ae9',\n");
            sb.append("'lib/servers_min.ae9',\n");
            sb.append("'lib/servers_min_ipv4.ae9',\n");
            sb.append("'lib/servers.aea8f',\n");
            sb.append("'lib/servers_ipv4.aea8f',\n");
            sb.append("'lib/servers_min.aea8f',\n");
            sb.append("'lib/servers_min_ipv4.aea8f',\n");
            sb.append("'lib/servers.aea8fnv',\n");
            sb.append("'lib/servers_ipv4.aea8fnv',\n");
            sb.append("'lib/servers_min.aea8fnv',\n");
            sb.append("'lib/servers_min_ipv4.aea8fnv',\n");
            sb.append("'lib/servers.aem3',\n");
            sb.append("'lib/servers_ipv4.aem3',\n");
            sb.append("'lib/servers_min.aem3',\n");
            sb.append("'lib/servers_min_ipv4.aem3',\n");
            sb.append("'lib/servers.aem4',\n");
            sb.append("'lib/servers_ipv4.aem4',\n");
            sb.append("'lib/servers_min.aem4',\n");
            sb.append("'lib/servers_min_ipv4.aem4',\n");
            sb.append("'lib/servers.aem4f',\n");
            sb.append("'lib/servers_ipv4.aem4f',\n");
            sb.append("'lib/servers_min.aem4f',\n");
            sb.append("'lib/servers_min_ipv4.aem4f',\n");
            sb.append("'lib/servers.am3g',\n");
            sb.append("'lib/servers_ipv4.am3g',\n");
            sb.append("'lib/servers_min.am3g',\n");
            sb.append("'lib/servers_min_ipv4.am3g',\n");
            sb.append("'lib/servers.am4g',\n");
            sb.append("'lib/servers_ipv4.am4g',\n");
            sb.append("'lib/servers_min.am4g',\n");
            sb.append("'lib/servers_min_ipv4.am4g',\n");
            sb.append("'lib/servers.am4fg',\n");
            sb.append("'lib/servers_ipv4.am4fg',\n");
            sb.append("'lib/servers_min.am4fg',\n");
            sb.append("'lib/servers_min_ipv4.am4fg',\n");
            sb.append("'lib/servers.aa8fg',\n");
            sb.append("'lib/servers_ipv4.aa8fg',\n");
            sb.append("'lib/servers_min.aa8fg',\n");
            sb.append("'lib/servers_min_ipv4.aa8fg',\n");
            sb.append("'lib/servers.aa9fg',\n");
            sb.append("'lib/servers_ipv4.aa9fg',\n");
            sb.append("'lib/servers_min.aa9fg',\n");
            sb.append("'lib/servers_min_ipv4.aa9fg',\n");
            sb.append("'lib/servers.aa15fg',\n");
            sb.append("'lib/servers_ipv4.aa15fg',\n");
            sb.append("'lib/servers_min.aa15fg',\n");
            sb.append("'lib/servers_min_ipv4.aa15fg',\n");
            sb.append("'lib/servers.arm3',\n");
            sb.append("'lib/servers_ipv4.arm3',\n");
            sb.append("'lib/servers_min.arm3',\n");
            sb.append("'lib/servers_min_ipv4.arm3',\n");
            sb.append("'lib/servers.arm4',\n");
            sb.append("'lib/servers_ipv4.arm4',\n");
            sb.append("'lib/servers_min.arm4',\n");
            sb.append("'lib/servers_min_ipv4.arm4',\n");
            sb.append("'lib/servers.arm4f',\n");
            sb.append("'lib/servers_ipv4.arm4f',\n");
            sb.append("'lib/servers_min.arm4f',\n");
            sb.append("'lib/servers_min_ipv4.arm4f',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/servers.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/servers_ipv4.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/servers_min.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/servers_min_ipv4.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/servers.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/servers_ipv4.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/servers_min.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/servers_min_ipv4.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/servers.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/servers_ipv4.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/servers_min.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/servers_min_ipv4.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/servers.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/servers_ipv4.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/servers_min.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/servers_min_ipv4.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/servers.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/servers_ipv4.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/servers_min.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/servers_min_ipv4.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/servers.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/servers_ipv4.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/servers_min.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/servers_min_ipv4.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/servers.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/servers_ipv4.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/servers_min.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/servers_min_ipv4.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/servers.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/servers_ipv4.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/servers_min.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/servers_min_ipv4.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/servers.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/servers_ipv4.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/servers_min.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/servers_min_ipv4.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/servers.am3g', {target: 'gnu.targets.arm.M3', suffix: 'm3g'}],\n");
            sb.append("['lib/servers_ipv4.am3g', {target: 'gnu.targets.arm.M3', suffix: 'm3g'}],\n");
            sb.append("['lib/servers_min.am3g', {target: 'gnu.targets.arm.M3', suffix: 'm3g'}],\n");
            sb.append("['lib/servers_min_ipv4.am3g', {target: 'gnu.targets.arm.M3', suffix: 'm3g'}],\n");
            sb.append("['lib/servers.am4g', {target: 'gnu.targets.arm.M4', suffix: 'm4g'}],\n");
            sb.append("['lib/servers_ipv4.am4g', {target: 'gnu.targets.arm.M4', suffix: 'm4g'}],\n");
            sb.append("['lib/servers_min.am4g', {target: 'gnu.targets.arm.M4', suffix: 'm4g'}],\n");
            sb.append("['lib/servers_min_ipv4.am4g', {target: 'gnu.targets.arm.M4', suffix: 'm4g'}],\n");
            sb.append("['lib/servers.am4fg', {target: 'gnu.targets.arm.M4F', suffix: 'm4fg'}],\n");
            sb.append("['lib/servers_ipv4.am4fg', {target: 'gnu.targets.arm.M4F', suffix: 'm4fg'}],\n");
            sb.append("['lib/servers_min.am4fg', {target: 'gnu.targets.arm.M4F', suffix: 'm4fg'}],\n");
            sb.append("['lib/servers_min_ipv4.am4fg', {target: 'gnu.targets.arm.M4F', suffix: 'm4fg'}],\n");
            sb.append("['lib/servers.aa8fg', {target: 'gnu.targets.arm.A8F', suffix: 'a8fg'}],\n");
            sb.append("['lib/servers_ipv4.aa8fg', {target: 'gnu.targets.arm.A8F', suffix: 'a8fg'}],\n");
            sb.append("['lib/servers_min.aa8fg', {target: 'gnu.targets.arm.A8F', suffix: 'a8fg'}],\n");
            sb.append("['lib/servers_min_ipv4.aa8fg', {target: 'gnu.targets.arm.A8F', suffix: 'a8fg'}],\n");
            sb.append("['lib/servers.aa9fg', {target: 'gnu.targets.arm.A9F', suffix: 'a9fg'}],\n");
            sb.append("['lib/servers_ipv4.aa9fg', {target: 'gnu.targets.arm.A9F', suffix: 'a9fg'}],\n");
            sb.append("['lib/servers_min.aa9fg', {target: 'gnu.targets.arm.A9F', suffix: 'a9fg'}],\n");
            sb.append("['lib/servers_min_ipv4.aa9fg', {target: 'gnu.targets.arm.A9F', suffix: 'a9fg'}],\n");
            sb.append("['lib/servers.aa15fg', {target: 'gnu.targets.arm.A15F', suffix: 'a15fg'}],\n");
            sb.append("['lib/servers_ipv4.aa15fg', {target: 'gnu.targets.arm.A15F', suffix: 'a15fg'}],\n");
            sb.append("['lib/servers_min.aa15fg', {target: 'gnu.targets.arm.A15F', suffix: 'a15fg'}],\n");
            sb.append("['lib/servers_min_ipv4.aa15fg', {target: 'gnu.targets.arm.A15F', suffix: 'a15fg'}],\n");
            sb.append("['lib/servers.arm3', {target: 'iar.targets.arm.M3', suffix: 'rm3'}],\n");
            sb.append("['lib/servers_ipv4.arm3', {target: 'iar.targets.arm.M3', suffix: 'rm3'}],\n");
            sb.append("['lib/servers_min.arm3', {target: 'iar.targets.arm.M3', suffix: 'rm3'}],\n");
            sb.append("['lib/servers_min_ipv4.arm3', {target: 'iar.targets.arm.M3', suffix: 'rm3'}],\n");
            sb.append("['lib/servers.arm4', {target: 'iar.targets.arm.M4', suffix: 'rm4'}],\n");
            sb.append("['lib/servers_ipv4.arm4', {target: 'iar.targets.arm.M4', suffix: 'rm4'}],\n");
            sb.append("['lib/servers_min.arm4', {target: 'iar.targets.arm.M4', suffix: 'rm4'}],\n");
            sb.append("['lib/servers_min_ipv4.arm4', {target: 'iar.targets.arm.M4', suffix: 'rm4'}],\n");
            sb.append("['lib/servers.arm4f', {target: 'iar.targets.arm.M4F', suffix: 'rm4f'}],\n");
            sb.append("['lib/servers_ipv4.arm4f', {target: 'iar.targets.arm.M4F', suffix: 'rm4f'}],\n");
            sb.append("['lib/servers_min.arm4f', {target: 'iar.targets.arm.M4F', suffix: 'rm4f'}],\n");
            sb.append("['lib/servers_min_ipv4.arm4f', {target: 'iar.targets.arm.M4F', suffix: 'rm4f'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
        }//isCFG
        Global.callFxn("init", pkgV);
        ((Value.Arr)om.findStrict("$packages", "ti.ndk.tools.servers")).add(pkgV);
    }

    public void exec( Scriptable xdcO, Session ses )
    {
        this.xdcO = xdcO;
        this.ses = ses;
        om = (Value.Obj)xdcO.get("om", null);

        Object o = om.geto("$name");
        String s = o instanceof String ? (String)o : null;
        isCFG = s != null && s.equals("cfg");
        isROV = s != null && s.equals("rov");

        $$IMPORTS();
        $$OBJECTS();
        if (isROV) {
        }//isROV
        $$SINGLETONS();
        $$INITIALIZATION();
    }
}