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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWM_SERVO_Pin GPIO_PIN_1
#define PWM_SERVO_GPIO_Port GPIOA
#define IN_LIMIT_SWITCH_Pin GPIO_PIN_6
#define IN_LIMIT_SWITCH_GPIO_Port GPIOA
#define OUT_STEPPER_DIR_Pin GPIO_PIN_7
#define OUT_STEPPER_DIR_GPIO_Port GPIOA
#define OUT_STEPPER_MS3_Pin GPIO_PIN_0
#define OUT_STEPPER_MS3_GPIO_Port GPIOB
#define OUT_STEPPER_MS2_Pin GPIO_PIN_1
#define OUT_STEPPER_MS2_GPIO_Port GPIOB
#define OUT_STEPPER_MS1_Pin GPIO_PIN_10
#define OUT_STEPPER_MS1_GPIO_Port GPIOB
#define OUT_STEPPER_EN_Pin GPIO_PIN_11
#define OUT_STEPPER_EN_GPIO_Port GPIOB
#define IN_MOTOR_ENCODER_A_Pin GPIO_PIN_12
#define IN_MOTOR_ENCODER_A_GPIO_Port GPIOB
#define IN_MOTOR_ENCODER_A_EXTI_IRQn EXTI15_10_IRQn
#define IN_MOTOR_ENCODER_B_Pin GPIO_PIN_13
#define IN_MOTOR_ENCODER_B_GPIO_Port GPIOB
#define IN_MOTOR_ENCODER_B_EXTI_IRQn EXTI15_10_IRQn
#define OUT_STEPPER_STEP_Pin GPIO_PIN_8
#define OUT_STEPPER_STEP_GPIO_Port GPIOA
#define PWM_MOTOR_EN_Pin GPIO_PIN_9
#define PWM_MOTOR_EN_GPIO_Port GPIOA
#define PWM_MOTOR_1A_Pin GPIO_PIN_10
#define PWM_MOTOR_1A_GPIO_Port GPIOA
#define PWM_MOTOR_2A_Pin GPIO_PIN_11
#define PWM_MOTOR_2A_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
