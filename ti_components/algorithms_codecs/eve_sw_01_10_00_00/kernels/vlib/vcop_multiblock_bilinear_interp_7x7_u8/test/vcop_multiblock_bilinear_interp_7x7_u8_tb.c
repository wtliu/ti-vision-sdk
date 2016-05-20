/*==========================================================================*/
/*      Copyright (C) 2009-2013 Texas Instruments Incorporated.             */
/*                      All Rights Reserved                                 */
/*==========================================================================*/
/*                                                                          */
/*  NAME                                                                    */
/*      vcop_multiblock_bilinear_interp_7x7_u8_tb.c                         */
/*                                                                          */
/*  Test bench file for testing the VCOP kernel for computing bilinear      */
/*  interpolation of image pixels function with C reference output          */
/*                                                                          */
/*  USAGE                                                                   */
/*      This code contains a driver program for testing the function        */
/*      'vcop_multiblock_bilinear_interp_7x7_u8' function with a random     */
/*      input or file based inputs                                          */
/*                                                                          */
/*  This test bench then compares the results with the C reference output   */
/*  and prints a pass/fail message.                                         */
/*                                                                          */
/*  To build the executable type:                                           */
/*  gmake                                                                   */
/*                                                                          */
/*  @author Venkat R Peddigari (a0393744@ti.com)                            */
/*                                                                          */
/*  @version 1.0 (November 2013) : Base version.                            */
/*                                                                          */
/*==========================================================================*/

//#include  <unistd.h>
#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include "vcop.h"
#include "eve_profile.h"
#include "vcop_multiblock_bilinear_interp_7x7_u8_config.h"
#include "vcop_multiblock_bilinear_interp_7x7_u8_cn.h"

#if VCOP_HOST_EMULATION
#include "vcop_host.h"
#include "../src_kernelC/vcop_multiblock_bilinear_interp_7x7_u8_kernel.k"
#else
#include "vcop_multiblock_bilinear_interp_7x7_u8_kernel.h"
#endif

#define CONFIG_LIST_FILE_NAME    ("../testvecs/config/config_list.txt")

//#define __DEBUG
#define COMPARE_REFERENCE
#define NUM_ITER (1)

#define NUM_KEYPOINTS (8)
#define BLOCK_WIDTH   (8)
#define BLOCK_HEIGHT  (7)
#define BLOCK_OFFSET  (10)
#define IMG_STRIDE    (NUM_KEYPOINTS * BLOCK_OFFSET)
#define IMG_HEIGHT    (10)

#define WEIGHTS_INP_STRIDE (NUM_KEYPOINTS)
#define WEIGHTS_INP_HEIGHT (4)

#define OUT_STRIDE (BLOCK_WIDTH)
#define OUT_HEIGHT (NUM_KEYPOINTS * (BLOCK_HEIGHT))

#pragma DATA_SECTION(IMAGE, "Adata");
static unsigned char IMAGE[IMG_STRIDE*IMG_HEIGHT] = {0x00};

#pragma DATA_SECTION(WEIGHTS_INP, "Bdata");
static unsigned short WEIGHTS_INP[WEIGHTS_INP_STRIDE*WEIGHTS_INP_HEIGHT] = {0x00};

#pragma DATA_SECTION(BILINEAR_INTERP_OUT, "Cdata");
static unsigned char  BILINEAR_INTERP_OUT[OUT_HEIGHT*OUT_STRIDE] = {0x00};

#pragma DATA_SECTION(REF_BILINEAR_INTERP_OUT, "Eoutdata");
static unsigned char  REF_BILINEAR_INTERP_OUT[OUT_HEIGHT*OUT_STRIDE] = {0x00};

#pragma DATA_SECTION(C_REF_TRUTH_OUT, "Eoutdata");
static unsigned char  C_REF_TRUTH_OUT[OUT_HEIGHT*OUT_STRIDE] = {0x00};

char * moveToNextElement(char *in, char *LinePtr)
{
  LinePtr += strlen(in);
  while((LinePtr[0] == ' ')||(LinePtr[0] == '	'))
  {
    LinePtr++;
  }
  return(LinePtr);
}

