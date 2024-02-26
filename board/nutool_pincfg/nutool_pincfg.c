/****************************************************************************
 * @file     nutool_pincfg.c
 * @version  V1.27.0002
 * @Date     Tue Nov 21 2023 14:51:28 GMT+0800 (Taipei Standard Time)
 * @brief    NuMicro generated code file
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright (C) 2013-2023 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

/********************
MCU:MA35D03F864C(LQFP216)
********************/

#include "NuMicro.h"

void nutool_pincfg_init_adc0(void)
{
    SYS->GPB_MFPH &= ~(SYS_GPB_MFPH_PB15MFP_Msk | SYS_GPB_MFPH_PB14MFP_Msk | SYS_GPB_MFPH_PB13MFP_Msk | SYS_GPB_MFPH_PB12MFP_Msk | SYS_GPB_MFPH_PB11MFP_Msk | SYS_GPB_MFPH_PB10MFP_Msk | SYS_GPB_MFPH_PB9MFP_Msk | SYS_GPB_MFPH_PB8MFP_Msk);
    SYS->GPB_MFPH |= (SYS_GPB_MFPH_PB15MFP_ADC0_CH7 | SYS_GPB_MFPH_PB14MFP_ADC0_CH6 | SYS_GPB_MFPH_PB13MFP_ADC0_CH5 | SYS_GPB_MFPH_PB12MFP_ADC0_CH4 | SYS_GPB_MFPH_PB11MFP_ADC0_CH3 | SYS_GPB_MFPH_PB10MFP_ADC0_CH2 | SYS_GPB_MFPH_PB9MFP_ADC0_CH1 | SYS_GPB_MFPH_PB8MFP_ADC0_CH0);

    PB->MODE &= ~(GPIO_MODE_MODE8_Msk | GPIO_MODE_MODE9_Msk | GPIO_MODE_MODE10_Msk | GPIO_MODE_MODE11_Msk | GPIO_MODE_MODE12_Msk | GPIO_MODE_MODE13_Msk | GPIO_MODE_MODE14_Msk | GPIO_MODE_MODE15_Msk);
    GPIO_DISABLE_DIGITAL_PATH(PB, BIT8 | BIT9 | BIT10 | BIT11 | BIT12 | BIT13 | BIT14 | BIT15);

    return;
}

void nutool_pincfg_deinit_adc0(void)
{
    SYS->GPB_MFPH &= ~(SYS_GPB_MFPH_PB15MFP_Msk | SYS_GPB_MFPH_PB14MFP_Msk | SYS_GPB_MFPH_PB13MFP_Msk | SYS_GPB_MFPH_PB12MFP_Msk | SYS_GPB_MFPH_PB11MFP_Msk | SYS_GPB_MFPH_PB10MFP_Msk | SYS_GPB_MFPH_PB9MFP_Msk | SYS_GPB_MFPH_PB8MFP_Msk);

    GPIO_ENABLE_DIGITAL_PATH(PB, BIT8 | BIT9 | BIT10 | BIT11 | BIT12 | BIT13 | BIT14 | BIT15);

    return;
}

void nutool_pincfg_init_can0(void)
{
    SYS->GPN_MFPL &= ~(SYS_GPN_MFPL_PN3MFP_Msk | SYS_GPN_MFPL_PN2MFP_Msk);
    SYS->GPN_MFPL |= (SYS_GPN_MFPL_PN3MFP_CAN0_TXD | SYS_GPN_MFPL_PN2MFP_CAN0_RXD);

    return;
}

void nutool_pincfg_deinit_can0(void)
{
    SYS->GPN_MFPL &= ~(SYS_GPN_MFPL_PN3MFP_Msk | SYS_GPN_MFPL_PN2MFP_Msk);

    return;
}

void nutool_pincfg_init_can1(void)
{
    SYS->GPN_MFPL &= ~(SYS_GPN_MFPL_PN7MFP_Msk | SYS_GPN_MFPL_PN6MFP_Msk);
    SYS->GPN_MFPL |= (SYS_GPN_MFPL_PN7MFP_CAN1_TXD | SYS_GPN_MFPL_PN6MFP_CAN1_RXD);

    return;
}

