/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI15_10_IRQn
#define DB0_Pin GPIO_PIN_0
#define DB0_GPIO_Port GPIOC
#define DB1_Pin GPIO_PIN_1
#define DB1_GPIO_Port GPIOC
#define DB2_Pin GPIO_PIN_2
#define DB2_GPIO_Port GPIOC
#define DB3_Pin GPIO_PIN_3
#define DB3_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define IMU_CS_Pin GPIO_PIN_4
#define IMU_CS_GPIO_Port GPIOA
#define IMU_SCLK_Pin GPIO_PIN_5
#define IMU_SCLK_GPIO_Port GPIOA
#define IMU_MISO_Pin GPIO_PIN_6
#define IMU_MISO_GPIO_Port GPIOA
#define IMU_MOSI_Pin GPIO_PIN_7
#define IMU_MOSI_GPIO_Port GPIOA
#define DB4_Pin GPIO_PIN_4
#define DB4_GPIO_Port GPIOC
#define DB5_Pin GPIO_PIN_5
#define DB5_GPIO_Port GPIOC
#define LCD_POT_Pin GPIO_PIN_0
#define LCD_POT_GPIO_Port GPIOB
#define IMU_INT2_Pin GPIO_PIN_1
#define IMU_INT2_GPIO_Port GPIOB
#define IMU_INT2_EXTI_IRQn EXTI1_IRQn
#define IMU_INT1_Pin GPIO_PIN_2
#define IMU_INT1_GPIO_Port GPIOB
#define IMU_INT1_EXTI_IRQn EXTI2_IRQn
#define DB6_Pin GPIO_PIN_6
#define DB6_GPIO_Port GPIOC
#define DB7_Pin GPIO_PIN_7
#define DB7_GPIO_Port GPIOC
#define LCD_RST_Pin GPIO_PIN_8
#define LCD_RST_GPIO_Port GPIOC
#define LCD_R_W_Pin GPIO_PIN_9
#define LCD_R_W_GPIO_Port GPIOC
#define LCD_CS1_Pin GPIO_PIN_8
#define LCD_CS1_GPIO_Port GPIOA
#define LCD_CS2_Pin GPIO_PIN_9
#define LCD_CS2_GPIO_Port GPIOA
#define LCD_BL_Pin GPIO_PIN_11
#define LCD_BL_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define LCD_EN_Pin GPIO_PIN_10
#define LCD_EN_GPIO_Port GPIOC
#define LCD_E_Pin GPIO_PIN_11
#define LCD_E_GPIO_Port GPIOC
#define LCD_D_I_Pin GPIO_PIN_12
#define LCD_D_I_GPIO_Port GPIOC
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
