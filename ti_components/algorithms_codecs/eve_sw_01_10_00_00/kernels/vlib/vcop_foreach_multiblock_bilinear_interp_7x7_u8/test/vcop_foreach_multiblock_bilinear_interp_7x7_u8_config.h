/* ------------------------------------------------------------------------ */
/*          Copyright (C) 2013 Texas Instruments, Incorporated.             */
/*                          All Rights Reserved.                            */
/* ======================================================================== */

#ifndef _VCOP_FOREACH_MULTIBLOCK_BILINEAR_INTERP_7X7_U8_CONFIG_H_
#define _VCOP_FOREACH_MULTIBLOCK_BILINEAR_INTERP_7X7_U8_CONFIG_H_

#include "configparser.h"
#define MAX_CONFIG_LINE_SIZE     (300)
#define MAX_FILE_NAME_SIZE       (200)
#define MAX_PARAM_STRING_SIZE    (30)
#define MAX_INPUT_LINE_SIZE      (300)
#define MAX_INPUT_VALUE_SIZE      (20)

typedef struct
{
  char           inFileName1[MAX_FILE_NAME_SIZE];
  char           inFileName2[MAX_FILE_NAME_SIZE];
  char           outFileName[MAX_FILE_NAME_SIZE];
  unsigned short input1Stride;
  unsigned short input2Stride;
  unsigned short outputStride;
  unsigned short outBlkWidth;
  unsigned short outBlkHeight;
  unsigned short numKeyPoints;
  unsigned char  numIter;
  int            writeOutput;
  int            seedForRND;
  char           inputSrc[MAX_PARAM_STRING_SIZE];
  char           configLine[MAX_CONFIG_LINE_SIZE];
  char           configParam[MAX_PARAM_STRING_SIZE];

} sforeach_multiblock_bilinear_interp_7x7_u8_Config;

extern sforeach_multiblock_bilinear_interp_7x7_u8_Config gConfig_foreach_multiblock_bilinear_interp_7x7_u8;
extern sTokenMapping gsTokenMap_foreach_multiblock_bilinear_interp_7x7_u8[MAX_ITEMS_TO_PARSE];

#endif