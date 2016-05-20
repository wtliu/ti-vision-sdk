/*==========================================================================*/
/*      Copyright (C) 2009-2013 Texas Instruments Incorporated.             */
/*                      All Rights Reserved                                 */
/*==========================================================================*/

/* ===========================================================================*/
/*   @file : vcop_rgb_to_yuv_tb.c                                    */

/*   @brief  : Driver file for testing RGB to yuv conversion   */

/*   This testbench then compares the result with the expected result*/
/*   @author Gajanan Ambi(gajanan.ambi@ti.com)                                */

/*   @version 0.0 (March 2013) : Base version.                               */

/*============================================================================*/

#include <stdio.h>
#include <stdlib.h>

/*---------------------------------------------------------------------------*/
/*Input image dimensions*/
/*---------------------------------------------------------------------------*/
#define INPUT_IMG_WIDTH   16
#define INPUT_IMG_HEIGHT  8

/*---------------------------------------------------------------------------*/
/*Input block dimensions*/
/*---------------------------------------------------------------------------*/
#define BLK_WIDTH   16
#define BLK_HEIGHT   8

#define INPUT_BIT_DEPTH 12

#define CbCr_CONST (0x0080) 
#define SHIFT_VAL  4
#define ROUNDING_FACTOR (CbCr_CONST << INPUT_BIT_DEPTH)

/*---------------------------------------------------------------------------*/
/*Input R component*/
/*---------------------------------------------------------------------------*/
#pragma DATA_SECTION(R_in, "Adata");
unsigned short R_in[BLK_WIDTH * BLK_HEIGHT] =
{
  0x01C4,0x01D0,0x01DC,0x0204,0x022C,0x0238,0x0244,0x020C,0x01D8,0x0204,0x0230,0x01FC,0x01C8,0x01C8,0x01CC,0x01D4,
  0x01C8,0x01E0,0x01FC,0x020C,0x021C,0x0214,0x020C,0x0214,0x0218,0x0214,0x0210,0x01F4,0x01D8,0x01E0,0x01E4,0x0208,
  0x01CC,0x01F0,0x0218,0x0214,0x020C,0x01F4,0x01D8,0x0218,0x025C,0x0228,0x01F4,0x01F0,0x01E8,0x01F4,0x0200,0x0240,
  0x01D8,0x01F8,0x021C,0x020C,0x01FC,0x01F0,0x01E4,0x0200,0x0220,0x0204,0x01E4,0x01E8,0x01EC,0x01E8,0x01E0,0x0214,
  0x01E0,0x0204,0x0224,0x0204,0x01E8,0x01EC,0x01F0,0x01E8,0x01E4,0x01DC,0x01D4,0x01E4,0x01F4,0x01DC,0x01C4,0x01EC,
  0x01CC,0x01E4,0x01FC,0x0204,0x020C,0x0204,0x01FC,0x01F4,0x01EC,0x01EC,0x01E8,0x01F4,0x01FC,0x01F4,0x01F0,0x0204,
  0x01B8,0x01C8,0x01D4,0x0204,0x0230,0x021C,0x0208,0x0200,0x01F8,0x01F8,0x01FC,0x0204,0x0208,0x0210,0x0218,0x0220,
  0x00DC,0x00E4,0x00E8,0x0100,0x0118,0x010C,0x0104,0x0100,0x00FC,0x00FC,0x00FC,0x0100,0x0104,0x0108,0x010C,0x0110
};

/*---------------------------------------------------------------------------*/
/*Input G component*/
/*---------------------------------------------------------------------------*/
#pragma DATA_SECTION(G_in, "Adata");
unsigned short G_in[BLK_WIDTH * BLK_HEIGHT] =
{
  0x028C,0x0274,0x025C,0x02BC,0x0320,0x031C,0x031C,0x02E8,0x02B8,0x02D8,0x02FC,0x02B0,0x0268,0x027C,0x0290,0x0288,
  0x0268,0x027C,0x0290,0x02C4,0x02F8,0x02F4,0x02F4,0x02DC,0x02C4,0x0290,0x025C,0x026C,0x0280,0x028C,0x0298,0x0288,
  0x0288,0x02A4,0x02BC,0x02BC,0x02B8,0x0294,0x0274,0x02BC,0x0308,0x02F4,0x02E0,0x02B4,0x028C,0x0290,0x0298,0x02F4,
  0x0280,0x02A8,0x02D4,0x02D8,0x02E0,0x029C,0x0258,0x0298,0x02D4,0x02D4,0x02D4,0x02C8,0x02BC,0x02AC,0x02A0,0x031C,
  0x0288,0x0298,0x02AC,0x02AC,0x02AC,0x02A0,0x0294,0x02A4,0x02B4,0x0290,0x0270,0x0288,0x02A0,0x0280,0x025C,0x0290,
  0x02B0,0x02C8,0x02E4,0x02C4,0x02A4,0x028C,0x0278,0x0294,0x02B4,0x0288,0x0260,0x028C,0x02BC,0x02A4,0x0288,0x0298,
  0x0258,0x0274,0x0290,0x02B0,0x02D4,0x02C4,0x02B0,0x02B8,0x02C0,0x02B0,0x02A4,0x02AC,0x02B8,0x02C8,0x02D8,0x02DC,
  0x0284,0x0284,0x0284,0x02C8,0x030C,0x02D0,0x0294,0x02AC,0x02C4,0x02B8,0x02B0,0x02A8,0x02A4,0x02B8,0x02CC,0x02C8
};

