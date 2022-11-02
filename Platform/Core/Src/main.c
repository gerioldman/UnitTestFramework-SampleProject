/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "adc.h"
#include "crc.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "lcd.h"
#include "lsm6dsl_reg.h"
#include <stdio.h>
#include <math.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

#define COMP_FILT_ALPHA 0.025f

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

uint8_t 		ui_toggle = 1;
int16_t 		acc[3] = 	{ 0, 0, 0 };
int16_t 		gyro[3] = 	{ 0, 0, 0 };
float_t 		facc[3] = 	{ 0, 0, 0 };
float_t 		fgyro[3] = 	{ 0, 0, 0 };
stmdev_ctx_t dev_ctx;
uint8_t TX_Buffer[36];

uint8_t RX_Buffer;

float_t phiHat = 0.0f;
float_t thetaHat = 0.0f;

float_t degPhi;
float_t degTheta;
uint32_t crc;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

// LSM6DSL library működéséhez megírt függvények

static int32_t platform_write(void *handle, uint8_t reg, const uint8_t *bufp,
		uint16_t len);

static int32_t platform_read(void *handle, uint8_t reg, uint8_t *bufp,
		uint16_t len);

static int32_t platform_write(void *handle, uint8_t reg, const uint8_t *bufp,
		uint16_t len) {
	HAL_GPIO_WritePin(IMU_CS_GPIO_Port, IMU_CS_Pin, GPIO_PIN_RESET);
	HAL_SPI_Transmit(&hspi1, &reg, 1, HAL_MAX_DELAY);
	HAL_SPI_Transmit(&hspi1, (uint8_t*) bufp, len, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(IMU_CS_GPIO_Port, IMU_CS_Pin, GPIO_PIN_SET);
	return 0;
}
static int32_t platform_read(void *handle, uint8_t reg, uint8_t *bufp,
		uint16_t len) {
	reg |= 0x80;
	HAL_GPIO_WritePin(IMU_CS_GPIO_Port, IMU_CS_Pin, GPIO_PIN_RESET);
	HAL_SPI_Transmit(handle, &reg, 1, HAL_MAX_DELAY);
	HAL_SPI_Receive(&hspi1, bufp, len, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(IMU_CS_GPIO_Port, IMU_CS_Pin, GPIO_PIN_SET);
	return 0;
}

// Fényerőállításhoz 1kHZ frekvenciával indított mintavételezés

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TIM7)
		// Potméter ADC konverzió indítása
		HAL_ADC_Start_IT(&hadc1);
}
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {

	// Ha fogadott karakter s, akkor a jelenlegi adatokat elküldi, és 4byte CRC-t tűz a végére

	if (RX_Buffer == 's') {
		TX_Buffer[0] = *((uint8_t*) &degPhi);
		TX_Buffer[1] = *(((uint8_t*) &degPhi) + 1);
		TX_Buffer[2] = *(((uint8_t*) &degPhi) + 2);
		TX_Buffer[3] = *(((uint8_t*) &degPhi) + 3);
		TX_Buffer[4] = *((uint8_t*) &degTheta);
		TX_Buffer[5] = *(((uint8_t*) &degTheta) + 1);
		TX_Buffer[6] = *(((uint8_t*) &degTheta) + 2);
		TX_Buffer[7] = *(((uint8_t*) &degTheta) + 3);
		TX_Buffer[8] = *((uint8_t*) &fgyro[0]);
		TX_Buffer[9] = *(((uint8_t*) &fgyro[0]) + 1);
		TX_Buffer[10] = *(((uint8_t*) &fgyro[0]) + 2);
		TX_Buffer[11] = *(((uint8_t*) &fgyro[0]) + 3);
		TX_Buffer[12] = *((uint8_t*) &fgyro[1]);
		TX_Buffer[13] = *(((uint8_t*) &fgyro[1]) + 1);
		TX_Buffer[14] = *(((uint8_t*) &fgyro[1]) + 2);
		TX_Buffer[15] = *(((uint8_t*) &fgyro[1]) + 3);
		TX_Buffer[16] = *((uint8_t*) &fgyro[2]);
		TX_Buffer[17] = *(((uint8_t*) &fgyro[2]) + 1);
		TX_Buffer[18] = *(((uint8_t*) &fgyro[2]) + 2);
		TX_Buffer[19] = *(((uint8_t*) &fgyro[2]) + 3);
		TX_Buffer[20] = *((uint8_t*) &facc[0]);
		TX_Buffer[21] = *(((uint8_t*) &facc[0]) + 1);
		TX_Buffer[22] = *(((uint8_t*) &facc[0]) + 2);
		TX_Buffer[23] = *(((uint8_t*) &facc[0]) + 3);
		TX_Buffer[24] = *((uint8_t*) &facc[1]);
		TX_Buffer[25] = *(((uint8_t*) &facc[1]) + 1);
		TX_Buffer[26] = *(((uint8_t*) &facc[1]) + 2);
		TX_Buffer[27] = *(((uint8_t*) &facc[1]) + 3);
		TX_Buffer[28] = *((uint8_t*) &facc[2]);
		TX_Buffer[29] = *(((uint8_t*) &facc[2]) + 1);
		TX_Buffer[30] = *(((uint8_t*) &facc[2]) + 2);
		TX_Buffer[31] = *(((uint8_t*) &facc[2]) + 3);

		uint32_t CRC_Calc[8];

		for (int var = 0; var < 8; var++) {
			CRC_Calc[var] = 0;
			CRC_Calc[var] |= TX_Buffer[0+4*var]<<24;
			CRC_Calc[var] |= TX_Buffer[1+4*var]<<16;
			CRC_Calc[var] |= TX_Buffer[2+4*var]<<8;
			CRC_Calc[var] |= TX_Buffer[3+4*var];
		}
		crc = HAL_CRC_Calculate(&hcrc,(uint32_t*) CRC_Calc, 8);

		TX_Buffer[32] = (uint8_t)(crc&0xFF);
		TX_Buffer[33] = (uint8_t)((crc&0xFF00) >> 8);
		TX_Buffer[34] = (uint8_t)((crc&0xFF0000) >> 16);
		TX_Buffer[35] = (uint8_t)((crc&0xFF000000) >> 24);

		HAL_UART_Transmit_IT(huart, TX_Buffer, 36);
	}
	HAL_UART_Receive_IT(huart, &RX_Buffer, 1);
}
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc) {

	// Ha konverzió kész, akkor fényerőt vezérlő PWM állítása
	if (hadc->Instance == ADC1) {
		uint32_t ADC_Buffer = HAL_ADC_GetValue(hadc);
		TIM1->CCR4 = ADC_Buffer * 16;
	}
}
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {


	// LSM6DSL INT kezelése
	if (GPIO_Pin == IMU_INT1_Pin) {

		lsm6dsl_status_reg_t val;

		// Státusz lekérdezése

		lsm6dsl_status_reg_get(&dev_ctx, &val);

		// Adatok beolvasása és konverziója a használt mértékegységre

		// Giroszkóp adatok
		if (val.gda) {
			lsm6dsl_angular_rate_raw_get(&dev_ctx, gyro);
			fgyro[0] = lsm6dsl_from_fs2000dps_to_mdps(gyro[0]);
			fgyro[0] = fgyro[0] / 1000.0f / 180.0f * M_PI; // mdps -> rad/s

			fgyro[1] = lsm6dsl_from_fs2000dps_to_mdps(gyro[2]);
			fgyro[1] = fgyro[1] / 1000.0f / 180.0f * M_PI; // mdps -> rad/s

			fgyro[2] = lsm6dsl_from_fs2000dps_to_mdps(gyro[1]);
			fgyro[2] = fgyro[2] / 1000.0f / 180.0f * M_PI; // mdps -> rad/s

		}
		// Gyorsulásmérő adatok
		if (val.xlda) {
			lsm6dsl_acceleration_raw_get(&dev_ctx, acc);
			facc[0] = lsm6dsl_from_fs2g_to_mg(acc[0]);
			facc[0] = facc[0] / 1000.0f * 10.0f; //mg -> m/s

			facc[1] = lsm6dsl_from_fs2g_to_mg(acc[2]);
			facc[1] = facc[1] / 1000.0f * 10.0f; //mg -> m/s

			facc[2] = lsm6dsl_from_fs2g_to_mg(acc[1]);
			facc[2] = facc[2] / 1000.0f * 10.0f; //mg -> m/s
		}
		// Hőmérő adatok eldobása, ha esetleg lenne, ne hogy ez tartsa fent a megszakítást
		if (val.tda) {
			int16_t temp;
			lsm6dsl_temperature_raw_get(&dev_ctx, &temp);
		}


		// Gyorsulásmérő adataiból dölésszög
		float_t phiHat_acc_rad = atan2f(facc[1], facc[2]); //atanf(facc[1] / facc[2]
		float_t thetaHat_acc_rad = asinf(facc[0] / 10.0f);

		// Body rates -> Euler rates, Föld inerciarendszerbe transzormálás
		float_t phiDot_rps = fgyro[0] + tanf(thetaHat) * (sinf(phiHat) * fgyro[1] + cosf(phiHat) * fgyro[2]);
		float_t thetaDot_rps = cosf(phiHat) * fgyro[1] - sinf(phiHat) * fgyro[2];

		// Előző adat lementése ha hiba történne
		float_t oldphi = phiHat;

		// Becslés
		phiHat = COMP_FILT_ALPHA * phiHat_acc_rad + (1.0f - COMP_FILT_ALPHA) * (phiHat + (1 / 833.0f) * phiDot_rps);

		// Hiba ellenőrzése és adat eldobása, ha hiba van
		if (isnanf(phiHat))
			phiHat = oldphi;

		// Előző adat lementése ha hiba történne
		float_t oldtheta = thetaHat;

		// Becslés
		thetaHat = COMP_FILT_ALPHA * thetaHat_acc_rad + (1.0f - COMP_FILT_ALPHA) * (thetaHat + (1 / 833.0f) * thetaDot_rps);

		// Hiba ellenőrzése és adat eldobása, ha hiba van
		if (isnanf(thetaHat))
			thetaHat = oldtheta;

		// Fokba konverzió
		degPhi = phiHat * 180.0f / M_PI;
		degTheta = thetaHat * 180.0f / M_PI;
	}
	if (GPIO_Pin == B1_Pin) {
		// Gomb int kezelő, változót invertálja, hogy melyik kirajzolás történjen meg
		if (ui_toggle)
			ui_toggle = 0;
		else
			ui_toggle = 1;
	}
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_SPI1_Init();
  MX_TIM1_Init();
  MX_TIM7_Init();
  MX_ADC1_Init();
  MX_CRC_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

    // LCD inicializálása
	LCD_Init();

	// LSM6DSL struktúra kitöltése
	dev_ctx.read_reg = platform_read;
	dev_ctx.write_reg = platform_write;
	dev_ctx.handle = &hspi1;

	// LSM6DSL alapállotba helyezése
	uint8_t rst;
	lsm6dsl_reset_set(&dev_ctx, PROPERTY_ENABLE);
	do {
		lsm6dsl_reset_get(&dev_ctx, &rst);
	} while (rst);

	HAL_Delay(100);


	// Ez a kiolvasás szükséges ahhoz, hogy az interrupt működjön
	lsm6dsl_status_reg_t reg;
	lsm6dsl_status_reg_get(&dev_ctx, &reg);
	if (reg.gda)
		lsm6dsl_angular_rate_raw_get(&dev_ctx, gyro);
	if (reg.xlda)
		lsm6dsl_acceleration_raw_get(&dev_ctx, acc);
	if (reg.tda) {
		int16_t temp;
		lsm6dsl_temperature_raw_get(&dev_ctx, &temp);
	}

	// Interupt aktív alacsony
	lsm6dsl_pin_polarity_set(&dev_ctx, LSM6DSL_ACTIVE_LOW);

	lsm6dsl_int1_route_t val = { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			0, 1 };
	//lsm6dsl_int2_route_t val2 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	//0, 0 };
	// Interrupt engedélyezése
	lsm6dsl_pin_int1_route_set(&dev_ctx, val);

	// Giroszkóp konfiguráció
	lsm6dsl_gy_data_rate_set(&dev_ctx, LSM6DSL_GY_ODR_833Hz);
	lsm6dsl_gy_full_scale_set(&dev_ctx, LSM6DSL_2000dps);
	lsm6dsl_gy_band_pass_set(&dev_ctx,
			LSM6DSL_HP_1Hz04_LP2);

	// Gyorsulásmérő konfiguráció
	lsm6dsl_xl_data_rate_set(&dev_ctx, LSM6DSL_XL_ODR_833Hz);
	lsm6dsl_xl_full_scale_set(&dev_ctx, LSM6DSL_2g);
	lsm6dsl_xl_filter_analog_set(&dev_ctx, LSM6DSL_XL_ANA_BW_400Hz);
	lsm6dsl_xl_lp2_bandwidth_set(&dev_ctx, LSM6DSL_XL_LOW_NOISE_LP_ODR_DIV_100);

	// PWM alapérték
	TIM1->CCR4 = 21000;

	// PWM indítása
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_4);

	// Potméter mérésének indítása
	HAL_TIM_Base_Start_IT(&htim7);

	// LCD törlése
	LCD_Fill_Display(0x00);

	// Kliens programtól érkező adat fogadásának indítása
	HAL_UART_Receive_IT(&huart2, &RX_Buffer, 1);

	while (1) {
		if (ui_toggle) {
			// Buffer törlése
			LCD_Fill_Buffer(0x0);

			// Marker rajzolása
			LCD_Draw_Line(62, 30, 65, 30);
			LCD_Draw_Line(62, 33, 65, 33);
			LCD_Draw_Line(62, 30, 62, 33);
			LCD_Draw_Line(65, 30, 65, 33);
			LCD_Draw_Line(63, 34, 63, 38);
			LCD_Draw_Line(64, 34, 64, 38);

			LCD_Draw_Line(62, 37, 56, 37);
			LCD_Draw_Line(62, 38, 56, 38);

			LCD_Draw_Line(65, 37, 71, 37);
			LCD_Draw_Line(65, 38, 71, 38);

			LCD_Draw_Line(56, 36, 56, 31);
			LCD_Draw_Line(57, 36, 57, 31);

			LCD_Draw_Line(70, 36, 70, 31);
			LCD_Draw_Line(71, 36, 71, 31);

			LCD_Draw_Line(72, 31, 80, 31);
			LCD_Draw_Line(72, 32, 80, 32);

			LCD_Draw_Line(55, 31, 47, 31);
			LCD_Draw_Line(55, 32, 47, 32);
			// Marker rajzolása

			// Rajzoláshoz phi és theta szögek lokális változóba mentése
			uint32_t mask = __get_PRIMASK();
			__disable_irq();
			int16_t localPhi = degPhi;
			int16_t localTheta = degTheta;
			__set_PRIMASK(mask);

			// Dölésszögeket reprezentáló vonalak és hozzátartozó szöveg rajzolása
			for (int i = -90; i < 91; i += 15) {
				if (i != 0) {
					char buffer[4];
					uint8_t length = sprintf(buffer, "%d", -i);

					// Vonal alap poziciója Phi döléssel eltolva
					float_t x0 = 64 - fabsf(i) / 2;
					float_t y0 = 32 - localPhi + i;
					float_t x1 = 64 + fabsf(i) / 2;
					float_t y1 = 32 - localPhi + i;

					// Vonal forgatása dölésszögnek megfelelően
					float_t x2 = (x0 - 64) * cosf(localTheta * M_PI / 180)
							- (y0 - 32) * sinf(localTheta * M_PI / 180) + 64;
					float_t y2 = (x0 - 64) * sinf(localTheta * M_PI / 180)
							+ (y0 - 32) * cosf(localTheta * M_PI / 180) + 32;
					float_t x3 = (x1 - 64) * cosf(localTheta * M_PI / 180)
							- (y1 - 32) * sinf(localTheta * M_PI / 180) + 64;
					float_t y3 = (x1 - 64) * sinf(localTheta * M_PI / 180)
							+ (y1 - 32) * cosf(localTheta * M_PI / 180) + 32;
					// Vonal bufferbe rajzolása
					LCD_Draw_Line(x2, y2, x3, y3);
					// Érték kiírása a vonal két végpontja mellé
					LCD_Draw_String(buffer, x2 - 2 - length * 8, y2);
					LCD_Draw_String(buffer, x3 + 2, y3);

				} else {
					//LCD_Draw_Line(64-fabsf(i)/2, 32 + localPhi + i, 64+fabsf(i)/2,32 + localPhi + i);
				}
			}
			// kirajolás LCD-re bufferből
			LCD_Invalidate();
		} else {

			// Mért és feldolgozott adatok megjelenítése az LCD-n

			char line0[16], line1[16], line2[16], line3[16], line4[16],
					line5[16], line6[16], line7[16];
			LCD_Fill_Buffer(0x0);
			snprintf(line0, 16, "XLX:%.3f m/s", facc[0]);
			snprintf(line1, 16, "XLY:%.3f m/s", facc[1]);
			snprintf(line2, 16, "XLZ:%.3f m/s", facc[2]);
			snprintf(line3, 16, "GX:%.3f rad/s", fgyro[0]);
			snprintf(line4, 16, "GY:%.3f rad/s", fgyro[1]);
			snprintf(line5, 16, "GZ:%.3f rad/s", fgyro[2]);
			snprintf(line6, 16, "Phi:%.3fdeg", degPhi);
			snprintf(line7, 16, "Theta:%.3fdeg", degTheta);
			LCD_Draw_String(line0, 0, 0);
			LCD_Draw_String(line1, 0, 8);
			LCD_Draw_String(line2, 0, 16);
			LCD_Draw_String(line3, 0, 24);
			LCD_Draw_String(line4, 0, 32);
			LCD_Draw_String(line5, 0, 40);
			LCD_Draw_String(line6, 0, 48);
			LCD_Draw_String(line7, 0, 56);
			LCD_Invalidate();
			HAL_Delay(200);
		}
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	}
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 100;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  RCC_OscInitStruct.PLL.PLLR = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1) {
	}
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
