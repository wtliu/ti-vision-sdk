#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#

unexport MAKEFILE_LIST
MK_NOGENDEPS := $(filter clean,$(MAKECMDGOALS))
override PKGDIR = ti/sdo/fc/ires/hdvicp
XDCINCS = -I. -I$(strip $(subst ;, -I,$(subst $(space),\$(space),$(XPKGPATH))))
XDCCFGDIR = package/cfg/

#
# The following dependencies ensure package.mak is rebuilt
# in the event that some included BOM script changes.
#
ifneq (clean,$(MAKECMDGOALS))
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/utils.js:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/utils.js
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xdc.tci:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xdc.tci
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/template.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/template.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/om2.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/om2.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xmlgen.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xmlgen.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xmlgen2.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xmlgen2.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/Warnings.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/Warnings.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/IPackage.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/IPackage.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/package.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/package.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/services/global/Clock.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/services/global/Clock.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/services/global/Trace.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/services/global/Trace.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/bld.js:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/bld.js
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/BuildEnvironment.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/BuildEnvironment.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/PackageContents.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/PackageContents.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/_gen.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/_gen.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Library.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Library.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Executable.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Executable.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Repository.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Repository.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Configuration.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Configuration.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Script.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Script.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Manifest.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Manifest.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Utils.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Utils.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget2.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget2.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget3.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget3.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITargetFilter.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITargetFilter.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/package.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/package.xs
/datalocal1/user/shiju/ADAS/vision_sdk/build/tda2xx/config_m4.bld:
package.mak: /datalocal1/user/shiju/ADAS/vision_sdk/build/tda2xx/config_m4.bld
/datalocal1/user/shiju/ADAS/vision_sdk/build/tda2xx/mem_segment_definition_1024mb_bios.xs:
package.mak: /datalocal1/user/shiju/ADAS/vision_sdk/build/tda2xx/mem_segment_definition_1024mb_bios.xs
/datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/ITarget.xs:
package.mak: /datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/ITarget.xs
/datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/C28_large.xs:
package.mak: /datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/C28_large.xs
/datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/C28_float.xs:
package.mak: /datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/C28_float.xs
/datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/package.xs:
package.mak: /datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/package.xs
/datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/arm/elf/IArm.xs:
package.mak: /datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/arm/elf/IArm.xs
/datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/arm/elf/package.xs:
package.mak: /datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/arm/elf/package.xs
package.mak: package.bld
endif

ti.targets.arm.elf.M4.rootDir ?= /datalocal1/ti_components/cg_tools/linux/ti-cgt-arm_5.2.5
ti.targets.arm.elf.packageBase ?= /datalocal1/ti_components/os_tools/bios_6_42_02_29/packages/ti/targets/arm/elf/
.PRECIOUS: $(XDCCFGDIR)/%.oem4
.PHONY: all,em4 .dlls,em4 .executables,em4 test,em4
all,em4: .executables,em4
.executables,em4: .libraries,em4
.executables,em4: .dlls,em4
.dlls,em4: .libraries,em4
.libraries,em4: .interfaces
	@$(RM) $@
	@$(TOUCH) "$@"

.help::
	@$(ECHO) xdc test,em4
	@$(ECHO) xdc .executables,em4
	@$(ECHO) xdc .libraries,em4
	@$(ECHO) xdc .dlls,em4


all: .executables 
.executables: .libraries .dlls
.libraries: .interfaces

PKGCFGS := $(wildcard package.xs) package/build.cfg
.interfaces: package/package.xdc.inc package/package.defs.h package.xdc $(PKGCFGS)

-include package/package.xdc.dep
package/%.xdc.inc package/%_ti.sdo.fc.ires.hdvicp.c package/%.defs.h: %.xdc $(PKGCFGS)
	@$(MSG) generating interfaces for package ti.sdo.fc.ires.hdvicp" (because $@ is older than $(firstword $?))" ...
	$(XSRUN) -f xdc/services/intern/cmd/build.xs $(MK_IDLOPTS) -m package/package.xdc.dep -i package/package.xdc.inc package.xdc

