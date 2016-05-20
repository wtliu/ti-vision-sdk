#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.arm.elf.M4{1,0,5.2,5
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/release/ti.trace_smp/package/package_ti.trace.oem4.dep
package/lib/lib/release/ti.trace_smp/package/package_ti.trace.oem4.dep: ;
endif

package/lib/lib/release/ti.trace_smp/package/package_ti.trace.oem4: | .interfaces
package/lib/lib/release/ti.trace_smp/package/package_ti.trace.oem4: package/package_ti.trace.c lib/release/ti.trace_smp.aem4.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4 $< ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --float_support=vfplib --abi=eabi -eo.oem4 -ea.sem4  -ms -g   -DSMP -Dxdc_target_name__=M4 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M4.rootDir)/include/rts -I$(ti.targets.arm.elf.M4.rootDir)/include  -fs=./package/lib/lib/release/ti.trace_smp/package -fr=./package/lib/lib/release/ti.trace_smp/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/release/ti.trace_smp/package -s oem4 $< -C   -qq -pdsw225 --endian=little -mv7M4 --float_support=vfplib --abi=eabi -eo.oem4 -ea.sem4  -ms -g   -DSMP -Dxdc_target_name__=M4 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M4.rootDir)/include/rts -I$(ti.targets.arm.elf.M4.rootDir)/include  -fs=./package/lib/lib/release/ti.trace_smp/package -fr=./package/lib/lib/release/ti.trace_smp/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/release/ti.trace_smp/package/package_ti.trace.oem4: export C_DIR=
package/lib/lib/release/ti.trace_smp/package/package_ti.trace.oem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

package/lib/lib/release/ti.trace_smp/package/package_ti.trace.sem4: | .interfaces
package/lib/lib/release/ti.trace_smp/package/package_ti.trace.sem4: package/package_ti.trace.c lib/release/ti.trace_smp.aem4.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4 -n $< ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --float_support=vfplib --abi=eabi -eo.oem4 -ea.sem4  -ms -g   -DSMP -Dxdc_target_name__=M4 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M4.rootDir)/include/rts -I$(ti.targets.arm.elf.M4.rootDir)/include  -fs=./package/lib/lib/release/ti.trace_smp/package -fr=./package/lib/lib/release/ti.trace_smp/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/release/ti.trace_smp/package -s oem4 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --float_support=vfplib --abi=eabi -eo.oem4 -ea.sem4  -ms -g   -DSMP -Dxdc_target_name__=M4 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M4.rootDir)/include/rts -I$(ti.targets.arm.elf.M4.rootDir)/include  -fs=./package/lib/lib/release/ti.trace_smp/package -fr=./package/lib/lib/release/ti.trace_smp/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/release/ti.trace_smp/package/package_ti.trace.sem4: export C_DIR=
package/lib/lib/release/ti.trace_smp/package/package_ti.trace.sem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/release/ti.trace_smp/SysMin.oem4.dep
package/lib/lib/release/ti.trace_smp/SysMin.oem4.dep: ;
endif

package/lib/lib/release/ti.trace_smp/SysMin.oem4: | .interfaces
package/lib/lib/release/ti.trace_smp/SysMin.oem4: SysMin.c lib/release/ti.trace_smp.aem4.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4 $< ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --float_support=vfplib --abi=eabi -eo.oem4 -ea.sem4  -ms -g   -DSMP -Dxdc_target_name__=M4 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M4.rootDir)/include/rts -I$(ti.targets.arm.elf.M4.rootDir)/include  -fs=./package/lib/lib/release/ti.trace_smp -fr=./package/lib/lib/release/ti.trace_smp -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/release/ti.trace_smp -s oem4 $< -C   -qq -pdsw225 --endian=little -mv7M4 --float_support=vfplib --abi=eabi -eo.oem4 -ea.sem4  -ms -g   -DSMP -Dxdc_target_name__=M4 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M4.rootDir)/include/rts -I$(ti.targets.arm.elf.M4.rootDir)/include  -fs=./package/lib/lib/release/ti.trace_smp -fr=./package/lib/lib/release/ti.trace_smp
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/release/ti.trace_smp/SysMin.oem4: export C_DIR=
package/lib/lib/release/ti.trace_smp/SysMin.oem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

package/lib/lib/release/ti.trace_smp/SysMin.sem4: | .interfaces
package/lib/lib/release/ti.trace_smp/SysMin.sem4: SysMin.c lib/release/ti.trace_smp.aem4.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4 -n $< ...
	$(ti.targets.arm.elf.M4.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --float_support=vfplib --abi=eabi -eo.oem4 -ea.sem4  -ms -g   -DSMP -Dxdc_target_name__=M4 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M4.rootDir)/include/rts -I$(ti.targets.arm.elf.M4.rootDir)/include  -fs=./package/lib/lib/release/ti.trace_smp -fr=./package/lib/lib/release/ti.trace_smp -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/release/ti.trace_smp -s oem4 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --float_support=vfplib --abi=eabi -eo.oem4 -ea.sem4  -ms -g   -DSMP -Dxdc_target_name__=M4 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M4.rootDir)/include/rts -I$(ti.targets.arm.elf.M4.rootDir)/include  -fs=./package/lib/lib/release/ti.trace_smp -fr=./package/lib/lib/release/ti.trace_smp
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/release/ti.trace_smp/SysMin.sem4: export C_DIR=
package/lib/lib/release/ti.trace_smp/SysMin.sem4: PATH:=$(ti.targets.arm.elf.M4.rootDir)/bin/:$(PATH)

clean,em4 ::
	-$(RM) package/lib/lib/release/ti.trace_smp/package/package_ti.trace.oem4
	-$(RM) package/lib/lib/release/ti.trace_smp/SysMin.oem4
	-$(RM) package/lib/lib/release/ti.trace_smp/package/package_ti.trace.sem4
	-$(RM) package/lib/lib/release/ti.trace_smp/SysMin.sem4

lib/release/ti.trace_smp.aem4: package/lib/lib/release/ti.trace_smp/package/package_ti.trace.oem4 package/lib/lib/release/ti.trace_smp/SysMin.oem4 lib/release/ti.trace_smp.aem4.mak

clean::
	-$(RM) lib/release/ti.trace_smp.aem4.mak