void nutool_pincfg_deinit_can1(void)
{
    SYS->GPN_MFPL &= ~(SYS_GPN_MFPL_PN7MFP_Msk | SYS_GPN_MFPL_PN6MFP_Msk);

    return;
}

void nutool_pincfg_init_can3(void)
{
    SYS->GPM_MFPL &= ~(SYS_GPM_MFPL_PM3MFP_Msk | SYS_GPM_MFPL_PM2MFP_Msk);
    SYS->GPM_MFPL |= (SYS_GPM_MFPL_PM3MFP_CAN3_TXD | SYS_GPM_MFPL_PM2MFP_CAN3_RXD);

    return;
}

void nutool_pincfg_deinit_can3(void)
{
    SYS->GPM_MFPL &= ~(SYS_GPM_MFPL_PM3MFP_Msk | SYS_GPM_MFPL_PM2MFP_Msk);

    return;
}

void nutool_pincfg_init_hsusb0(void)
{
    SYS->GPF_MFPH &= ~(SYS_GPF_MFPH_PF15MFP_Msk);
    SYS->GPF_MFPH |= (SYS_GPF_MFPH_PF15MFP_HSUSB0_VBUSVLD);

    return;
}

void nutool_pincfg_deinit_hsusb0(void)
{
    SYS->GPF_MFPH &= ~(SYS_GPF_MFPH_PF15MFP_Msk);

    return;
}

void nutool_pincfg_init_hsusbh(void)
{
    SYS->GPL_MFPH &= ~(SYS_GPL_MFPH_PL13MFP_Msk | SYS_GPL_MFPH_PL12MFP_Msk);
    SYS->GPL_MFPH |= (SYS_GPL_MFPH_PL13MFP_HSUSBH_OVC | SYS_GPL_MFPH_PL12MFP_HSUSBH_PWREN);

    return;
}

void nutool_pincfg_deinit_hsusbh(void)
{
    SYS->GPL_MFPH &= ~(SYS_GPL_MFPH_PL13MFP_Msk | SYS_GPL_MFPH_PL12MFP_Msk);

    return;
}

void nutool_pincfg_init_i2c0(void)
{
    SYS->GPM_MFPH &= ~(SYS_GPM_MFPH_PM9MFP_Msk | SYS_GPM_MFPH_PM8MFP_Msk);
    SYS->GPM_MFPH |= (SYS_GPM_MFPH_PM9MFP_I2C0_SCL | SYS_GPM_MFPH_PM8MFP_I2C0_SDA);

    return;
}

void nutool_pincfg_deinit_i2c0(void)
{
    SYS->GPM_MFPH &= ~(SYS_GPM_MFPH_PM9MFP_Msk | SYS_GPM_MFPH_PM8MFP_Msk);

    return;
}

void nutool_pincfg_init_nand(void)
{
    SYS->GPA_MFPH &= ~(SYS_GPA_MFPH_PA14MFP_Msk | SYS_GPA_MFPH_PA13MFP_Msk | SYS_GPA_MFPH_PA12MFP_Msk | SYS_GPA_MFPH_PA11MFP_Msk | SYS_GPA_MFPH_PA10MFP_Msk | SYS_GPA_MFPH_PA9MFP_Msk | SYS_GPA_MFPH_PA8MFP_Msk);
    SYS->GPA_MFPH |= (SYS_GPA_MFPH_PA14MFP_NAND_nWP | SYS_GPA_MFPH_PA13MFP_NAND_nCS0 | SYS_GPA_MFPH_PA12MFP_NAND_ALE | SYS_GPA_MFPH_PA11MFP_NAND_CLE | SYS_GPA_MFPH_PA10MFP_NAND_nWE | SYS_GPA_MFPH_PA9MFP_NAND_nRE | SYS_GPA_MFPH_PA8MFP_NAND_RDY0);
    SYS->GPA_MFPL &= ~(SYS_GPA_MFPL_PA7MFP_Msk | SYS_GPA_MFPL_PA6MFP_Msk | SYS_GPA_MFPL_PA5MFP_Msk | SYS_GPA_MFPL_PA4MFP_Msk | SYS_GPA_MFPL_PA3MFP_Msk | SYS_GPA_MFPL_PA2MFP_Msk | SYS_GPA_MFPL_PA1MFP_Msk | SYS_GPA_MFPL_PA0MFP_Msk);
    SYS->GPA_MFPL |= (SYS_GPA_MFPL_PA7MFP_NAND_DATA7 | SYS_GPA_MFPL_PA6MFP_NAND_DATA6 | SYS_GPA_MFPL_PA5MFP_NAND_DATA5 | SYS_GPA_MFPL_PA4MFP_NAND_DATA4 | SYS_GPA_MFPL_PA3MFP_NAND_DATA3 | SYS_GPA_MFPL_PA2MFP_NAND_DATA2 | SYS_GPA_MFPL_PA1MFP_NAND_DATA1 | SYS_GPA_MFPL_PA0MFP_NAND_DATA0);

    return;
}