ifeq (,$(MK_NOGENDEPS))
-include package/package.cfg.dep
endif

package/package.cfg.xdc.inc: .interfaces $(XDCROOT)/packages/xdc/cfg/cfginc.js package.xdc
	@$(MSG) generating schema include file list ...
	$(CONFIG) -f $(XDCROOT)/packages/xdc/cfg/cfginc.js ti.sdo.fc.ires.hdvicp $@

.libraries,em4 .libraries: lib/debug/hdvicp2.aem4

-include lib/debug/hdvicp2.aem4.mak
lib/debug/hdvicp2.aem4: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/debug/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/debug/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/debug/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/debug/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/debug/hdvicp2/hdvicp2cfg.oem4  into $@ ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armar  rq $@   package/lib/lib/debug/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/debug/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/debug/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/debug/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/debug/hdvicp2/hdvicp2cfg.oem4 
lib/debug/hdvicp2.aem4: export C_DIR=
lib/debug/hdvicp2.aem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

clean,em4 clean::
	-$(RM) lib/debug/hdvicp2.aem4
.libraries,em4 .libraries: lib/release/hdvicp2.aem4

-include lib/release/hdvicp2.aem4.mak
lib/release/hdvicp2.aem4: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/release/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/release/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/release/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/release/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/release/hdvicp2/hdvicp2cfg.oem4  into $@ ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armar  rq $@   package/lib/lib/release/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/release/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/release/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/release/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/release/hdvicp2/hdvicp2cfg.oem4 
lib/release/hdvicp2.aem4: export C_DIR=
lib/release/hdvicp2.aem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

clean,em4 clean::
	-$(RM) lib/release/hdvicp2.aem4
.libraries,em4 .libraries: lib/profile/hdvicp2.aem4

-include lib/profile/hdvicp2.aem4.mak
lib/profile/hdvicp2.aem4: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/profile/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/profile/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/profile/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/profile/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/profile/hdvicp2/hdvicp2cfg.oem4  into $@ ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armar  rq $@   package/lib/lib/profile/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/profile/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/profile/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/profile/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/profile/hdvicp2/hdvicp2cfg.oem4 
lib/profile/hdvicp2.aem4: export C_DIR=
lib/profile/hdvicp2.aem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

clean,em4 clean::
	-$(RM) lib/profile/hdvicp2.aem4
.libraries,em4 .libraries: lib/coverage/hdvicp2.aem4

-include lib/coverage/hdvicp2.aem4.mak
lib/coverage/hdvicp2.aem4: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/coverage/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/coverage/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/coverage/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/coverage/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/coverage/hdvicp2/hdvicp2cfg.oem4  into $@ ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armar  rq $@   package/lib/lib/coverage/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/coverage/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/coverage/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/coverage/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/coverage/hdvicp2/hdvicp2cfg.oem4 
lib/coverage/hdvicp2.aem4: export C_DIR=
lib/coverage/hdvicp2.aem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

clean,em4 clean::
	-$(RM) lib/coverage/hdvicp2.aem4
.libraries,em4 .libraries: lib/whole_program/hdvicp2.aem4

-include lib/whole_program/hdvicp2.aem4.mak
lib/whole_program/hdvicp2.aem4: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/whole_program/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/whole_program/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/whole_program/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/whole_program/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/whole_program/hdvicp2/hdvicp2cfg.oem4  into $@ ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armar  rq $@   package/lib/lib/whole_program/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/whole_program/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/whole_program/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/whole_program/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/whole_program/hdvicp2/hdvicp2cfg.oem4 
lib/whole_program/hdvicp2.aem4: export C_DIR=
lib/whole_program/hdvicp2.aem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

clean,em4 clean::
	-$(RM) lib/whole_program/hdvicp2.aem4
.libraries,em4 .libraries: lib/whole_program_debug/hdvicp2.aem4

