/**
  *      __            ____
  *     / /__ _  __   / __/                      __  
  *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
  *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
  *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
  *                    /_/   github.com/KitSprout    
  * 
  * @file    stm32f4_spi.h
  * @author  KitSprout
  * @date    19-Jan-2016
  * @brief   
  * 
  */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __STM32F4_SPI_H
#define __STM32F4_SPI_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
#include "stm32f4_system.h"

/* Exported types --------------------------------------------------------------------------*/
/* Exported constants ----------------------------------------------------------------------*/
/* Exported functions ----------------------------------------------------------------------*/

void     SPI_SetSpeed( SPI_TypeDef *SPIx, SPI_InitTypeDef *pSPI_InitStruct, uint8_t speedSel );

uint16_t SPI_RW( SPI_TypeDef *SPIx, uint16_t sendByte );
int8_t   SPI_SendDataWTO( SPI_TypeDef *SPIx, uint8_t *sendData, uint16_t lens, uint32_t timeout );
int8_t   SPI_RecvDataWTO( SPI_TypeDef *SPIx, uint8_t *recvData, uint16_t lens, uint32_t timeout );

#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/