void fillDefaultConfig(smultiblock_bilinear_interp_7x7_u8_Config * params)
{
  strcpy(params->inputSrc, "RND_PTRN");
  params->input1Stride     = IMG_STRIDE;
  params->input2Stride     = WEIGHTS_INP_STRIDE;
  params->outputStride     = OUT_STRIDE;
  params->blkWidth         = BLOCK_WIDTH;
  params->blkHeight        = BLOCK_HEIGHT;
  params->blkOffset        = BLOCK_OFFSET;
  params->numKeyPoints     = NUM_KEYPOINTS;
  params->numIter          = NUM_ITER;
  params->writeOutput      = 0;
  params->seedForRND       = 0;
}

int writeOutputFile(unsigned char * output, smultiblock_bilinear_interp_7x7_u8_Config * params)
{
    FILE * fp;
    int i,j,k;
    fp = fopen(params->outFileName, "w+");
    if(fp== NULL)
    {
        printf("Error at line: %5d : in file %22s, of function : %s \n",__LINE__, __FILE__,__FUNCTION__);
        return (-1);
    }

    for(k = 0; k < params->numKeyPoints; k++)
    {
        for(j = 0; j < (params->blkHeight); j++)
        {
            for(i = 0; i < (params->blkWidth); i++)
            {
                if(i < ((params->blkWidth)-1))
                {
                    fprintf(fp, "%d   ", output[k*params->outputStride*(params->blkHeight)+j*params->outputStride+i]);
                }
                else
                {
                    fprintf(fp, "%d\n", output[k*params->outputStride*(params->blkHeight)+j*params->outputStride+i]);
                }
            }
        }
    }
    fclose(fp);

    return (0);
}

int readInputFile(void * input, unsigned short w, unsigned short h, unsigned short stride, char * filename, int dataType)
{
    int i, j;
    FILE * fp;
    char * LinePtr;
    int status;
    int value;
    char inputLine[MAX_INPUT_LINE_SIZE];
    char inputValue[MAX_INPUT_VALUE_SIZE];

    fp = fopen(filename, "r");
    if(fp== NULL)
    {
        printf("Error at line: %5d : in file %22s, of function : %s \n",__LINE__, __FILE__,__FUNCTION__);
        return (-1);
    }

    for(i = 0; i < h; i++)
    {
        memset(inputLine, 0, MAX_INPUT_LINE_SIZE);
        status = (int)fgets(inputLine,MAX_CONFIG_LINE_SIZE,fp);
        if ((status == EOF) || (status == 0))
        {
            printf("Error at line: %5d : in file %22s, of function : %s \n",__LINE__, __FILE__,__FUNCTION__);
            return(-1);
        }
        LinePtr = inputLine;
        for(j = 0; j < w; j++)
        {
            sscanf(LinePtr, "%d",&value);
            sscanf(LinePtr, "%s",inputValue);
            if(dataType == 5)
            {
              int * ptr = (int * )input;
              ptr[i*stride+j] = value;
            }
            else if(dataType == 4)
            {
              unsigned int * ptr = (unsigned int * )input;
              ptr[i*stride+j] = value;
            }
            else if(dataType == 3)
            {
              short * ptr = (short * )input;
              ptr[i*stride+j] = value;
            }
            else if(dataType == 2)
            {
              unsigned short * ptr = (unsigned short * )input;
              ptr[i*stride+j] = value;
            }
            else if(dataType == 1)
            {
              char * ptr = (char * )input;
              ptr[i*stride+j] = value;
            }
            else if(dataType ==0)
            {
              unsigned char * ptr = (unsigned char * )input;
              ptr[i*stride+j] = value;
            }
            LinePtr = moveToNextElement(inputValue,LinePtr);
        }
    }

  fclose(fp);
  return(0);
}

static void CreateRandPatternU8(unsigned char *input, unsigned short w, unsigned short h, unsigned short stride)
{
    int i, j;

#ifdef __DEBUG
    printf("Input Image & Weight Input For Bilinear Interpolation 7x7 U8 Kernel:\n");
#endif

    for(i = 0; i < h; i++)
    {
        for(j = 0; j < w; j++)
        {
            input[i*stride+j] = (rand() & 0xFF);
#ifdef __DEBUG
            printf("%4d ",  input[i*stride+j]);
#endif
        }
#ifdef __DEBUG
        printf("\n");
#endif
    }
}