/*---------------------------------------------------------------------------*/
/*Input B component*/
/*---------------------------------------------------------------------------*/
#pragma DATA_SECTION(B_in, "Adata");
unsigned short B_in[BLK_WIDTH * BLK_HEIGHT] =
{
  0x01FC,0x0204,0x020C,0x0230,0x0250,0x0254,0x0258,0x0248,0x023C,0x0220,0x0204,0x01FC,0x01F4,0x01FC,0x0200,0x01F4,
  0x0204,0x020C,0x0214,0x0228,0x0238,0x022C,0x0220,0x0228,0x0230,0x022C,0x022C,0x0210,0x01F4,0x01F4,0x01F4,0x0218,
  0x0208,0x0210,0x021C,0x0220,0x0224,0x0208,0x01E8,0x0208,0x0228,0x023C,0x0254,0x0224,0x01F4,0x01F0,0x01E8,0x023C,
  0x0208,0x0214,0x0220,0x0220,0x021C,0x0200,0x01E4,0x0208,0x022C,0x021C,0x0210,0x020C,0x0208,0x01F8,0x01E8,0x0224,
  0x0208,0x0218,0x0228,0x021C,0x0214,0x01F8,0x01E0,0x0208,0x0230,0x01FC,0x01CC,0x01F4,0x021C,0x0200,0x01E8,0x020C,
  0x01E0,0x01F8,0x020C,0x021C,0x022C,0x0210,0x01F4,0x0208,0x0220,0x01FC,0x01D8,0x01F4,0x0210,0x020C,0x020C,0x0218,
  0x01BC,0x01D4,0x01F0,0x0218,0x0244,0x0224,0x0208,0x020C,0x0210,0x01FC,0x01E4,0x01F8,0x0208,0x021C,0x0230,0x0228,
  0x00DC,0x00E8,0x00F8,0x010C,0x0120,0x0110,0x0104,0x0104,0x0108,0x00FC,0x00F0,0x00FC,0x0104,0x010C,0x0118,0x0114
};


/*---------------------------------------------------------------------------*/
/*output YUV buffer*/
/*---------------------------------------------------------------------------*/
#pragma DATA_ALIGN   (yuv_out,  32)
#pragma DATA_SECTION(yuv_out, "Bdata");
unsigned char yuv_out[BLK_WIDTH * BLK_HEIGHT] =
{
  0
};

#pragma DATA_ALIGN   (rgb2yuv_coefs,  32)
#pragma DATA_SECTION (rgb2yuv_coefs, "Udata")
short rgb2yuv_coefs[9] =
{
   66, 129,  25,
  -38, -74, 112,
  112, -94, -18
};


