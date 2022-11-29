/**
 * @file IMU_Handler.c
 * @brief TODO
 * @date 2022-11-29-00:35:31
*/

/* Private includes ----------------------------------------------------------*/

#include "IMU_Handler.h"
#include "IMU_HWI.h"
#include "lsm6dsl_reg.h"

/* Private typedef -----------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/


/* Private macro -------------------------------------------------------------*/


/* Private variables ---------------------------------------------------------*/

static stmdev_ctx_t dev_ctx;
static IMU_Handler_Data data = {
    .rawData = {
        .acc = {0,0,0},
        .gyro = {0,0,0}
    },
    .convertedData = {
        .facc = {0.0f,0.0f,0.0f},
        .fgyro = {0.0f,0.0f,0.0f}
    }
};

void IMU_Handler_Init()
{
    dev_ctx.read_reg = platform_read;
	dev_ctx.write_reg = platform_write;

	// LSM6DSL alapállotba helyezése
	uint8_t rst;
	lsm6dsl_reset_set(&dev_ctx, PROPERTY_ENABLE);
	do
	{
		lsm6dsl_reset_get(&dev_ctx, &rst);
	} while (rst);

	IMU_HWI_Delay(100);

	// Ez a kiolvasás szükséges ahhoz, hogy az interrupt működjön
	lsm6dsl_status_reg_t reg;
	lsm6dsl_status_reg_get(&dev_ctx, &reg);
	if (reg.gda)
		lsm6dsl_angular_rate_raw_get(&dev_ctx, data.rawData.gyro);
	if (reg.xlda)
		lsm6dsl_acceleration_raw_get(&dev_ctx,data.rawData.acc);
	if (reg.tda)
	{
		int16_t temp;
		lsm6dsl_temperature_raw_get(&dev_ctx, &temp);
	}

	// Interupt aktív alacsony
	lsm6dsl_pin_polarity_set(&dev_ctx, LSM6DSL_ACTIVE_LOW);

	lsm6dsl_int1_route_t val = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
	// lsm6dsl_int2_route_t val2 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	// 0, 0 };
	//  Interrupt engedélyezése
	lsm6dsl_pin_int1_route_set(&dev_ctx, val);

	// Giroszkóp konfiguráció
	lsm6dsl_gy_data_rate_set(&dev_ctx, LSM6DSL_GY_ODR_833Hz);
	lsm6dsl_gy_full_scale_set(&dev_ctx, LSM6DSL_2000dps);
	lsm6dsl_gy_band_pass_set(&dev_ctx, LSM6DSL_HP_1Hz04_LP2);

	// Gyorsulásmérő konfiguráció
	lsm6dsl_xl_data_rate_set(&dev_ctx, LSM6DSL_XL_ODR_833Hz);
	lsm6dsl_xl_full_scale_set(&dev_ctx, LSM6DSL_2g);
	lsm6dsl_xl_filter_analog_set(&dev_ctx, LSM6DSL_XL_ANA_BW_400Hz);
	lsm6dsl_xl_lp2_bandwidth_set(&dev_ctx, LSM6DSL_XL_LOW_NOISE_LP_ODR_DIV_100);
}

void IMU_Handler_HandleInterrupt()
{
    lsm6dsl_status_reg_t val;

		// Státusz lekérdezése

		lsm6dsl_status_reg_get(&dev_ctx, &val);

		// Adatok beolvasása és konverziója a használt mértékegységre

		// Giroszkóp adatok
		if (val.gda)
		{
			lsm6dsl_angular_rate_raw_get(&dev_ctx, data.rawData.gyro);
			data.convertedData.fgyro[0] = lsm6dsl_from_fs2000dps_to_mdps(data.rawData.gyro[0]);
			data.convertedData.fgyro[0] = data.convertedData.fgyro[0] / 1000.0f / 180.0f * M_PI; // mdps -> rad/s

			data.convertedData.fgyro[1] = lsm6dsl_from_fs2000dps_to_mdps(data.rawData.gyro[2]);
			data.convertedData.fgyro[1] = data.convertedData.fgyro[1] / 1000.0f / 180.0f * M_PI; // mdps -> rad/s

			data.convertedData.fgyro[2] = lsm6dsl_from_fs2000dps_to_mdps(data.rawData.gyro[1]);
			data.convertedData.fgyro[2] = data.convertedData.fgyro[2] / 1000.0f / 180.0f * M_PI; // mdps -> rad/s
		}
		// Gyorsulásmérő adatok
		if (val.xlda)
		{
			lsm6dsl_acceleration_raw_get(&dev_ctx, data.rawData.acc);
			data.convertedData.facc[0] = lsm6dsl_from_fs2g_to_mg(data.rawData.acc[0]);
			data.convertedData.facc[0] = data.convertedData.facc[0] / 1000.0f * 10.0f; // mg -> m/s^2

			data.convertedData.facc[1] = lsm6dsl_from_fs2g_to_mg(data.rawData.acc[2]);
			data.convertedData.facc[1] = data.convertedData.facc[1] / 1000.0f * 10.0f; // mg -> m/s^2

			data.convertedData.facc[2] = lsm6dsl_from_fs2g_to_mg(data.rawData.acc[1]);
			data.convertedData.facc[2] = data.convertedData.facc[2] / 1000.0f * 10.0f; // mg -> m/s^2
		}
		// Hőmérő adatok eldobása, ha esetleg lenne, ne hogy ez tartsa fent a megszakítást
		if (val.tda)
		{
			int16_t temp;
			lsm6dsl_temperature_raw_get(&dev_ctx, &temp);
		}
}

IMU_Handler_Data IMU_Handler_GetData()
{
    return data;
}