static void CreateRandPatternWtU16(unsigned short *input, unsigned short w, unsigned short h, unsigned short stride)
{
    int i, j;
    unsigned short dx, dy, w0, w1, w2, w3;

#ifdef __DEBUG
    printf("Input Image & Weight Input For Bilinear Interpolation 7x7 U8 Kernel:\n");
#endif

    for(j = 0; j < w; j++)
    {
        dx = (rand() & 0xF);
        dy = (rand() & 0xF);

        w0 = dx * dy;
        w1 = (15 - dx) * dy;
        w2 = dx * (15 - dy);
        w3 = (15 - dx) * (15 - dy);
        input[j] =  w0;
        input[stride + j] = w1;
        input[2*stride + j] = w2;
        input[3*stride + j] = w3;
    }

    for(i = 0; i < h; i++)
    {
        for(j = 0; j < w; j++)
        {
#ifdef __DEBUG
            printf("%4d ",  input[i*stride+j]);
#endif
        }
#ifdef __DEBUG
        printf("\n");
#endif
    }
}

void test_multiblock_bilinear_interp_7x7_u8_c_reference(smultiblock_bilinear_interp_7x7_u8_Config * params)
{
    int i, j, k, index, fail;
    char refFile[] = "../testvecs/reference/image_pix_bilinear_interp_output.txt";

    if(strcmp(params->inputSrc, "RND_PTRN")==0)
    {
      printf("Pattern Generation Seed = %d\n", params->seedForRND);
      srand(params->seedForRND);
      CreateRandPatternU8(IMAGE, IMG_STRIDE, IMG_HEIGHT, IMG_STRIDE);
      CreateRandPatternWtU16(WEIGHTS_INP, params->numKeyPoints, WEIGHTS_INP_HEIGHT, params->input2Stride);
    }
    else if(strcmp(params->inputSrc, "TXT_FILE")==0)
    {
       readInputFile(IMAGE, params->input1Stride, IMG_HEIGHT, params->input1Stride, params->inFileName1, 0);
       readInputFile(WEIGHTS_INP, params->numKeyPoints, WEIGHTS_INP_HEIGHT, params->input2Stride, params->inFileName2, 2);
       readInputFile(C_REF_TRUTH_OUT, (params->blkWidth), (params->blkHeight)*params->numKeyPoints, params->outputStride, refFile, 0);
    #ifdef __DEBUG
        printf("IMAGE INPUT FROM FILE:\n");
    #endif

        for(i = 0; i < IMG_HEIGHT; i++)
        {
            for(j = 0; j < params->input1Stride; j++)
            {
    #ifdef __DEBUG
                printf("%4d ",  IMAGE[i*params->input1Stride+j]);
    #endif
            }
    #ifdef __DEBUG
            printf("\n");
    #endif
        }

    #ifdef __DEBUG
        printf("WEIGHT INPUT FROM FILE:\n");
    #endif

        for(i = 0; i < WEIGHTS_INP_HEIGHT; i++)
        {
            for(j = 0; j < params->numKeyPoints; j++)
            {
    #ifdef __DEBUG
                printf("%4d ",  WEIGHTS_INP[i*params->input2Stride+j]);
    #endif
            }
    #ifdef __DEBUG
            printf("\n");
    #endif
        }
    }

    /*---------------------------------------------------------------------*/
    /*  Function call to the Natural-C API to be tested                    */
    /*---------------------------------------------------------------------*/
    vcop_multiblock_bilinear_interp_7x7_u8_cn((IMAGE+IMG_STRIDE+1), WEIGHTS_INP, REF_BILINEAR_INTERP_OUT, params->input1Stride, params->input2Stride,
                                              params->outputStride, params->blkWidth, params->blkHeight, params->blkOffset, 8, params->numKeyPoints);

    /*---------------------------------------------------------------------*/
    /*  Compare the results of output arrays with expected output arrays.  */
    /*---------------------------------------------------------------------*/
    fail = 0;
#ifdef __DEBUG
    printf("\n");
#endif
    for(k = 0; k < params->numKeyPoints; k++)
    {
        for(j = 0; j < (params->blkHeight); j++)
        {
            for(i = 0; i < (params->blkWidth); i++)
            {
                index = k*params->outputStride*(params->blkHeight)+j*params->outputStride+i;
                if(C_REF_TRUTH_OUT[index] != REF_BILINEAR_INTERP_OUT[index])
                {
                    fail = 1;
                    //printf("C Reference Output = %d, C Reference TRUTH = %d, i = %d\n",REF_BILINEAR_INTERP_OUT[index], C_REF_TRUTH_OUT[index], index);
                    //break;
                }
#ifdef __DEBUG
                printf("%3d ",REF_BILINEAR_INTERP_OUT[index]);
#endif
            }
#ifdef __DEBUG
        printf("\n");
#endif
        }
    }
    printf(fail ? "FAIL\n":"PASS\n");

    if(params->writeOutput)
    {
      writeOutputFile(REF_BILINEAR_INTERP_OUT, params);
    }
}

