/* ------------------------------------------------------------------------ */
/*          Copyright (C) 2013 Texas Instruments, Incorporated.             */
/*                          All Rights Reserved.                            */
/* ======================================================================== */

#ifndef VCOP_BIN_MORPHOLOGY_MORPH_DIFF_H_
#define VCOP_BIN_MORPHOLOGY_MORPH_DIFF_H_

#include "configparser.h"
#define FILE_NAME_SIZE    (256)
#define DESCRIPTION_SIZE  (256)

typedef struct
{
  uint8_t        testCaseName[FILE_NAME_SIZE];
  uint8_t        performanceTestcase;
  uint8_t        inImageA[FILE_NAME_SIZE];
  uint8_t        inImageB[FILE_NAME_SIZE];
  uint8_t        outImage[FILE_NAME_SIZE];
  uint16_t       blkWidth;
  uint16_t       blkStride;
  uint16_t       blkHeight;
  uint16_t       dataAbitShift;
  uint16_t       dataBbitShift;
  uint8_t        desc[DESCRIPTION_SIZE];
} sBin_Morphology_Morph_Diff_Config;

extern sBin_Morphology_Morph_Diff_Config gConfig_bin_morphology_morph_diff;
extern sTokenMapping gsTokenMap_bin_morphology_morph_diff[MAX_ITEMS_TO_PARSE];

#endif  /* VCOP_BIN_MORPHOLOGY_MORPH_DIFF_H_ */
