/*==========================================================================*/
/*      Copyright (C) 2009-2013 Texas Instruments Incorporated.             */
/*                      All Rights Reserved                                 */
/*==========================================================================*/
/*-----------------------------------------------------------------*/
/* NAME : vcop_rgb24_rgb : Test bench data                         */ 
/*                                                                 */
/* DESCRIPTION:                                                    */
/* The function "vcop_rgb24_rgb" accepts packed 24-bit data in     */
/* the form of 8-bit "r", "g" and "b", and writes out seperate     */
/* 8-bit "r", 8-bit "g" and "b". The reason for having this        */
/* function, is to allow the vector core to work in it's           */
/* natural format of looking at similar data together, rather      */
/* than diverse data.                                              */
/*                                                                 */
/* API:                                                            */
/*                                                                 */
/* void vcop_rgb24_rgb                                             */
/* (                                                               */
/*     unsigned int   rgb24[],                                     */
/*     unsigned int   npixels,                                     */
/*     unsigned char  r[],                                         */
/*     unsigned char  g[],                                         */
/*     unsigned char  b[]                                          */
/* )                                                               */
/*                                                                 */
/* The function "vcop_rgb24_rgb" accepts packed 24-bit "r", "g"    */
/* and "b" data, for "npixels" pixels, and writing it into         */
/* seperate output buffers of "r", "g" and "b". Since we are       */
/* packing 24-bit pixels in 32-bit memory, the actual size of      */
/* the input buffer "rgb24" is (3 * npixels) >> 2 and each of      */
/* the output buffers "r", "g" and "b" are of size "npixels".      */
/*                                                                 */
/*=================================================================*/
/*-----------------------------------------------------------------*/

#ifndef _VCOP_RGB24_RGB_H
#define _VCOP_RGB24_RGB_H  1

void vcop_rgb24_rgb
(
    unsigned int   rgb24[],
    unsigned int   npixels,
    unsigned char  r[],
    unsigned char  g[],
    unsigned char  b[]
);

#endif

/*-----------------------------------------------------------------*/
/* End of file: vcop_rgb24_rgb_c.h                                 */
/*=================================================================*/
/*-----------------------------------------------------------------*/
