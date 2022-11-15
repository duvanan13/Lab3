/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
void display7SEG_1();
void display7SEG_2();
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Button1_Pin GPIO_PIN_13
#define Button1_GPIO_Port GPIOC
#define Button2_Pin GPIO_PIN_14
#define Button2_GPIO_Port GPIOC
#define Button3_Pin GPIO_PIN_15
#define Button3_GPIO_Port GPIOC
#define LED_RED1_Pin GPIO_PIN_1
#define LED_RED1_GPIO_Port GPIOA
#define LED_YELLOW1_Pin GPIO_PIN_2
#define LED_YELLOW1_GPIO_Port GPIOA
#define LED_GREEN1_Pin GPIO_PIN_3
#define LED_GREEN1_GPIO_Port GPIOA
#define LED_RED2_Pin GPIO_PIN_4
#define LED_RED2_GPIO_Port GPIOA
#define LED_YELLOW2_Pin GPIO_PIN_5
#define LED_YELLOW2_GPIO_Port GPIOA
#define LED_GREEN2_Pin GPIO_PIN_6
#define LED_GREEN2_GPIO_Port GPIOA
#define LED_SEG1_Pin GPIO_PIN_0
#define LED_SEG1_GPIO_Port GPIOB
#define LED_SEG2_Pin GPIO_PIN_1
#define LED_SEG2_GPIO_Port GPIOB
#define LED_SEG3_Pin GPIO_PIN_2
#define LED_SEG3_GPIO_Port GPIOB
#define LED_SEG11_Pin GPIO_PIN_10
#define LED_SEG11_GPIO_Port GPIOB
#define LED_SEG12_Pin GPIO_PIN_11
#define LED_SEG12_GPIO_Port GPIOB
#define LED_SEG13_Pin GPIO_PIN_12
#define LED_SEG13_GPIO_Port GPIOB
#define LED_SEG14_Pin GPIO_PIN_13
#define LED_SEG14_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_12
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_13
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_14
#define EN3_GPIO_Port GPIOA
#define EN4_Pin GPIO_PIN_15
#define EN4_GPIO_Port GPIOA
#define LED_SEG4_Pin GPIO_PIN_3
#define LED_SEG4_GPIO_Port GPIOB
#define LED_SEG5_Pin GPIO_PIN_4
#define LED_SEG5_GPIO_Port GPIOB
#define LED_SEG6_Pin GPIO_PIN_5
#define LED_SEG6_GPIO_Port GPIOB
#define LED_SEG7_Pin GPIO_PIN_6
#define LED_SEG7_GPIO_Port GPIOB
#define LED_SEG8_Pin GPIO_PIN_7
#define LED_SEG8_GPIO_Port GPIOB
#define LED_SEG9_Pin GPIO_PIN_8
#define LED_SEG9_GPIO_Port GPIOB
#define LED_SEG10_Pin GPIO_PIN_9
#define LED_SEG10_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