void nutool_pincfg_deinit_nand(void)
{
    SYS->GPA_MFPH &= ~(SYS_GPA_MFPH_PA14MFP_Msk | SYS_GPA_MFPH_PA13MFP_Msk | SYS_GPA_MFPH_PA12MFP_Msk | SYS_GPA_MFPH_PA11MFP_Msk | SYS_GPA_MFPH_PA10MFP_Msk | SYS_GPA_MFPH_PA9MFP_Msk | SYS_GPA_MFPH_PA8MFP_Msk);
    SYS->GPA_MFPL &= ~(SYS_GPA_MFPL_PA7MFP_Msk | SYS_GPA_MFPL_PA6MFP_Msk | SYS_GPA_MFPL_PA5MFP_Msk | SYS_GPA_MFPL_PA4MFP_Msk | SYS_GPA_MFPL_PA3MFP_Msk | SYS_GPA_MFPL_PA2MFP_Msk | SYS_GPA_MFPL_PA1MFP_Msk | SYS_GPA_MFPL_PA0MFP_Msk);

    return;
}

void nutool_pincfg_init_qspi0(void)
{
    SYS->GPD_MFPL &= ~(SYS_GPD_MFPL_PD5MFP_Msk | SYS_GPD_MFPL_PD4MFP_Msk | SYS_GPD_MFPL_PD3MFP_Msk | SYS_GPD_MFPL_PD2MFP_Msk | SYS_GPD_MFPL_PD1MFP_Msk | SYS_GPD_MFPL_PD0MFP_Msk);
    SYS->GPD_MFPL |= (SYS_GPD_MFPL_PD5MFP_QSPI0_MISO1 | SYS_GPD_MFPL_PD4MFP_QSPI0_MOSI1 | SYS_GPD_MFPL_PD3MFP_QSPI0_MISO0 | SYS_GPD_MFPL_PD2MFP_QSPI0_MOSI0 | SYS_GPD_MFPL_PD1MFP_QSPI0_CLK | SYS_GPD_MFPL_PD0MFP_QSPI0_SS0);

    GPIO_SetDrivingCtl(PD, (BIT0 | BIT1 | BIT2 | BIT3 | BIT4 | BIT5), 4);

    return;
}

void nutool_pincfg_deinit_qspi0(void)
{
    SYS->GPD_MFPL &= ~(SYS_GPD_MFPL_PD5MFP_Msk | SYS_GPD_MFPL_PD4MFP_Msk | SYS_GPD_MFPL_PD3MFP_Msk | SYS_GPD_MFPL_PD2MFP_Msk | SYS_GPD_MFPL_PD1MFP_Msk | SYS_GPD_MFPL_PD0MFP_Msk);

    return;
}