/*---------------------------------------------------------------------------*/
/*reference output YUV buffer*/
/*---------------------------------------------------------------------------*/
#pragma DATA_SECTION(yuv_out_ref, "Cdata");
#pragma DATA_ALIGN(yuv_out_ref, 32);
unsigned char yuv_out_ref[BLK_WIDTH * BLK_HEIGHT*2] = 
{
  0x1E, 0x7D, 0x1E, 0x7C, 0x1D, 0x7F, 0x21, 0x7B, 0x25, 0x7C, 0x25, 0x7A, 0x26, 0x7C, 0x23, 0x7A,
  0x21, 0x7E, 0x22, 0x7B, 0x24, 0x7B, 0x20, 0x7B, 0x1D, 0x7E, 0x1E, 0x7B, 0x1F, 0x7D, 0x1F, 0x7B,
  0x1D, 0x7E, 0x1E, 0x7C, 0x20, 0x7D, 0x22, 0x7B, 0x24, 0x7C, 0x23, 0x7A, 0x23, 0x7C, 0x23, 0x7B,
  0x22, 0x7D, 0x20, 0x7D, 0x1E, 0x7F, 0x1E, 0x7D, 0x1E, 0x7D, 0x1F, 0x7B, 0x1F, 0x7D, 0x20, 0x7C,
  0x1F, 0x7E, 0x20, 0x7B, 0x22, 0x7D, 0x21, 0x7C, 0x21, 0x7D, 0x20, 0x7C, 0x1E, 0x7D, 0x21, 0x7C,
  0x25, 0x7B, 0x24, 0x7B, 0x22, 0x7E, 0x21, 0x7B, 0x1F, 0x7D, 0x1F, 0x7C, 0x20, 0x7C, 0x24, 0x7B,
  0x1E, 0x7E, 0x20, 0x7B, 0x22, 0x7C, 0x22, 0x7B, 0x22, 0x7C, 0x20, 0x7B, 0x1D, 0x7D, 0x20, 0x7C,
  0x22, 0x7D, 0x22, 0x7B, 0x21, 0x7C, 0x21, 0x7A, 0x21, 0x7D, 0x20, 0x7B, 0x1F, 0x7C, 0x25, 0x79,
  0x1F, 0x7E, 0x20, 0x7C, 0x21, 0x7D, 0x21, 0x7C, 0x20, 0x7D, 0x20, 0x7B, 0x1F, 0x7C, 0x20, 0x7B,
  0x21, 0x7E, 0x1F, 0x7B, 0x1E, 0x7C, 0x1F, 0x7C, 0x20, 0x7D, 0x1E, 0x7C, 0x1D, 0x7E, 0x1F, 0x7C,
  0x20, 0x7C, 0x21, 0x7A, 0x22, 0x7C, 0x21, 0x7B, 0x21, 0x7E, 0x20, 0x7C, 0x1F, 0x7D, 0x20, 0x7C,
  0x21, 0x7D, 0x1F, 0x7C, 0x1D, 0x7D, 0x1F, 0x7C, 0x21, 0x7D, 0x20, 0x7B, 0x1F, 0x7E, 0x20, 0x7C,
  0x1C, 0x7D, 0x1E, 0x7C, 0x1F, 0x7D, 0x21, 0x7B, 0x23, 0x7D, 0x22, 0x7C, 0x21, 0x7C, 0x21, 0x7B,
  0x21, 0x7D, 0x20, 0x7B, 0x20, 0x7C, 0x20, 0x7C, 0x21, 0x7C, 0x22, 0x7B, 0x23, 0x7D, 0x23, 0x7B,
  0x19, 0x78, 0x19, 0x76, 0x19, 0x78, 0x1C, 0x75, 0x1E, 0x77, 0x1C, 0x75, 0x1A, 0x78, 0x1B, 0x76,
  0x1C, 0x78, 0x1B, 0x75, 0x1B, 0x77, 0x1B, 0x76, 0x1B, 0x78, 0x1B, 0x76, 0x1C, 0x78, 0x1C, 0x75
};

void print_output
(
unsigned char *buffer,
unsigned int blk_height,
unsigned int blk_width
);

unsigned int verify_output
(
unsigned char *output,
unsigned char *output_ref,
unsigned int blk_height,
unsigned int blk_width
);

int main()
{
  unsigned int status;

  /*---------------------------------------------------------------------*/
  /*  Call the natural C implementation for the bayer to RGB conversion.   */
  /*---------------------------------------------------------------------*/
  vcop_rgb_to_yuv(R_in,
                  G_in,
                  B_in,
                  INPUT_IMG_HEIGHT,
                  INPUT_IMG_WIDTH,
                  rgb2yuv_coefs,
                  yuv_out,
                  SHIFT_VAL,
                  0 /* 0 - ISP_COLOR_FORMAT_YUV_422_YUYV,1 - ISP_COLOR_FORMAT_YUV_422_YUYV*/
                  );

  /*--------------------------------------------------------------------------*/
  /*Compare the result with reference output*/
  /*--------------------------------------------------------------------------*/
  status = verify_output(yuv_out,yuv_out_ref,BLK_HEIGHT,BLK_WIDTH);
  if(status)
  {
    printf("PASS: output is bit match with reference\n");
  }
  else
  {
    printf("FAIL: output is not bit match with reference \n");
    /*---------------------------------------------------------------------*/
    /*  If there is a mismatch, print out a memory trace*/
    /*---------------------------------------------------------------------*/
    print_output(yuv_out,INPUT_IMG_HEIGHT,INPUT_IMG_WIDTH);
  }
  
  printf("Done!!!\n");
}

unsigned int verify_output
(
unsigned char *output,
unsigned char *output_ref,
unsigned int blk_height,
unsigned int blk_width
)
{
  unsigned int i, j;
  unsigned int status = 1;

  for(i = 0; i<(blk_height*blk_width*2); ++i)
  {
    if((*output++) != (*output_ref++))
    {
      status = 0;
    }
  }

return(status);
}

void print_output
(
unsigned char *buffer,
unsigned int blk_height,
unsigned int blk_width
)
{
  unsigned int i,j;

  for(i = 0; i<(blk_height*2); ++i)
  {
    for(j = 0; j<blk_width; j++)
    {
      printf("%4x, ",buffer[(i * blk_width) + j]);
    }
    printf("\n");
  }
}