void test_multiblock_bilinear_interp_7x7_u8_vcop(smultiblock_bilinear_interp_7x7_u8_Config * params)
{
    int i, j, k, index, iter, fail = 0, status = 0;

    profiler_init();

    if(strcmp(params->inputSrc, "RND_PTRN")==0)
    {
      printf("Pattern Generation Seed = %d\n", params->seedForRND);
      srand(params->seedForRND);
      CreateRandPatternU8(IMAGE, IMG_STRIDE, IMG_HEIGHT, IMG_STRIDE);
      CreateRandPatternWtU16(WEIGHTS_INP, params->numKeyPoints, WEIGHTS_INP_HEIGHT, params->input2Stride);
    }
    else if(strcmp(params->inputSrc, "TXT_FILE")==0)
    {
       readInputFile(IMAGE, params->input1Stride, IMG_HEIGHT, params->input1Stride, params->inFileName1, 0);
       readInputFile(WEIGHTS_INP, params->numKeyPoints, WEIGHTS_INP_HEIGHT, params->input2Stride, params->inFileName2, 0);
    #ifdef __DEBUG
        printf("IMAGE INPUT FROM FILE:\n");
    #endif

        for(i = 0; i < IMG_HEIGHT; i++)
        {
            for(j = 0; j < params->input1Stride; j++)
            {
    #ifdef __DEBUG
                printf("%4d ",  IMAGE[i*params->input1Stride+j]);
    #endif
            }
    #ifdef __DEBUG
            printf("\n");
    #endif
        }

    #ifdef __DEBUG
        printf("WEIGHT INPUT FROM FILE:\n");
    #endif

        for(i = 0; i < WEIGHTS_INP_HEIGHT; i++)
        {
            for(j = 0; j < params->numKeyPoints; j++)
            {
    #ifdef __DEBUG
                printf("%4d ",  WEIGHTS_INP[i*params->input2Stride+j]);
    #endif
            }
    #ifdef __DEBUG
            printf("\n");
    #endif
        }
    }

    printf("Output Block size = %dx%d \n", params->blkWidth, (params->blkHeight * params->numKeyPoints));

#if VCOP_HOST_EMULATION
#else
    VCOP_BUF_SWITCH_SET(WBUF_SYST, IBUFHB_SYST, IBUFLB_SYST, IBUFHA_SYST, IBUFLA_SYST);

    vcop_multiblock_bilinear_interp_7x7_u8_init((IMAGE+IMG_STRIDE+1), WEIGHTS_INP, BILINEAR_INTERP_OUT, params->input1Stride, params->input2Stride,
                                              params->outputStride, params->blkWidth, params->blkHeight, params->blkOffset, 8, params->numKeyPoints, __pblock_vcop_multiblock_bilinear_interp_7x7_u8);
#endif

    for (iter = 0; iter <  params->numIter; iter++)
    {
        printf("Iteration %d:\n", iter);
#ifdef COMPARE_REFERENCE
        /*---------------------------------------------------------------------*/
        /*  Function call to the Natural-C API to generate reference output    */
        /*---------------------------------------------------------------------*/
        vcop_multiblock_bilinear_interp_7x7_u8_cn((IMAGE+IMG_STRIDE+1), WEIGHTS_INP, REF_BILINEAR_INTERP_OUT, params->input1Stride, params->input2Stride,
                                                  params->outputStride, params->blkWidth, params->blkHeight, params->blkOffset, 8 ,params->numKeyPoints);

#endif
        profiler_start();
#if VCOP_HOST_EMULATION
    vcop_multiblock_bilinear_interp_7x7_u8((IMAGE+IMG_STRIDE+1), WEIGHTS_INP, BILINEAR_INTERP_OUT, params->input1Stride, params->input2Stride,
                                              params->outputStride, params->blkWidth, params->blkHeight, params->blkOffset, 8, params->numKeyPoints);
#else
        VCOP_BUF_SWITCH_SET(WBUF_VCOP, IBUFHB_VCOP, IBUFLB_VCOP,
                IBUFHA_VCOP, IBUFLA_VCOP);

        /*---------------------------------------------------------------------*/
        /*  Function call to the VCOP-C API to be tested                       */
        /*---------------------------------------------------------------------*/
        vcop_multiblock_bilinear_interp_7x7_u8_vloops(__pblock_vcop_multiblock_bilinear_interp_7x7_u8);
        _vcop_vloop_done();

        VCOP_BUF_SWITCH_SET(WBUF_SYST, IBUFHB_SYST, IBUFLB_SYST,
                        IBUFHA_SYST, IBUFLA_SYST);
#endif
        profiler_end();

#ifdef COMPARE_REFERENCE
        /*---------------------------------------------------------------------*/
        /*  Compare the results of output arrays with expected output arrays.  */
        /*---------------------------------------------------------------------*/
        fail = 0;
    #ifdef __DEBUG
        printf("\n");
    #endif
        for(k = 0; k < params->numKeyPoints; k++)
        {
            for(j = 0; j < (params->blkHeight); j++)
            {
                for(i = 0; i < (params->blkWidth); i++)
                {
                    index = k*params->outputStride*(params->blkHeight)+j*params->outputStride+i;
                    if(BILINEAR_INTERP_OUT[index] != REF_BILINEAR_INTERP_OUT[index])
                    {
                        fail = 1;
                        printf("C Reference Output = %d, VCOP Output = %d, i = %d\n",REF_BILINEAR_INTERP_OUT[index], BILINEAR_INTERP_OUT[index], index);
                        break;
                    }
    #ifdef __DEBUG
                    printf("%3d ",BILINEAR_INTERP_OUT[index]);
    #endif
                }
    #ifdef __DEBUG
            printf("\n");
    #endif
            }
        }
        printf(fail ? "FAIL\n":"PASS\n");
        status |= fail;
#endif
    }

    profiler_deinit();

    printf(status ? "test_multiblock_bilinear_interp_7x7_u8: FAIL\n":"test_multiblock_bilinear_interp_7x7_u8: PASS\n");

    if(params->writeOutput)
    {
      writeOutputFile(BILINEAR_INTERP_OUT, params);
    }
}