void nutool_pincfg_init_rmii0(void)
{
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE9MFP_Msk | SYS_GPE_MFPH_PE8MFP_Msk);
    SYS->GPE_MFPH |= (SYS_GPE_MFPH_PE9MFP_RMII0_RXERR | SYS_GPE_MFPH_PE8MFP_RMII0_RXD1);
    SYS->GPE_MFPL &= ~(SYS_GPE_MFPL_PE7MFP_Msk | SYS_GPE_MFPL_PE6MFP_Msk | SYS_GPE_MFPL_PE5MFP_Msk | SYS_GPE_MFPL_PE4MFP_Msk | SYS_GPE_MFPL_PE3MFP_Msk | SYS_GPE_MFPL_PE2MFP_Msk | SYS_GPE_MFPL_PE1MFP_Msk | SYS_GPE_MFPL_PE0MFP_Msk);
    SYS->GPE_MFPL |= (SYS_GPE_MFPL_PE7MFP_RMII0_RXD0 | SYS_GPE_MFPL_PE6MFP_RMII0_CRSDV | SYS_GPE_MFPL_PE5MFP_RMII0_REFCLK | SYS_GPE_MFPL_PE4MFP_RMII0_TXD1 | SYS_GPE_MFPL_PE3MFP_RMII0_TXD0 | SYS_GPE_MFPL_PE2MFP_RMII0_TXEN | SYS_GPE_MFPL_PE1MFP_RMII0_MDIO | SYS_GPE_MFPL_PE0MFP_RMII0_MDC);

    /* RMII Mode */
    SYS->GMAC0MISCR |= 1;

    /* Set 3.3v */
    GPIO_SetPowerMode(PE, 0x3FFF, 1);

    return;
}

void nutool_pincfg_deinit_rmii0(void)
{
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE9MFP_Msk | SYS_GPE_MFPH_PE8MFP_Msk);
    SYS->GPE_MFPL &= ~(SYS_GPE_MFPL_PE7MFP_Msk | SYS_GPE_MFPL_PE6MFP_Msk | SYS_GPE_MFPL_PE5MFP_Msk | SYS_GPE_MFPL_PE4MFP_Msk | SYS_GPE_MFPL_PE3MFP_Msk | SYS_GPE_MFPL_PE2MFP_Msk | SYS_GPE_MFPL_PE1MFP_Msk | SYS_GPE_MFPL_PE0MFP_Msk);

    return;
}

void nutool_pincfg_init_rmii1(void)
{
    SYS->GPF_MFPH &= ~(SYS_GPF_MFPH_PF9MFP_Msk | SYS_GPF_MFPH_PF8MFP_Msk);
    SYS->GPF_MFPH |= (SYS_GPF_MFPH_PF9MFP_RMII1_RXERR | SYS_GPF_MFPH_PF8MFP_RMII1_RXD1);
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF7MFP_Msk | SYS_GPF_MFPL_PF6MFP_Msk | SYS_GPF_MFPL_PF5MFP_Msk | SYS_GPF_MFPL_PF4MFP_Msk | SYS_GPF_MFPL_PF3MFP_Msk | SYS_GPF_MFPL_PF2MFP_Msk | SYS_GPF_MFPL_PF1MFP_Msk | SYS_GPF_MFPL_PF0MFP_Msk);
    SYS->GPF_MFPL |= (SYS_GPF_MFPL_PF7MFP_RMII1_RXD0 | SYS_GPF_MFPL_PF6MFP_RMII1_CRSDV | SYS_GPF_MFPL_PF5MFP_RMII1_REFCLK | SYS_GPF_MFPL_PF4MFP_RMII1_TXD1 | SYS_GPF_MFPL_PF3MFP_RMII1_TXD0 | SYS_GPF_MFPL_PF2MFP_RMII1_TXEN | SYS_GPF_MFPL_PF1MFP_RMII1_MDIO | SYS_GPF_MFPL_PF0MFP_RMII1_MDC);

    /* RMII Mode */
    SYS->GMAC1MISCR |= 1;

    /* Set 3.3v */
    GPIO_SetPowerMode(PF, 0x3FFF, 1);

    return;
}

void nutool_pincfg_deinit_rmii1(void)
{
    SYS->GPF_MFPH &= ~(SYS_GPF_MFPH_PF9MFP_Msk | SYS_GPF_MFPH_PF8MFP_Msk);
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF7MFP_Msk | SYS_GPF_MFPL_PF6MFP_Msk | SYS_GPF_MFPL_PF5MFP_Msk | SYS_GPF_MFPL_PF4MFP_Msk | SYS_GPF_MFPL_PF3MFP_Msk | SYS_GPF_MFPL_PF2MFP_Msk | SYS_GPF_MFPL_PF1MFP_Msk | SYS_GPF_MFPL_PF0MFP_Msk);

    return;
}

