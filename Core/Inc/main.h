/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f7xx_hal.h"

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
#define SW4_FOOT_Pin GPIO_PIN_1
#define SW4_FOOT_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_4
#define LED_RED_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_5
#define LED_GREEN_GPIO_Port GPIOA
#define LED_BLUE_Pin GPIO_PIN_6
#define LED_BLUE_GPIO_Port GPIOA
#define SW0_UPPER_L_Pin GPIO_PIN_0
#define SW0_UPPER_L_GPIO_Port GPIOB
#define SW1_LOWER_L_Pin GPIO_PIN_1
#define SW1_LOWER_L_GPIO_Port GPIOB
#define CODEC_RST_Pin GPIO_PIN_11
#define CODEC_RST_GPIO_Port GPIOB
#define SW2_UPPER_R_Pin GPIO_PIN_4
#define SW2_UPPER_R_GPIO_Port GPIOB
#define SW3_LOWER_R_Pin GPIO_PIN_5
#define SW3_LOWER_R_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
