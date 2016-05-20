/******************************************************************************
*
* hw_l4per_cm_core.h - register-level header file for PRCM
*
* Copyright (c) 2008-2013 Texas Instruments Incorporated.  All rights reserved.
* Software License Agreement
*
* Texas Instruments (TI) is supplying this software for use solely and
* exclusively on TI devices. The software is owned by TI and/or its
* suppliers, and is protected under applicable patent and copyright laws.
*
* You may not combine this software with any open-source software if such
* combination would cause this software to become subject to any of the
* license terms applicable to such open source software.
*
* THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
* NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
* NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
* CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
* DAMAGES, FOR ANY REASON WHATSOEVER.
*
******************************************************************************
*/
#ifndef HW_L4PER_CM_CORE_H_
#define HW_L4PER_CM_CORE_H_

#ifdef __cplusplus
extern "C"
{
#endif

/****************************************************************************************************
* Register Definitions
****************************************************************************************************/
#define CM_L4PER_CLKSTCTRL                                                                                  (0x0U)
#define CM_L4PER_DYNAMICDEP                                                                                 (0x8U)
#define CM_L4PER2_L4_PER2_CLKCTRL                                                                           (0xcU)
#define CM_L4PER3_L4_PER3_CLKCTRL                                                                           (0x14U)
#define CM_L4PER2_PRUSS1_CLKCTRL                                                                            (0x18U)
#define CM_L4PER_TIMER10_CLKCTRL                                                                            (0x28U)
#define CM_L4PER_TIMER11_CLKCTRL                                                                            (0x30U)
#define CM_L4PER_TIMER2_CLKCTRL                                                                             (0x38U)
#define CM_L4PER_TIMER3_CLKCTRL                                                                             (0x40U)
#define CM_L4PER_TIMER4_CLKCTRL                                                                             (0x48U)
#define CM_L4PER_TIMER9_CLKCTRL                                                                             (0x50U)
#define CM_L4PER_ELM_CLKCTRL                                                                                (0x58U)
#define CM_L4PER_GPIO2_CLKCTRL                                                                              (0x60U)
#define CM_L4PER_GPIO3_CLKCTRL                                                                              (0x68U)
#define CM_L4PER_GPIO4_CLKCTRL                                                                              (0x70U)
#define CM_L4PER_GPIO5_CLKCTRL                                                                              (0x78U)
#define CM_L4PER_GPIO6_CLKCTRL                                                                              (0x80U)
#define CM_L4PER_HDQ1W_CLKCTRL                                                                              (0x88U)
#define CM_L4PER2_PWMSS2_CLKCTRL                                                                            (0x90U)
#define CM_L4PER2_PWMSS3_CLKCTRL                                                                            (0x98U)
#define CM_L4PER_I2C1_CLKCTRL                                                                               (0xa0U)
#define CM_L4PER_I2C2_CLKCTRL                                                                               (0xa8U)
#define CM_L4PER_I2C3_CLKCTRL                                                                               (0xb0U)
#define CM_L4PER_I2C4_CLKCTRL                                                                               (0xb8U)
#define CM_L4PER_L4_PER1_CLKCTRL                                                                            (0xc0U)
#define CM_L4PER2_PWMSS1_CLKCTRL                                                                            (0xc4U)
#define CM_L4PER3_TIMER13_CLKCTRL                                                                           (0xc8U)
#define CM_L4PER3_TIMER14_CLKCTRL                                                                           (0xd0U)
#define CM_L4PER3_TIMER15_CLKCTRL                                                                           (0xd8U)
#define CM_L4PER_MCSPI1_CLKCTRL                                                                             (0xf0U)
#define CM_L4PER_MCSPI2_CLKCTRL                                                                             (0xf8U)
#define CM_L4PER_MCSPI3_CLKCTRL                                                                             (0x100U)
#define CM_L4PER_MCSPI4_CLKCTRL                                                                             (0x108U)
#define CM_L4PER_GPIO7_CLKCTRL                                                                              (0x110U)
#define CM_L4PER_GPIO8_CLKCTRL                                                                              (0x118U)
#define CM_L4PER_MMC3_CLKCTRL                                                                               (0x120U)
#define CM_L4PER_MMC4_CLKCTRL                                                                               (0x128U)
#define CM_L4PER3_TIMER16_CLKCTRL                                                                           (0x130U)
#define CM_L4PER2_QSPI_CLKCTRL                                                                              (0x138U)
#define CM_L4PER_UART1_CLKCTRL                                                                              (0x140U)
#define CM_L4PER_UART2_CLKCTRL                                                                              (0x148U)
#define CM_L4PER_UART3_CLKCTRL                                                                              (0x150U)
#define CM_L4PER_UART4_CLKCTRL                                                                              (0x158U)
#define CM_L4PER2_MCASP2_CLKCTRL                                                                            (0x160U)
#define CM_L4PER2_MCASP3_CLKCTRL                                                                            (0x168U)
#define CM_L4PER_UART5_CLKCTRL                                                                              (0x170U)
#define CM_L4PER2_MCASP5_CLKCTRL                                                                            (0x178U)
#define CM_L4SEC_CLKSTCTRL                                                                                  (0x180U)
#define CM_L4SEC_STATICDEP                                                                                  (0x184U)
#define CM_L4SEC_DYNAMICDEP                                                                                 (0x188U)
#define CM_L4PER2_MCASP8_CLKCTRL                                                                            (0x190U)
#define CM_L4PER2_MCASP4_CLKCTRL                                                                            (0x198U)
#define CM_L4SEC_AES1_CLKCTRL                                                                               (0x1a0U)
#define CM_L4SEC_AES2_CLKCTRL                                                                               (0x1a8U)
#define CM_L4SEC_DES3DES_CLKCTRL                                                                            (0x1b0U)
#define CM_L4SEC_FPKA_CLKCTRL                                                                               (0x1b8U)
#define CM_L4SEC_RNG_CLKCTRL                                                                                (0x1c0U)
#define CM_L4SEC_SHA2MD51_CLKCTRL                                                                           (0x1c8U)
#define CM_L4PER2_UART7_CLKCTRL                                                                             (0x1d0U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL                                                                         (0x1d8U)
#define CM_L4PER2_UART8_CLKCTRL                                                                             (0x1e0U)
#define CM_L4PER2_UART9_CLKCTRL                                                                             (0x1e8U)
#define CM_L4PER2_DCAN2_CLKCTRL                                                                             (0x1f0U)
#define CM_L4SEC_SHA2MD52_CLKCTRL                                                                           (0x1f8U)
#define CM_L4PER2_CLKSTCTRL                                                                                 (0x1fcU)
#define CM_L4PER2_DYNAMICDEP                                                                                (0x200U)
#define CM_L4PER2_MCASP6_CLKCTRL                                                                            (0x204U)
#define CM_L4PER2_MCASP7_CLKCTRL                                                                            (0x208U)
#define CM_L4PER2_STATICDEP                                                                                 (0x20cU)
#define CM_L4PER3_CLKSTCTRL                                                                                 (0x210U)
#define CM_L4PER3_DYNAMICDEP                                                                                (0x214U)

/****************************************************************************************************
* Field Definition Macros
****************************************************************************************************/

#define CM_L4PER_CLKSTCTRL_CLKTRCTRL_SHIFT                                                                  (0U)
#define CM_L4PER_CLKSTCTRL_CLKTRCTRL_MASK                                                                   (0x00000003U)
#define CM_L4PER_CLKSTCTRL_CLKTRCTRL_NO_SLEEP                                                                (0U)
#define CM_L4PER_CLKSTCTRL_CLKTRCTRL_SW_SLEEP                                                                (1U)
#define CM_L4PER_CLKSTCTRL_CLKTRCTRL_SW_WKUP                                                                 (2U)
#define CM_L4PER_CLKSTCTRL_CLKTRCTRL_HW_AUTO                                                                 (3U)

#define CM_L4PER_CLKSTCTRL_RESERVED_SHIFT                                                                   (2U)
#define CM_L4PER_CLKSTCTRL_RESERVED_MASK                                                                    (0x000000fcU)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER10_GFCLK_SHIFT                                                  (9U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER10_GFCLK_MASK                                                   (0x00000200U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER10_GFCLK_INACT                                                   (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER10_GFCLK_ACT                                                     (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER11_GFCLK_SHIFT                                                  (10U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER11_GFCLK_MASK                                                   (0x00000400U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER11_GFCLK_INACT                                                   (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER11_GFCLK_ACT                                                     (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER2_GFCLK_SHIFT                                                   (11U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER2_GFCLK_MASK                                                    (0x00000800U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER2_GFCLK_INACT                                                    (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER2_GFCLK_ACT                                                      (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER3_GFCLK_SHIFT                                                   (12U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER3_GFCLK_MASK                                                    (0x00001000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER3_GFCLK_INACT                                                    (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER3_GFCLK_ACT                                                      (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER4_GFCLK_SHIFT                                                   (13U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER4_GFCLK_MASK                                                    (0x00002000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER4_GFCLK_INACT                                                    (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER4_GFCLK_ACT                                                      (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER9_GFCLK_SHIFT                                                   (14U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER9_GFCLK_MASK                                                    (0x00004000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER9_GFCLK_INACT                                                    (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_TIMER9_GFCLK_ACT                                                      (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_12M_GFCLK_SHIFT                                                  (19U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_12M_GFCLK_MASK                                                   (0x00080000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_12M_GFCLK_INACT                                                   (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_12M_GFCLK_ACT                                                     (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_48M_GFCLK_SHIFT                                                  (20U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_48M_GFCLK_MASK                                                   (0x00100000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_48M_GFCLK_INACT                                                   (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_48M_GFCLK_ACT                                                     (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_MMC3_GFCLK_SHIFT                                                     (22U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_MMC3_GFCLK_MASK                                                      (0x00400000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_MMC3_GFCLK_INACT                                                      (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_MMC3_GFCLK_ACT                                                        (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART1_GFCLK_SHIFT                                                    (15U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART1_GFCLK_MASK                                                     (0x00008000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART1_GFCLK_INACT                                                     (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART1_GFCLK_ACT                                                       (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART2_GFCLK_SHIFT                                                    (16U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART2_GFCLK_MASK                                                     (0x00010000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART2_GFCLK_INACT                                                     (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART2_GFCLK_ACT                                                       (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART3_GFCLK_SHIFT                                                    (17U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART3_GFCLK_MASK                                                     (0x00020000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART3_GFCLK_INACT                                                     (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART3_GFCLK_ACT                                                       (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART4_GFCLK_SHIFT                                                    (18U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART4_GFCLK_MASK                                                     (0x00040000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART4_GFCLK_INACT                                                     (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART4_GFCLK_ACT                                                       (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_MMC4_GFCLK_SHIFT                                                     (23U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_MMC4_GFCLK_MASK                                                      (0x00800000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_MMC4_GFCLK_INACT                                                      (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_MMC4_GFCLK_ACT                                                        (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_96M_GFCLK_SHIFT                                                  (21U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_96M_GFCLK_MASK                                                   (0x00200000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_96M_GFCLK_INACT                                                   (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_96M_GFCLK_ACT                                                     (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_GPIO_GFCLK_SHIFT                                                     (24U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_GPIO_GFCLK_MASK                                                      (0x01000000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_GPIO_GFCLK_INACT                                                      (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_GPIO_GFCLK_ACT                                                        (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_192M_GFCLK_SHIFT                                                 (25U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_192M_GFCLK_MASK                                                  (0x02000000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_192M_GFCLK_INACT                                                  (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_PER_192M_GFCLK_ACT                                                    (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART5_GFCLK_SHIFT                                                    (26U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART5_GFCLK_MASK                                                     (0x04000000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART5_GFCLK_INACT                                                     (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_UART5_GFCLK_ACT                                                       (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_L4PER_L3_GICLK_SHIFT                                                 (8U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_L4PER_L3_GICLK_MASK                                                  (0x00000100U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_L4PER_L3_GICLK_INACT                                                  (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_L4PER_L3_GICLK_ACT                                                    (1U)

#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_L4PER_32K_GFCLK_SHIFT                                                (27U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_L4PER_32K_GFCLK_MASK                                                 (0x08000000U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_L4PER_32K_GFCLK_INACT                                                 (0U)
#define CM_L4PER_CLKSTCTRL_CLKACTIVITY_L4PER_32K_GFCLK_ACT                                                   (1U)

#define CM_L4PER_CLKSTCTRL_RESERVED1_SHIFT                                                                  (28U)
#define CM_L4PER_CLKSTCTRL_RESERVED1_MASK                                                                   (0xf0000000U)

#define CM_L4PER_DYNAMICDEP_L3INIT_DYNDEP_SHIFT                                                             (7U)
#define CM_L4PER_DYNAMICDEP_L3INIT_DYNDEP_MASK                                                              (0x00000080U)
#define CM_L4PER_DYNAMICDEP_L3INIT_DYNDEP_ENABLED                                                            (1U)

#define CM_L4PER_DYNAMICDEP_DSS_DYNDEP_SHIFT                                                                (8U)
#define CM_L4PER_DYNAMICDEP_DSS_DYNDEP_MASK                                                                 (0x00000100U)
#define CM_L4PER_DYNAMICDEP_DSS_DYNDEP_ENABLED                                                               (1U)

#define CM_L4PER_DYNAMICDEP_L4SEC_DYNDEP_SHIFT                                                              (14U)
#define CM_L4PER_DYNAMICDEP_L4SEC_DYNDEP_MASK                                                               (0x00004000U)
#define CM_L4PER_DYNAMICDEP_L4SEC_DYNDEP_ENABLED                                                             (1U)

#define CM_L4PER_DYNAMICDEP_RESERVED4_SHIFT                                                                 (28U)
#define CM_L4PER_DYNAMICDEP_RESERVED4_MASK                                                                  (0xf0000000U)

#define CM_L4PER_DYNAMICDEP_RESERVED1_SHIFT                                                                 (9U)
#define CM_L4PER_DYNAMICDEP_RESERVED1_MASK                                                                  (0x00003e00U)

#define CM_L4PER_DYNAMICDEP_WINDOWSIZE_SHIFT                                                                (24U)
#define CM_L4PER_DYNAMICDEP_WINDOWSIZE_MASK                                                                 (0x0f000000U)

#define CM_L4PER_DYNAMICDEP_IPU_DYNDEP_SHIFT                                                                (3U)
#define CM_L4PER_DYNAMICDEP_IPU_DYNDEP_MASK                                                                 (0x00000008U)
#define CM_L4PER_DYNAMICDEP_IPU_DYNDEP_ENABLED                                                               (1U)

#define CM_L4PER_DYNAMICDEP_RESERVED2_SHIFT                                                                 (15U)
#define CM_L4PER_DYNAMICDEP_RESERVED2_MASK                                                                  (0x00ff8000U)

#define CM_L4PER_DYNAMICDEP_RESERVED_SHIFT                                                                  (0U)
#define CM_L4PER_DYNAMICDEP_RESERVED_MASK                                                                   (0x00000007U)

#define CM_L4PER_DYNAMICDEP_RESERVED3_SHIFT                                                                 (4U)
#define CM_L4PER_DYNAMICDEP_RESERVED3_MASK                                                                  (0x00000070U)

#define CM_L4PER2_L4_PER2_CLKCTRL_RESERVED_SHIFT                                                            (2U)
#define CM_L4PER2_L4_PER2_CLKCTRL_RESERVED_MASK                                                             (0x0000fffcU)

#define CM_L4PER2_L4_PER2_CLKCTRL_RESERVED1_SHIFT                                                           (18U)
#define CM_L4PER2_L4_PER2_CLKCTRL_RESERVED1_MASK                                                            (0xfffc0000U)

#define CM_L4PER2_L4_PER2_CLKCTRL_MODULEMODE_SHIFT                                                          (0U)
#define CM_L4PER2_L4_PER2_CLKCTRL_MODULEMODE_MASK                                                           (0x00000003U)
#define CM_L4PER2_L4_PER2_CLKCTRL_MODULEMODE_AUTO                                                            (1U)

#define CM_L4PER2_L4_PER2_CLKCTRL_IDLEST_SHIFT                                                              (16U)
#define CM_L4PER2_L4_PER2_CLKCTRL_IDLEST_MASK                                                               (0x00030000U)
#define CM_L4PER2_L4_PER2_CLKCTRL_IDLEST_DISABLE                                                             (3U)
#define CM_L4PER2_L4_PER2_CLKCTRL_IDLEST_IDLE                                                                (2U)
#define CM_L4PER2_L4_PER2_CLKCTRL_IDLEST_FUNC                                                                (0U)
#define CM_L4PER2_L4_PER2_CLKCTRL_IDLEST_TRANS                                                               (1U)

#define CM_L4PER3_L4_PER3_CLKCTRL_RESERVED_SHIFT                                                            (2U)
#define CM_L4PER3_L4_PER3_CLKCTRL_RESERVED_MASK                                                             (0x0000fffcU)

#define CM_L4PER3_L4_PER3_CLKCTRL_RESERVED1_SHIFT                                                           (18U)
#define CM_L4PER3_L4_PER3_CLKCTRL_RESERVED1_MASK                                                            (0xfffc0000U)

#define CM_L4PER3_L4_PER3_CLKCTRL_MODULEMODE_SHIFT                                                          (0U)
#define CM_L4PER3_L4_PER3_CLKCTRL_MODULEMODE_MASK                                                           (0x00000003U)
#define CM_L4PER3_L4_PER3_CLKCTRL_MODULEMODE_AUTO                                                            (1U)

#define CM_L4PER3_L4_PER3_CLKCTRL_IDLEST_SHIFT                                                              (16U)
#define CM_L4PER3_L4_PER3_CLKCTRL_IDLEST_MASK                                                               (0x00030000U)
#define CM_L4PER3_L4_PER3_CLKCTRL_IDLEST_DISABLE                                                             (3U)
#define CM_L4PER3_L4_PER3_CLKCTRL_IDLEST_IDLE                                                                (2U)
#define CM_L4PER3_L4_PER3_CLKCTRL_IDLEST_FUNC                                                                (0U)
#define CM_L4PER3_L4_PER3_CLKCTRL_IDLEST_TRANS                                                               (1U)

#define CM_L4PER2_PRUSS1_CLKCTRL_STBYST_SHIFT                                                            (18U)
#define CM_L4PER2_PRUSS1_CLKCTRL_STBYST_MASK                                                             (0x00040000U)
#define CM_L4PER2_PRUSS1_CLKCTRL_STBYST_FUNC                                                              (0U)
#define CM_L4PER2_PRUSS1_CLKCTRL_STBYST_STANDBY                                                           (1U)

#define CM_L4PER2_PRUSS1_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_PRUSS1_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_PRUSS1_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_PRUSS1_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_PRUSS1_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_PRUSS1_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_PRUSS1_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_PRUSS1_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_PRUSS1_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_PRUSS1_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_PRUSS1_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_PRUSS1_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SHIFT                                                               (24U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_MASK                                                                (0x0f000000U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                    (0U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                 (1U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                         (2U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                        (3U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                        (4U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                        (5U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                        (6U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_ABE_GICLK                                                        (7U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                       (8U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                       (9U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                         (10U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_RESERVED                                                             (11U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_RESERVED1                                                            (12U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_RESERVED2                                                            (13U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_RESERVED3                                                            (14U)
#define CM_L4PER_TIMER10_CLKCTRL_CLKSEL_RESERVED4                                                            (15U)

#define CM_L4PER_TIMER10_CLKCTRL_RESERVED4_SHIFT                                                            (28U)
#define CM_L4PER_TIMER10_CLKCTRL_RESERVED4_MASK                                                             (0xf0000000U)

#define CM_L4PER_TIMER10_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER_TIMER10_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER_TIMER10_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER_TIMER10_CLKCTRL_RESERVED1_MASK                                                             (0x00fc0000U)

#define CM_L4PER_TIMER10_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER_TIMER10_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER_TIMER10_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER_TIMER10_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER_TIMER10_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER_TIMER10_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER_TIMER10_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER_TIMER10_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER_TIMER10_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER_TIMER10_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER_TIMER10_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER_TIMER10_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER_TIMER11_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER_TIMER11_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER_TIMER11_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER_TIMER11_CLKCTRL_RESERVED1_MASK                                                             (0x00fc0000U)

#define CM_L4PER_TIMER11_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER_TIMER11_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER_TIMER11_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER_TIMER11_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER_TIMER11_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER_TIMER11_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER_TIMER11_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER_TIMER11_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER_TIMER11_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER_TIMER11_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER_TIMER11_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER_TIMER11_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SHIFT                                                               (24U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_MASK                                                                (0x0f000000U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                    (0U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                 (1U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                         (2U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                        (3U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                        (4U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                        (5U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                        (6U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_ABE_GICLK                                                        (7U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                       (8U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                       (9U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                         (10U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_RESERVED                                                             (11U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_RESERVED1                                                            (12U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_RESERVED2                                                            (13U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_RESERVED3                                                            (14U)
#define CM_L4PER_TIMER11_CLKCTRL_CLKSEL_RESERVED4                                                            (15U)

#define CM_L4PER_TIMER11_CLKCTRL_RESERVED4_SHIFT                                                            (28U)
#define CM_L4PER_TIMER11_CLKCTRL_RESERVED4_MASK                                                             (0xf0000000U)

#define CM_L4PER_TIMER2_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER_TIMER2_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER_TIMER2_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER_TIMER2_CLKCTRL_RESERVED1_MASK                                                              (0x00fc0000U)

#define CM_L4PER_TIMER2_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER_TIMER2_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER_TIMER2_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER_TIMER2_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER_TIMER2_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER_TIMER2_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER_TIMER2_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER_TIMER2_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER_TIMER2_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER_TIMER2_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER_TIMER2_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER_TIMER2_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER_TIMER2_CLKCTRL_RESERVED4_SHIFT                                                             (28U)
#define CM_L4PER_TIMER2_CLKCTRL_RESERVED4_MASK                                                              (0xf0000000U)

#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SHIFT                                                                (24U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_MASK                                                                 (0x0f000000U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                     (0U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                  (1U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                          (2U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                         (3U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                         (4U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                         (5U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                         (6U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_ABE_GICLK                                                         (7U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                        (8U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                        (9U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                          (10U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_RESERVED                                                              (11U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_RESERVED1                                                             (12U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_RESERVED2                                                             (13U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_RESERVED3                                                             (14U)
#define CM_L4PER_TIMER2_CLKCTRL_CLKSEL_RESERVED4                                                             (15U)

#define CM_L4PER_TIMER3_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER_TIMER3_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER_TIMER3_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER_TIMER3_CLKCTRL_RESERVED1_MASK                                                              (0x00fc0000U)

#define CM_L4PER_TIMER3_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER_TIMER3_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER_TIMER3_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER_TIMER3_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER_TIMER3_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER_TIMER3_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER_TIMER3_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER_TIMER3_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER_TIMER3_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER_TIMER3_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER_TIMER3_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER_TIMER3_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SHIFT                                                                (24U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_MASK                                                                 (0x0f000000U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                     (0U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                  (1U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                          (2U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                         (3U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                         (4U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                         (5U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                         (6U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_PER_ABE_X1_GFCLK                                                  (7U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                        (8U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                        (9U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                          (10U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_RESERVED                                                              (11U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_RESERVED1                                                             (12U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_RESERVED2                                                             (13U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_RESERVED3                                                             (14U)
#define CM_L4PER_TIMER3_CLKCTRL_CLKSEL_RESERVED4                                                             (15U)

#define CM_L4PER_TIMER3_CLKCTRL_RESERVED4_SHIFT                                                             (28U)
#define CM_L4PER_TIMER3_CLKCTRL_RESERVED4_MASK                                                              (0xf0000000U)

#define CM_L4PER_TIMER4_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER_TIMER4_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER_TIMER4_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER_TIMER4_CLKCTRL_RESERVED1_MASK                                                              (0x00fc0000U)

#define CM_L4PER_TIMER4_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER_TIMER4_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER_TIMER4_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER_TIMER4_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER_TIMER4_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER_TIMER4_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER_TIMER4_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER_TIMER4_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER_TIMER4_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER_TIMER4_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER_TIMER4_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER_TIMER4_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SHIFT                                                                (24U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_MASK                                                                 (0x0f000000U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                     (0U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                  (1U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                          (2U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                         (3U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                         (4U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                         (5U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                         (6U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_PER_ABE_X1_GFCLK                                                  (7U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                        (8U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                        (9U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                          (10U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_RESERVED                                                              (11U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_RESERVED1                                                             (12U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_RESERVED2                                                             (13U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_RESERVED3                                                             (14U)
#define CM_L4PER_TIMER4_CLKCTRL_CLKSEL_RESERVED4                                                             (15U)

#define CM_L4PER_TIMER4_CLKCTRL_RESERVED2_SHIFT                                                             (28U)
#define CM_L4PER_TIMER4_CLKCTRL_RESERVED2_MASK                                                              (0xf0000000U)

#define CM_L4PER_TIMER9_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER_TIMER9_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER_TIMER9_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER_TIMER9_CLKCTRL_RESERVED1_MASK                                                              (0x00fc0000U)

#define CM_L4PER_TIMER9_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER_TIMER9_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER_TIMER9_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER_TIMER9_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER_TIMER9_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER_TIMER9_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER_TIMER9_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER_TIMER9_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER_TIMER9_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER_TIMER9_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER_TIMER9_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER_TIMER9_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SHIFT                                                                (24U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_MASK                                                                 (0x0f000000U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                     (0U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                  (1U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                          (2U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                         (3U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                         (4U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                         (5U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                         (6U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_PER_ABE_X1_GFCLK                                                  (7U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                        (8U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                        (9U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                          (10U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_RESERVED                                                              (11U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_RESERVED1                                                             (12U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_RESERVED2                                                             (13U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_RESERVED3                                                             (14U)
#define CM_L4PER_TIMER9_CLKCTRL_CLKSEL_RESERVED4                                                             (15U)

#define CM_L4PER_TIMER9_CLKCTRL_RESERVED2_SHIFT                                                             (28U)
#define CM_L4PER_TIMER9_CLKCTRL_RESERVED2_MASK                                                              (0xf0000000U)

#define CM_L4PER_ELM_CLKCTRL_RESERVED_SHIFT                                                                 (2U)
#define CM_L4PER_ELM_CLKCTRL_RESERVED_MASK                                                                  (0x0000fffcU)

#define CM_L4PER_ELM_CLKCTRL_RESERVED1_SHIFT                                                                (18U)
#define CM_L4PER_ELM_CLKCTRL_RESERVED1_MASK                                                                 (0xfffc0000U)

#define CM_L4PER_ELM_CLKCTRL_IDLEST_SHIFT                                                                   (16U)
#define CM_L4PER_ELM_CLKCTRL_IDLEST_MASK                                                                    (0x00030000U)
#define CM_L4PER_ELM_CLKCTRL_IDLEST_DISABLE                                                                  (3U)
#define CM_L4PER_ELM_CLKCTRL_IDLEST_IDLE                                                                     (2U)
#define CM_L4PER_ELM_CLKCTRL_IDLEST_FUNC                                                                     (0U)
#define CM_L4PER_ELM_CLKCTRL_IDLEST_TRANS                                                                    (1U)

#define CM_L4PER_ELM_CLKCTRL_MODULEMODE_SHIFT                                                               (0U)
#define CM_L4PER_ELM_CLKCTRL_MODULEMODE_MASK                                                                (0x00000003U)
#define CM_L4PER_ELM_CLKCTRL_MODULEMODE_AUTO                                                                 (1U)

#define CM_L4PER_GPIO2_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_GPIO2_CLKCTRL_RESERVED1_MASK                                                               (0xfffc0000U)

#define CM_L4PER_GPIO2_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_GPIO2_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_GPIO2_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_GPIO2_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_GPIO2_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_GPIO2_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_GPIO2_CLKCTRL_OPTFCLKEN_DBCLK_SHIFT                                                        (8U)
#define CM_L4PER_GPIO2_CLKCTRL_OPTFCLKEN_DBCLK_MASK                                                         (0x00000100U)
#define CM_L4PER_GPIO2_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_EN                                                       (1U)
#define CM_L4PER_GPIO2_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_DIS                                                      (0U)

#define CM_L4PER_GPIO2_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_GPIO2_CLKCTRL_RESERVED_MASK                                                                (0x000000fcU)

#define CM_L4PER_GPIO2_CLKCTRL_RESERVED2_SHIFT                                                              (9U)
#define CM_L4PER_GPIO2_CLKCTRL_RESERVED2_MASK                                                               (0x0000fe00U)

#define CM_L4PER_GPIO2_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_GPIO2_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_GPIO2_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_GPIO2_CLKCTRL_MODULEMODE_AUTO                                                               (1U)
#define CM_L4PER_GPIO2_CLKCTRL_MODULEMODE_RESERVED_2                                                         (2U)
#define CM_L4PER_GPIO2_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_GPIO3_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_GPIO3_CLKCTRL_RESERVED1_MASK                                                               (0xfffc0000U)

#define CM_L4PER_GPIO3_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_GPIO3_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_GPIO3_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_GPIO3_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_GPIO3_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_GPIO3_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_GPIO3_CLKCTRL_OPTFCLKEN_DBCLK_SHIFT                                                        (8U)
#define CM_L4PER_GPIO3_CLKCTRL_OPTFCLKEN_DBCLK_MASK                                                         (0x00000100U)
#define CM_L4PER_GPIO3_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_EN                                                       (1U)
#define CM_L4PER_GPIO3_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_DIS                                                      (0U)

#define CM_L4PER_GPIO3_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_GPIO3_CLKCTRL_RESERVED_MASK                                                                (0x000000fcU)

#define CM_L4PER_GPIO3_CLKCTRL_RESERVED2_SHIFT                                                              (9U)
#define CM_L4PER_GPIO3_CLKCTRL_RESERVED2_MASK                                                               (0x0000fe00U)

#define CM_L4PER_GPIO3_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_GPIO3_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_GPIO3_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_GPIO3_CLKCTRL_MODULEMODE_AUTO                                                               (1U)
#define CM_L4PER_GPIO3_CLKCTRL_MODULEMODE_RESERVED_2                                                         (2U)
#define CM_L4PER_GPIO3_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_GPIO4_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_GPIO4_CLKCTRL_RESERVED1_MASK                                                               (0xfffc0000U)

#define CM_L4PER_GPIO4_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_GPIO4_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_GPIO4_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_GPIO4_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_GPIO4_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_GPIO4_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_GPIO4_CLKCTRL_OPTFCLKEN_DBCLK_SHIFT                                                        (8U)
#define CM_L4PER_GPIO4_CLKCTRL_OPTFCLKEN_DBCLK_MASK                                                         (0x00000100U)
#define CM_L4PER_GPIO4_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_EN                                                       (1U)
#define CM_L4PER_GPIO4_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_DIS                                                      (0U)

#define CM_L4PER_GPIO4_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_GPIO4_CLKCTRL_RESERVED_MASK                                                                (0x000000fcU)

#define CM_L4PER_GPIO4_CLKCTRL_RESERVED2_SHIFT                                                              (9U)
#define CM_L4PER_GPIO4_CLKCTRL_RESERVED2_MASK                                                               (0x0000fe00U)

#define CM_L4PER_GPIO4_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_GPIO4_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_GPIO4_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_GPIO4_CLKCTRL_MODULEMODE_AUTO                                                               (1U)
#define CM_L4PER_GPIO4_CLKCTRL_MODULEMODE_RESERVED_2                                                         (2U)
#define CM_L4PER_GPIO4_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_GPIO5_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_GPIO5_CLKCTRL_RESERVED1_MASK                                                               (0xfffc0000U)

#define CM_L4PER_GPIO5_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_GPIO5_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_GPIO5_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_GPIO5_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_GPIO5_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_GPIO5_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_GPIO5_CLKCTRL_OPTFCLKEN_DBCLK_SHIFT                                                        (8U)
#define CM_L4PER_GPIO5_CLKCTRL_OPTFCLKEN_DBCLK_MASK                                                         (0x00000100U)
#define CM_L4PER_GPIO5_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_EN                                                       (1U)
#define CM_L4PER_GPIO5_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_DIS                                                      (0U)

#define CM_L4PER_GPIO5_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_GPIO5_CLKCTRL_RESERVED_MASK                                                                (0x000000fcU)

#define CM_L4PER_GPIO5_CLKCTRL_RESERVED2_SHIFT                                                              (9U)
#define CM_L4PER_GPIO5_CLKCTRL_RESERVED2_MASK                                                               (0x0000fe00U)

#define CM_L4PER_GPIO5_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_GPIO5_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_GPIO5_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_GPIO5_CLKCTRL_MODULEMODE_AUTO                                                               (1U)
#define CM_L4PER_GPIO5_CLKCTRL_MODULEMODE_RESERVED_2                                                         (2U)
#define CM_L4PER_GPIO5_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_GPIO6_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_GPIO6_CLKCTRL_RESERVED1_MASK                                                               (0xfffc0000U)

#define CM_L4PER_GPIO6_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_GPIO6_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_GPIO6_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_GPIO6_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_GPIO6_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_GPIO6_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_GPIO6_CLKCTRL_OPTFCLKEN_DBCLK_SHIFT                                                        (8U)
#define CM_L4PER_GPIO6_CLKCTRL_OPTFCLKEN_DBCLK_MASK                                                         (0x00000100U)
#define CM_L4PER_GPIO6_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_EN                                                       (1U)
#define CM_L4PER_GPIO6_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_DIS                                                      (0U)

#define CM_L4PER_GPIO6_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_GPIO6_CLKCTRL_RESERVED_MASK                                                                (0x000000fcU)

#define CM_L4PER_GPIO6_CLKCTRL_RESERVED2_SHIFT                                                              (9U)
#define CM_L4PER_GPIO6_CLKCTRL_RESERVED2_MASK                                                               (0x0000fe00U)

#define CM_L4PER_GPIO6_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_GPIO6_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_GPIO6_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_GPIO6_CLKCTRL_MODULEMODE_AUTO                                                               (1U)
#define CM_L4PER_GPIO6_CLKCTRL_MODULEMODE_RESERVED_2                                                         (2U)
#define CM_L4PER_GPIO6_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_HDQ1W_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_HDQ1W_CLKCTRL_RESERVED1_MASK                                                               (0xfffc0000U)

#define CM_L4PER_HDQ1W_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_HDQ1W_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_HDQ1W_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_HDQ1W_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_HDQ1W_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_HDQ1W_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_HDQ1W_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_HDQ1W_CLKCTRL_RESERVED_MASK                                                                (0x0000fffcU)

#define CM_L4PER_HDQ1W_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_HDQ1W_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_HDQ1W_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_HDQ1W_CLKCTRL_MODULEMODE_RESERVED_1                                                         (1U)
#define CM_L4PER_HDQ1W_CLKCTRL_MODULEMODE_ENABLE                                                             (2U)
#define CM_L4PER_HDQ1W_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER2_PWMSS2_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_PWMSS2_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_PWMSS2_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_PWMSS2_CLKCTRL_RESERVED1_MASK                                                             (0xfffc0000U)

#define CM_L4PER2_PWMSS2_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_PWMSS2_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_PWMSS2_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_PWMSS2_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_PWMSS2_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_PWMSS2_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_PWMSS2_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_PWMSS2_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_PWMSS2_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_PWMSS2_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_PWMSS2_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_PWMSS2_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER2_PWMSS3_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_PWMSS3_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_PWMSS3_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_PWMSS3_CLKCTRL_RESERVED1_MASK                                                             (0xfffc0000U)

#define CM_L4PER2_PWMSS3_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_PWMSS3_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_PWMSS3_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_PWMSS3_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_PWMSS3_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_PWMSS3_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_PWMSS3_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_PWMSS3_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_PWMSS3_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_PWMSS3_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_PWMSS3_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_PWMSS3_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER_I2C1_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4PER_I2C1_CLKCTRL_RESERVED_MASK                                                                 (0x0000fffcU)

#define CM_L4PER_I2C1_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4PER_I2C1_CLKCTRL_RESERVED1_MASK                                                                (0xfffc0000U)

#define CM_L4PER_I2C1_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4PER_I2C1_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4PER_I2C1_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4PER_I2C1_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4PER_I2C1_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4PER_I2C1_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4PER_I2C1_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4PER_I2C1_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4PER_I2C1_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4PER_I2C1_CLKCTRL_MODULEMODE_RESERVED_1                                                          (1U)
#define CM_L4PER_I2C1_CLKCTRL_MODULEMODE_ENABLE                                                              (2U)
#define CM_L4PER_I2C1_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4PER_I2C2_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4PER_I2C2_CLKCTRL_RESERVED_MASK                                                                 (0x0000fffcU)

#define CM_L4PER_I2C2_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4PER_I2C2_CLKCTRL_RESERVED1_MASK                                                                (0xfffc0000U)

#define CM_L4PER_I2C2_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4PER_I2C2_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4PER_I2C2_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4PER_I2C2_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4PER_I2C2_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4PER_I2C2_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4PER_I2C2_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4PER_I2C2_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4PER_I2C2_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4PER_I2C2_CLKCTRL_MODULEMODE_RESERVED_1                                                          (1U)
#define CM_L4PER_I2C2_CLKCTRL_MODULEMODE_ENABLE                                                              (2U)
#define CM_L4PER_I2C2_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4PER_I2C3_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4PER_I2C3_CLKCTRL_RESERVED_MASK                                                                 (0x0000fffcU)

#define CM_L4PER_I2C3_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4PER_I2C3_CLKCTRL_RESERVED1_MASK                                                                (0xfffc0000U)

#define CM_L4PER_I2C3_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4PER_I2C3_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4PER_I2C3_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4PER_I2C3_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4PER_I2C3_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4PER_I2C3_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4PER_I2C3_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4PER_I2C3_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4PER_I2C3_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4PER_I2C3_CLKCTRL_MODULEMODE_RESERVED_1                                                          (1U)
#define CM_L4PER_I2C3_CLKCTRL_MODULEMODE_ENABLE                                                              (2U)
#define CM_L4PER_I2C3_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4PER_I2C4_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4PER_I2C4_CLKCTRL_RESERVED_MASK                                                                 (0x0000fffcU)

#define CM_L4PER_I2C4_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4PER_I2C4_CLKCTRL_RESERVED1_MASK                                                                (0xfffc0000U)

#define CM_L4PER_I2C4_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4PER_I2C4_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4PER_I2C4_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4PER_I2C4_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4PER_I2C4_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4PER_I2C4_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4PER_I2C4_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4PER_I2C4_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4PER_I2C4_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4PER_I2C4_CLKCTRL_MODULEMODE_RESERVED_1                                                          (1U)
#define CM_L4PER_I2C4_CLKCTRL_MODULEMODE_ENABLE                                                              (2U)
#define CM_L4PER_I2C4_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4PER_L4_PER1_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER_L4_PER1_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER_L4_PER1_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER_L4_PER1_CLKCTRL_RESERVED1_MASK                                                             (0xfffc0000U)

#define CM_L4PER_L4_PER1_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER_L4_PER1_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER_L4_PER1_CLKCTRL_MODULEMODE_AUTO                                                             (1U)

#define CM_L4PER_L4_PER1_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER_L4_PER1_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER_L4_PER1_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER_L4_PER1_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER_L4_PER1_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER_L4_PER1_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_PWMSS1_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_PWMSS1_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_PWMSS1_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_PWMSS1_CLKCTRL_RESERVED1_MASK                                                             (0xfffc0000U)

#define CM_L4PER2_PWMSS1_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_PWMSS1_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_PWMSS1_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_PWMSS1_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_PWMSS1_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_PWMSS1_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_PWMSS1_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_PWMSS1_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_PWMSS1_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_PWMSS1_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_PWMSS1_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_PWMSS1_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER3_TIMER13_CLKCTRL_RESERVED_SHIFT                                                            (2U)
#define CM_L4PER3_TIMER13_CLKCTRL_RESERVED_MASK                                                             (0x0000fffcU)

#define CM_L4PER3_TIMER13_CLKCTRL_RESERVED1_SHIFT                                                           (18U)
#define CM_L4PER3_TIMER13_CLKCTRL_RESERVED1_MASK                                                            (0x00fc0000U)

#define CM_L4PER3_TIMER13_CLKCTRL_IDLEST_SHIFT                                                              (16U)
#define CM_L4PER3_TIMER13_CLKCTRL_IDLEST_MASK                                                               (0x00030000U)
#define CM_L4PER3_TIMER13_CLKCTRL_IDLEST_DISABLE                                                             (3U)
#define CM_L4PER3_TIMER13_CLKCTRL_IDLEST_IDLE                                                                (2U)
#define CM_L4PER3_TIMER13_CLKCTRL_IDLEST_FUNC                                                                (0U)
#define CM_L4PER3_TIMER13_CLKCTRL_IDLEST_TRANS                                                               (1U)

#define CM_L4PER3_TIMER13_CLKCTRL_MODULEMODE_SHIFT                                                          (0U)
#define CM_L4PER3_TIMER13_CLKCTRL_MODULEMODE_MASK                                                           (0x00000003U)
#define CM_L4PER3_TIMER13_CLKCTRL_MODULEMODE_DISABLED                                                        (0U)
#define CM_L4PER3_TIMER13_CLKCTRL_MODULEMODE_RESERVED_1                                                      (1U)
#define CM_L4PER3_TIMER13_CLKCTRL_MODULEMODE_ENABLE                                                          (2U)
#define CM_L4PER3_TIMER13_CLKCTRL_MODULEMODE_RESERVED                                                        (3U)

#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SHIFT                                                              (24U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_MASK                                                               (0x0f000000U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                   (0U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                (1U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                        (2U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                       (3U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                       (4U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                       (5U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                       (6U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_PER_ABE_X1_GFCLK                                                (7U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                      (8U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                      (9U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                        (10U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_RESERVED                                                            (11U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_RESERVED1                                                           (12U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_RESERVED2                                                           (13U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_RESERVED3                                                           (14U)
#define CM_L4PER3_TIMER13_CLKCTRL_CLKSEL_RESERVED4                                                           (15U)

#define CM_L4PER3_TIMER13_CLKCTRL_RESERVED2_SHIFT                                                           (28U)
#define CM_L4PER3_TIMER13_CLKCTRL_RESERVED2_MASK                                                            (0xf0000000U)

#define CM_L4PER3_TIMER14_CLKCTRL_RESERVED_SHIFT                                                            (2U)
#define CM_L4PER3_TIMER14_CLKCTRL_RESERVED_MASK                                                             (0x0000fffcU)

#define CM_L4PER3_TIMER14_CLKCTRL_RESERVED1_SHIFT                                                           (18U)
#define CM_L4PER3_TIMER14_CLKCTRL_RESERVED1_MASK                                                            (0x00fc0000U)

#define CM_L4PER3_TIMER14_CLKCTRL_IDLEST_SHIFT                                                              (16U)
#define CM_L4PER3_TIMER14_CLKCTRL_IDLEST_MASK                                                               (0x00030000U)
#define CM_L4PER3_TIMER14_CLKCTRL_IDLEST_DISABLE                                                             (3U)
#define CM_L4PER3_TIMER14_CLKCTRL_IDLEST_IDLE                                                                (2U)
#define CM_L4PER3_TIMER14_CLKCTRL_IDLEST_FUNC                                                                (0U)
#define CM_L4PER3_TIMER14_CLKCTRL_IDLEST_TRANS                                                               (1U)

#define CM_L4PER3_TIMER14_CLKCTRL_MODULEMODE_SHIFT                                                          (0U)
#define CM_L4PER3_TIMER14_CLKCTRL_MODULEMODE_MASK                                                           (0x00000003U)
#define CM_L4PER3_TIMER14_CLKCTRL_MODULEMODE_DISABLED                                                        (0U)
#define CM_L4PER3_TIMER14_CLKCTRL_MODULEMODE_RESERVED_1                                                      (1U)
#define CM_L4PER3_TIMER14_CLKCTRL_MODULEMODE_ENABLE                                                          (2U)
#define CM_L4PER3_TIMER14_CLKCTRL_MODULEMODE_RESERVED                                                        (3U)

#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SHIFT                                                              (24U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_MASK                                                               (0x0f000000U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                   (0U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                (1U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                        (2U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                       (3U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                       (4U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                       (5U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                       (6U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_PER_ABE_X1_GFCLK                                                (7U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                      (8U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                      (9U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                        (10U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_RESERVED                                                            (11U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_RESERVED1                                                           (12U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_RESERVED2                                                           (13U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_RESERVED3                                                           (14U)
#define CM_L4PER3_TIMER14_CLKCTRL_CLKSEL_RESERVED4                                                           (15U)

#define CM_L4PER3_TIMER14_CLKCTRL_RESERVED2_SHIFT                                                           (28U)
#define CM_L4PER3_TIMER14_CLKCTRL_RESERVED2_MASK                                                            (0xf0000000U)

#define CM_L4PER3_TIMER15_CLKCTRL_RESERVED_SHIFT                                                            (2U)
#define CM_L4PER3_TIMER15_CLKCTRL_RESERVED_MASK                                                             (0x0000fffcU)

#define CM_L4PER3_TIMER15_CLKCTRL_RESERVED1_SHIFT                                                           (18U)
#define CM_L4PER3_TIMER15_CLKCTRL_RESERVED1_MASK                                                            (0x00fc0000U)

#define CM_L4PER3_TIMER15_CLKCTRL_IDLEST_SHIFT                                                              (16U)
#define CM_L4PER3_TIMER15_CLKCTRL_IDLEST_MASK                                                               (0x00030000U)
#define CM_L4PER3_TIMER15_CLKCTRL_IDLEST_DISABLE                                                             (3U)
#define CM_L4PER3_TIMER15_CLKCTRL_IDLEST_IDLE                                                                (2U)
#define CM_L4PER3_TIMER15_CLKCTRL_IDLEST_FUNC                                                                (0U)
#define CM_L4PER3_TIMER15_CLKCTRL_IDLEST_TRANS                                                               (1U)

#define CM_L4PER3_TIMER15_CLKCTRL_MODULEMODE_SHIFT                                                          (0U)
#define CM_L4PER3_TIMER15_CLKCTRL_MODULEMODE_MASK                                                           (0x00000003U)
#define CM_L4PER3_TIMER15_CLKCTRL_MODULEMODE_DISABLED                                                        (0U)
#define CM_L4PER3_TIMER15_CLKCTRL_MODULEMODE_RESERVED_1                                                      (1U)
#define CM_L4PER3_TIMER15_CLKCTRL_MODULEMODE_ENABLE                                                          (2U)
#define CM_L4PER3_TIMER15_CLKCTRL_MODULEMODE_RESERVED                                                        (3U)

#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SHIFT                                                              (24U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_MASK                                                               (0x0f000000U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                   (0U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                (1U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                        (2U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                       (3U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                       (4U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                       (5U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                       (6U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_PER_ABE_X1_GFCLK                                                (7U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                      (8U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                      (9U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                        (10U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_RESERVED                                                            (11U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_RESERVED1                                                           (12U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_RESERVED2                                                           (13U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_RESERVED3                                                           (14U)
#define CM_L4PER3_TIMER15_CLKCTRL_CLKSEL_RESERVED4                                                           (15U)

#define CM_L4PER3_TIMER15_CLKCTRL_RESERVED2_SHIFT                                                           (28U)
#define CM_L4PER3_TIMER15_CLKCTRL_RESERVED2_MASK                                                            (0xf0000000U)

#define CM_L4PER_MCSPI1_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER_MCSPI1_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER_MCSPI1_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER_MCSPI1_CLKCTRL_RESERVED1_MASK                                                              (0xfffc0000U)

#define CM_L4PER_MCSPI1_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER_MCSPI1_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER_MCSPI1_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER_MCSPI1_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER_MCSPI1_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER_MCSPI1_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER_MCSPI1_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER_MCSPI1_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER_MCSPI1_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER_MCSPI1_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER_MCSPI1_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER_MCSPI1_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER_MCSPI2_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER_MCSPI2_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER_MCSPI2_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER_MCSPI2_CLKCTRL_RESERVED1_MASK                                                              (0xfffc0000U)

#define CM_L4PER_MCSPI2_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER_MCSPI2_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER_MCSPI2_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER_MCSPI2_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER_MCSPI2_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER_MCSPI2_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER_MCSPI2_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER_MCSPI2_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER_MCSPI2_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER_MCSPI2_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER_MCSPI2_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER_MCSPI2_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER_MCSPI3_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER_MCSPI3_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER_MCSPI3_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER_MCSPI3_CLKCTRL_RESERVED1_MASK                                                              (0xfffc0000U)

#define CM_L4PER_MCSPI3_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER_MCSPI3_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER_MCSPI3_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER_MCSPI3_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER_MCSPI3_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER_MCSPI3_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER_MCSPI3_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER_MCSPI3_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER_MCSPI3_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER_MCSPI3_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER_MCSPI3_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER_MCSPI3_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER_MCSPI4_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER_MCSPI4_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER_MCSPI4_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER_MCSPI4_CLKCTRL_RESERVED1_MASK                                                              (0xfffc0000U)

#define CM_L4PER_MCSPI4_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER_MCSPI4_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER_MCSPI4_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER_MCSPI4_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER_MCSPI4_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER_MCSPI4_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER_MCSPI4_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER_MCSPI4_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER_MCSPI4_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER_MCSPI4_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER_MCSPI4_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER_MCSPI4_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER_GPIO7_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_GPIO7_CLKCTRL_RESERVED1_MASK                                                               (0xfffc0000U)

#define CM_L4PER_GPIO7_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_GPIO7_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_GPIO7_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_GPIO7_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_GPIO7_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_GPIO7_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_GPIO7_CLKCTRL_OPTFCLKEN_DBCLK_SHIFT                                                        (8U)
#define CM_L4PER_GPIO7_CLKCTRL_OPTFCLKEN_DBCLK_MASK                                                         (0x00000100U)
#define CM_L4PER_GPIO7_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_EN                                                       (1U)
#define CM_L4PER_GPIO7_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_DIS                                                      (0U)

#define CM_L4PER_GPIO7_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_GPIO7_CLKCTRL_RESERVED_MASK                                                                (0x000000fcU)

#define CM_L4PER_GPIO7_CLKCTRL_RESERVED2_SHIFT                                                              (9U)
#define CM_L4PER_GPIO7_CLKCTRL_RESERVED2_MASK                                                               (0x0000fe00U)

#define CM_L4PER_GPIO7_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_GPIO7_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_GPIO7_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_GPIO7_CLKCTRL_MODULEMODE_AUTO                                                               (1U)
#define CM_L4PER_GPIO7_CLKCTRL_MODULEMODE_RESERVED_2                                                         (2U)
#define CM_L4PER_GPIO7_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_GPIO8_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_GPIO8_CLKCTRL_RESERVED1_MASK                                                               (0xfffc0000U)

#define CM_L4PER_GPIO8_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_GPIO8_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_GPIO8_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_GPIO8_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_GPIO8_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_GPIO8_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_GPIO8_CLKCTRL_OPTFCLKEN_DBCLK_SHIFT                                                        (8U)
#define CM_L4PER_GPIO8_CLKCTRL_OPTFCLKEN_DBCLK_MASK                                                         (0x00000100U)
#define CM_L4PER_GPIO8_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_EN                                                       (1U)
#define CM_L4PER_GPIO8_CLKCTRL_OPTFCLKEN_DBCLK_FCLK_DIS                                                      (0U)

#define CM_L4PER_GPIO8_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_GPIO8_CLKCTRL_RESERVED_MASK                                                                (0x000000fcU)

#define CM_L4PER_GPIO8_CLKCTRL_RESERVED2_SHIFT                                                              (9U)
#define CM_L4PER_GPIO8_CLKCTRL_RESERVED2_MASK                                                               (0x0000fe00U)

#define CM_L4PER_GPIO8_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_GPIO8_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_GPIO8_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_GPIO8_CLKCTRL_MODULEMODE_AUTO                                                               (1U)
#define CM_L4PER_GPIO8_CLKCTRL_MODULEMODE_RESERVED_2                                                         (2U)
#define CM_L4PER_GPIO8_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_MMC3_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4PER_MMC3_CLKCTRL_RESERVED1_MASK                                                                (0x00fc0000U)

#define CM_L4PER_MMC3_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4PER_MMC3_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4PER_MMC3_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4PER_MMC3_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4PER_MMC3_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4PER_MMC3_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4PER_MMC3_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4PER_MMC3_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4PER_MMC3_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4PER_MMC3_CLKCTRL_MODULEMODE_RESERVED_1                                                          (1U)
#define CM_L4PER_MMC3_CLKCTRL_MODULEMODE_ENABLE                                                              (2U)
#define CM_L4PER_MMC3_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_MUX_SHIFT                                                              (24U)
#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_MUX_MASK                                                               (0x01000000U)
#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_MUX_SEL_FUNC_48M_CLK                                                    (0U)
#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_MUX_SEL_FUNC_192M_CLK                                                   (1U)

#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_DIV_SHIFT                                                              (25U)
#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_DIV_MASK                                                               (0x06000000U)
#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_DIV_MMCCLK_DIV_1                                                        (0U)
#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_DIV_MMCCLK_DIV_2                                                        (1U)
#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_DIV_MMCCLK_DIV_4                                                        (2U)
#define CM_L4PER_MMC3_CLKCTRL_CLKSEL_DIV_RESERVED                                                            (3U)

#define CM_L4PER_MMC3_CLKCTRL_RESERVED2_SHIFT                                                               (27U)
#define CM_L4PER_MMC3_CLKCTRL_RESERVED2_MASK                                                                (0xf8000000U)

#define CM_L4PER_MMC3_CLKCTRL_OPTFCLKEN_CLK32K_SHIFT                                                        (8U)
#define CM_L4PER_MMC3_CLKCTRL_OPTFCLKEN_CLK32K_MASK                                                         (0x00000100U)
#define CM_L4PER_MMC3_CLKCTRL_OPTFCLKEN_CLK32K_FCLK_EN                                                       (1U)
#define CM_L4PER_MMC3_CLKCTRL_OPTFCLKEN_CLK32K_FCLK_DIS                                                      (0U)

#define CM_L4PER_MMC3_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4PER_MMC3_CLKCTRL_RESERVED_MASK                                                                 (0x000000fcU)

#define CM_L4PER_MMC3_CLKCTRL_RESERVED3_SHIFT                                                               (9U)
#define CM_L4PER_MMC3_CLKCTRL_RESERVED3_MASK                                                                (0x0000fe00U)

#define CM_L4PER_MMC4_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4PER_MMC4_CLKCTRL_RESERVED1_MASK                                                                (0x00fc0000U)

#define CM_L4PER_MMC4_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4PER_MMC4_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4PER_MMC4_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4PER_MMC4_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4PER_MMC4_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4PER_MMC4_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4PER_MMC4_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4PER_MMC4_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4PER_MMC4_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4PER_MMC4_CLKCTRL_MODULEMODE_RESERVED_1                                                          (1U)
#define CM_L4PER_MMC4_CLKCTRL_MODULEMODE_ENABLE                                                              (2U)
#define CM_L4PER_MMC4_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_MUX_SHIFT                                                              (24U)
#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_MUX_MASK                                                               (0x01000000U)
#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_MUX_SEL_FUNC_48M_CLK                                                    (0U)
#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_MUX_SEL_FUNC_192M_CLK                                                   (1U)

#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_DIV_SHIFT                                                              (25U)
#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_DIV_MASK                                                               (0x06000000U)
#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_DIV_MMCCLK_DIV_1                                                        (0U)
#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_DIV_MMCCLK_DIV_2                                                        (1U)
#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_DIV_MMCCLK_DIV_4                                                        (2U)
#define CM_L4PER_MMC4_CLKCTRL_CLKSEL_DIV_RESERVED                                                            (3U)

#define CM_L4PER_MMC4_CLKCTRL_RESERVED2_SHIFT                                                               (27U)
#define CM_L4PER_MMC4_CLKCTRL_RESERVED2_MASK                                                                (0xf8000000U)

#define CM_L4PER_MMC4_CLKCTRL_OPTFCLKEN_CLK32K_SHIFT                                                        (8U)
#define CM_L4PER_MMC4_CLKCTRL_OPTFCLKEN_CLK32K_MASK                                                         (0x00000100U)
#define CM_L4PER_MMC4_CLKCTRL_OPTFCLKEN_CLK32K_FCLK_EN                                                       (1U)
#define CM_L4PER_MMC4_CLKCTRL_OPTFCLKEN_CLK32K_FCLK_DIS                                                      (0U)

#define CM_L4PER_MMC4_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4PER_MMC4_CLKCTRL_RESERVED_MASK                                                                 (0x000000fcU)

#define CM_L4PER_MMC4_CLKCTRL_RESERVED3_SHIFT                                                               (9U)
#define CM_L4PER_MMC4_CLKCTRL_RESERVED3_MASK                                                                (0x0000fe00U)

#define CM_L4PER3_TIMER16_CLKCTRL_RESERVED_SHIFT                                                            (2U)
#define CM_L4PER3_TIMER16_CLKCTRL_RESERVED_MASK                                                             (0x0000fffcU)

#define CM_L4PER3_TIMER16_CLKCTRL_RESERVED1_SHIFT                                                           (18U)
#define CM_L4PER3_TIMER16_CLKCTRL_RESERVED1_MASK                                                            (0x00fc0000U)

#define CM_L4PER3_TIMER16_CLKCTRL_IDLEST_SHIFT                                                              (16U)
#define CM_L4PER3_TIMER16_CLKCTRL_IDLEST_MASK                                                               (0x00030000U)
#define CM_L4PER3_TIMER16_CLKCTRL_IDLEST_DISABLE                                                             (3U)
#define CM_L4PER3_TIMER16_CLKCTRL_IDLEST_IDLE                                                                (2U)
#define CM_L4PER3_TIMER16_CLKCTRL_IDLEST_FUNC                                                                (0U)
#define CM_L4PER3_TIMER16_CLKCTRL_IDLEST_TRANS                                                               (1U)

#define CM_L4PER3_TIMER16_CLKCTRL_MODULEMODE_SHIFT                                                          (0U)
#define CM_L4PER3_TIMER16_CLKCTRL_MODULEMODE_MASK                                                           (0x00000003U)
#define CM_L4PER3_TIMER16_CLKCTRL_MODULEMODE_DISABLED                                                        (0U)
#define CM_L4PER3_TIMER16_CLKCTRL_MODULEMODE_RESERVED_1                                                      (1U)
#define CM_L4PER3_TIMER16_CLKCTRL_MODULEMODE_ENABLE                                                          (2U)
#define CM_L4PER3_TIMER16_CLKCTRL_MODULEMODE_RESERVED                                                        (3U)

#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SHIFT                                                              (24U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_MASK                                                               (0x0f000000U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_TIMER_SYS_CLK                                                   (0U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_SYS_CLK1_32K_CLK                                                (1U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_SYS_CLK2                                                        (2U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_XREF_CLK0                                                       (3U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_XREF_CLK1                                                       (4U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_XREF_CLK2                                                       (5U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_XREF_CLK3                                                       (6U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_PER_ABE_X1_GFCLK                                                (7U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_VIDEO1_CLK                                                      (8U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_VIDEO2_CLK                                                      (9U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_SEL_HDMI_CLK                                                        (10U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_RESERVED                                                            (11U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_RESERVED1                                                           (12U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_RESERVED2                                                           (13U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_RESERVED3                                                           (14U)
#define CM_L4PER3_TIMER16_CLKCTRL_CLKSEL_RESERVED4                                                           (15U)

#define CM_L4PER3_TIMER16_CLKCTRL_RESERVED2_SHIFT                                                           (28U)
#define CM_L4PER3_TIMER16_CLKCTRL_RESERVED2_MASK                                                            (0xf0000000U)

#define CM_L4PER2_QSPI_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER2_QSPI_CLKCTRL_RESERVED_MASK                                                                (0x0000fffcU)

#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_SOURCE_SHIFT                                                          (24U)
#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_SOURCE_MASK                                                           (0x01000000U)
#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_SOURCE_SEL_FUNC_128M_CLK                                               (0U)
#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_SOURCE_SEL_PER_QSPI_CLK                                                (1U)

#define CM_L4PER2_QSPI_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER2_QSPI_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER2_QSPI_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER2_QSPI_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER2_QSPI_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER2_QSPI_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER2_QSPI_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER2_QSPI_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER2_QSPI_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER2_QSPI_CLKCTRL_MODULEMODE_RESERVED_1                                                         (1U)
#define CM_L4PER2_QSPI_CLKCTRL_MODULEMODE_ENABLED                                                            (2U)
#define CM_L4PER2_QSPI_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_DIV_SHIFT                                                             (25U)
#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_DIV_MASK                                                              (0x06000000U)
#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_DIV_DIV1                                                               (0U)
#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_DIV_DIV2                                                               (1U)
#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_DIV_DIV4                                                               (2U)
#define CM_L4PER2_QSPI_CLKCTRL_CLKSEL_DIV_RESERVED                                                           (3U)

#define CM_L4PER2_QSPI_CLKCTRL_RESERVED2_SHIFT                                                              (27U)
#define CM_L4PER2_QSPI_CLKCTRL_RESERVED2_MASK                                                               (0xf8000000U)

#define CM_L4PER2_QSPI_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER2_QSPI_CLKCTRL_RESERVED1_MASK                                                               (0x00fc0000U)

#define CM_L4PER_UART1_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_UART1_CLKCTRL_RESERVED_MASK                                                                (0x0000fffcU)

#define CM_L4PER_UART1_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_UART1_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_UART1_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_UART1_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_UART1_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_UART1_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_UART1_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_UART1_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_UART1_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_UART1_CLKCTRL_MODULEMODE_RESERVED_1                                                         (1U)
#define CM_L4PER_UART1_CLKCTRL_MODULEMODE_ENABLE                                                             (2U)
#define CM_L4PER_UART1_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_UART1_CLKCTRL_CLKSEL_SHIFT                                                                 (24U)
#define CM_L4PER_UART1_CLKCTRL_CLKSEL_MASK                                                                  (0x01000000U)
#define CM_L4PER_UART1_CLKCTRL_CLKSEL_SEL_FUNC_48M_CLK                                                       (0U)
#define CM_L4PER_UART1_CLKCTRL_CLKSEL_SEL_FUNC_192M_CLK                                                      (1U)

#define CM_L4PER_UART1_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_UART1_CLKCTRL_RESERVED1_MASK                                                               (0x00fc0000U)

#define CM_L4PER_UART1_CLKCTRL_RESERVED2_SHIFT                                                              (25U)
#define CM_L4PER_UART1_CLKCTRL_RESERVED2_MASK                                                               (0xfe000000U)

#define CM_L4PER_UART2_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_UART2_CLKCTRL_RESERVED_MASK                                                                (0x0000fffcU)

#define CM_L4PER_UART2_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_UART2_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_UART2_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_UART2_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_UART2_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_UART2_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_UART2_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_UART2_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_UART2_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_UART2_CLKCTRL_MODULEMODE_RESERVED_1                                                         (1U)
#define CM_L4PER_UART2_CLKCTRL_MODULEMODE_ENABLE                                                             (2U)
#define CM_L4PER_UART2_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_UART2_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_UART2_CLKCTRL_RESERVED1_MASK                                                               (0x00fc0000U)

#define CM_L4PER_UART2_CLKCTRL_CLKSEL_SHIFT                                                                 (24U)
#define CM_L4PER_UART2_CLKCTRL_CLKSEL_MASK                                                                  (0x01000000U)
#define CM_L4PER_UART2_CLKCTRL_CLKSEL_SEL_FUNC_48M_CLK                                                       (0U)
#define CM_L4PER_UART2_CLKCTRL_CLKSEL_SEL_FUNC_192M_CLK                                                      (1U)

#define CM_L4PER_UART2_CLKCTRL_RESERVED2_SHIFT                                                              (25U)
#define CM_L4PER_UART2_CLKCTRL_RESERVED2_MASK                                                               (0xfe000000U)

#define CM_L4PER_UART3_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_UART3_CLKCTRL_RESERVED_MASK                                                                (0x0000fffcU)

#define CM_L4PER_UART3_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_UART3_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_UART3_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_UART3_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_UART3_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_UART3_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_UART3_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_UART3_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_UART3_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_UART3_CLKCTRL_MODULEMODE_RESERVED_1                                                         (1U)
#define CM_L4PER_UART3_CLKCTRL_MODULEMODE_ENABLE                                                             (2U)
#define CM_L4PER_UART3_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_UART3_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_UART3_CLKCTRL_RESERVED1_MASK                                                               (0x00fc0000U)

#define CM_L4PER_UART3_CLKCTRL_CLKSEL_SHIFT                                                                 (24U)
#define CM_L4PER_UART3_CLKCTRL_CLKSEL_MASK                                                                  (0x01000000U)
#define CM_L4PER_UART3_CLKCTRL_CLKSEL_SEL_FUNC_48M_CLK                                                       (0U)
#define CM_L4PER_UART3_CLKCTRL_CLKSEL_SEL_FUNC_192M_CLK                                                      (1U)

#define CM_L4PER_UART3_CLKCTRL_RESERVED2_SHIFT                                                              (25U)
#define CM_L4PER_UART3_CLKCTRL_RESERVED2_MASK                                                               (0xfe000000U)

#define CM_L4PER_UART4_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_UART4_CLKCTRL_RESERVED_MASK                                                                (0x0000fffcU)

#define CM_L4PER_UART4_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_UART4_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_UART4_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_UART4_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_UART4_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_UART4_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_UART4_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_UART4_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_UART4_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_UART4_CLKCTRL_MODULEMODE_RESERVED_1                                                         (1U)
#define CM_L4PER_UART4_CLKCTRL_MODULEMODE_ENABLE                                                             (2U)
#define CM_L4PER_UART4_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_UART4_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_UART4_CLKCTRL_RESERVED1_MASK                                                               (0x00fc0000U)

#define CM_L4PER_UART4_CLKCTRL_CLKSEL_SHIFT                                                                 (24U)
#define CM_L4PER_UART4_CLKCTRL_CLKSEL_MASK                                                                  (0x01000000U)
#define CM_L4PER_UART4_CLKCTRL_CLKSEL_SEL_FUNC_48M_CLK                                                       (0U)
#define CM_L4PER_UART4_CLKCTRL_CLKSEL_SEL_FUNC_192M_CLK                                                      (1U)

#define CM_L4PER_UART4_CLKCTRL_RESERVED2_SHIFT                                                              (25U)
#define CM_L4PER_UART4_CLKCTRL_RESERVED2_MASK                                                               (0xfe000000U)

#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AUX_CLK_SHIFT                                                       (22U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AUX_CLK_MASK                                                        (0x00c00000U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AUX_CLK_SEL_PER_ABE_X1_GFCLK                                         (0U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO1_CLK                                               (1U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO2_CLK                                               (2U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AUX_CLK_SEL_HDMI_CLK                                                 (3U)

#define CM_L4PER2_MCASP2_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_MCASP2_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_MCASP2_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_MCASP2_CLKCTRL_RESERVED1_MASK                                                             (0x003c0000U)

#define CM_L4PER2_MCASP2_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_MCASP2_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_MCASP2_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_MCASP2_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_MCASP2_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_MCASP2_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_MCASP2_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_MCASP2_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_MCASP2_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_MCASP2_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_MCASP2_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_MCASP2_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SHIFT                                                        (24U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_MASK                                                         (0x0f000000U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_24M_GFCLK                                             (0U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_SYS_CLK                                               (1U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_FUNC_24M_GFCLK                                            (2U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK3                                                  (3U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK2                                                  (4U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK1                                                  (5U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK0                                                  (6U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_SYS_SLK2                                                  (7U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK0                                                 (8U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK1                                                 (9U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK2                                                 (10U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK3                                                 (11U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_MLB_CLK                                                   (12U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_SEL_MLBP_CLK                                                  (13U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_RESERVED                                                      (14U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKX_RESERVED1                                                     (15U)

#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SHIFT                                                        (28U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_MASK                                                         (0xf0000000U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_ABE_24M_GFCLK                                             (0U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_ABE_SYS_CLK                                               (1U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_FUNC_24M_GFCLK                                            (2U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_ATL_CLK3                                                  (3U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_ATL_CLK2                                                  (4U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_ATL_CLK1                                                  (5U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_ATL_CLK0                                                  (6U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_SYS_SLK2                                                  (7U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_XREF_CLK0                                                 (8U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_XREF_CLK1                                                 (9U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_XREF_CLK2                                                 (10U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_XREF_CLK3                                                 (11U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_MLB_CLK                                                   (12U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_SEL_MLBP_CLK                                                  (13U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_RESERVED                                                      (14U)
#define CM_L4PER2_MCASP2_CLKCTRL_CLKSEL_AHCLKR_RESERVED1                                                     (15U)

#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AUX_CLK_SHIFT                                                       (22U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AUX_CLK_MASK                                                        (0x00c00000U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AUX_CLK_SEL_PER_ABE_X1_GFCLK                                         (0U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO1_CLK                                               (1U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO2_CLK                                               (2U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AUX_CLK_SEL_HDMI_CLK                                                 (3U)

#define CM_L4PER2_MCASP3_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_MCASP3_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_MCASP3_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_MCASP3_CLKCTRL_RESERVED1_MASK                                                             (0x003c0000U)

#define CM_L4PER2_MCASP3_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_MCASP3_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_MCASP3_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_MCASP3_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_MCASP3_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_MCASP3_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_MCASP3_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_MCASP3_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_MCASP3_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_MCASP3_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_MCASP3_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_MCASP3_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SHIFT                                                        (24U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_MASK                                                         (0x0f000000U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_24M_GFCLK                                             (0U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_SYS_CLK                                               (1U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_FUNC_24M_GFCLK                                            (2U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK3                                                  (3U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK2                                                  (4U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK1                                                  (5U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK0                                                  (6U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_SYS_SLK2                                                  (7U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK0                                                 (8U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK1                                                 (9U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK2                                                 (10U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK3                                                 (11U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_MLB_CLK                                                   (12U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_SEL_MLBP_CLK                                                  (13U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_RESERVED                                                      (14U)
#define CM_L4PER2_MCASP3_CLKCTRL_CLKSEL_AHCLKX_RESERVED1                                                     (15U)

#define CM_L4PER2_MCASP3_CLKCTRL_RESERVED2_SHIFT                                                            (28U)
#define CM_L4PER2_MCASP3_CLKCTRL_RESERVED2_MASK                                                             (0xf0000000U)

#define CM_L4PER_UART5_CLKCTRL_RESERVED_SHIFT                                                               (2U)
#define CM_L4PER_UART5_CLKCTRL_RESERVED_MASK                                                                (0x0000fffcU)

#define CM_L4PER_UART5_CLKCTRL_IDLEST_SHIFT                                                                 (16U)
#define CM_L4PER_UART5_CLKCTRL_IDLEST_MASK                                                                  (0x00030000U)
#define CM_L4PER_UART5_CLKCTRL_IDLEST_DISABLE                                                                (3U)
#define CM_L4PER_UART5_CLKCTRL_IDLEST_IDLE                                                                   (2U)
#define CM_L4PER_UART5_CLKCTRL_IDLEST_FUNC                                                                   (0U)
#define CM_L4PER_UART5_CLKCTRL_IDLEST_TRANS                                                                  (1U)

#define CM_L4PER_UART5_CLKCTRL_MODULEMODE_SHIFT                                                             (0U)
#define CM_L4PER_UART5_CLKCTRL_MODULEMODE_MASK                                                              (0x00000003U)
#define CM_L4PER_UART5_CLKCTRL_MODULEMODE_DISABLED                                                           (0U)
#define CM_L4PER_UART5_CLKCTRL_MODULEMODE_RESERVED_1                                                         (1U)
#define CM_L4PER_UART5_CLKCTRL_MODULEMODE_ENABLE                                                             (2U)
#define CM_L4PER_UART5_CLKCTRL_MODULEMODE_RESERVED                                                           (3U)

#define CM_L4PER_UART5_CLKCTRL_RESERVED1_SHIFT                                                              (18U)
#define CM_L4PER_UART5_CLKCTRL_RESERVED1_MASK                                                               (0x00fc0000U)

#define CM_L4PER_UART5_CLKCTRL_CLKSEL_SHIFT                                                                 (24U)
#define CM_L4PER_UART5_CLKCTRL_CLKSEL_MASK                                                                  (0x01000000U)
#define CM_L4PER_UART5_CLKCTRL_CLKSEL_SEL_FUNC_48M_CLK                                                       (0U)
#define CM_L4PER_UART5_CLKCTRL_CLKSEL_SEL_FUNC_192M_CLK                                                      (1U)

#define CM_L4PER_UART5_CLKCTRL_RESERVED2_SHIFT                                                              (25U)
#define CM_L4PER_UART5_CLKCTRL_RESERVED2_MASK                                                               (0xfe000000U)

#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AUX_CLK_SHIFT                                                       (22U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AUX_CLK_MASK                                                        (0x00c00000U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AUX_CLK_SEL_PER_ABE_X1_GFCLK                                         (0U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO1_CLK                                               (1U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO2_CLK                                               (2U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AUX_CLK_SEL_HDMI_CLK                                                 (3U)

#define CM_L4PER2_MCASP5_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_MCASP5_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_MCASP5_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_MCASP5_CLKCTRL_RESERVED1_MASK                                                             (0x003c0000U)

#define CM_L4PER2_MCASP5_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_MCASP5_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_MCASP5_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_MCASP5_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_MCASP5_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_MCASP5_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_MCASP5_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_MCASP5_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_MCASP5_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_MCASP5_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_MCASP5_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_MCASP5_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SHIFT                                                        (24U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_MASK                                                         (0x0f000000U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_24M_GFCLK                                             (0U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_SYS_CLK                                               (1U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_FUNC_24M_GFCLK                                            (2U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK3                                                  (3U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK2                                                  (4U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK1                                                  (5U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK0                                                  (6U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_SYS_SLK2                                                  (7U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK0                                                 (8U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK1                                                 (9U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK2                                                 (10U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK3                                                 (11U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_MLB_CLK                                                   (12U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_SEL_MLBP_CLK                                                  (13U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_RESERVED                                                      (14U)
#define CM_L4PER2_MCASP5_CLKCTRL_CLKSEL_AHCLKX_RESERVED1                                                     (15U)

#define CM_L4PER2_MCASP5_CLKCTRL_RESERVED2_SHIFT                                                            (28U)
#define CM_L4PER2_MCASP5_CLKCTRL_RESERVED2_MASK                                                             (0xf0000000U)

#define CM_L4SEC_CLKSTCTRL_RESERVED_SHIFT                                                                   (2U)
#define CM_L4SEC_CLKSTCTRL_RESERVED_MASK                                                                    (0x000000fcU)

#define CM_L4SEC_CLKSTCTRL_CLKACTIVITY_L4SEC_L3_GICLK_SHIFT                                                 (8U)
#define CM_L4SEC_CLKSTCTRL_CLKACTIVITY_L4SEC_L3_GICLK_MASK                                                  (0x00000100U)
#define CM_L4SEC_CLKSTCTRL_CLKACTIVITY_L4SEC_L3_GICLK_INACT                                                  (0U)
#define CM_L4SEC_CLKSTCTRL_CLKACTIVITY_L4SEC_L3_GICLK_ACT                                                    (1U)

#define CM_L4SEC_CLKSTCTRL_RESERVED1_SHIFT                                                                  (9U)
#define CM_L4SEC_CLKSTCTRL_RESERVED1_MASK                                                                   (0xfffffe00U)

#define CM_L4SEC_CLKSTCTRL_CLKTRCTRL_SHIFT                                                                  (0U)
#define CM_L4SEC_CLKSTCTRL_CLKTRCTRL_MASK                                                                   (0x00000003U)
#define CM_L4SEC_CLKSTCTRL_CLKTRCTRL_NO_SLEEP                                                                (0U)
#define CM_L4SEC_CLKSTCTRL_CLKTRCTRL_SW_SLEEP                                                                (1U)
#define CM_L4SEC_CLKSTCTRL_CLKTRCTRL_SW_WKUP                                                                 (2U)
#define CM_L4SEC_CLKSTCTRL_CLKTRCTRL_HW_AUTO                                                                 (3U)

#define CM_L4SEC_STATICDEP_EMIF_STATDEP_SHIFT                                                               (4U)
#define CM_L4SEC_STATICDEP_EMIF_STATDEP_MASK                                                                (0x00000010U)
#define CM_L4SEC_STATICDEP_EMIF_STATDEP_ENABLED                                                              (1U)
#define CM_L4SEC_STATICDEP_EMIF_STATDEP_DISABLED                                                             (0U)

#define CM_L4SEC_STATICDEP_L3MAIN1_STATDEP_SHIFT                                                            (5U)
#define CM_L4SEC_STATICDEP_L3MAIN1_STATDEP_MASK                                                             (0x00000020U)
#define CM_L4SEC_STATICDEP_L3MAIN1_STATDEP_ENABLED                                                           (1U)

#define CM_L4SEC_STATICDEP_RESERVED_SHIFT                                                                   (0U)
#define CM_L4SEC_STATICDEP_RESERVED_MASK                                                                    (0x0000000fU)

#define CM_L4SEC_STATICDEP_L4PER_STATDEP_SHIFT                                                              (13U)
#define CM_L4SEC_STATICDEP_L4PER_STATDEP_MASK                                                               (0x00002000U)
#define CM_L4SEC_STATICDEP_L4PER_STATDEP_ENABLED                                                             (1U)
#define CM_L4SEC_STATICDEP_L4PER_STATDEP_DISABLED                                                            (0U)

#define CM_L4SEC_STATICDEP_RESERVED2_SHIFT                                                                  (14U)
#define CM_L4SEC_STATICDEP_RESERVED2_MASK                                                                   (0xffffc000U)

#define CM_L4SEC_STATICDEP_RESERVED1_SHIFT                                                                  (6U)
#define CM_L4SEC_STATICDEP_RESERVED1_MASK                                                                   (0x00001fc0U)

#define CM_L4SEC_DYNAMICDEP_L3MAIN1_DYNDEP_SHIFT                                                            (5U)
#define CM_L4SEC_DYNAMICDEP_L3MAIN1_DYNDEP_MASK                                                             (0x00000020U)
#define CM_L4SEC_DYNAMICDEP_L3MAIN1_DYNDEP_DISABLED                                                          (0U)

#define CM_L4SEC_DYNAMICDEP_RESERVED1_SHIFT                                                                 (7U)
#define CM_L4SEC_DYNAMICDEP_RESERVED1_MASK                                                                  (0xffffff80U)

#define CM_L4SEC_DYNAMICDEP_RESERVED_SHIFT                                                                  (0U)
#define CM_L4SEC_DYNAMICDEP_RESERVED_MASK                                                                   (0x0000001fU)

#define CM_L4SEC_DYNAMICDEP_RESERVED2_SHIFT                                                                 (6U)
#define CM_L4SEC_DYNAMICDEP_RESERVED2_MASK                                                                  (0x00000040U)

#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AUX_CLK_SHIFT                                                       (22U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AUX_CLK_MASK                                                        (0x00c00000U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AUX_CLK_SEL_PER_ABE_X1_GFCLK                                         (0U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO1_CLK                                               (1U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO2_CLK                                               (2U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AUX_CLK_SEL_HDMI_CLK                                                 (3U)

#define CM_L4PER2_MCASP8_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_MCASP8_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_MCASP8_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_MCASP8_CLKCTRL_RESERVED1_MASK                                                             (0x003c0000U)

#define CM_L4PER2_MCASP8_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_MCASP8_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_MCASP8_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_MCASP8_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_MCASP8_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_MCASP8_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_MCASP8_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_MCASP8_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_MCASP8_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_MCASP8_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_MCASP8_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_MCASP8_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SHIFT                                                        (24U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_MASK                                                         (0x0f000000U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_24M_GFCLK                                             (0U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_SYS_CLK                                               (1U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_FUNC_24M_GFCLK                                            (2U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK3                                                  (3U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK2                                                  (4U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK1                                                  (5U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK0                                                  (6U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_SYS_SLK2                                                  (7U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK0                                                 (8U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK1                                                 (9U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK2                                                 (10U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK3                                                 (11U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_MLB_CLK                                                   (12U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_SEL_MLBP_CLK                                                  (13U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_RESERVED                                                      (14U)
#define CM_L4PER2_MCASP8_CLKCTRL_CLKSEL_AHCLKX_RESERVED1                                                     (15U)

#define CM_L4PER2_MCASP8_CLKCTRL_RESERVED2_SHIFT                                                            (28U)
#define CM_L4PER2_MCASP8_CLKCTRL_RESERVED2_MASK                                                             (0xf0000000U)

#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AUX_CLK_SHIFT                                                       (22U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AUX_CLK_MASK                                                        (0x00c00000U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AUX_CLK_SEL_PER_ABE_X1_GFCLK                                         (0U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO1_CLK                                               (1U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO2_CLK                                               (2U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AUX_CLK_SEL_HDMI_CLK                                                 (3U)

#define CM_L4PER2_MCASP4_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_MCASP4_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_MCASP4_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_MCASP4_CLKCTRL_RESERVED1_MASK                                                             (0x003c0000U)

#define CM_L4PER2_MCASP4_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_MCASP4_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_MCASP4_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_MCASP4_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_MCASP4_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_MCASP4_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_MCASP4_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_MCASP4_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_MCASP4_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_MCASP4_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_MCASP4_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_MCASP4_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SHIFT                                                        (24U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_MASK                                                         (0x0f000000U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_24M_GFCLK                                             (0U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_SYS_CLK                                               (1U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_FUNC_24M_GFCLK                                            (2U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK3                                                  (3U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK2                                                  (4U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK1                                                  (5U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK0                                                  (6U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_SYS_SLK2                                                  (7U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK0                                                 (8U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK1                                                 (9U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK2                                                 (10U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK3                                                 (11U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_MLB_CLK                                                   (12U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_SEL_MLBP_CLK                                                  (13U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_RESERVED                                                      (14U)
#define CM_L4PER2_MCASP4_CLKCTRL_CLKSEL_AHCLKX_RESERVED1                                                     (15U)

#define CM_L4PER2_MCASP4_CLKCTRL_RESERVED2_SHIFT                                                            (28U)
#define CM_L4PER2_MCASP4_CLKCTRL_RESERVED2_MASK                                                             (0xf0000000U)

#define CM_L4SEC_AES1_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4SEC_AES1_CLKCTRL_RESERVED_MASK                                                                 (0x0000fffcU)

#define CM_L4SEC_AES1_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4SEC_AES1_CLKCTRL_RESERVED1_MASK                                                                (0xfffc0000U)

#define CM_L4SEC_AES1_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4SEC_AES1_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4SEC_AES1_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4SEC_AES1_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4SEC_AES1_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4SEC_AES1_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4SEC_AES1_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4SEC_AES1_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4SEC_AES1_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4SEC_AES1_CLKCTRL_MODULEMODE_AUTO                                                                (1U)
#define CM_L4SEC_AES1_CLKCTRL_MODULEMODE_RESERVED_2                                                          (2U)
#define CM_L4SEC_AES1_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4SEC_AES2_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4SEC_AES2_CLKCTRL_RESERVED_MASK                                                                 (0x0000fffcU)

#define CM_L4SEC_AES2_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4SEC_AES2_CLKCTRL_RESERVED1_MASK                                                                (0xfffc0000U)

#define CM_L4SEC_AES2_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4SEC_AES2_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4SEC_AES2_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4SEC_AES2_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4SEC_AES2_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4SEC_AES2_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4SEC_AES2_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4SEC_AES2_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4SEC_AES2_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4SEC_AES2_CLKCTRL_MODULEMODE_AUTO                                                                (1U)
#define CM_L4SEC_AES2_CLKCTRL_MODULEMODE_RESERVED_2                                                          (2U)
#define CM_L4SEC_AES2_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4SEC_DES3DES_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4SEC_DES3DES_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4SEC_DES3DES_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4SEC_DES3DES_CLKCTRL_RESERVED1_MASK                                                             (0xfffc0000U)

#define CM_L4SEC_DES3DES_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4SEC_DES3DES_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4SEC_DES3DES_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4SEC_DES3DES_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4SEC_DES3DES_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4SEC_DES3DES_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4SEC_DES3DES_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4SEC_DES3DES_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4SEC_DES3DES_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4SEC_DES3DES_CLKCTRL_MODULEMODE_AUTO                                                             (1U)
#define CM_L4SEC_DES3DES_CLKCTRL_MODULEMODE_RESERVED_2                                                       (2U)
#define CM_L4SEC_DES3DES_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4SEC_FPKA_CLKCTRL_RESERVED_SHIFT                                                                (2U)
#define CM_L4SEC_FPKA_CLKCTRL_RESERVED_MASK                                                                 (0x0000fffcU)

#define CM_L4SEC_FPKA_CLKCTRL_RESERVED1_SHIFT                                                               (18U)
#define CM_L4SEC_FPKA_CLKCTRL_RESERVED1_MASK                                                                (0xfffc0000U)

#define CM_L4SEC_FPKA_CLKCTRL_IDLEST_SHIFT                                                                  (16U)
#define CM_L4SEC_FPKA_CLKCTRL_IDLEST_MASK                                                                   (0x00030000U)
#define CM_L4SEC_FPKA_CLKCTRL_IDLEST_DISABLE                                                                 (3U)
#define CM_L4SEC_FPKA_CLKCTRL_IDLEST_IDLE                                                                    (2U)
#define CM_L4SEC_FPKA_CLKCTRL_IDLEST_FUNC                                                                    (0U)
#define CM_L4SEC_FPKA_CLKCTRL_IDLEST_TRANS                                                                   (1U)

#define CM_L4SEC_FPKA_CLKCTRL_MODULEMODE_SHIFT                                                              (0U)
#define CM_L4SEC_FPKA_CLKCTRL_MODULEMODE_MASK                                                               (0x00000003U)
#define CM_L4SEC_FPKA_CLKCTRL_MODULEMODE_DISABLED                                                            (0U)
#define CM_L4SEC_FPKA_CLKCTRL_MODULEMODE_RESERVED_1                                                          (1U)
#define CM_L4SEC_FPKA_CLKCTRL_MODULEMODE_ENABLE                                                              (2U)
#define CM_L4SEC_FPKA_CLKCTRL_MODULEMODE_RESERVED                                                            (3U)

#define CM_L4SEC_RNG_CLKCTRL_RESERVED_SHIFT                                                                 (2U)
#define CM_L4SEC_RNG_CLKCTRL_RESERVED_MASK                                                                  (0x0000fffcU)

#define CM_L4SEC_RNG_CLKCTRL_RESERVED1_SHIFT                                                                (18U)
#define CM_L4SEC_RNG_CLKCTRL_RESERVED1_MASK                                                                 (0xfffc0000U)

#define CM_L4SEC_RNG_CLKCTRL_IDLEST_SHIFT                                                                   (16U)
#define CM_L4SEC_RNG_CLKCTRL_IDLEST_MASK                                                                    (0x00030000U)
#define CM_L4SEC_RNG_CLKCTRL_IDLEST_DISABLE                                                                  (3U)
#define CM_L4SEC_RNG_CLKCTRL_IDLEST_IDLE                                                                     (2U)
#define CM_L4SEC_RNG_CLKCTRL_IDLEST_FUNC                                                                     (0U)
#define CM_L4SEC_RNG_CLKCTRL_IDLEST_TRANS                                                                    (1U)

#define CM_L4SEC_RNG_CLKCTRL_MODULEMODE_SHIFT                                                               (0U)
#define CM_L4SEC_RNG_CLKCTRL_MODULEMODE_MASK                                                                (0x00000003U)
#define CM_L4SEC_RNG_CLKCTRL_MODULEMODE_DISABLED                                                             (0U)
#define CM_L4SEC_RNG_CLKCTRL_MODULEMODE_AUTO                                                                 (1U)
#define CM_L4SEC_RNG_CLKCTRL_MODULEMODE_RESERVED_2                                                           (2U)
#define CM_L4SEC_RNG_CLKCTRL_MODULEMODE_RESERVED                                                             (3U)

#define CM_L4SEC_SHA2MD51_CLKCTRL_RESERVED_SHIFT                                                            (2U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_RESERVED_MASK                                                             (0x0000fffcU)

#define CM_L4SEC_SHA2MD51_CLKCTRL_RESERVED1_SHIFT                                                           (18U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_RESERVED1_MASK                                                            (0xfffc0000U)

#define CM_L4SEC_SHA2MD51_CLKCTRL_IDLEST_SHIFT                                                              (16U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_IDLEST_MASK                                                               (0x00030000U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_IDLEST_DISABLE                                                             (3U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_IDLEST_IDLE                                                                (2U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_IDLEST_FUNC                                                                (0U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_IDLEST_TRANS                                                               (1U)

#define CM_L4SEC_SHA2MD51_CLKCTRL_MODULEMODE_SHIFT                                                          (0U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_MODULEMODE_MASK                                                           (0x00000003U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_MODULEMODE_DISABLED                                                        (0U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_MODULEMODE_AUTO                                                            (1U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_MODULEMODE_RESERVED_2                                                      (2U)
#define CM_L4SEC_SHA2MD51_CLKCTRL_MODULEMODE_RESERVED                                                        (3U)

#define CM_L4PER2_UART7_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER2_UART7_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER2_UART7_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER2_UART7_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER2_UART7_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER2_UART7_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER2_UART7_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER2_UART7_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER2_UART7_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER2_UART7_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER2_UART7_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER2_UART7_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER2_UART7_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER2_UART7_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER2_UART7_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER2_UART7_CLKCTRL_RESERVED1_MASK                                                              (0x00fc0000U)

#define CM_L4PER2_UART7_CLKCTRL_CLKSEL_SHIFT                                                                (24U)
#define CM_L4PER2_UART7_CLKCTRL_CLKSEL_MASK                                                                 (0x01000000U)
#define CM_L4PER2_UART7_CLKCTRL_CLKSEL_SEL_FUNC_48M_CLK                                                      (0U)
#define CM_L4PER2_UART7_CLKCTRL_CLKSEL_SEL_FUNC_192M_CLK                                                     (1U)

#define CM_L4PER2_UART7_CLKCTRL_RESERVED2_SHIFT                                                             (25U)
#define CM_L4PER2_UART7_CLKCTRL_RESERVED2_MASK                                                              (0xfe000000U)

#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_RESERVED_SHIFT                                                          (2U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_RESERVED_MASK                                                           (0x0000fffcU)

#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_RESERVED1_SHIFT                                                         (19U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_RESERVED1_MASK                                                          (0xfff80000U)

#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_IDLEST_SHIFT                                                            (16U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_IDLEST_MASK                                                             (0x00030000U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_IDLEST_DISABLE                                                           (3U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_IDLEST_IDLE                                                              (2U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_IDLEST_FUNC                                                              (0U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_IDLEST_TRANS                                                             (1U)

#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_STBYST_SHIFT                                                            (18U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_STBYST_MASK                                                             (0x00040000U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_STBYST_FUNC                                                              (0U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_STBYST_STANDBY                                                           (1U)

#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_MODULEMODE_SHIFT                                                        (0U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_MODULEMODE_MASK                                                         (0x00000003U)
#define CM_L4SEC_DMA_CRYPTO_CLKCTRL_MODULEMODE_AUTO                                                          (1U)

#define CM_L4PER2_UART8_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER2_UART8_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER2_UART8_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER2_UART8_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER2_UART8_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER2_UART8_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER2_UART8_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER2_UART8_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER2_UART8_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER2_UART8_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER2_UART8_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER2_UART8_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER2_UART8_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER2_UART8_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER2_UART8_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER2_UART8_CLKCTRL_RESERVED1_MASK                                                              (0x00fc0000U)

#define CM_L4PER2_UART8_CLKCTRL_CLKSEL_SHIFT                                                                (24U)
#define CM_L4PER2_UART8_CLKCTRL_CLKSEL_MASK                                                                 (0x01000000U)
#define CM_L4PER2_UART8_CLKCTRL_CLKSEL_SEL_FUNC_48M_CLK                                                      (0U)
#define CM_L4PER2_UART8_CLKCTRL_CLKSEL_SEL_FUNC_192M_CLK                                                     (1U)

#define CM_L4PER2_UART8_CLKCTRL_RESERVED2_SHIFT                                                             (25U)
#define CM_L4PER2_UART8_CLKCTRL_RESERVED2_MASK                                                              (0xfe000000U)

#define CM_L4PER2_UART9_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER2_UART9_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER2_UART9_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER2_UART9_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER2_UART9_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER2_UART9_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER2_UART9_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER2_UART9_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER2_UART9_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER2_UART9_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER2_UART9_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER2_UART9_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER2_UART9_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER2_UART9_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4PER2_UART9_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER2_UART9_CLKCTRL_RESERVED1_MASK                                                              (0x00fc0000U)

#define CM_L4PER2_UART9_CLKCTRL_CLKSEL_SHIFT                                                                (24U)
#define CM_L4PER2_UART9_CLKCTRL_CLKSEL_MASK                                                                 (0x01000000U)
#define CM_L4PER2_UART9_CLKCTRL_CLKSEL_SEL_FUNC_48M_CLK                                                      (0U)
#define CM_L4PER2_UART9_CLKCTRL_CLKSEL_SEL_FUNC_192M_CLK                                                     (1U)

#define CM_L4PER2_UART9_CLKCTRL_RESERVED2_SHIFT                                                             (25U)
#define CM_L4PER2_UART9_CLKCTRL_RESERVED2_MASK                                                              (0xfe000000U)

#define CM_L4PER2_DCAN2_CLKCTRL_RESERVED_SHIFT                                                              (2U)
#define CM_L4PER2_DCAN2_CLKCTRL_RESERVED_MASK                                                               (0x0000fffcU)

#define CM_L4PER2_DCAN2_CLKCTRL_RESERVED1_SHIFT                                                             (18U)
#define CM_L4PER2_DCAN2_CLKCTRL_RESERVED1_MASK                                                              (0xfffc0000U)

#define CM_L4PER2_DCAN2_CLKCTRL_IDLEST_SHIFT                                                                (16U)
#define CM_L4PER2_DCAN2_CLKCTRL_IDLEST_MASK                                                                 (0x00030000U)
#define CM_L4PER2_DCAN2_CLKCTRL_IDLEST_DISABLE                                                               (3U)
#define CM_L4PER2_DCAN2_CLKCTRL_IDLEST_IDLE                                                                  (2U)
#define CM_L4PER2_DCAN2_CLKCTRL_IDLEST_FUNC                                                                  (0U)
#define CM_L4PER2_DCAN2_CLKCTRL_IDLEST_TRANS                                                                 (1U)

#define CM_L4PER2_DCAN2_CLKCTRL_MODULEMODE_SHIFT                                                            (0U)
#define CM_L4PER2_DCAN2_CLKCTRL_MODULEMODE_MASK                                                             (0x00000003U)
#define CM_L4PER2_DCAN2_CLKCTRL_MODULEMODE_DISABLED                                                          (0U)
#define CM_L4PER2_DCAN2_CLKCTRL_MODULEMODE_RESERVED_1                                                        (1U)
#define CM_L4PER2_DCAN2_CLKCTRL_MODULEMODE_ENABLE                                                            (2U)
#define CM_L4PER2_DCAN2_CLKCTRL_MODULEMODE_RESERVED                                                          (3U)

#define CM_L4SEC_SHA2MD52_CLKCTRL_RESERVED_SHIFT                                                            (2U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_RESERVED_MASK                                                             (0x0000fffcU)

#define CM_L4SEC_SHA2MD52_CLKCTRL_RESERVED1_SHIFT                                                           (18U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_RESERVED1_MASK                                                            (0xfffc0000U)

#define CM_L4SEC_SHA2MD52_CLKCTRL_IDLEST_SHIFT                                                              (16U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_IDLEST_MASK                                                               (0x00030000U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_IDLEST_DISABLE                                                             (3U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_IDLEST_IDLE                                                                (2U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_IDLEST_FUNC                                                                (0U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_IDLEST_TRANS                                                               (1U)

#define CM_L4SEC_SHA2MD52_CLKCTRL_MODULEMODE_SHIFT                                                          (0U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_MODULEMODE_MASK                                                           (0x00000003U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_MODULEMODE_DISABLED                                                        (0U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_MODULEMODE_AUTO                                                            (1U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_MODULEMODE_RESERVED_2                                                      (2U)
#define CM_L4SEC_SHA2MD52_CLKCTRL_MODULEMODE_RESERVED                                                        (3U)

#define CM_L4PER2_CLKSTCTRL_CLKTRCTRL_SHIFT                                                                 (0U)
#define CM_L4PER2_CLKSTCTRL_CLKTRCTRL_MASK                                                                  (0x00000003U)
#define CM_L4PER2_CLKSTCTRL_CLKTRCTRL_NO_SLEEP                                                               (0U)
#define CM_L4PER2_CLKSTCTRL_CLKTRCTRL_SW_SLEEP                                                               (1U)
#define CM_L4PER2_CLKSTCTRL_CLKTRCTRL_SW_WKUP                                                                (2U)
#define CM_L4PER2_CLKSTCTRL_CLKTRCTRL_HW_AUTO                                                                (3U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AHCLKX_SHIFT                                                 (17U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AHCLKX_MASK                                                  (0x00020000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AHCLKX_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AHCLKX_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_PER_192M_GFCLK_SHIFT                                                (13U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_PER_192M_GFCLK_MASK                                                 (0x00002000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_PER_192M_GFCLK_INACT                                                 (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_PER_192M_GFCLK_ACT                                                   (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_ICSS_IEP_CLK_SHIFT                                                  (14U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_ICSS_IEP_CLK_MASK                                                   (0x00004000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_ICSS_IEP_CLK_INACT                                                   (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_ICSS_IEP_CLK_ACT                                                     (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_DCAN2_SYS_CLK_SHIFT                                                 (15U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_DCAN2_SYS_CLK_MASK                                                  (0x00008000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_DCAN2_SYS_CLK_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_DCAN2_SYS_CLK_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART7_GFCLK_SHIFT                                                   (9U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART7_GFCLK_MASK                                                    (0x00000200U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART7_GFCLK_INACT                                                    (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART7_GFCLK_ACT                                                      (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART8_GFCLK_SHIFT                                                   (10U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART8_GFCLK_MASK                                                    (0x00000400U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART8_GFCLK_INACT                                                    (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART8_GFCLK_ACT                                                      (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART9_GFCLK_SHIFT                                                   (11U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART9_GFCLK_MASK                                                    (0x00000800U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART9_GFCLK_INACT                                                    (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_UART9_GFCLK_ACT                                                      (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_L4PER2_L3_GICLK_SHIFT                                               (16U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_L4PER2_L3_GICLK_MASK                                                (0x00010000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_L4PER2_L3_GICLK_INACT                                                (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_L4PER2_L3_GICLK_ACT                                                  (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AHCLKR_SHIFT                                                 (18U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AHCLKR_MASK                                                  (0x00040000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AHCLKR_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AHCLKR_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AUX_GFCLK_SHIFT                                              (19U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AUX_GFCLK_MASK                                               (0x00080000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AUX_GFCLK_INACT                                               (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP2_AUX_GFCLK_ACT                                                 (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP3_AHCLKX_SHIFT                                                 (20U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP3_AHCLKX_MASK                                                  (0x00100000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP3_AHCLKX_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP3_AHCLKX_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP3_AUX_GFCLK_SHIFT                                              (21U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP3_AUX_GFCLK_MASK                                               (0x00200000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP3_AUX_GFCLK_INACT                                               (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP3_AUX_GFCLK_ACT                                                 (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP4_AHCLKX_SHIFT                                                 (22U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP4_AHCLKX_MASK                                                  (0x00400000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP4_AHCLKX_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP4_AHCLKX_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP5_AHCLKX_SHIFT                                                 (25U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP5_AHCLKX_MASK                                                  (0x02000000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP5_AHCLKX_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP5_AHCLKX_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP4_AUX_GFCLK_SHIFT                                              (23U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP4_AUX_GFCLK_MASK                                               (0x00800000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP4_AUX_GFCLK_INACT                                               (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP4_AUX_GFCLK_ACT                                                 (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP6_AHCLKX_SHIFT                                                 (26U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP6_AHCLKX_MASK                                                  (0x04000000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP6_AHCLKX_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP6_AHCLKX_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP7_AHCLKX_SHIFT                                                 (28U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP7_AHCLKX_MASK                                                  (0x10000000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP7_AHCLKX_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP7_AHCLKX_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP7_AUX_GFCLK_SHIFT                                              (29U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP7_AUX_GFCLK_MASK                                               (0x20000000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP7_AUX_GFCLK_INACT                                               (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP7_AUX_GFCLK_ACT                                                 (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP8_AHCLKX_SHIFT                                                 (30U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP8_AHCLKX_MASK                                                  (0x40000000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP8_AHCLKX_INACT                                                  (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP8_AHCLKX_ACT                                                    (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP8_AUX_GFCLK_SHIFT                                              (31U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP8_AUX_GFCLK_MASK                                               (0x80000000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP8_AUX_GFCLK_INACT                                               (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP8_AUX_GFCLK_ACT                                                 (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP5_AUX_GFCLK_SHIFT                                              (24U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP5_AUX_GFCLK_MASK                                               (0x01000000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP5_AUX_GFCLK_INACT                                               (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP5_AUX_GFCLK_ACT                                                 (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP6_AUX_GFCLK_SHIFT                                              (27U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP6_AUX_GFCLK_MASK                                               (0x08000000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP6_AUX_GFCLK_INACT                                               (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_MCASP6_AUX_GFCLK_ACT                                                 (1U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_ICSS_CLK_SHIFT                                                      (8U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_ICSS_CLK_MASK                                                       (0x00000100U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_ICSS_CLK_INACT                                                       (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_ICSS_CLK_ACT                                                         (1U)

#define CM_L4PER2_CLKSTCTRL_RESERVED_SHIFT                                                                  (2U)
#define CM_L4PER2_CLKSTCTRL_RESERVED_MASK                                                                   (0x00000004U)

#define CM_L4PER2_CLKSTCTRL_RESERVED1_SHIFT                                                                 (3U)
#define CM_L4PER2_CLKSTCTRL_RESERVED1_MASK                                                                  (0x00000078U)

#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_QSPI_GFCLK_SHIFT                                                    (12U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_QSPI_GFCLK_MASK                                                     (0x00001000U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_QSPI_GFCLK_INACT                                                     (0U)
#define CM_L4PER2_CLKSTCTRL_CLKACTIVITY_QSPI_GFCLK_ACT                                                       (1U)

#define CM_L4PER2_CLKSTCTRL_RESERVED2_SHIFT                                                                 (7U)
#define CM_L4PER2_CLKSTCTRL_RESERVED2_MASK                                                                  (0x00000080U)

#define CM_L4PER2_DYNAMICDEP_L3INIT_DYNDEP_SHIFT                                                            (7U)
#define CM_L4PER2_DYNAMICDEP_L3INIT_DYNDEP_MASK                                                             (0x00000080U)
#define CM_L4PER2_DYNAMICDEP_L3INIT_DYNDEP_ENABLED                                                           (1U)

#define CM_L4PER2_DYNAMICDEP_RESERVED4_SHIFT                                                                (28U)
#define CM_L4PER2_DYNAMICDEP_RESERVED4_MASK                                                                 (0xf0000000U)

#define CM_L4PER2_DYNAMICDEP_WINDOWSIZE_SHIFT                                                               (24U)
#define CM_L4PER2_DYNAMICDEP_WINDOWSIZE_MASK                                                                (0x0f000000U)

#define CM_L4PER2_DYNAMICDEP_IPU_DYNDEP_SHIFT                                                               (3U)
#define CM_L4PER2_DYNAMICDEP_IPU_DYNDEP_MASK                                                                (0x00000008U)
#define CM_L4PER2_DYNAMICDEP_IPU_DYNDEP_ENABLED                                                              (1U)

#define CM_L4PER2_DYNAMICDEP_GMAC_DYNDEP_SHIFT                                                              (22U)
#define CM_L4PER2_DYNAMICDEP_GMAC_DYNDEP_MASK                                                               (0x00400000U)
#define CM_L4PER2_DYNAMICDEP_GMAC_DYNDEP_ENABLED                                                             (1U)

#define CM_L4PER2_DYNAMICDEP_ATL_DYNDEP_SHIFT                                                               (6U)
#define CM_L4PER2_DYNAMICDEP_ATL_DYNDEP_MASK                                                                (0x00000040U)
#define CM_L4PER2_DYNAMICDEP_ATL_DYNDEP_ENABLED                                                              (1U)

#define CM_L4PER2_DYNAMICDEP_RESERVED_SHIFT                                                                 (0U)
#define CM_L4PER2_DYNAMICDEP_RESERVED_MASK                                                                  (0x00000007U)

#define CM_L4PER2_DYNAMICDEP_RESERVED1_SHIFT                                                                (4U)
#define CM_L4PER2_DYNAMICDEP_RESERVED1_MASK                                                                 (0x00000030U)

#define CM_L4PER2_DYNAMICDEP_RESERVED3_SHIFT                                                                (23U)
#define CM_L4PER2_DYNAMICDEP_RESERVED3_MASK                                                                 (0x00800000U)

#define CM_L4PER2_DYNAMICDEP_L4CFG_DYNDEP_SHIFT                                                             (12U)
#define CM_L4PER2_DYNAMICDEP_L4CFG_DYNDEP_MASK                                                              (0x00001000U)
#define CM_L4PER2_DYNAMICDEP_L4CFG_DYNDEP_ENABLED                                                            (1U)

#define CM_L4PER2_DYNAMICDEP_RESERVED2_SHIFT                                                                (8U)
#define CM_L4PER2_DYNAMICDEP_RESERVED2_MASK                                                                 (0x00000f00U)

#define CM_L4PER2_DYNAMICDEP_RESERVED5_SHIFT                                                                (13U)
#define CM_L4PER2_DYNAMICDEP_RESERVED5_MASK                                                                 (0x003fe000U)

#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AUX_CLK_SHIFT                                                       (22U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AUX_CLK_MASK                                                        (0x00c00000U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AUX_CLK_SEL_PER_ABE_X1_GFCLK                                         (0U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO1_CLK                                               (1U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO2_CLK                                               (2U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AUX_CLK_SEL_HDMI_CLK                                                 (3U)

#define CM_L4PER2_MCASP6_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_MCASP6_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_MCASP6_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_MCASP6_CLKCTRL_RESERVED1_MASK                                                             (0x003c0000U)

#define CM_L4PER2_MCASP6_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_MCASP6_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_MCASP6_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_MCASP6_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_MCASP6_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_MCASP6_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_MCASP6_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_MCASP6_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_MCASP6_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_MCASP6_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_MCASP6_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_MCASP6_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SHIFT                                                        (24U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_MASK                                                         (0x0f000000U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_24M_GFCLK                                             (0U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_SYS_CLK                                               (1U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_FUNC_24M_GFCLK                                            (2U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK3                                                  (3U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK2                                                  (4U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK1                                                  (5U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK0                                                  (6U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_SYS_SLK2                                                  (7U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK0                                                 (8U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK1                                                 (9U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK2                                                 (10U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK3                                                 (11U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_MLB_CLK                                                   (12U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_SEL_MLBP_CLK                                                  (13U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_RESERVED                                                      (14U)
#define CM_L4PER2_MCASP6_CLKCTRL_CLKSEL_AHCLKX_RESERVED1                                                     (15U)

#define CM_L4PER2_MCASP6_CLKCTRL_RESERVED2_SHIFT                                                            (28U)
#define CM_L4PER2_MCASP6_CLKCTRL_RESERVED2_MASK                                                             (0xf0000000U)

#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AUX_CLK_SHIFT                                                       (22U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AUX_CLK_MASK                                                        (0x00c00000U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AUX_CLK_SEL_PER_ABE_X1_GFCLK                                         (0U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO1_CLK                                               (1U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AUX_CLK_SEL_VIDEO2_CLK                                               (2U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AUX_CLK_SEL_HDMI_CLK                                                 (3U)

#define CM_L4PER2_MCASP7_CLKCTRL_RESERVED_SHIFT                                                             (2U)
#define CM_L4PER2_MCASP7_CLKCTRL_RESERVED_MASK                                                              (0x0000fffcU)

#define CM_L4PER2_MCASP7_CLKCTRL_RESERVED1_SHIFT                                                            (18U)
#define CM_L4PER2_MCASP7_CLKCTRL_RESERVED1_MASK                                                             (0x003c0000U)

#define CM_L4PER2_MCASP7_CLKCTRL_IDLEST_SHIFT                                                               (16U)
#define CM_L4PER2_MCASP7_CLKCTRL_IDLEST_MASK                                                                (0x00030000U)
#define CM_L4PER2_MCASP7_CLKCTRL_IDLEST_DISABLE                                                              (3U)
#define CM_L4PER2_MCASP7_CLKCTRL_IDLEST_IDLE                                                                 (2U)
#define CM_L4PER2_MCASP7_CLKCTRL_IDLEST_FUNC                                                                 (0U)
#define CM_L4PER2_MCASP7_CLKCTRL_IDLEST_TRANS                                                                (1U)

#define CM_L4PER2_MCASP7_CLKCTRL_MODULEMODE_SHIFT                                                           (0U)
#define CM_L4PER2_MCASP7_CLKCTRL_MODULEMODE_MASK                                                            (0x00000003U)
#define CM_L4PER2_MCASP7_CLKCTRL_MODULEMODE_DISABLED                                                         (0U)
#define CM_L4PER2_MCASP7_CLKCTRL_MODULEMODE_RESERVED_1                                                       (1U)
#define CM_L4PER2_MCASP7_CLKCTRL_MODULEMODE_ENABLE                                                           (2U)
#define CM_L4PER2_MCASP7_CLKCTRL_MODULEMODE_RESERVED                                                         (3U)

#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SHIFT                                                        (24U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_MASK                                                         (0x0f000000U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_24M_GFCLK                                             (0U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_ABE_SYS_CLK                                               (1U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_FUNC_24M_GFCLK                                            (2U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK3                                                  (3U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK2                                                  (4U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK1                                                  (5U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_ATL_CLK0                                                  (6U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_SYS_SLK2                                                  (7U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK0                                                 (8U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK1                                                 (9U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK2                                                 (10U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_XREF_CLK3                                                 (11U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_MLB_CLK                                                   (12U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_SEL_MLBP_CLK                                                  (13U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_RESERVED                                                      (14U)
#define CM_L4PER2_MCASP7_CLKCTRL_CLKSEL_AHCLKX_RESERVED1                                                     (15U)

#define CM_L4PER2_MCASP7_CLKCTRL_RESERVED2_SHIFT                                                            (28U)
#define CM_L4PER2_MCASP7_CLKCTRL_RESERVED2_MASK                                                             (0xf0000000U)

#define CM_L4PER2_STATICDEP_IPU2_STATDEP_SHIFT                                                              (0U)
#define CM_L4PER2_STATICDEP_IPU2_STATDEP_MASK                                                               (0x00000001U)
#define CM_L4PER2_STATICDEP_IPU2_STATDEP_ENABLED                                                             (1U)
#define CM_L4PER2_STATICDEP_IPU2_STATDEP_DISABLED                                                            (0U)

#define CM_L4PER2_STATICDEP_DSP1_STATDEP_SHIFT                                                              (1U)
#define CM_L4PER2_STATICDEP_DSP1_STATDEP_MASK                                                               (0x00000002U)
#define CM_L4PER2_STATICDEP_DSP1_STATDEP_ENABLED                                                             (1U)
#define CM_L4PER2_STATICDEP_DSP1_STATDEP_DISABLED                                                            (0U)

#define CM_L4PER2_STATICDEP_DSP2_STATDEP_SHIFT                                                              (18U)
#define CM_L4PER2_STATICDEP_DSP2_STATDEP_MASK                                                               (0x00040000U)
#define CM_L4PER2_STATICDEP_DSP2_STATDEP_ENABLED                                                             (1U)
#define CM_L4PER2_STATICDEP_DSP2_STATDEP_DISABLED                                                            (0U)

#define CM_L4PER2_STATICDEP_IPU1_STATDEP_SHIFT                                                              (23U)
#define CM_L4PER2_STATICDEP_IPU1_STATDEP_MASK                                                               (0x00800000U)
#define CM_L4PER2_STATICDEP_IPU1_STATDEP_ENABLED                                                             (1U)
#define CM_L4PER2_STATICDEP_IPU1_STATDEP_DISABLED                                                            (0U)

#define CM_L4PER2_STATICDEP_RESERVED1_SHIFT                                                                 (19U)
#define CM_L4PER2_STATICDEP_RESERVED1_MASK                                                                  (0x00780000U)

#define CM_L4PER2_STATICDEP_RESERVED2_SHIFT                                                                 (24U)
#define CM_L4PER2_STATICDEP_RESERVED2_MASK                                                                  (0xff000000U)

#define CM_L4PER2_STATICDEP_L3MAIN1_STATDEP_SHIFT                                                           (5U)
#define CM_L4PER2_STATICDEP_L3MAIN1_STATDEP_MASK                                                            (0x00000020U)
#define CM_L4PER2_STATICDEP_L3MAIN1_STATDEP_ENABLED                                                          (1U)

#define CM_L4PER2_STATICDEP_RESERVED_SHIFT                                                                  (2U)
#define CM_L4PER2_STATICDEP_RESERVED_MASK                                                                   (0x0000001cU)

#define CM_L4PER2_STATICDEP_RESERVED3_SHIFT                                                                 (6U)
#define CM_L4PER2_STATICDEP_RESERVED3_MASK                                                                  (0x0003ffc0U)

#define CM_L4PER3_CLKSTCTRL_CLKTRCTRL_SHIFT                                                                 (0U)
#define CM_L4PER3_CLKSTCTRL_CLKTRCTRL_MASK                                                                  (0x00000003U)
#define CM_L4PER3_CLKSTCTRL_CLKTRCTRL_NO_SLEEP                                                               (0U)
#define CM_L4PER3_CLKSTCTRL_CLKTRCTRL_SW_SLEEP                                                               (1U)
#define CM_L4PER3_CLKSTCTRL_CLKTRCTRL_SW_WKUP                                                                (2U)
#define CM_L4PER3_CLKSTCTRL_CLKTRCTRL_HW_AUTO                                                                (3U)

#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_L4PER3_L3_GICLK_SHIFT                                               (8U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_L4PER3_L3_GICLK_MASK                                                (0x00000100U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_L4PER3_L3_GICLK_INACT                                                (0U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_L4PER3_L3_GICLK_ACT                                                  (1U)

#define CM_L4PER3_CLKSTCTRL_RESERVED_SHIFT                                                                  (2U)
#define CM_L4PER3_CLKSTCTRL_RESERVED_MASK                                                                   (0x0000003cU)

#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER13_GFCLK_SHIFT                                                 (9U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER13_GFCLK_MASK                                                  (0x00000200U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER13_GFCLK_INACT                                                  (0U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER13_GFCLK_ACT                                                    (1U)

#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER14_GFCLK_SHIFT                                                 (10U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER14_GFCLK_MASK                                                  (0x00000400U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER14_GFCLK_INACT                                                  (0U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER14_GFCLK_ACT                                                    (1U)

#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER15_GFCLK_SHIFT                                                 (11U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER15_GFCLK_MASK                                                  (0x00000800U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER15_GFCLK_INACT                                                  (0U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER15_GFCLK_ACT                                                    (1U)

#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER16_GFCLK_SHIFT                                                 (12U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER16_GFCLK_MASK                                                  (0x00001000U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER16_GFCLK_INACT                                                  (0U)
#define CM_L4PER3_CLKSTCTRL_CLKACTIVITY_TIMER16_GFCLK_ACT                                                    (1U)

#define CM_L4PER3_CLKSTCTRL_RESERVED1_SHIFT                                                                 (6U)
#define CM_L4PER3_CLKSTCTRL_RESERVED1_MASK                                                                  (0x000000c0U)

#define CM_L4PER3_CLKSTCTRL_RESERVED2_SHIFT                                                                 (13U)
#define CM_L4PER3_CLKSTCTRL_RESERVED2_MASK                                                                  (0xffffe000U)

#define CM_L4PER3_DYNAMICDEP_WINDOWSIZE_SHIFT                                                               (24U)
#define CM_L4PER3_DYNAMICDEP_WINDOWSIZE_MASK                                                                (0x0f000000U)

#define CM_L4PER3_DYNAMICDEP_L3MAIN1_DYNDEP_SHIFT                                                           (5U)
#define CM_L4PER3_DYNAMICDEP_L3MAIN1_DYNDEP_MASK                                                            (0x00000020U)
#define CM_L4PER3_DYNAMICDEP_L3MAIN1_DYNDEP_ENABLED                                                          (1U)

#define CM_L4PER3_DYNAMICDEP_CAM_DYNDEP_SHIFT                                                               (9U)
#define CM_L4PER3_DYNAMICDEP_CAM_DYNDEP_MASK                                                                (0x00000200U)
#define CM_L4PER3_DYNAMICDEP_CAM_DYNDEP_ENABLED                                                              (1U)

#define CM_L4PER3_DYNAMICDEP_IPU_DYNDEP_SHIFT                                                               (3U)
#define CM_L4PER3_DYNAMICDEP_IPU_DYNDEP_MASK                                                                (0x00000008U)
#define CM_L4PER3_DYNAMICDEP_IPU_DYNDEP_ENABLED                                                              (1U)

#define CM_L4PER3_DYNAMICDEP_L3INIT_DYNDEP_SHIFT                                                            (7U)
#define CM_L4PER3_DYNAMICDEP_L3INIT_DYNDEP_MASK                                                             (0x00000080U)
#define CM_L4PER3_DYNAMICDEP_L3INIT_DYNDEP_ENABLED                                                           (1U)

#define CM_L4PER3_DYNAMICDEP_RTC_DYNDEP_SHIFT                                                               (23U)
#define CM_L4PER3_DYNAMICDEP_RTC_DYNDEP_MASK                                                                (0x00800000U)
#define CM_L4PER3_DYNAMICDEP_RTC_DYNDEP_ENABLED                                                              (1U)

#define CM_L4PER3_DYNAMICDEP_VPE_DYNDEP_SHIFT                                                               (31U)
#define CM_L4PER3_DYNAMICDEP_VPE_DYNDEP_MASK                                                                (0x80000000U)
#define CM_L4PER3_DYNAMICDEP_VPE_DYNDEP_ENABLED                                                              (1U)

#define CM_L4PER3_DYNAMICDEP_RESERVED_SHIFT                                                                 (0U)
#define CM_L4PER3_DYNAMICDEP_RESERVED_MASK                                                                  (0x00000007U)

#define CM_L4PER3_DYNAMICDEP_RESERVED1_SHIFT                                                                (4U)
#define CM_L4PER3_DYNAMICDEP_RESERVED1_MASK                                                                 (0x00000010U)

#define CM_L4PER3_DYNAMICDEP_RESERVED2_SHIFT                                                                (6U)
#define CM_L4PER3_DYNAMICDEP_RESERVED2_MASK                                                                 (0x00000040U)

#define CM_L4PER3_DYNAMICDEP_RESERVED3_SHIFT                                                                (8U)
#define CM_L4PER3_DYNAMICDEP_RESERVED3_MASK                                                                 (0x00000100U)

#define CM_L4PER3_DYNAMICDEP_RESERVED5_SHIFT                                                                (28U)
#define CM_L4PER3_DYNAMICDEP_RESERVED5_MASK                                                                 (0x70000000U)

#define CM_L4PER3_DYNAMICDEP_L4CFG_DYNDEP_SHIFT                                                             (12U)
#define CM_L4PER3_DYNAMICDEP_L4CFG_DYNDEP_MASK                                                              (0x00001000U)
#define CM_L4PER3_DYNAMICDEP_L4CFG_DYNDEP_ENABLED                                                            (1U)

#define CM_L4PER3_DYNAMICDEP_RESERVED4_SHIFT                                                                (10U)
#define CM_L4PER3_DYNAMICDEP_RESERVED4_MASK                                                                 (0x00000c00U)

#define CM_L4PER3_DYNAMICDEP_RESERVED6_SHIFT                                                                (13U)
#define CM_L4PER3_DYNAMICDEP_RESERVED6_MASK                                                                 (0x007fe000U)

#ifdef __cplusplus
}
#endif
#endif  /* _HW_L4PER_CM_CORE_H_ */