int main()
{
  FILE * fp;
  char * LinePtr;
  int status;
  int lineNum = -1;
  smultiblock_bilinear_interp_7x7_u8_Config * params;
  int config_cmd;
  char configFileName[MAX_FILE_NAME_SIZE];

  printf("Validate Multi Block Bilinear Interpolation 7x7 U8 VCOP Kernel Output\n");
  params = (smultiblock_bilinear_interp_7x7_u8_Config *)(&gConfig_multiblock_bilinear_interp_7x7_u8);

  fp = fopen(CONFIG_LIST_FILE_NAME, "r");
  if(fp== NULL)
  {
    printf("Could not open config list file : %s , Running in default mode \n",CONFIG_LIST_FILE_NAME);
    fillDefaultConfig(params);
    test_multiblock_bilinear_interp_7x7_u8_vcop(params);
    return(0);
  }

  while(1)
  {
    memset(params->configLine, 0, MAX_CONFIG_LINE_SIZE);
    status = (int)fgets(params->configLine,MAX_CONFIG_LINE_SIZE,fp);
    LinePtr = params->configLine;
    if ((status == EOF) || (status == 0))
      break;
    lineNum++;
    sscanf(LinePtr, "%d",&config_cmd);
    sscanf(LinePtr, "%s",params->configParam);
    if(config_cmd == 0)
    {
      printf("End of config list found !\n");
      break;
    }
    else if(config_cmd == 2)
    {
      continue;
    }
    else if(config_cmd == 1)
    {
      LinePtr = moveToNextElement(params->configParam,LinePtr);
      status  = sscanf(LinePtr, "%s",configFileName);
      printf("Processing config file %s !\n", configFileName);
      fillDefaultConfig(params);
      status = readparamfile(configFileName, &gsTokenMap_multiblock_bilinear_interp_7x7_u8[0]) ;
      if(status == -1)
      {
        printf("Parser Failed");
        return -1 ;
      }
      test_multiblock_bilinear_interp_7x7_u8_vcop(params);
    }
    else
    {
      printf(" Unsupported config list command parameter at line number : %4d !\n", lineNum);
    }
  }
  fclose(fp);
  return (0);
}