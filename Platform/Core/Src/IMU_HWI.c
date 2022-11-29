#include "IMU_HWI.h"
#include "spi.h"
#include "gpio.h"

int32_t platform_write(void *handle, uint8_t reg, const uint8_t *bufp,
							  uint16_t len)
{
	(void)handle;
	HAL_GPIO_WritePin(IMU_CS_GPIO_Port, IMU_CS_Pin, GPIO_PIN_RESET);
	HAL_SPI_Transmit(&hspi1, &reg, 1, HAL_MAX_DELAY);
	HAL_SPI_Transmit(&hspi1, (uint8_t *)bufp, len, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(IMU_CS_GPIO_Port, IMU_CS_Pin, GPIO_PIN_SET);
	return 0;
}
int32_t platform_read(void *handle, uint8_t reg, uint8_t *bufp,
							 uint16_t len)
{
	(void)handle;
	reg |= 0x80;
	HAL_GPIO_WritePin(IMU_CS_GPIO_Port, IMU_CS_Pin, GPIO_PIN_RESET);
	HAL_SPI_Transmit(&hspi1, &reg, 1, HAL_MAX_DELAY);
	HAL_SPI_Receive(&hspi1, bufp, len, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(IMU_CS_GPIO_Port, IMU_CS_Pin, GPIO_PIN_SET);
	return 0;
}

void IMU_HWI_Delay(uint32_t ms)
{
	HAL_Delay(ms);
}