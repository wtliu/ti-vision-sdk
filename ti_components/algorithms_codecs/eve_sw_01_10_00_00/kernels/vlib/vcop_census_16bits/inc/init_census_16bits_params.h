/*==========================================================================*/
/*      Copyright (C) 2009-2014 Texas Instruments Incorporated.             */
/*                      All Rights Reserved                                 */
/*==========================================================================*/

/**
 *******************************************************************************
 *  @func          init_census_16bits_params
 *  @brief         This function initializes some parameters passed to vcop_census_16bits()
 *  @param [in]    winWidth : width of the census transform support windows
 *  @param [in]    winHeight : height of the census transform support windows
 *  @param [in]    winHorzStep : horizontal step between each orientation in the support window. Typically 1 or 2.
 *  @param [in]    winVertStep : vertical step between each orientation in the support window. Typically 1 or 2.
 *  @param [in]    computeWidth : number of bit strings produced in each output row
 *  @param [in]    computeWidth : number of rows produced
 *  @param [in]    outStride : Horizontal stride of the output block in bytes
 *  @params[out]   pOffset: pointer to an array of 8 half-words, will be initialized by init_census_16bits_params(). Preferably in WBUF.
 *  @params[in]    sizeOffsetArray: size in bytes of the array pointed by pOffset. Should be 16.
 *  @params[out]   pCodeWordMask: pointer to an array which will be initialized by init_census_16bits_params(). Preferably in WBUF.
 *  @params[in]    sizeCodeWordMarkArray: size in bytes of the array pointed by pCodeWordMask. Should be (winWidth*winHeight+7)/8.
 *  @params[out]   pRowMask: pointer to an array which will be initialized by init_census_16bits_params(). Preferably in WBUF.
 *  @params[in]    sizeRowMaskArray: size in bytes of the array pointed by pCodeWordMask. Should be (computeHeight+7)/8.
 *  @return         �   0: no error
 *                  �   -1: Constraint outStride >= ((_CENSUS_WIN_SIZE(winWidth, winHeight, winHorzStep, winVertStep)+7)/8)*computeWidth not respected.
 *                  �   -2: Constraint outStride multiple of 4, not respected.
 *                  �   -3: Constraint outStride not multiple of 32, not respected.
 *                  �   -4: Constraint of sizeOffsetArray to be 16 bytes, not respected.
 *                  �   5: Constraint of sizeCodeWordMarkArray to be (winWidth*winHeight+7)/8 bytes, not respected.
 *                  �   6: Constraint of sizeRowMaskArray to be (computeHeight+7)/8 bytes, not respected.

 *******************************************************************************
 */
#ifndef _INIT_CENSUS_H_
#define _INIT_CENSUS_H_

#include <stdint.h>

int32_t init_census_16bits_params
(
        uint8_t winWidth, /* windWidth * winHeight msut be > 8 */
        uint8_t winHeight,
        uint8_t winHorzStep,
        uint8_t winVertStep,
        uint16_t computeWidth,
        uint16_t computeHeight,
        uint16_t outStride, /* in bytes, must multiple of 4 but not multiple of 32 bytes*/
        uint16_t pOffset[], /* Point to an array of 8 bytes. Call init_census_16bits_params() to initialize content pointed by pOffset*/
        uint8_t sizeOffsetArray, /* Should be 8 */
        uint8_t  pCodeWordMask[], /* Point to an array of (_CENSUS_WIN_SIZE(winWidth, winHeight, winHorzStep, winVertStep)+7)/8 bytes. Call init_census_16bits_params() to initialize content pointed by pCodeWordMask */
        int32_t sizeCodeWordMarkArray, /* Should be (_CENSUS_WIN_SIZE(winWidth, winHeight, winHorzStep, winVertStep)+7)/8 */
        uint8_t  pRowMask[],/* Point to an array of (computeHeight+7)/8 bytes. Call init_census_8bits_params() to initialize content pointed by pRowMask */
        int32_t sizeRowMaskArray, /* Should be (computeHeight+7)/8 */
        uint16_t *scratchStride
);

#endif