-include lib/whole_program_debug/hdvicp2.aem4.mak
lib/whole_program_debug/hdvicp2.aem4: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/whole_program_debug/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/whole_program_debug/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/whole_program_debug/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/whole_program_debug/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/whole_program_debug/hdvicp2/hdvicp2cfg.oem4  into $@ ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armar  rq $@   package/lib/lib/whole_program_debug/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4 package/lib/lib/whole_program_debug/hdvicp2/iresman_hdvicp2.oem4 package/lib/lib/whole_program_debug/hdvicp2/ires_hdvicp2.oem4 package/lib/lib/whole_program_debug/hdvicp2/iresman_hdvicp2_setup.oem4 package/lib/lib/whole_program_debug/hdvicp2/hdvicp2cfg.oem4 
lib/whole_program_debug/hdvicp2.aem4: export C_DIR=
lib/whole_program_debug/hdvicp2.aem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

clean,em4 clean::
	-$(RM) lib/whole_program_debug/hdvicp2.aem4
test:;
%,copy:
	@$(if $<,,$(MSG) don\'t know how to build $*; exit 1)
	@$(MSG) cp $< $@
	$(RM) $@
	$(CP) $< $@
.PHONY: package_ti.sdo.fc.ires.hdvicp.oem4,copy
package_ti.sdo.fc.ires.hdvicp.oem4,copy : package_ti.sdo.fc.ires.hdvicp.oem4,0,copy package_ti.sdo.fc.ires.hdvicp.oem4,1,copy package_ti.sdo.fc.ires.hdvicp.oem4,2,copy package_ti.sdo.fc.ires.hdvicp.oem4,3,copy package_ti.sdo.fc.ires.hdvicp.oem4,4,copy package_ti.sdo.fc.ires.hdvicp.oem4,5,copy 
	@

package_ti.sdo.fc.ires.hdvicp.oem4,0,copy : package/lib/lib/coverage/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4
package_ti.sdo.fc.ires.hdvicp.oem4,1,copy : package/lib/lib/debug/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4
package_ti.sdo.fc.ires.hdvicp.oem4,2,copy : package/lib/lib/profile/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4
package_ti.sdo.fc.ires.hdvicp.oem4,3,copy : package/lib/lib/release/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4
package_ti.sdo.fc.ires.hdvicp.oem4,4,copy : package/lib/lib/whole_program/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4
package_ti.sdo.fc.ires.hdvicp.oem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.oem4
.PHONY: package_ti.sdo.fc.ires.hdvicp.sem4,copy
package_ti.sdo.fc.ires.hdvicp.sem4,copy : package_ti.sdo.fc.ires.hdvicp.sem4,0,copy package_ti.sdo.fc.ires.hdvicp.sem4,1,copy package_ti.sdo.fc.ires.hdvicp.sem4,2,copy package_ti.sdo.fc.ires.hdvicp.sem4,3,copy package_ti.sdo.fc.ires.hdvicp.sem4,4,copy package_ti.sdo.fc.ires.hdvicp.sem4,5,copy 
	@

package_ti.sdo.fc.ires.hdvicp.sem4,0,copy : package/lib/lib/coverage/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.sem4
package_ti.sdo.fc.ires.hdvicp.sem4,1,copy : package/lib/lib/debug/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.sem4
package_ti.sdo.fc.ires.hdvicp.sem4,2,copy : package/lib/lib/profile/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.sem4
package_ti.sdo.fc.ires.hdvicp.sem4,3,copy : package/lib/lib/release/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.sem4
package_ti.sdo.fc.ires.hdvicp.sem4,4,copy : package/lib/lib/whole_program/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.sem4
package_ti.sdo.fc.ires.hdvicp.sem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/package/package_ti.sdo.fc.ires.hdvicp.sem4
.PHONY: iresman_hdvicp2.oem4,copy
iresman_hdvicp2.oem4,copy : iresman_hdvicp2.oem4,0,copy iresman_hdvicp2.oem4,1,copy iresman_hdvicp2.oem4,2,copy iresman_hdvicp2.oem4,3,copy iresman_hdvicp2.oem4,4,copy iresman_hdvicp2.oem4,5,copy 
	@

iresman_hdvicp2.oem4,0,copy : package/lib/lib/coverage/hdvicp2/iresman_hdvicp2.oem4
iresman_hdvicp2.oem4,1,copy : package/lib/lib/debug/hdvicp2/iresman_hdvicp2.oem4
iresman_hdvicp2.oem4,2,copy : package/lib/lib/profile/hdvicp2/iresman_hdvicp2.oem4
iresman_hdvicp2.oem4,3,copy : package/lib/lib/release/hdvicp2/iresman_hdvicp2.oem4
iresman_hdvicp2.oem4,4,copy : package/lib/lib/whole_program/hdvicp2/iresman_hdvicp2.oem4
iresman_hdvicp2.oem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/iresman_hdvicp2.oem4
.PHONY: iresman_hdvicp2.sem4,copy
iresman_hdvicp2.sem4,copy : iresman_hdvicp2.sem4,0,copy iresman_hdvicp2.sem4,1,copy iresman_hdvicp2.sem4,2,copy iresman_hdvicp2.sem4,3,copy iresman_hdvicp2.sem4,4,copy iresman_hdvicp2.sem4,5,copy 
	@

iresman_hdvicp2.sem4,0,copy : package/lib/lib/coverage/hdvicp2/iresman_hdvicp2.sem4
iresman_hdvicp2.sem4,1,copy : package/lib/lib/debug/hdvicp2/iresman_hdvicp2.sem4
iresman_hdvicp2.sem4,2,copy : package/lib/lib/profile/hdvicp2/iresman_hdvicp2.sem4
iresman_hdvicp2.sem4,3,copy : package/lib/lib/release/hdvicp2/iresman_hdvicp2.sem4
iresman_hdvicp2.sem4,4,copy : package/lib/lib/whole_program/hdvicp2/iresman_hdvicp2.sem4
iresman_hdvicp2.sem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/iresman_hdvicp2.sem4
.PHONY: ires_hdvicp2.oem4,copy
ires_hdvicp2.oem4,copy : ires_hdvicp2.oem4,0,copy ires_hdvicp2.oem4,1,copy ires_hdvicp2.oem4,2,copy ires_hdvicp2.oem4,3,copy ires_hdvicp2.oem4,4,copy ires_hdvicp2.oem4,5,copy 
	@

ires_hdvicp2.oem4,0,copy : package/lib/lib/coverage/hdvicp2/ires_hdvicp2.oem4
ires_hdvicp2.oem4,1,copy : package/lib/lib/debug/hdvicp2/ires_hdvicp2.oem4
ires_hdvicp2.oem4,2,copy : package/lib/lib/profile/hdvicp2/ires_hdvicp2.oem4
ires_hdvicp2.oem4,3,copy : package/lib/lib/release/hdvicp2/ires_hdvicp2.oem4
ires_hdvicp2.oem4,4,copy : package/lib/lib/whole_program/hdvicp2/ires_hdvicp2.oem4
ires_hdvicp2.oem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/ires_hdvicp2.oem4
.PHONY: ires_hdvicp2.sem4,copy
ires_hdvicp2.sem4,copy : ires_hdvicp2.sem4,0,copy ires_hdvicp2.sem4,1,copy ires_hdvicp2.sem4,2,copy ires_hdvicp2.sem4,3,copy ires_hdvicp2.sem4,4,copy ires_hdvicp2.sem4,5,copy 
	@

ires_hdvicp2.sem4,0,copy : package/lib/lib/coverage/hdvicp2/ires_hdvicp2.sem4
ires_hdvicp2.sem4,1,copy : package/lib/lib/debug/hdvicp2/ires_hdvicp2.sem4
ires_hdvicp2.sem4,2,copy : package/lib/lib/profile/hdvicp2/ires_hdvicp2.sem4
ires_hdvicp2.sem4,3,copy : package/lib/lib/release/hdvicp2/ires_hdvicp2.sem4
ires_hdvicp2.sem4,4,copy : package/lib/lib/whole_program/hdvicp2/ires_hdvicp2.sem4
ires_hdvicp2.sem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/ires_hdvicp2.sem4
.PHONY: iresman_hdvicp2_setup.oem4,copy
iresman_hdvicp2_setup.oem4,copy : iresman_hdvicp2_setup.oem4,0,copy iresman_hdvicp2_setup.oem4,1,copy iresman_hdvicp2_setup.oem4,2,copy iresman_hdvicp2_setup.oem4,3,copy iresman_hdvicp2_setup.oem4,4,copy iresman_hdvicp2_setup.oem4,5,copy 
	@

iresman_hdvicp2_setup.oem4,0,copy : package/lib/lib/coverage/hdvicp2/iresman_hdvicp2_setup.oem4
iresman_hdvicp2_setup.oem4,1,copy : package/lib/lib/debug/hdvicp2/iresman_hdvicp2_setup.oem4
iresman_hdvicp2_setup.oem4,2,copy : package/lib/lib/profile/hdvicp2/iresman_hdvicp2_setup.oem4
iresman_hdvicp2_setup.oem4,3,copy : package/lib/lib/release/hdvicp2/iresman_hdvicp2_setup.oem4
iresman_hdvicp2_setup.oem4,4,copy : package/lib/lib/whole_program/hdvicp2/iresman_hdvicp2_setup.oem4
iresman_hdvicp2_setup.oem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/iresman_hdvicp2_setup.oem4
.PHONY: iresman_hdvicp2_setup.sem4,copy
iresman_hdvicp2_setup.sem4,copy : iresman_hdvicp2_setup.sem4,0,copy iresman_hdvicp2_setup.sem4,1,copy iresman_hdvicp2_setup.sem4,2,copy iresman_hdvicp2_setup.sem4,3,copy iresman_hdvicp2_setup.sem4,4,copy iresman_hdvicp2_setup.sem4,5,copy 
	@

iresman_hdvicp2_setup.sem4,0,copy : package/lib/lib/coverage/hdvicp2/iresman_hdvicp2_setup.sem4
iresman_hdvicp2_setup.sem4,1,copy : package/lib/lib/debug/hdvicp2/iresman_hdvicp2_setup.sem4
iresman_hdvicp2_setup.sem4,2,copy : package/lib/lib/profile/hdvicp2/iresman_hdvicp2_setup.sem4
iresman_hdvicp2_setup.sem4,3,copy : package/lib/lib/release/hdvicp2/iresman_hdvicp2_setup.sem4
iresman_hdvicp2_setup.sem4,4,copy : package/lib/lib/whole_program/hdvicp2/iresman_hdvicp2_setup.sem4
iresman_hdvicp2_setup.sem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/iresman_hdvicp2_setup.sem4
.PHONY: hdvicp2cfg.oem4,copy
hdvicp2cfg.oem4,copy : hdvicp2cfg.oem4,0,copy hdvicp2cfg.oem4,1,copy hdvicp2cfg.oem4,2,copy hdvicp2cfg.oem4,3,copy hdvicp2cfg.oem4,4,copy hdvicp2cfg.oem4,5,copy 
	@

hdvicp2cfg.oem4,0,copy : package/lib/lib/coverage/hdvicp2/hdvicp2cfg.oem4
hdvicp2cfg.oem4,1,copy : package/lib/lib/debug/hdvicp2/hdvicp2cfg.oem4
hdvicp2cfg.oem4,2,copy : package/lib/lib/profile/hdvicp2/hdvicp2cfg.oem4
hdvicp2cfg.oem4,3,copy : package/lib/lib/release/hdvicp2/hdvicp2cfg.oem4
hdvicp2cfg.oem4,4,copy : package/lib/lib/whole_program/hdvicp2/hdvicp2cfg.oem4
hdvicp2cfg.oem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/hdvicp2cfg.oem4
.PHONY: hdvicp2cfg.sem4,copy
hdvicp2cfg.sem4,copy : hdvicp2cfg.sem4,0,copy hdvicp2cfg.sem4,1,copy hdvicp2cfg.sem4,2,copy hdvicp2cfg.sem4,3,copy hdvicp2cfg.sem4,4,copy hdvicp2cfg.sem4,5,copy 
	@

hdvicp2cfg.sem4,0,copy : package/lib/lib/coverage/hdvicp2/hdvicp2cfg.sem4
hdvicp2cfg.sem4,1,copy : package/lib/lib/debug/hdvicp2/hdvicp2cfg.sem4
hdvicp2cfg.sem4,2,copy : package/lib/lib/profile/hdvicp2/hdvicp2cfg.sem4
hdvicp2cfg.sem4,3,copy : package/lib/lib/release/hdvicp2/hdvicp2cfg.sem4
hdvicp2cfg.sem4,4,copy : package/lib/lib/whole_program/hdvicp2/hdvicp2cfg.sem4
hdvicp2cfg.sem4,5,copy : package/lib/lib/whole_program_debug/hdvicp2/hdvicp2cfg.sem4

$(XDCCFGDIR)%.c $(XDCCFGDIR)%.h $(XDCCFGDIR)%.xdl: $(XDCCFGDIR)%.cfg $(XDCROOT)/packages/xdc/cfg/Main.xs | .interfaces
	@$(MSG) "configuring $(_PROG_NAME) from $< ..."
	$(CONFIG) $(_PROG_XSOPTS) xdc.cfg $(_PROG_NAME) $(XDCCFGDIR)$*.cfg $(XDCCFGDIR)$*

.PHONY: release,ti_sdo_fc_ires_hdvicp
ifeq (,$(MK_NOGENDEPS))
-include package/rel/ti_sdo_fc_ires_hdvicp.tar.dep
endif
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: package/package.bld.xml
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: package/build.cfg
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: package/package.xdc.inc
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: iresman_hdvicp.h
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: ires_hdvicp.h
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: iresman_protocol_hdvicp.h
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: _hdvicp.h
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: ires_hdvicp2.h
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: _hdvicp2.h
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: hdvicp2.h
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: iresman_protocol_hdvicp2.h
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: package.bld
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: package/package.cfg.xdc.inc
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: lib/debug/hdvicp2.aem4
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: package/package_ti.sdo.fc.ires.hdvicp.c
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: iresman_hdvicp2.c
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: ires_hdvicp2.c
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: iresman_hdvicp2_setup.c
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: hdvicp2cfg.c
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: lib/release/hdvicp2.aem4
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: lib/profile/hdvicp2.aem4
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: lib/coverage/hdvicp2.aem4
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: lib/whole_program/hdvicp2.aem4
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: lib/whole_program_debug/hdvicp2.aem4
package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml: .force
	@$(MSG) generating external release references $@ ...
	$(XS) $(JSENV) -f $(XDCROOT)/packages/xdc/bld/rel.js $(MK_RELOPTS) . $@

ti_sdo_fc_ires_hdvicp.tar: package/rel/ti_sdo_fc_ires_hdvicp.xdc.inc package/rel/ti_sdo_fc_ires_hdvicp/ti/sdo/fc/ires/hdvicp/package/package.rel.xml
	@$(MSG) making release file $@ "(because of $(firstword $?))" ...
	-$(RM) $@
	$(call MKRELTAR,package/rel/ti_sdo_fc_ires_hdvicp.xdc.inc,package/rel/ti_sdo_fc_ires_hdvicp.tar.dep)


release release,ti_sdo_fc_ires_hdvicp: all ti_sdo_fc_ires_hdvicp.tar
clean:: .clean
	-$(RM) ti_sdo_fc_ires_hdvicp.tar
	-$(RM) package/rel/ti_sdo_fc_ires_hdvicp.xdc.inc
	-$(RM) package/rel/ti_sdo_fc_ires_hdvicp.tar.dep

clean:: .clean
	-$(RM) .libraries $(wildcard .libraries,*)
clean:: 
	-$(RM) .dlls $(wildcard .dlls,*)
#
# The following clean rule removes user specified
# generated files or directories.
#
	-$(RMDIR) lib/

ifneq (clean,$(MAKECMDGOALS))
ifeq (,$(wildcard lib))
    $(shell $(MKDIR) lib)
endif
ifeq (,$(wildcard lib/debug))
    $(shell $(MKDIR) lib/debug)
endif
ifeq (,$(wildcard lib/release))
    $(shell $(MKDIR) lib/release)
endif
ifeq (,$(wildcard lib/profile))
    $(shell $(MKDIR) lib/profile)
endif
ifeq (,$(wildcard lib/coverage))
    $(shell $(MKDIR) lib/coverage)
endif
ifeq (,$(wildcard lib/whole_program))
    $(shell $(MKDIR) lib/whole_program)
endif
ifeq (,$(wildcard lib/whole_program_debug))
    $(shell $(MKDIR) lib/whole_program_debug)
endif
ifeq (,$(wildcard package))
    $(shell $(MKDIR) package)
endif
ifeq (,$(wildcard package/cfg))
    $(shell $(MKDIR) package/cfg)
endif
ifeq (,$(wildcard package/lib))
    $(shell $(MKDIR) package/lib)
endif
ifeq (,$(wildcard package/rel))
    $(shell $(MKDIR) package/rel)
endif
ifeq (,$(wildcard package/internal))
    $(shell $(MKDIR) package/internal)
endif
ifeq (,$(wildcard package/lib/lib))
    $(shell $(MKDIR) package/lib/lib)
endif
ifeq (,$(wildcard package/lib/lib/debug))
    $(shell $(MKDIR) package/lib/lib/debug)
endif
ifeq (,$(wildcard package/lib/lib/debug/hdvicp2))
    $(shell $(MKDIR) package/lib/lib/debug/hdvicp2)
endif
ifeq (,$(wildcard package/lib/lib/debug/hdvicp2/package))
    $(shell $(MKDIR) package/lib/lib/debug/hdvicp2/package)
endif
ifeq (,$(wildcard package/lib/lib/release))
    $(shell $(MKDIR) package/lib/lib/release)
endif
ifeq (,$(wildcard package/lib/lib/release/hdvicp2))
    $(shell $(MKDIR) package/lib/lib/release/hdvicp2)
endif
ifeq (,$(wildcard package/lib/lib/release/hdvicp2/package))
    $(shell $(MKDIR) package/lib/lib/release/hdvicp2/package)
endif
ifeq (,$(wildcard package/lib/lib/profile))
    $(shell $(MKDIR) package/lib/lib/profile)
endif
ifeq (,$(wildcard package/lib/lib/profile/hdvicp2))
    $(shell $(MKDIR) package/lib/lib/profile/hdvicp2)
endif
ifeq (,$(wildcard package/lib/lib/profile/hdvicp2/package))
    $(shell $(MKDIR) package/lib/lib/profile/hdvicp2/package)
endif
ifeq (,$(wildcard package/lib/lib/coverage))
    $(shell $(MKDIR) package/lib/lib/coverage)
endif
ifeq (,$(wildcard package/lib/lib/coverage/hdvicp2))
    $(shell $(MKDIR) package/lib/lib/coverage/hdvicp2)
endif
ifeq (,$(wildcard package/lib/lib/coverage/hdvicp2/package))
    $(shell $(MKDIR) package/lib/lib/coverage/hdvicp2/package)
endif
ifeq (,$(wildcard package/lib/lib/whole_program))
    $(shell $(MKDIR) package/lib/lib/whole_program)
endif
ifeq (,$(wildcard package/lib/lib/whole_program/hdvicp2))
    $(shell $(MKDIR) package/lib/lib/whole_program/hdvicp2)
endif
ifeq (,$(wildcard package/lib/lib/whole_program/hdvicp2/package))
    $(shell $(MKDIR) package/lib/lib/whole_program/hdvicp2/package)
endif
ifeq (,$(wildcard package/lib/lib/whole_program_debug))
    $(shell $(MKDIR) package/lib/lib/whole_program_debug)
endif
ifeq (,$(wildcard package/lib/lib/whole_program_debug/hdvicp2))
    $(shell $(MKDIR) package/lib/lib/whole_program_debug/hdvicp2)
endif
ifeq (,$(wildcard package/lib/lib/whole_program_debug/hdvicp2/package))
    $(shell $(MKDIR) package/lib/lib/whole_program_debug/hdvicp2/package)
endif
endif
clean::
	-$(RMDIR) package

