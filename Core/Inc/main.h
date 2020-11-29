/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_ERROR_Pin GPIO_PIN_13
#define LED_ERROR_GPIO_Port GPIOC
#define LED_CLIP_Pin GPIO_PIN_14
#define LED_CLIP_GPIO_Port GPIOC
#define LED_OTHER_Pin GPIO_PIN_15
#define LED_OTHER_GPIO_Port GPIOC
#define ACCEL_Pin GPIO_PIN_0
#define ACCEL_GPIO_Port GPIOA
#define BRAKE_Pin GPIO_PIN_1
#define BRAKE_GPIO_Port GPIOA
#define CLUTCH_Pin GPIO_PIN_2
#define CLUTCH_GPIO_Port GPIOA
#define HANDBRAKE_Pin GPIO_PIN_3
#define HANDBRAKE_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA
#define XSHIFTER_Pin GPIO_PIN_0
#define XSHIFTER_GPIO_Port GPIOB
#define YSHIFTER_Pin GPIO_PIN_1
#define YSHIFTER_GPIO_Port GPIOB
#define SHIFTER_REV_Pin GPIO_PIN_2
#define SHIFTER_REV_GPIO_Port GPIOB
#define INPUT_BTN_Pin GPIO_PIN_10
#define INPUT_BTN_GPIO_Port GPIOB
#define SPI2_CS_Pin GPIO_PIN_12
#define SPI2_CS_GPIO_Port GPIOB
#define SPI2_CE_Pin GPIO_PIN_8
#define SPI2_CE_GPIO_Port GPIOA
#define CENTER_BTN_Pin GPIO_PIN_15
#define CENTER_BTN_GPIO_Port GPIOA
#define CENTER_BTN_EXTI_IRQn EXTI15_10_IRQn
#define ENC_Z_Pin GPIO_PIN_3
#define ENC_Z_GPIO_Port GPIOB
#define ENC_Z_EXTI_IRQn EXTI3_IRQn
#define ENC_A_Pin GPIO_PIN_4
#define ENC_A_GPIO_Port GPIOB
#define ENC_B_Pin GPIO_PIN_5
#define ENC_B_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
