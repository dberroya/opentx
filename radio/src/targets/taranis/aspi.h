/**
  ******************************************************************************
  * @file    Project/spi/spi.h
  * @author  FrSky Application Team
  * @Hardware version V0.2
  * @date    11-July-2012
  * @brief   spi.c' Header file.
  * *
  ******************************************************************************
*/
#ifndef _ASPI_H_
#define _ASPI_H_

#if defined(__cplusplus) && !defined(SIMU)
extern "C" {
#endif

#define __no_operation     __NOP

#define LCD_NCS_HIGH()    GPIO_LCD_NCS->BSRRL = PIN_LCD_NCS
#define LCD_NCS_LOW()     GPIO_LCD_NCS->BSRRH = PIN_LCD_NCS

#define LCD_A0_HIGH()     GPIO_LCD_SPI->BSRRL = PIN_LCD_A0
#define LCD_A0_LOW()      GPIO_LCD_SPI->BSRRH = PIN_LCD_A0

#define LCD_RST_HIGH()    GPIO_LCD_RST->BSRRL = PIN_LCD_RST
#define LCD_RST_LOW()     GPIO_LCD_RST->BSRRH = PIN_LCD_RST

#define LCD_CLK_HIGH()    GPIO_LCD_SPI->BSRRL = PIN_LCD_CLK
#define LCD_CLK_LOW()     GPIO_LCD_SPI->BSRRH = PIN_LCD_CLK

#define LCD_MOSI_HIGH()   GPIO_LCD_SPI->BSRRL = PIN_LCD_MOSI
#define LCD_MOSI_LOW()    GPIO_LCD_SPI->BSRRH = PIN_LCD_MOSI

void AspiCmd(u8 Command_Byte);
void AspiData(u8 Para_data);

#if defined(__cplusplus) && !defined(SIMU)
}
#endif

#endif

