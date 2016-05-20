/******************************************************************************
 *                                                                            *
 * Copyright (c) 2014 Texas Instruments Incorporated - http://www.ti.com/     *
 *                                                                            *
 * All rights reserved. Property of Texas Instruments Incorporated.           *
 * Restricted rights to use, duplicate or disclose this code are              *
 * granted through contract.                                                  *
 *                                                                            *
 * The program may not be used without the written permission                 *
 * of Texas Instruments Incorporated or against the terms and conditions      *
 * stipulated in the agreement under which this program has been              *
 * supplied.                                                                  *
 *                                                                            *
 *****************************************************************************/

/**
 *  \file bspdrv_ar0132rccc_Reg.c
 *
 *  \brief AR0132RCCC sensor Register file.
 *
 */

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */
#include <ar0132rccc/src/bspdrv_ar0132rcccPriv.h>

/* AR0132RCCC recommended setting */
Bsp_VidSensorConfigRegs gBsp_AR0132RCCCSensorsDefault[BSP_AR0132RCCC_NUM_REGS]
    =
    {
    {0x301A, 0x10D8, 0x0},
/*Demo Initialization*/
    {0x0,    200,    0x0},
    {0x3088, 0x8000, 0x0},
    {0x3086, 0x25,   0x0},
    {0x3086, 0x5050, 0x0},
    {0x3086, 0x2D26, 0x0},
    {0x3086, 0x828,  0x0},
    {0x3086, 0xD17,  0x0},
    {0x3086, 0x926,  0x0},
    {0x3086, 0x28,   0x0},
    {0x3086, 0x526,  0x0},
    {0x3086, 0xA728, 0x0},
    {0x3086, 0x725,  0x0},
    {0x3086, 0x8080, 0x0},
    {0x3086, 0x2925, 0x0},
    {0x3086, 0x40,   0x0},
    {0x3086, 0x2702, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x2706, 0x0},
    {0x3086, 0x1F17, 0x0},
    {0x3086, 0x3626, 0x0},
    {0x3086, 0xA617, 0x0},
    {0x3086, 0x326,  0x0},
    {0x3086, 0xA417, 0x0},
    {0x3086, 0x1F28, 0x0},
    {0x3086, 0x526,  0x0},
    {0x3086, 0x2028, 0x0},
    {0x3086, 0x425,  0x0},
    {0x3086, 0x2020, 0x0},
    {0x3086, 0x2700, 0x0},
    {0x3086, 0x171D, 0x0},
    {0x3086, 0x2500, 0x0},
    {0x3086, 0x2017, 0x0},
    {0x3086, 0x1219, 0x0},
    {0x3086, 0x1703, 0x0},
    {0x3086, 0x2706, 0x0},
    {0x3086, 0x1728, 0x0},
    {0x3086, 0x2805, 0x0},
    {0x3086, 0x171A, 0x0},
    {0x3086, 0x2660, 0x0},
    {0x3086, 0x175A, 0x0},
    {0x3086, 0x2317, 0x0},
    {0x3086, 0x1122, 0x0},
    {0x3086, 0x1741, 0x0},
    {0x3086, 0x2500, 0x0},
    {0x3086, 0x9027, 0x0},
    {0x3086, 0x26,   0x0},
    {0x3086, 0x1828, 0x0},
    {0x3086, 0x2E,   0x0},
    {0x3086, 0x2A28, 0x0},
    {0x3086, 0x81C,  0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7003, 0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7004, 0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7005, 0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7009, 0x0},
    {0x3086, 0x170C, 0x0},
    {0x3086, 0x14,   0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x14,   0x0},
    {0x3086, 0x50,   0x0},
    {0x3086, 0x314,  0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x314,  0x0},
    {0x3086, 0x50,   0x0},
    {0x3086, 0x414,  0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x414,  0x0},
    {0x3086, 0x50,   0x0},
    {0x3086, 0x514,  0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x2405, 0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x5001, 0x0},
    {0x3086, 0x2550, 0x0},
    {0x3086, 0x502D, 0x0},
    {0x3086, 0x2608, 0x0},
    {0x3086, 0x280D, 0x0},
    {0x3086, 0x1709, 0x0},
    {0x3086, 0x2600, 0x0},
    {0x3086, 0x2805, 0x0},
    {0x3086, 0x26A7, 0x0},
    {0x3086, 0x2807, 0x0},
    {0x3086, 0x2580, 0x0},
    {0x3086, 0x8029, 0x0},
    {0x3086, 0x2500, 0x0},
    {0x3086, 0x4027, 0x0},
    {0x3086, 0x216,  0x0},
    {0x3086, 0x1627, 0x0},
    {0x3086, 0x620,  0x0},
    {0x3086, 0x1736, 0x0},
    {0x3086, 0x26A6, 0x0},
    {0x3086, 0x1703, 0x0},
    {0x3086, 0x26A4, 0x0},
    {0x3086, 0x171F, 0x0},
    {0x3086, 0x2805, 0x0},
    {0x3086, 0x2620, 0x0},
    {0x3086, 0x2804, 0x0},
    {0x3086, 0x2520, 0x0},
    {0x3086, 0x2027, 0x0},
    {0x3086, 0x17,   0x0},
    {0x3086, 0x1D25, 0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x1712, 0x0},
    {0x3086, 0x1A17, 0x0},
    {0x3086, 0x327,  0x0},
    {0x3086, 0x617,  0x0},
    {0x3086, 0x2828, 0x0},
    {0x3086, 0x517,  0x0},
    {0x3086, 0x1A26, 0x0},
    {0x3086, 0x6017, 0x0},
    {0x3086, 0xAE25, 0x0},
    {0x3086, 0x90,   0x0},
    {0x3086, 0x2700, 0x0},
    {0x3086, 0x2618, 0x0},
    {0x3086, 0x2800, 0x0},
    {0x3086, 0x2E2A, 0x0},
    {0x3086, 0x2808, 0x0},
    {0x3086, 0x1D05, 0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7009, 0x0},
    {0x3086, 0x1720, 0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x2024, 0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x5002, 0x0},
    {0x3086, 0x2550, 0x0},
    {0x3086, 0x502D, 0x0},
    {0x3086, 0x2608, 0x0},
    {0x3086, 0x280D, 0x0},
    {0x3086, 0x1709, 0x0},
    {0x3086, 0x2600, 0x0},
    {0x3086, 0x2805, 0x0},
    {0x3086, 0x26A7, 0x0},
    {0x3086, 0x2807, 0x0},
    {0x3086, 0x2580, 0x0},
    {0x3086, 0x8029, 0x0},
    {0x3086, 0x2500, 0x0},
    {0x3086, 0x4027, 0x0},
    {0x3086, 0x216,  0x0},
    {0x3086, 0x1627, 0x0},
    {0x3086, 0x617,  0x0},
    {0x3086, 0x3626, 0x0},
    {0x3086, 0xA617, 0x0},
    {0x3086, 0x326,  0x0},
    {0x3086, 0xA417, 0x0},
    {0x3086, 0x1F28, 0x0},
    {0x3086, 0x526,  0x0},
    {0x3086, 0x2028, 0x0},
    {0x3086, 0x425,  0x0},
    {0x3086, 0x2020, 0x0},
    {0x3086, 0x2700, 0x0},
    {0x3086, 0x171D, 0x0},
    {0x3086, 0x2500, 0x0},
    {0x3086, 0x2021, 0x0},
    {0x3086, 0x1712, 0x0},
    {0x3086, 0x1B17, 0x0},
    {0x3086, 0x327,  0x0},
    {0x3086, 0x617,  0x0},
    {0x3086, 0x2828, 0x0},
    {0x3086, 0x517,  0x0},
    {0x3086, 0x1A26, 0x0},
    {0x3086, 0x6017, 0x0},
    {0x3086, 0xAE25, 0x0},
    {0x3086, 0x90,   0x0},
    {0x3086, 0x2700, 0x0},
    {0x3086, 0x2618, 0x0},
    {0x3086, 0x2800, 0x0},
    {0x3086, 0x2E2A, 0x0},
    {0x3086, 0x2808, 0x0},
    {0x3086, 0x1E17, 0x0},
    {0x3086, 0xA05,  0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7009, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x1614, 0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x2414, 0x0},
    {0x3086, 0x50,   0x0},
    {0x3086, 0x2B2B, 0x0},
    {0x3086, 0x2C2C, 0x0},
    {0x3086, 0x2C2C, 0x0},
    {0x3086, 0x2C00, 0x0},
    {0x3086, 0x225,  0x0},
    {0x3086, 0x5050, 0x0},
    {0x3086, 0x2D26, 0x0},
    {0x3086, 0x828,  0x0},
    {0x3086, 0xD17,  0x0},
    {0x3086, 0x926,  0x0},
    {0x3086, 0x28,   0x0},
    {0x3086, 0x526,  0x0},
    {0x3086, 0xA728, 0x0},
    {0x3086, 0x725,  0x0},
    {0x3086, 0x8080, 0x0},
    {0x3086, 0x2917, 0x0},
    {0x3086, 0x525,  0x0},
    {0x3086, 0x40,   0x0},
    {0x3086, 0x2702, 0x0},
    {0x3086, 0x1616, 0x0},
    {0x3086, 0x2706, 0x0},
    {0x3086, 0x1736, 0x0},
    {0x3086, 0x26A6, 0x0},
    {0x3086, 0x1703, 0x0},
    {0x3086, 0x26A4, 0x0},
    {0x3086, 0x171F, 0x0},
    {0x3086, 0x2805, 0x0},
    {0x3086, 0x2620, 0x0},
    {0x3086, 0x2804, 0x0},
    {0x3086, 0x2520, 0x0},
    {0x3086, 0x2027, 0x0},
    {0x3086, 0x17,   0x0},
    {0x3086, 0x1E25, 0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x2117, 0x0},
    {0x3086, 0x1028, 0x0},
    {0x3086, 0x51B,  0x0},
    {0x3086, 0x1703, 0x0},
    {0x3086, 0x2706, 0x0},
    {0x3086, 0x1703, 0x0},
    {0x3086, 0x1747, 0x0},
    {0x3086, 0x2660, 0x0},
    {0x3086, 0x17AE, 0x0},
    {0x3086, 0x2500, 0x0},
    {0x3086, 0x9027, 0x0},
    {0x3086, 0x26,   0x0},
    {0x3086, 0x1828, 0x0},
    {0x3086, 0x2E,   0x0},
    {0x3086, 0x2A28, 0x0},
    {0x3086, 0x81E,  0x0},
    {0x3086, 0x831,  0x0},
    {0x3086, 0x1440, 0x0},
    {0x3086, 0x4014, 0x0},
    {0x3086, 0x2020, 0x0},
    {0x3086, 0x1410, 0x0},
    {0x3086, 0x1034, 0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x1014, 0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x4013, 0x0},
    {0x3086, 0x1802, 0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7004, 0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7003, 0x0},
    {0x3086, 0x1470, 0x0},
    {0x3086, 0x7017, 0x0},
    {0x3086, 0x2002, 0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x2002, 0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x5004, 0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x2004, 0x0},
    {0x3086, 0x1400, 0x0},
    {0x3086, 0x5022, 0x0},
    {0x3086, 0x314,  0x0},
    {0x3086, 0x20,   0x0},
    {0x3086, 0x314,  0x0},
    {0x3086, 0x50,   0x0},
    {0x3086, 0x2C2C, 0x0},
    {0x3086, 0x2C2C, 0x0},
    {0x309E, 0x0186, 0x0}, /*Differs with default val*/
    {0x0,    200,    0x0},
    {0x3082, 0x0029, 0x0},
    {0x301E, 0x00C8, 0x0},
    {0x30B0, 0x1300, 0x0}, /* SET TO BAYER*/
    {0x30D4, 0xE007, 0x0},
    {0x30BA, 0x0008, 0x0},
    {0x301A, 0x10DC, 0x0},
    {0x0,    200,    0x0},
    {0x301A, 0x10D8, 0x0},
    {0x0,    200,    0x0},
    {0x3058, 0x003F, 0x0}, /* BLUE_GAIN */   /* Differs with default val*/
    {0x3012, 0x02A0, 0x0}, /* Differs with default val*/
    {0x301A, 0x10DC, 0x0}, /* Differs with default val*/
/*Full resln 45FPS*/
/*{0x3032, 0x0000, 0x0}, */
/*{0x3002, 0x0002, 0x0}, */
/*{0x3004, 0x0000, 0x0}, */
/*{0x3006, 0x03C1, 0x0}, */
/*{0x3008, 0x04FF, 0x0}, */
/*{0x300A, 0x03DE, 0x0}, */
/*{0x300C, 0x0672, 0x0}, */
/*720P 60fps*/
    {0x3032, 0x0000, 0x0},
    {0x3002, 0x0002, 0x0},
    {0x3004, 0x0000, 0x0},
    {0x3006, 0x02D1, 0x0},
    {0x3008, 0x04FF, 0x0},
    {0x300A, 0x0310, 0x0}, /* changed to 784 lines from 751 to get 30fps */
    {0x300C, 0x0672, 0x0},
    {0x301A, 0x10D8, 0x0},
    {0x31D0, 0x0001, 0x0},
    {0x302C, 0x0002, 0x0},
    {0x302A, 0x0004, 0x0},
    {0x302E, 0x0002, 0x0},
    {0x3030, 0x0017, 0x0}, /* changed to 23 to get 30fps */
    {0x30B0, 0x1300, 0x0},
    {0,      100,    0x0},
    {0x3040, 0xC000, 0x0},
    {0x301A, 0x10DC, 0x0},
    {0x3064, 0x1982, 0x0},
    {0x3058, 0x003F, 0x0},
    {0x3100, 0x001B, 0x0}, /* For AEC */
    {0x3112, 0x029F, 0x0},
    {0x3114, 0x008C, 0x0},
    {0x3116, 0x02C0, 0x0},
    {0x3118, 0x005B, 0x0},
    {0x3102, 0x0384, 0x0},
    {0x3104, 0x1000, 0x0},
    {0x3126, 0x0080, 0x0},
    {0x311C, 0x03DD, 0x0},
    {0x311E, 0x0003, 0x0},
    {0x301A, 0x10DC, 0x0},
/*TEST PATTERN*/
/*{0x3070,0x0002, 0x0},*/
/*{0x3072,0x0FFF, 0x0},*/
/*{0x3074,0x0FFF, 0x0},*/
/*{0x3076,0x0FFF, 0x0},*/
/*{0x3078,0x0FFF, 0x0},*/
    {0x0,    200,    0x0},
    };
