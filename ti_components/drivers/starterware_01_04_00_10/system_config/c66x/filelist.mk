# This file provides files to be compiled in SRC_COMMON, SRC_<CORE> variables

# Common source files and CFLAGS across all platforms and cores
SRCS_COMMON += interrupt.c dsp_config.c
SRCS_c66x += dsp_wugen.c dsp_icfg.c dsp_xmc.c
SRCS_ASM_COMMON += intvecs.asm

# Nothing beyond this point