void nutool_pincfg_init_sd0(void)
{
    SYS->GPC_MFPL &= ~(SYS_GPC_MFPL_PC7MFP_Msk | SYS_GPC_MFPL_PC6MFP_Msk | SYS_GPC_MFPL_PC5MFP_Msk | SYS_GPC_MFPL_PC4MFP_Msk | SYS_GPC_MFPL_PC3MFP_Msk | SYS_GPC_MFPL_PC2MFP_Msk | SYS_GPC_MFPL_PC1MFP_Msk | SYS_GPC_MFPL_PC0MFP_Msk);
    SYS->GPC_MFPL |= (SYS_GPC_MFPL_PC7MFP_SD0_WP | SYS_GPC_MFPL_PC6MFP_SD0_nCD | SYS_GPC_MFPL_PC5MFP_SD0_DAT3 | SYS_GPC_MFPL_PC4MFP_SD0_DAT2 | SYS_GPC_MFPL_PC3MFP_SD0_DAT1 | SYS_GPC_MFPL_PC2MFP_SD0_DAT0 | SYS_GPC_MFPL_PC1MFP_SD0_CLK | SYS_GPC_MFPL_PC0MFP_SD0_CMD);

    return;
}

void nutool_pincfg_deinit_sd0(void)
{
    SYS->GPC_MFPL &= ~(SYS_GPC_MFPL_PC7MFP_Msk | SYS_GPC_MFPL_PC6MFP_Msk | SYS_GPC_MFPL_PC5MFP_Msk | SYS_GPC_MFPL_PC4MFP_Msk | SYS_GPC_MFPL_PC3MFP_Msk | SYS_GPC_MFPL_PC2MFP_Msk | SYS_GPC_MFPL_PC1MFP_Msk | SYS_GPC_MFPL_PC0MFP_Msk);

    return;
}

void nutool_pincfg_init_sd1(void)
{
    SYS->GPJ_MFPH &= ~(SYS_GPJ_MFPH_PJ11MFP_Msk | SYS_GPJ_MFPH_PJ10MFP_Msk | SYS_GPJ_MFPH_PJ9MFP_Msk | SYS_GPJ_MFPH_PJ8MFP_Msk);
    SYS->GPJ_MFPH |= (SYS_GPJ_MFPH_PJ11MFP_SD1_DAT3 | SYS_GPJ_MFPH_PJ10MFP_SD1_DAT2 | SYS_GPJ_MFPH_PJ9MFP_SD1_DAT1 | SYS_GPJ_MFPH_PJ8MFP_SD1_DAT0);
    SYS->GPJ_MFPL &= ~(SYS_GPJ_MFPL_PJ7MFP_Msk | SYS_GPJ_MFPL_PJ6MFP_Msk | SYS_GPJ_MFPL_PJ5MFP_Msk | SYS_GPJ_MFPL_PJ4MFP_Msk);
    SYS->GPJ_MFPL |= (SYS_GPJ_MFPL_PJ7MFP_SD1_CLK | SYS_GPJ_MFPL_PJ6MFP_SD1_CMD | SYS_GPJ_MFPL_PJ5MFP_SD1_nCD | SYS_GPJ_MFPL_PJ4MFP_SD1_WP);

    return;
}

void nutool_pincfg_deinit_sd1(void)
{
    SYS->GPJ_MFPH &= ~(SYS_GPJ_MFPH_PJ11MFP_Msk | SYS_GPJ_MFPH_PJ10MFP_Msk | SYS_GPJ_MFPH_PJ9MFP_Msk | SYS_GPJ_MFPH_PJ8MFP_Msk);
    SYS->GPJ_MFPL &= ~(SYS_GPJ_MFPL_PJ7MFP_Msk | SYS_GPJ_MFPL_PJ6MFP_Msk | SYS_GPJ_MFPL_PJ5MFP_Msk | SYS_GPJ_MFPL_PJ4MFP_Msk);

    return;
}

void nutool_pincfg_init_uart0(void)
{
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE15MFP_Msk | SYS_GPE_MFPH_PE14MFP_Msk);
    SYS->GPE_MFPH |= (SYS_GPE_MFPH_PE15MFP_UART0_RXD | SYS_GPE_MFPH_PE14MFP_UART0_TXD);

    return;
}

void nutool_pincfg_deinit_uart0(void)
{
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE15MFP_Msk | SYS_GPE_MFPH_PE14MFP_Msk);

    return;
}

