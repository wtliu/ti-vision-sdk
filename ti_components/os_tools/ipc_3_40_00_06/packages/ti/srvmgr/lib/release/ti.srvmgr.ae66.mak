#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.elf.C66{1,0,7.4,2
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/release/ti.srvmgr/package/package_ti.srvmgr.oe66.dep
package/lib/release/ti.srvmgr/package/package_ti.srvmgr.oe66.dep: ;
endif

package/lib/release/ti.srvmgr/package/package_ti.srvmgr.oe66: | .interfaces
package/lib/release/ti.srvmgr/package/package_ti.srvmgr.oe66: package/package_ti.srvmgr.c lib/release/ti.srvmgr.ae66.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle66 $< ...
	$(ti.targets.elf.C66.rootDir)/bin/cl6x -c  -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  -Dxdc__strict -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/release/ti.srvmgr/package -fr=./package/lib/release/ti.srvmgr/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/release/ti.srvmgr/package -s oe66 $< -C   -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  -Dxdc__strict -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/release/ti.srvmgr/package -fr=./package/lib/release/ti.srvmgr/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/release/ti.srvmgr/package/package_ti.srvmgr.oe66: export C_DIR=
package/lib/release/ti.srvmgr/package/package_ti.srvmgr.oe66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

package/lib/release/ti.srvmgr/package/package_ti.srvmgr.se66: | .interfaces
package/lib/release/ti.srvmgr/package/package_ti.srvmgr.se66: package/package_ti.srvmgr.c lib/release/ti.srvmgr.ae66.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle66 -n $< ...
	$(ti.targets.elf.C66.rootDir)/bin/cl6x -c -n -s --symdebug:none -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  -Dxdc__strict -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/release/ti.srvmgr/package -fr=./package/lib/release/ti.srvmgr/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/release/ti.srvmgr/package -s oe66 $< -C  -n -s --symdebug:none -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  -Dxdc__strict -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/release/ti.srvmgr/package -fr=./package/lib/release/ti.srvmgr/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/release/ti.srvmgr/package/package_ti.srvmgr.se66: export C_DIR=
package/lib/release/ti.srvmgr/package/package_ti.srvmgr.se66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/release/ti.srvmgr/ServiceMgr.oe66.dep
package/lib/release/ti.srvmgr/ServiceMgr.oe66.dep: ;
endif

package/lib/release/ti.srvmgr/ServiceMgr.oe66: | .interfaces
package/lib/release/ti.srvmgr/ServiceMgr.oe66: ServiceMgr.c lib/release/ti.srvmgr.ae66.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle66 $< ...
	$(ti.targets.elf.C66.rootDir)/bin/cl6x -c  -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  -Dxdc__strict -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/release/ti.srvmgr -fr=./package/lib/release/ti.srvmgr -fc $<
	$(MKDEP) -a $@.dep -p package/lib/release/ti.srvmgr -s oe66 $< -C   -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  -Dxdc__strict -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/release/ti.srvmgr -fr=./package/lib/release/ti.srvmgr
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/release/ti.srvmgr/ServiceMgr.oe66: export C_DIR=
package/lib/release/ti.srvmgr/ServiceMgr.oe66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

package/lib/release/ti.srvmgr/ServiceMgr.se66: | .interfaces
package/lib/release/ti.srvmgr/ServiceMgr.se66: ServiceMgr.c lib/release/ti.srvmgr.ae66.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle66 -n $< ...
	$(ti.targets.elf.C66.rootDir)/bin/cl6x -c -n -s --symdebug:none -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  -Dxdc__strict -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/release/ti.srvmgr -fr=./package/lib/release/ti.srvmgr -fc $<
	$(MKDEP) -a $@.dep -p package/lib/release/ti.srvmgr -s oe66 $< -C  -n -s --symdebug:none -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -g  -Dxdc__strict -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/release/ti.srvmgr -fr=./package/lib/release/ti.srvmgr
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/release/ti.srvmgr/ServiceMgr.se66: export C_DIR=
package/lib/release/ti.srvmgr/ServiceMgr.se66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

clean,e66 ::
	-$(RM) package/lib/release/ti.srvmgr/package/package_ti.srvmgr.oe66
	-$(RM) package/lib/release/ti.srvmgr/ServiceMgr.oe66
	-$(RM) package/lib/release/ti.srvmgr/package/package_ti.srvmgr.se66
	-$(RM) package/lib/release/ti.srvmgr/ServiceMgr.se66

lib/release/ti.srvmgr.ae66: package/lib/release/ti.srvmgr/package/package_ti.srvmgr.oe66 package/lib/release/ti.srvmgr/ServiceMgr.oe66 lib/release/ti.srvmgr.ae66.mak

clean::
	-$(RM) lib/release/ti.srvmgr.ae66.mak