void nutool_pincfg_init_uart4(void)
{
    SYS->GPI_MFPH &= ~(SYS_GPI_MFPH_PI11MFP_Msk | SYS_GPI_MFPH_PI10MFP_Msk | SYS_GPI_MFPH_PI9MFP_Msk | SYS_GPI_MFPH_PI8MFP_Msk);
    SYS->GPI_MFPH |= (SYS_GPI_MFPH_PI11MFP_UART4_TXD | SYS_GPI_MFPH_PI10MFP_UART4_RXD | SYS_GPI_MFPH_PI9MFP_UART4_nRTS | SYS_GPI_MFPH_PI8MFP_UART4_nCTS);

    return;
}

void nutool_pincfg_deinit_uart4(void)
{
    SYS->GPI_MFPH &= ~(SYS_GPI_MFPH_PI11MFP_Msk | SYS_GPI_MFPH_PI10MFP_Msk | SYS_GPI_MFPH_PI9MFP_Msk | SYS_GPI_MFPH_PI8MFP_Msk);

    return;
}

void nutool_pincfg_init_uart5(void)
{
    SYS->GPI_MFPH &= ~(SYS_GPI_MFPH_PI13MFP_Msk | SYS_GPI_MFPH_PI12MFP_Msk);
    SYS->GPI_MFPH |= (SYS_GPI_MFPH_PI13MFP_UART5_TXD | SYS_GPI_MFPH_PI12MFP_UART5_RXD);

    return;
}

void nutool_pincfg_deinit_uart5(void)
{
    SYS->GPI_MFPH &= ~(SYS_GPI_MFPH_PI13MFP_Msk | SYS_GPI_MFPH_PI12MFP_Msk);

    return;
}

void nutool_pincfg_init_uart6(void)
{
    SYS->GPN_MFPH &= ~(SYS_GPN_MFPH_PN15MFP_Msk | SYS_GPN_MFPH_PN14MFP_Msk | SYS_GPN_MFPH_PN13MFP_Msk | SYS_GPN_MFPH_PN12MFP_Msk);
    SYS->GPN_MFPH |= (SYS_GPN_MFPH_PN15MFP_UART6_TXD | SYS_GPN_MFPH_PN14MFP_UART6_RXD | SYS_GPN_MFPH_PN13MFP_UART6_nRTS | SYS_GPN_MFPH_PN12MFP_UART6_nCTS);

    return;
}

void nutool_pincfg_deinit_uart6(void)
{
    SYS->GPN_MFPH &= ~(SYS_GPN_MFPH_PN15MFP_Msk | SYS_GPN_MFPH_PN14MFP_Msk | SYS_GPN_MFPH_PN13MFP_Msk | SYS_GPN_MFPH_PN12MFP_Msk);

    return;
}

void nutool_pincfg_init_uart8(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH3MFP_Msk | SYS_GPH_MFPL_PH2MFP_Msk | SYS_GPH_MFPL_PH1MFP_Msk | SYS_GPH_MFPL_PH0MFP_Msk);
    SYS->GPH_MFPL |= (SYS_GPH_MFPL_PH3MFP_UART8_TXD | SYS_GPH_MFPL_PH2MFP_UART8_RXD | SYS_GPH_MFPL_PH1MFP_UART8_nRTS | SYS_GPH_MFPL_PH0MFP_UART8_nCTS);

    return;
}

void nutool_pincfg_deinit_uart8(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH3MFP_Msk | SYS_GPH_MFPL_PH2MFP_Msk | SYS_GPH_MFPL_PH1MFP_Msk | SYS_GPH_MFPL_PH0MFP_Msk);

    return;
}

void nutool_pincfg_init_uart9(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH5MFP_Msk | SYS_GPH_MFPL_PH4MFP_Msk);
    SYS->GPH_MFPL |= (SYS_GPH_MFPL_PH5MFP_UART9_TXD | SYS_GPH_MFPL_PH4MFP_UART9_RXD);

    return;
}

void nutool_pincfg_deinit_uart9(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH5MFP_Msk | SYS_GPH_MFPL_PH4MFP_Msk);

    return;
}

void nutool_pincfg_init_uart10(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH7MFP_Msk | SYS_GPH_MFPL_PH6MFP_Msk);
    SYS->GPH_MFPL |= (SYS_GPH_MFPL_PH7MFP_UART10_TXD | SYS_GPH_MFPL_PH6MFP_UART10_RXD);

    return;
}

void nutool_pincfg_deinit_uart10(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH7MFP_Msk | SYS_GPH_MFPL_PH6MFP_Msk);

    return;
}

void nutool_pincfg_init_uart12(void)
{
    SYS->GPG_MFPH &= ~(SYS_GPG_MFPH_PG10MFP_Msk | SYS_GPG_MFPH_PG9MFP_Msk | SYS_GPG_MFPH_PG8MFP_Msk);
    SYS->GPG_MFPH |= (SYS_GPG_MFPH_PG10MFP_UART12_nRTS | SYS_GPG_MFPH_PG9MFP_UART12_TXD | SYS_GPG_MFPH_PG8MFP_UART12_RXD);
    SYS->GPK_MFPL &= ~(SYS_GPK_MFPL_PK4MFP_Msk);
    SYS->GPK_MFPL |= (SYS_GPK_MFPL_PK4MFP_UART12_nCTS);

    return;
}

void nutool_pincfg_deinit_uart12(void)
{
    SYS->GPG_MFPH &= ~(SYS_GPG_MFPH_PG10MFP_Msk | SYS_GPG_MFPH_PG9MFP_Msk | SYS_GPG_MFPH_PG8MFP_Msk);
    SYS->GPK_MFPL &= ~(SYS_GPK_MFPL_PK4MFP_Msk);

    return;
}

void nutool_pincfg_init_uart14(void)
{
    SYS->GPH_MFPH &= ~(SYS_GPH_MFPH_PH15MFP_Msk | SYS_GPH_MFPH_PH14MFP_Msk | SYS_GPH_MFPH_PH13MFP_Msk | SYS_GPH_MFPH_PH12MFP_Msk);
    SYS->GPH_MFPH |= (SYS_GPH_MFPH_PH15MFP_UART14_TXD | SYS_GPH_MFPH_PH14MFP_UART14_RXD | SYS_GPH_MFPH_PH13MFP_UART14_nRTS | SYS_GPH_MFPH_PH12MFP_UART14_nCTS);

    return;
}

void nutool_pincfg_deinit_uart14(void)
{
    SYS->GPH_MFPH &= ~(SYS_GPH_MFPH_PH15MFP_Msk | SYS_GPH_MFPH_PH14MFP_Msk | SYS_GPH_MFPH_PH13MFP_Msk | SYS_GPH_MFPH_PH12MFP_Msk);

    return;
}

void nutool_pincfg_init_uart15(void)
{
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE13MFP_Msk | SYS_GPE_MFPH_PE12MFP_Msk | SYS_GPE_MFPH_PE11MFP_Msk | SYS_GPE_MFPH_PE10MFP_Msk);
    SYS->GPE_MFPH |= (SYS_GPE_MFPH_PE13MFP_UART15_TXD | SYS_GPE_MFPH_PE12MFP_UART15_RXD | SYS_GPE_MFPH_PE11MFP_UART15_nRTS | SYS_GPE_MFPH_PE10MFP_UART15_nCTS);

    return;
}

void nutool_pincfg_deinit_uart15(void)
{
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE13MFP_Msk | SYS_GPE_MFPH_PE12MFP_Msk | SYS_GPE_MFPH_PE11MFP_Msk | SYS_GPE_MFPH_PE10MFP_Msk);

    return;
}

void nutool_pincfg_init_uart16(void)
{
    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD11MFP_Msk | SYS_GPD_MFPH_PD10MFP_Msk | SYS_GPD_MFPH_PD9MFP_Msk | SYS_GPD_MFPH_PD8MFP_Msk);
    SYS->GPD_MFPH |= (SYS_GPD_MFPH_PD11MFP_UART16_TXD | SYS_GPD_MFPH_PD10MFP_UART16_RXD | SYS_GPD_MFPH_PD9MFP_UART16_nRTS | SYS_GPD_MFPH_PD8MFP_UART16_nCTS);

    return;
}

void nutool_pincfg_deinit_uart16(void)
{
    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD11MFP_Msk | SYS_GPD_MFPH_PD10MFP_Msk | SYS_GPD_MFPH_PD9MFP_Msk | SYS_GPD_MFPH_PD8MFP_Msk);

    return;
}

void nutool_pincfg_init(void)
{
    //SYS->GPA_MFPH = 0x06666666UL;
    //SYS->GPA_MFPL = 0x66666666UL;
    //SYS->GPB_MFPH = 0x88888888UL;
    //SYS->GPC_MFPH = 0x00000000UL;
    //SYS->GPC_MFPL = 0x66666666UL;
    //SYS->GPD_MFPH = 0x00002222UL;
    //SYS->GPD_MFPL = 0x00555555UL;
    //SYS->GPE_MFPH = 0x11222299UL;
    //SYS->GPE_MFPL = 0x99999999UL;
    //SYS->GPF_MFPH = 0x10000099UL;
    //SYS->GPF_MFPL = 0x99999999UL;
    //SYS->GPG_MFPH = 0x00000222UL;
    //SYS->GPG_MFPL = 0x00000000UL;
    //SYS->GPH_MFPH = 0x22220000UL;
    //SYS->GPH_MFPL = 0x22332222UL;
    //SYS->GPI_MFPH = 0x00332222UL;
    //SYS->GPJ_MFPH = 0x00006666UL;
    //SYS->GPJ_MFPL = 0x66660000UL;
    //SYS->GPK_MFPH = 0x00000000UL;
    //SYS->GPK_MFPL = 0x00020000UL;
    //SYS->GPL_MFPH = 0x00990000UL;
    //SYS->GPM_MFPH = 0x00000044UL;
    //SYS->GPM_MFPL = 0x00003300UL;
    //SYS->GPN_MFPH = 0x22220000UL;
    //SYS->GPN_MFPL = 0x33003300UL;

    nutool_pincfg_init_adc0();
    nutool_pincfg_init_can0();
    nutool_pincfg_init_can1();
    nutool_pincfg_init_can3();
    nutool_pincfg_init_hsusb0();
    nutool_pincfg_init_hsusbh();
    nutool_pincfg_init_i2c0();
    nutool_pincfg_init_nand();
    nutool_pincfg_init_qspi0();
    nutool_pincfg_init_rmii0();
    nutool_pincfg_init_rmii1();
    nutool_pincfg_init_sd0();
    nutool_pincfg_init_sd1();
    nutool_pincfg_init_uart0();
    nutool_pincfg_init_uart4();
    nutool_pincfg_init_uart5();
    nutool_pincfg_init_uart6();
    nutool_pincfg_init_uart8();
    nutool_pincfg_init_uart9();
    nutool_pincfg_init_uart10();
    nutool_pincfg_init_uart12();
    nutool_pincfg_init_uart14();
    nutool_pincfg_init_uart15();
    nutool_pincfg_init_uart16();

    return;
}

void nutool_pincfg_deinit(void)
{
    nutool_pincfg_deinit_adc0();
    nutool_pincfg_deinit_can0();
    nutool_pincfg_deinit_can1();
    nutool_pincfg_deinit_can3();
    nutool_pincfg_deinit_hsusb0();
    nutool_pincfg_deinit_hsusbh();
    nutool_pincfg_deinit_i2c0();
    nutool_pincfg_deinit_nand();
    nutool_pincfg_deinit_qspi0();
    nutool_pincfg_deinit_rmii0();
    nutool_pincfg_deinit_rmii1();
    nutool_pincfg_deinit_sd0();
    nutool_pincfg_deinit_sd1();
    nutool_pincfg_deinit_uart0();
    nutool_pincfg_deinit_uart4();
    nutool_pincfg_deinit_uart5();
    nutool_pincfg_deinit_uart6();
    nutool_pincfg_deinit_uart8();
    nutool_pincfg_deinit_uart9();
    nutool_pincfg_deinit_uart10();
    nutool_pincfg_deinit_uart12();
    nutool_pincfg_deinit_uart14();
    nutool_pincfg_deinit_uart15();
    nutool_pincfg_deinit_uart16();

    return;
}

/*** (C) COPYRIGHT 2013-2023 Nuvoton Technology Corp. ***/
