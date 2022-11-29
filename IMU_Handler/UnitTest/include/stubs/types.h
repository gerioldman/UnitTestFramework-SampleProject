#ifndef TYPES_H
#define TYPES_H

#include "IMU_Handler.h"
#include "IMU_HWI.h"
#include "stddef.h"
#include "lsm6dsl_reg.h"
#include "stdint.h"
#include "math.h"
typedef enum 
    {
      STUB_OPTION_VALUE,
      STUB_OPTION_REDIRECT
    } stub_option_t;
typedef enum 
    {
      STUB_OPTION_TRACE_OFF,
      STUB_OPTION_TRACE_ON
    } stub_trace_option_t;
typedef enum 
    {
      STUB_OPTION_PARG_COPY_FROM,
      STUB_OPTION_PARG_COPY_TO
    } stub_pArg_option_t;
typedef struct TEST_STUB_Trace
    {
      stub_trace_option_t trace_enabled;
      char **trace_buffer;
      unsigned long trace_buffer_length;
      unsigned long trace_buffer_index;
    } TEST_STUB_Trace;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      void (*redirectFuncPtr)();
    } TEST_STUB_IMU_Handler_Init_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      void (*redirectFuncPtr)();
    } TEST_STUB_IMU_Handler_HandleInterrupt_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      IMU_Handler_Data returnValue;
      IMU_Handler_Data (*redirectFuncPtr)();
    } TEST_STUB_IMU_Handler_GetData_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      void *handle;
      uint8_t reg;
      uint8_t bufp;
      uint16_t len;
      int32_t (*redirectFuncPtr)(void *handle, uint8_t reg, const uint8_t *bufp, uint16_t len);
    } TEST_STUB_platform_write_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      void *handle;
      uint8_t reg;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } bufp;
      uint16_t len;
      int32_t (*redirectFuncPtr)(void *handle, uint8_t reg, uint8_t *bufp, uint16_t len);
    } TEST_STUB_platform_read_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      uint32_t ms;
      void (*redirectFuncPtr)(uint32_t ms);
    } TEST_STUB_IMU_HWI_Delay_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t reg;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } data;
      uint16_t len;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t reg, uint8_t *data, uint16_t len);
    } TEST_STUB_lsm6dsl_read_reg_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t reg;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } data;
      uint16_t len;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t reg, uint8_t *data, uint16_t len);
    } TEST_STUB_lsm6dsl_write_reg_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs2g_to_mg_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs4g_to_mg_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs8g_to_mg_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs16g_to_mg_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs125dps_to_mdps_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs250dps_to_mdps_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs500dps_to_mdps_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs1000dps_to_mdps_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_fs2000dps_to_mdps_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      float_t returnValue;
      int16_t lsb;
      float_t (*redirectFuncPtr)(int16_t lsb);
    } TEST_STUB_lsm6dsl_from_lsb_to_celsius_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_fs_xl_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_fs_xl_t val);
    } TEST_STUB_lsm6dsl_xl_full_scale_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_fs_xl_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_fs_xl_t *val);
    } TEST_STUB_lsm6dsl_xl_full_scale_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_odr_xl_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_odr_xl_t val);
    } TEST_STUB_lsm6dsl_xl_data_rate_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_odr_xl_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_odr_xl_t *val);
    } TEST_STUB_lsm6dsl_xl_data_rate_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_fs_g_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_fs_g_t val);
    } TEST_STUB_lsm6dsl_gy_full_scale_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_fs_g_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_fs_g_t *val);
    } TEST_STUB_lsm6dsl_gy_full_scale_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_odr_g_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_odr_g_t val);
    } TEST_STUB_lsm6dsl_gy_data_rate_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_odr_g_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_odr_g_t *val);
    } TEST_STUB_lsm6dsl_gy_data_rate_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_block_data_update_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_block_data_update_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_usr_off_w_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_usr_off_w_t val);
    } TEST_STUB_lsm6dsl_xl_offset_weight_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_usr_off_w_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_usr_off_w_t *val);
    } TEST_STUB_lsm6dsl_xl_offset_weight_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_xl_hm_mode_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_xl_hm_mode_t val);
    } TEST_STUB_lsm6dsl_xl_power_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_xl_hm_mode_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_xl_hm_mode_t *val);
    } TEST_STUB_lsm6dsl_xl_power_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_rounding_status_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_rounding_status_t val);
    } TEST_STUB_lsm6dsl_rounding_on_status_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_rounding_status_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_rounding_status_t *val);
    } TEST_STUB_lsm6dsl_rounding_on_status_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_g_hm_mode_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_g_hm_mode_t val);
    } TEST_STUB_lsm6dsl_gy_power_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_g_hm_mode_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_g_hm_mode_t *val);
    } TEST_STUB_lsm6dsl_gy_power_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_all_sources_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_all_sources_t *val);
    } TEST_STUB_lsm6dsl_all_sources_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_status_reg_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_status_reg_t *val);
    } TEST_STUB_lsm6dsl_status_reg_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_xl_flag_data_ready_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_gy_flag_data_ready_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_temp_flag_data_ready_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_xl_usr_offset_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_xl_usr_offset_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_timestamp_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_timestamp_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_timer_hr_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_timer_hr_t val);
    } TEST_STUB_lsm6dsl_timestamp_res_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_timer_hr_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_timer_hr_t *val);
    } TEST_STUB_lsm6dsl_timestamp_res_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_rounding_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_rounding_t val);
    } TEST_STUB_lsm6dsl_rounding_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_rounding_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_rounding_t *val);
    } TEST_STUB_lsm6dsl_rounding_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        int16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, int16_t *val);
    } TEST_STUB_lsm6dsl_temperature_raw_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        int16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, int16_t *val);
    } TEST_STUB_lsm6dsl_angular_rate_raw_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        int16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, int16_t *val);
    } TEST_STUB_lsm6dsl_acceleration_raw_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        int16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, int16_t *val);
    } TEST_STUB_lsm6dsl_mag_calibrated_raw_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buffer;
      uint8_t len;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buffer, uint8_t len);
    } TEST_STUB_lsm6dsl_fifo_raw_data_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_func_cfg_en_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_func_cfg_en_t val);
    } TEST_STUB_lsm6dsl_mem_bank_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_func_cfg_en_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_func_cfg_en_t *val);
    } TEST_STUB_lsm6dsl_mem_bank_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_drdy_pulsed_g_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_drdy_pulsed_g_t val);
    } TEST_STUB_lsm6dsl_data_ready_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_drdy_pulsed_g_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_drdy_pulsed_g_t *val);
    } TEST_STUB_lsm6dsl_data_ready_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_device_id_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_reset_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_reset_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_ble_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_ble_t val);
    } TEST_STUB_lsm6dsl_data_format_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_ble_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_ble_t *val);
    } TEST_STUB_lsm6dsl_data_format_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_auto_increment_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_auto_increment_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_boot_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_boot_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_st_xl_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_st_xl_t val);
    } TEST_STUB_lsm6dsl_xl_self_test_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_st_xl_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_st_xl_t *val);
    } TEST_STUB_lsm6dsl_xl_self_test_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_st_g_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_st_g_t val);
    } TEST_STUB_lsm6dsl_gy_self_test_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_st_g_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_st_g_t *val);
    } TEST_STUB_lsm6dsl_gy_self_test_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_filter_settling_mask_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_filter_settling_mask_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_slope_fds_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slope_fds_t val);
    } TEST_STUB_lsm6dsl_xl_hp_path_internal_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_slope_fds_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slope_fds_t *val);
    } TEST_STUB_lsm6dsl_xl_hp_path_internal_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_bw0_xl_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_bw0_xl_t val);
    } TEST_STUB_lsm6dsl_xl_filter_analog_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_bw0_xl_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_bw0_xl_t *val);
    } TEST_STUB_lsm6dsl_xl_filter_analog_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_lpf1_bw_sel_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_lpf1_bw_sel_t val);
    } TEST_STUB_lsm6dsl_xl_lp1_bandwidth_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_lpf1_bw_sel_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_lpf1_bw_sel_t *val);
    } TEST_STUB_lsm6dsl_xl_lp1_bandwidth_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_input_composite_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_input_composite_t val);
    } TEST_STUB_lsm6dsl_xl_lp2_bandwidth_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_input_composite_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_input_composite_t *val);
    } TEST_STUB_lsm6dsl_xl_lp2_bandwidth_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_xl_reference_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_xl_reference_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_hpcf_xl_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_hpcf_xl_t val);
    } TEST_STUB_lsm6dsl_xl_hp_bandwidth_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_hpcf_xl_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_hpcf_xl_t *val);
    } TEST_STUB_lsm6dsl_xl_hp_bandwidth_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_lpf1_sel_g_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_lpf1_sel_g_t val);
    } TEST_STUB_lsm6dsl_gy_band_pass_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_lpf1_sel_g_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_lpf1_sel_g_t *val);
    } TEST_STUB_lsm6dsl_gy_band_pass_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_sim_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sim_t val);
    } TEST_STUB_lsm6dsl_spi_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_sim_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sim_t *val);
    } TEST_STUB_lsm6dsl_spi_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_i2c_disable_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_i2c_disable_t val);
    } TEST_STUB_lsm6dsl_i2c_interface_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_i2c_disable_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_i2c_disable_t *val);
    } TEST_STUB_lsm6dsl_i2c_interface_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_int1_route_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_int1_route_t val);
    } TEST_STUB_lsm6dsl_pin_int1_route_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_int1_route_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_int1_route_t *val);
    } TEST_STUB_lsm6dsl_pin_int1_route_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_int2_route_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_int2_route_t val);
    } TEST_STUB_lsm6dsl_pin_int2_route_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_int2_route_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_int2_route_t *val);
    } TEST_STUB_lsm6dsl_pin_int2_route_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_pp_od_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_pp_od_t val);
    } TEST_STUB_lsm6dsl_pin_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_pp_od_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_pp_od_t *val);
    } TEST_STUB_lsm6dsl_pin_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_h_lactive_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_h_lactive_t val);
    } TEST_STUB_lsm6dsl_pin_polarity_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_h_lactive_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_h_lactive_t *val);
    } TEST_STUB_lsm6dsl_pin_polarity_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_all_on_int1_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_all_on_int1_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_lir_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_lir_t val);
    } TEST_STUB_lsm6dsl_int_notification_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_lir_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_lir_t *val);
    } TEST_STUB_lsm6dsl_int_notification_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_wkup_threshold_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_wkup_threshold_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_wkup_dur_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_wkup_dur_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_gy_sleep_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_gy_sleep_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_inact_en_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_inact_en_t val);
    } TEST_STUB_lsm6dsl_act_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_inact_en_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_inact_en_t *val);
    } TEST_STUB_lsm6dsl_act_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_act_sleep_dur_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_act_sleep_dur_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_tap_src_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_tap_src_t *val);
    } TEST_STUB_lsm6dsl_tap_src_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_tap_detection_on_z_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_tap_detection_on_z_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_tap_detection_on_y_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_tap_detection_on_y_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_tap_detection_on_x_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_tap_detection_on_x_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_tap_threshold_x_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_tap_threshold_x_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_tap_shock_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_tap_shock_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_tap_quiet_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_tap_quiet_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_tap_dur_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_tap_dur_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_single_double_tap_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_single_double_tap_t val);
    } TEST_STUB_lsm6dsl_tap_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_single_double_tap_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_single_double_tap_t *val);
    } TEST_STUB_lsm6dsl_tap_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_low_pass_on_6d_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_low_pass_on_6d_t val);
    } TEST_STUB_lsm6dsl_6d_feed_data_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_low_pass_on_6d_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_low_pass_on_6d_t *val);
    } TEST_STUB_lsm6dsl_6d_feed_data_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_sixd_ths_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sixd_ths_t val);
    } TEST_STUB_lsm6dsl_6d_threshold_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_sixd_ths_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sixd_ths_t *val);
    } TEST_STUB_lsm6dsl_6d_threshold_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_4d_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_4d_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_ff_dur_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_ff_dur_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_ff_ths_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_ff_ths_t val);
    } TEST_STUB_lsm6dsl_ff_threshold_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_ff_ths_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_ff_ths_t *val);
    } TEST_STUB_lsm6dsl_ff_threshold_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint16_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint16_t val);
    } TEST_STUB_lsm6dsl_fifo_watermark_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint16_t *val);
    } TEST_STUB_lsm6dsl_fifo_watermark_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint16_t *val);
    } TEST_STUB_lsm6dsl_fifo_data_level_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_fifo_wtm_flag_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint16_t *val);
    } TEST_STUB_lsm6dsl_fifo_pattern_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_fifo_temp_batch_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_fifo_temp_batch_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_trigger_fifo_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_trigger_fifo_t val);
    } TEST_STUB_lsm6dsl_fifo_write_trigger_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_trigger_fifo_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_trigger_fifo_t *val);
    } TEST_STUB_lsm6dsl_fifo_write_trigger_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_fifo_pedo_and_timestamp_batch_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_fifo_pedo_and_timestamp_batch_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_dec_fifo_xl_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_dec_fifo_xl_t val);
    } TEST_STUB_lsm6dsl_fifo_xl_batch_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_dec_fifo_xl_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_dec_fifo_xl_t *val);
    } TEST_STUB_lsm6dsl_fifo_xl_batch_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_dec_fifo_gyro_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_dec_fifo_gyro_t val);
    } TEST_STUB_lsm6dsl_fifo_gy_batch_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_dec_fifo_gyro_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_dec_fifo_gyro_t *val);
    } TEST_STUB_lsm6dsl_fifo_gy_batch_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_dec_ds3_fifo_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_dec_ds3_fifo_t val);
    } TEST_STUB_lsm6dsl_fifo_dataset_3_batch_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_dec_ds3_fifo_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_dec_ds3_fifo_t *val);
    } TEST_STUB_lsm6dsl_fifo_dataset_3_batch_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_dec_ds4_fifo_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_dec_ds4_fifo_t val);
    } TEST_STUB_lsm6dsl_fifo_dataset_4_batch_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_dec_ds4_fifo_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_dec_ds4_fifo_t *val);
    } TEST_STUB_lsm6dsl_fifo_dataset_4_batch_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_fifo_xl_gy_8bit_format_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_fifo_xl_gy_8bit_format_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_fifo_stop_on_wtm_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_fifo_stop_on_wtm_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_fifo_mode_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_fifo_mode_t val);
    } TEST_STUB_lsm6dsl_fifo_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_fifo_mode_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_fifo_mode_t *val);
    } TEST_STUB_lsm6dsl_fifo_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_odr_fifo_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_odr_fifo_t val);
    } TEST_STUB_lsm6dsl_fifo_data_rate_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_odr_fifo_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_odr_fifo_t *val);
    } TEST_STUB_lsm6dsl_fifo_data_rate_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_den_lh_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_den_lh_t val);
    } TEST_STUB_lsm6dsl_den_polarity_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_den_lh_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_den_lh_t *val);
    } TEST_STUB_lsm6dsl_den_polarity_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_den_mode_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_den_mode_t val);
    } TEST_STUB_lsm6dsl_den_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_den_mode_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_den_mode_t *val);
    } TEST_STUB_lsm6dsl_den_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_den_xl_en_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_den_xl_en_t val);
    } TEST_STUB_lsm6dsl_den_enable_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_den_xl_en_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_den_xl_en_t *val);
    } TEST_STUB_lsm6dsl_den_enable_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_den_mark_axis_z_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_den_mark_axis_z_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_den_mark_axis_y_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_den_mark_axis_y_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_den_mark_axis_x_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_den_mark_axis_x_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_pedo_step_reset_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_pedo_step_reset_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_pedo_sens_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_pedo_sens_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_pedo_threshold_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_pedo_threshold_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_pedo_fs_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_pedo_fs_t val);
    } TEST_STUB_lsm6dsl_pedo_full_scale_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_pedo_fs_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_pedo_fs_t *val);
    } TEST_STUB_lsm6dsl_pedo_full_scale_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_pedo_debounce_steps_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_pedo_debounce_steps_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_pedo_timeout_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_pedo_timeout_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_pedo_steps_period_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_pedo_steps_period_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_motion_sens_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_motion_sens_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_motion_threshold_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_motion_threshold_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_tilt_sens_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_tilt_sens_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_wrist_tilt_sens_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_wrist_tilt_sens_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_tilt_latency_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_tilt_latency_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_tilt_threshold_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_tilt_threshold_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_a_wrist_tilt_mask_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_a_wrist_tilt_mask_t *val);
    } TEST_STUB_lsm6dsl_tilt_src_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_a_wrist_tilt_mask_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_a_wrist_tilt_mask_t *val);
    } TEST_STUB_lsm6dsl_tilt_src_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_mag_soft_iron_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_mag_soft_iron_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_mag_hard_iron_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_mag_hard_iron_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_mag_soft_iron_mat_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } buff;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *buff);
    } TEST_STUB_lsm6dsl_mag_soft_iron_mat_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        int16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, int16_t *val);
    } TEST_STUB_lsm6dsl_mag_offset_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        int16_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, int16_t *val);
    } TEST_STUB_lsm6dsl_mag_offset_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_func_en_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_sh_sync_sens_frame_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_sh_sync_sens_frame_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_rr_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_rr_t val);
    } TEST_STUB_lsm6dsl_sh_sync_sens_ratio_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_rr_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_rr_t *val);
    } TEST_STUB_lsm6dsl_sh_sync_sens_ratio_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_sh_master_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_sh_master_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_sh_pass_through_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_sh_pass_through_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_pull_up_en_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_pull_up_en_t val);
    } TEST_STUB_lsm6dsl_sh_pin_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_pull_up_en_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_pull_up_en_t *val);
    } TEST_STUB_lsm6dsl_sh_pin_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_start_config_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_start_config_t val);
    } TEST_STUB_lsm6dsl_sh_syncro_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_start_config_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_start_config_t *val);
    } TEST_STUB_lsm6dsl_sh_syncro_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_sh_drdy_on_int1_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_sh_drdy_on_int1_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_emb_sh_read_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_emb_sh_read_t *val);
    } TEST_STUB_lsm6dsl_sh_read_data_raw_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_sh_cmd_sens_sync_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_sh_cmd_sens_sync_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      uint8_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t val);
    } TEST_STUB_lsm6dsl_sh_spi_sync_error_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        uint8_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, uint8_t *val);
    } TEST_STUB_lsm6dsl_sh_spi_sync_error_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_aux_sens_on_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_aux_sens_on_t val);
    } TEST_STUB_lsm6dsl_sh_num_of_dev_connected_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_aux_sens_on_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_aux_sens_on_t *val);
    } TEST_STUB_lsm6dsl_sh_num_of_dev_connected_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_sh_cfg_write_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_write_t *val);
    } TEST_STUB_lsm6dsl_sh_cfg_write_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_sh_cfg_read_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_read_t *val);
    } TEST_STUB_lsm6dsl_sh_slv0_cfg_read_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_sh_cfg_read_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_read_t *val);
    } TEST_STUB_lsm6dsl_sh_slv1_cfg_read_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_sh_cfg_read_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_read_t *val);
    } TEST_STUB_lsm6dsl_sh_slv2_cfg_read_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_sh_cfg_read_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_read_t *val);
    } TEST_STUB_lsm6dsl_sh_slv3_cfg_read_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_slave0_rate_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slave0_rate_t val);
    } TEST_STUB_lsm6dsl_sh_slave_0_dec_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_slave0_rate_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slave0_rate_t *val);
    } TEST_STUB_lsm6dsl_sh_slave_0_dec_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_write_once_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_write_once_t val);
    } TEST_STUB_lsm6dsl_sh_write_mode_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_write_once_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_write_once_t *val);
    } TEST_STUB_lsm6dsl_sh_write_mode_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_slave1_rate_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slave1_rate_t val);
    } TEST_STUB_lsm6dsl_sh_slave_1_dec_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_slave1_rate_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slave1_rate_t *val);
    } TEST_STUB_lsm6dsl_sh_slave_1_dec_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_slave2_rate_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slave2_rate_t val);
    } TEST_STUB_lsm6dsl_sh_slave_2_dec_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_slave2_rate_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slave2_rate_t *val);
    } TEST_STUB_lsm6dsl_sh_slave_2_dec_get_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      lsm6dsl_slave3_rate_t val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slave3_rate_t val);
    } TEST_STUB_lsm6dsl_sh_slave_3_dec_set_TYPE;
typedef struct 
    {
      unsigned long callcount;
      stub_option_t stub_option;
      int32_t returnValue;
      struct 
      {
        stmdev_ctx_t value;
        stub_pArg_option_t stub_pArg_option;
      } ctx;
      struct 
      {
        lsm6dsl_slave3_rate_t value;
        stub_pArg_option_t stub_pArg_option;
      } val;
      int32_t (*redirectFuncPtr)(stmdev_ctx_t *ctx, lsm6dsl_slave3_rate_t *val);
    } TEST_STUB_lsm6dsl_sh_slave_3_dec_get_TYPE;
typedef struct 
    {
      TEST_STUB_Trace TEST_TRACE;
      TEST_STUB_IMU_Handler_Init_TYPE IMU_Handler_Init;
      TEST_STUB_IMU_Handler_HandleInterrupt_TYPE IMU_Handler_HandleInterrupt;
      TEST_STUB_IMU_Handler_GetData_TYPE IMU_Handler_GetData;
      TEST_STUB_platform_write_TYPE platform_write;
      TEST_STUB_platform_read_TYPE platform_read;
      TEST_STUB_IMU_HWI_Delay_TYPE IMU_HWI_Delay;
      TEST_STUB_lsm6dsl_read_reg_TYPE lsm6dsl_read_reg;
      TEST_STUB_lsm6dsl_write_reg_TYPE lsm6dsl_write_reg;
      TEST_STUB_lsm6dsl_from_fs2g_to_mg_TYPE lsm6dsl_from_fs2g_to_mg;
      TEST_STUB_lsm6dsl_from_fs4g_to_mg_TYPE lsm6dsl_from_fs4g_to_mg;
      TEST_STUB_lsm6dsl_from_fs8g_to_mg_TYPE lsm6dsl_from_fs8g_to_mg;
      TEST_STUB_lsm6dsl_from_fs16g_to_mg_TYPE lsm6dsl_from_fs16g_to_mg;
      TEST_STUB_lsm6dsl_from_fs125dps_to_mdps_TYPE lsm6dsl_from_fs125dps_to_mdps;
      TEST_STUB_lsm6dsl_from_fs250dps_to_mdps_TYPE lsm6dsl_from_fs250dps_to_mdps;
      TEST_STUB_lsm6dsl_from_fs500dps_to_mdps_TYPE lsm6dsl_from_fs500dps_to_mdps;
      TEST_STUB_lsm6dsl_from_fs1000dps_to_mdps_TYPE lsm6dsl_from_fs1000dps_to_mdps;
      TEST_STUB_lsm6dsl_from_fs2000dps_to_mdps_TYPE lsm6dsl_from_fs2000dps_to_mdps;
      TEST_STUB_lsm6dsl_from_lsb_to_celsius_TYPE lsm6dsl_from_lsb_to_celsius;
      TEST_STUB_lsm6dsl_xl_full_scale_set_TYPE lsm6dsl_xl_full_scale_set;
      TEST_STUB_lsm6dsl_xl_full_scale_get_TYPE lsm6dsl_xl_full_scale_get;
      TEST_STUB_lsm6dsl_xl_data_rate_set_TYPE lsm6dsl_xl_data_rate_set;
      TEST_STUB_lsm6dsl_xl_data_rate_get_TYPE lsm6dsl_xl_data_rate_get;
      TEST_STUB_lsm6dsl_gy_full_scale_set_TYPE lsm6dsl_gy_full_scale_set;
      TEST_STUB_lsm6dsl_gy_full_scale_get_TYPE lsm6dsl_gy_full_scale_get;
      TEST_STUB_lsm6dsl_gy_data_rate_set_TYPE lsm6dsl_gy_data_rate_set;
      TEST_STUB_lsm6dsl_gy_data_rate_get_TYPE lsm6dsl_gy_data_rate_get;
      TEST_STUB_lsm6dsl_block_data_update_set_TYPE lsm6dsl_block_data_update_set;
      TEST_STUB_lsm6dsl_block_data_update_get_TYPE lsm6dsl_block_data_update_get;
      TEST_STUB_lsm6dsl_xl_offset_weight_set_TYPE lsm6dsl_xl_offset_weight_set;
      TEST_STUB_lsm6dsl_xl_offset_weight_get_TYPE lsm6dsl_xl_offset_weight_get;
      TEST_STUB_lsm6dsl_xl_power_mode_set_TYPE lsm6dsl_xl_power_mode_set;
      TEST_STUB_lsm6dsl_xl_power_mode_get_TYPE lsm6dsl_xl_power_mode_get;
      TEST_STUB_lsm6dsl_rounding_on_status_set_TYPE lsm6dsl_rounding_on_status_set;
      TEST_STUB_lsm6dsl_rounding_on_status_get_TYPE lsm6dsl_rounding_on_status_get;
      TEST_STUB_lsm6dsl_gy_power_mode_set_TYPE lsm6dsl_gy_power_mode_set;
      TEST_STUB_lsm6dsl_gy_power_mode_get_TYPE lsm6dsl_gy_power_mode_get;
      TEST_STUB_lsm6dsl_all_sources_get_TYPE lsm6dsl_all_sources_get;
      TEST_STUB_lsm6dsl_status_reg_get_TYPE lsm6dsl_status_reg_get;
      TEST_STUB_lsm6dsl_xl_flag_data_ready_get_TYPE lsm6dsl_xl_flag_data_ready_get;
      TEST_STUB_lsm6dsl_gy_flag_data_ready_get_TYPE lsm6dsl_gy_flag_data_ready_get;
      TEST_STUB_lsm6dsl_temp_flag_data_ready_get_TYPE lsm6dsl_temp_flag_data_ready_get;
      TEST_STUB_lsm6dsl_xl_usr_offset_set_TYPE lsm6dsl_xl_usr_offset_set;
      TEST_STUB_lsm6dsl_xl_usr_offset_get_TYPE lsm6dsl_xl_usr_offset_get;
      TEST_STUB_lsm6dsl_timestamp_set_TYPE lsm6dsl_timestamp_set;
      TEST_STUB_lsm6dsl_timestamp_get_TYPE lsm6dsl_timestamp_get;
      TEST_STUB_lsm6dsl_timestamp_res_set_TYPE lsm6dsl_timestamp_res_set;
      TEST_STUB_lsm6dsl_timestamp_res_get_TYPE lsm6dsl_timestamp_res_get;
      TEST_STUB_lsm6dsl_rounding_mode_set_TYPE lsm6dsl_rounding_mode_set;
      TEST_STUB_lsm6dsl_rounding_mode_get_TYPE lsm6dsl_rounding_mode_get;
      TEST_STUB_lsm6dsl_temperature_raw_get_TYPE lsm6dsl_temperature_raw_get;
      TEST_STUB_lsm6dsl_angular_rate_raw_get_TYPE lsm6dsl_angular_rate_raw_get;
      TEST_STUB_lsm6dsl_acceleration_raw_get_TYPE lsm6dsl_acceleration_raw_get;
      TEST_STUB_lsm6dsl_mag_calibrated_raw_get_TYPE lsm6dsl_mag_calibrated_raw_get;
      TEST_STUB_lsm6dsl_fifo_raw_data_get_TYPE lsm6dsl_fifo_raw_data_get;
      TEST_STUB_lsm6dsl_mem_bank_set_TYPE lsm6dsl_mem_bank_set;
      TEST_STUB_lsm6dsl_mem_bank_get_TYPE lsm6dsl_mem_bank_get;
      TEST_STUB_lsm6dsl_data_ready_mode_set_TYPE lsm6dsl_data_ready_mode_set;
      TEST_STUB_lsm6dsl_data_ready_mode_get_TYPE lsm6dsl_data_ready_mode_get;
      TEST_STUB_lsm6dsl_device_id_get_TYPE lsm6dsl_device_id_get;
      TEST_STUB_lsm6dsl_reset_set_TYPE lsm6dsl_reset_set;
      TEST_STUB_lsm6dsl_reset_get_TYPE lsm6dsl_reset_get;
      TEST_STUB_lsm6dsl_data_format_set_TYPE lsm6dsl_data_format_set;
      TEST_STUB_lsm6dsl_data_format_get_TYPE lsm6dsl_data_format_get;
      TEST_STUB_lsm6dsl_auto_increment_set_TYPE lsm6dsl_auto_increment_set;
      TEST_STUB_lsm6dsl_auto_increment_get_TYPE lsm6dsl_auto_increment_get;
      TEST_STUB_lsm6dsl_boot_set_TYPE lsm6dsl_boot_set;
      TEST_STUB_lsm6dsl_boot_get_TYPE lsm6dsl_boot_get;
      TEST_STUB_lsm6dsl_xl_self_test_set_TYPE lsm6dsl_xl_self_test_set;
      TEST_STUB_lsm6dsl_xl_self_test_get_TYPE lsm6dsl_xl_self_test_get;
      TEST_STUB_lsm6dsl_gy_self_test_set_TYPE lsm6dsl_gy_self_test_set;
      TEST_STUB_lsm6dsl_gy_self_test_get_TYPE lsm6dsl_gy_self_test_get;
      TEST_STUB_lsm6dsl_filter_settling_mask_set_TYPE lsm6dsl_filter_settling_mask_set;
      TEST_STUB_lsm6dsl_filter_settling_mask_get_TYPE lsm6dsl_filter_settling_mask_get;
      TEST_STUB_lsm6dsl_xl_hp_path_internal_set_TYPE lsm6dsl_xl_hp_path_internal_set;
      TEST_STUB_lsm6dsl_xl_hp_path_internal_get_TYPE lsm6dsl_xl_hp_path_internal_get;
      TEST_STUB_lsm6dsl_xl_filter_analog_set_TYPE lsm6dsl_xl_filter_analog_set;
      TEST_STUB_lsm6dsl_xl_filter_analog_get_TYPE lsm6dsl_xl_filter_analog_get;
      TEST_STUB_lsm6dsl_xl_lp1_bandwidth_set_TYPE lsm6dsl_xl_lp1_bandwidth_set;
      TEST_STUB_lsm6dsl_xl_lp1_bandwidth_get_TYPE lsm6dsl_xl_lp1_bandwidth_get;
      TEST_STUB_lsm6dsl_xl_lp2_bandwidth_set_TYPE lsm6dsl_xl_lp2_bandwidth_set;
      TEST_STUB_lsm6dsl_xl_lp2_bandwidth_get_TYPE lsm6dsl_xl_lp2_bandwidth_get;
      TEST_STUB_lsm6dsl_xl_reference_mode_set_TYPE lsm6dsl_xl_reference_mode_set;
      TEST_STUB_lsm6dsl_xl_reference_mode_get_TYPE lsm6dsl_xl_reference_mode_get;
      TEST_STUB_lsm6dsl_xl_hp_bandwidth_set_TYPE lsm6dsl_xl_hp_bandwidth_set;
      TEST_STUB_lsm6dsl_xl_hp_bandwidth_get_TYPE lsm6dsl_xl_hp_bandwidth_get;
      TEST_STUB_lsm6dsl_gy_band_pass_set_TYPE lsm6dsl_gy_band_pass_set;
      TEST_STUB_lsm6dsl_gy_band_pass_get_TYPE lsm6dsl_gy_band_pass_get;
      TEST_STUB_lsm6dsl_spi_mode_set_TYPE lsm6dsl_spi_mode_set;
      TEST_STUB_lsm6dsl_spi_mode_get_TYPE lsm6dsl_spi_mode_get;
      TEST_STUB_lsm6dsl_i2c_interface_set_TYPE lsm6dsl_i2c_interface_set;
      TEST_STUB_lsm6dsl_i2c_interface_get_TYPE lsm6dsl_i2c_interface_get;
      TEST_STUB_lsm6dsl_pin_int1_route_set_TYPE lsm6dsl_pin_int1_route_set;
      TEST_STUB_lsm6dsl_pin_int1_route_get_TYPE lsm6dsl_pin_int1_route_get;
      TEST_STUB_lsm6dsl_pin_int2_route_set_TYPE lsm6dsl_pin_int2_route_set;
      TEST_STUB_lsm6dsl_pin_int2_route_get_TYPE lsm6dsl_pin_int2_route_get;
      TEST_STUB_lsm6dsl_pin_mode_set_TYPE lsm6dsl_pin_mode_set;
      TEST_STUB_lsm6dsl_pin_mode_get_TYPE lsm6dsl_pin_mode_get;
      TEST_STUB_lsm6dsl_pin_polarity_set_TYPE lsm6dsl_pin_polarity_set;
      TEST_STUB_lsm6dsl_pin_polarity_get_TYPE lsm6dsl_pin_polarity_get;
      TEST_STUB_lsm6dsl_all_on_int1_set_TYPE lsm6dsl_all_on_int1_set;
      TEST_STUB_lsm6dsl_all_on_int1_get_TYPE lsm6dsl_all_on_int1_get;
      TEST_STUB_lsm6dsl_int_notification_set_TYPE lsm6dsl_int_notification_set;
      TEST_STUB_lsm6dsl_int_notification_get_TYPE lsm6dsl_int_notification_get;
      TEST_STUB_lsm6dsl_wkup_threshold_set_TYPE lsm6dsl_wkup_threshold_set;
      TEST_STUB_lsm6dsl_wkup_threshold_get_TYPE lsm6dsl_wkup_threshold_get;
      TEST_STUB_lsm6dsl_wkup_dur_set_TYPE lsm6dsl_wkup_dur_set;
      TEST_STUB_lsm6dsl_wkup_dur_get_TYPE lsm6dsl_wkup_dur_get;
      TEST_STUB_lsm6dsl_gy_sleep_mode_set_TYPE lsm6dsl_gy_sleep_mode_set;
      TEST_STUB_lsm6dsl_gy_sleep_mode_get_TYPE lsm6dsl_gy_sleep_mode_get;
      TEST_STUB_lsm6dsl_act_mode_set_TYPE lsm6dsl_act_mode_set;
      TEST_STUB_lsm6dsl_act_mode_get_TYPE lsm6dsl_act_mode_get;
      TEST_STUB_lsm6dsl_act_sleep_dur_set_TYPE lsm6dsl_act_sleep_dur_set;
      TEST_STUB_lsm6dsl_act_sleep_dur_get_TYPE lsm6dsl_act_sleep_dur_get;
      TEST_STUB_lsm6dsl_tap_src_get_TYPE lsm6dsl_tap_src_get;
      TEST_STUB_lsm6dsl_tap_detection_on_z_set_TYPE lsm6dsl_tap_detection_on_z_set;
      TEST_STUB_lsm6dsl_tap_detection_on_z_get_TYPE lsm6dsl_tap_detection_on_z_get;
      TEST_STUB_lsm6dsl_tap_detection_on_y_set_TYPE lsm6dsl_tap_detection_on_y_set;
      TEST_STUB_lsm6dsl_tap_detection_on_y_get_TYPE lsm6dsl_tap_detection_on_y_get;
      TEST_STUB_lsm6dsl_tap_detection_on_x_set_TYPE lsm6dsl_tap_detection_on_x_set;
      TEST_STUB_lsm6dsl_tap_detection_on_x_get_TYPE lsm6dsl_tap_detection_on_x_get;
      TEST_STUB_lsm6dsl_tap_threshold_x_set_TYPE lsm6dsl_tap_threshold_x_set;
      TEST_STUB_lsm6dsl_tap_threshold_x_get_TYPE lsm6dsl_tap_threshold_x_get;
      TEST_STUB_lsm6dsl_tap_shock_set_TYPE lsm6dsl_tap_shock_set;
      TEST_STUB_lsm6dsl_tap_shock_get_TYPE lsm6dsl_tap_shock_get;
      TEST_STUB_lsm6dsl_tap_quiet_set_TYPE lsm6dsl_tap_quiet_set;
      TEST_STUB_lsm6dsl_tap_quiet_get_TYPE lsm6dsl_tap_quiet_get;
      TEST_STUB_lsm6dsl_tap_dur_set_TYPE lsm6dsl_tap_dur_set;
      TEST_STUB_lsm6dsl_tap_dur_get_TYPE lsm6dsl_tap_dur_get;
      TEST_STUB_lsm6dsl_tap_mode_set_TYPE lsm6dsl_tap_mode_set;
      TEST_STUB_lsm6dsl_tap_mode_get_TYPE lsm6dsl_tap_mode_get;
      TEST_STUB_lsm6dsl_6d_feed_data_set_TYPE lsm6dsl_6d_feed_data_set;
      TEST_STUB_lsm6dsl_6d_feed_data_get_TYPE lsm6dsl_6d_feed_data_get;
      TEST_STUB_lsm6dsl_6d_threshold_set_TYPE lsm6dsl_6d_threshold_set;
      TEST_STUB_lsm6dsl_6d_threshold_get_TYPE lsm6dsl_6d_threshold_get;
      TEST_STUB_lsm6dsl_4d_mode_set_TYPE lsm6dsl_4d_mode_set;
      TEST_STUB_lsm6dsl_4d_mode_get_TYPE lsm6dsl_4d_mode_get;
      TEST_STUB_lsm6dsl_ff_dur_set_TYPE lsm6dsl_ff_dur_set;
      TEST_STUB_lsm6dsl_ff_dur_get_TYPE lsm6dsl_ff_dur_get;
      TEST_STUB_lsm6dsl_ff_threshold_set_TYPE lsm6dsl_ff_threshold_set;
      TEST_STUB_lsm6dsl_ff_threshold_get_TYPE lsm6dsl_ff_threshold_get;
      TEST_STUB_lsm6dsl_fifo_watermark_set_TYPE lsm6dsl_fifo_watermark_set;
      TEST_STUB_lsm6dsl_fifo_watermark_get_TYPE lsm6dsl_fifo_watermark_get;
      TEST_STUB_lsm6dsl_fifo_data_level_get_TYPE lsm6dsl_fifo_data_level_get;
      TEST_STUB_lsm6dsl_fifo_wtm_flag_get_TYPE lsm6dsl_fifo_wtm_flag_get;
      TEST_STUB_lsm6dsl_fifo_pattern_get_TYPE lsm6dsl_fifo_pattern_get;
      TEST_STUB_lsm6dsl_fifo_temp_batch_set_TYPE lsm6dsl_fifo_temp_batch_set;
      TEST_STUB_lsm6dsl_fifo_temp_batch_get_TYPE lsm6dsl_fifo_temp_batch_get;
      TEST_STUB_lsm6dsl_fifo_write_trigger_set_TYPE lsm6dsl_fifo_write_trigger_set;
      TEST_STUB_lsm6dsl_fifo_write_trigger_get_TYPE lsm6dsl_fifo_write_trigger_get;
      TEST_STUB_lsm6dsl_fifo_pedo_and_timestamp_batch_set_TYPE lsm6dsl_fifo_pedo_and_timestamp_batch_set;
      TEST_STUB_lsm6dsl_fifo_pedo_and_timestamp_batch_get_TYPE lsm6dsl_fifo_pedo_and_timestamp_batch_get;
      TEST_STUB_lsm6dsl_fifo_xl_batch_set_TYPE lsm6dsl_fifo_xl_batch_set;
      TEST_STUB_lsm6dsl_fifo_xl_batch_get_TYPE lsm6dsl_fifo_xl_batch_get;
      TEST_STUB_lsm6dsl_fifo_gy_batch_set_TYPE lsm6dsl_fifo_gy_batch_set;
      TEST_STUB_lsm6dsl_fifo_gy_batch_get_TYPE lsm6dsl_fifo_gy_batch_get;
      TEST_STUB_lsm6dsl_fifo_dataset_3_batch_set_TYPE lsm6dsl_fifo_dataset_3_batch_set;
      TEST_STUB_lsm6dsl_fifo_dataset_3_batch_get_TYPE lsm6dsl_fifo_dataset_3_batch_get;
      TEST_STUB_lsm6dsl_fifo_dataset_4_batch_set_TYPE lsm6dsl_fifo_dataset_4_batch_set;
      TEST_STUB_lsm6dsl_fifo_dataset_4_batch_get_TYPE lsm6dsl_fifo_dataset_4_batch_get;
      TEST_STUB_lsm6dsl_fifo_xl_gy_8bit_format_set_TYPE lsm6dsl_fifo_xl_gy_8bit_format_set;
      TEST_STUB_lsm6dsl_fifo_xl_gy_8bit_format_get_TYPE lsm6dsl_fifo_xl_gy_8bit_format_get;
      TEST_STUB_lsm6dsl_fifo_stop_on_wtm_set_TYPE lsm6dsl_fifo_stop_on_wtm_set;
      TEST_STUB_lsm6dsl_fifo_stop_on_wtm_get_TYPE lsm6dsl_fifo_stop_on_wtm_get;
      TEST_STUB_lsm6dsl_fifo_mode_set_TYPE lsm6dsl_fifo_mode_set;
      TEST_STUB_lsm6dsl_fifo_mode_get_TYPE lsm6dsl_fifo_mode_get;
      TEST_STUB_lsm6dsl_fifo_data_rate_set_TYPE lsm6dsl_fifo_data_rate_set;
      TEST_STUB_lsm6dsl_fifo_data_rate_get_TYPE lsm6dsl_fifo_data_rate_get;
      TEST_STUB_lsm6dsl_den_polarity_set_TYPE lsm6dsl_den_polarity_set;
      TEST_STUB_lsm6dsl_den_polarity_get_TYPE lsm6dsl_den_polarity_get;
      TEST_STUB_lsm6dsl_den_mode_set_TYPE lsm6dsl_den_mode_set;
      TEST_STUB_lsm6dsl_den_mode_get_TYPE lsm6dsl_den_mode_get;
      TEST_STUB_lsm6dsl_den_enable_set_TYPE lsm6dsl_den_enable_set;
      TEST_STUB_lsm6dsl_den_enable_get_TYPE lsm6dsl_den_enable_get;
      TEST_STUB_lsm6dsl_den_mark_axis_z_set_TYPE lsm6dsl_den_mark_axis_z_set;
      TEST_STUB_lsm6dsl_den_mark_axis_z_get_TYPE lsm6dsl_den_mark_axis_z_get;
      TEST_STUB_lsm6dsl_den_mark_axis_y_set_TYPE lsm6dsl_den_mark_axis_y_set;
      TEST_STUB_lsm6dsl_den_mark_axis_y_get_TYPE lsm6dsl_den_mark_axis_y_get;
      TEST_STUB_lsm6dsl_den_mark_axis_x_set_TYPE lsm6dsl_den_mark_axis_x_set;
      TEST_STUB_lsm6dsl_den_mark_axis_x_get_TYPE lsm6dsl_den_mark_axis_x_get;
      TEST_STUB_lsm6dsl_pedo_step_reset_set_TYPE lsm6dsl_pedo_step_reset_set;
      TEST_STUB_lsm6dsl_pedo_step_reset_get_TYPE lsm6dsl_pedo_step_reset_get;
      TEST_STUB_lsm6dsl_pedo_sens_set_TYPE lsm6dsl_pedo_sens_set;
      TEST_STUB_lsm6dsl_pedo_sens_get_TYPE lsm6dsl_pedo_sens_get;
      TEST_STUB_lsm6dsl_pedo_threshold_set_TYPE lsm6dsl_pedo_threshold_set;
      TEST_STUB_lsm6dsl_pedo_threshold_get_TYPE lsm6dsl_pedo_threshold_get;
      TEST_STUB_lsm6dsl_pedo_full_scale_set_TYPE lsm6dsl_pedo_full_scale_set;
      TEST_STUB_lsm6dsl_pedo_full_scale_get_TYPE lsm6dsl_pedo_full_scale_get;
      TEST_STUB_lsm6dsl_pedo_debounce_steps_set_TYPE lsm6dsl_pedo_debounce_steps_set;
      TEST_STUB_lsm6dsl_pedo_debounce_steps_get_TYPE lsm6dsl_pedo_debounce_steps_get;
      TEST_STUB_lsm6dsl_pedo_timeout_set_TYPE lsm6dsl_pedo_timeout_set;
      TEST_STUB_lsm6dsl_pedo_timeout_get_TYPE lsm6dsl_pedo_timeout_get;
      TEST_STUB_lsm6dsl_pedo_steps_period_set_TYPE lsm6dsl_pedo_steps_period_set;
      TEST_STUB_lsm6dsl_pedo_steps_period_get_TYPE lsm6dsl_pedo_steps_period_get;
      TEST_STUB_lsm6dsl_motion_sens_set_TYPE lsm6dsl_motion_sens_set;
      TEST_STUB_lsm6dsl_motion_sens_get_TYPE lsm6dsl_motion_sens_get;
      TEST_STUB_lsm6dsl_motion_threshold_set_TYPE lsm6dsl_motion_threshold_set;
      TEST_STUB_lsm6dsl_motion_threshold_get_TYPE lsm6dsl_motion_threshold_get;
      TEST_STUB_lsm6dsl_tilt_sens_set_TYPE lsm6dsl_tilt_sens_set;
      TEST_STUB_lsm6dsl_tilt_sens_get_TYPE lsm6dsl_tilt_sens_get;
      TEST_STUB_lsm6dsl_wrist_tilt_sens_set_TYPE lsm6dsl_wrist_tilt_sens_set;
      TEST_STUB_lsm6dsl_wrist_tilt_sens_get_TYPE lsm6dsl_wrist_tilt_sens_get;
      TEST_STUB_lsm6dsl_tilt_latency_set_TYPE lsm6dsl_tilt_latency_set;
      TEST_STUB_lsm6dsl_tilt_latency_get_TYPE lsm6dsl_tilt_latency_get;
      TEST_STUB_lsm6dsl_tilt_threshold_set_TYPE lsm6dsl_tilt_threshold_set;
      TEST_STUB_lsm6dsl_tilt_threshold_get_TYPE lsm6dsl_tilt_threshold_get;
      TEST_STUB_lsm6dsl_tilt_src_set_TYPE lsm6dsl_tilt_src_set;
      TEST_STUB_lsm6dsl_tilt_src_get_TYPE lsm6dsl_tilt_src_get;
      TEST_STUB_lsm6dsl_mag_soft_iron_set_TYPE lsm6dsl_mag_soft_iron_set;
      TEST_STUB_lsm6dsl_mag_soft_iron_get_TYPE lsm6dsl_mag_soft_iron_get;
      TEST_STUB_lsm6dsl_mag_hard_iron_set_TYPE lsm6dsl_mag_hard_iron_set;
      TEST_STUB_lsm6dsl_mag_hard_iron_get_TYPE lsm6dsl_mag_hard_iron_get;
      TEST_STUB_lsm6dsl_mag_soft_iron_mat_set_TYPE lsm6dsl_mag_soft_iron_mat_set;
      TEST_STUB_lsm6dsl_mag_soft_iron_mat_get_TYPE lsm6dsl_mag_soft_iron_mat_get;
      TEST_STUB_lsm6dsl_mag_offset_set_TYPE lsm6dsl_mag_offset_set;
      TEST_STUB_lsm6dsl_mag_offset_get_TYPE lsm6dsl_mag_offset_get;
      TEST_STUB_lsm6dsl_func_en_set_TYPE lsm6dsl_func_en_set;
      TEST_STUB_lsm6dsl_sh_sync_sens_frame_set_TYPE lsm6dsl_sh_sync_sens_frame_set;
      TEST_STUB_lsm6dsl_sh_sync_sens_frame_get_TYPE lsm6dsl_sh_sync_sens_frame_get;
      TEST_STUB_lsm6dsl_sh_sync_sens_ratio_set_TYPE lsm6dsl_sh_sync_sens_ratio_set;
      TEST_STUB_lsm6dsl_sh_sync_sens_ratio_get_TYPE lsm6dsl_sh_sync_sens_ratio_get;
      TEST_STUB_lsm6dsl_sh_master_set_TYPE lsm6dsl_sh_master_set;
      TEST_STUB_lsm6dsl_sh_master_get_TYPE lsm6dsl_sh_master_get;
      TEST_STUB_lsm6dsl_sh_pass_through_set_TYPE lsm6dsl_sh_pass_through_set;
      TEST_STUB_lsm6dsl_sh_pass_through_get_TYPE lsm6dsl_sh_pass_through_get;
      TEST_STUB_lsm6dsl_sh_pin_mode_set_TYPE lsm6dsl_sh_pin_mode_set;
      TEST_STUB_lsm6dsl_sh_pin_mode_get_TYPE lsm6dsl_sh_pin_mode_get;
      TEST_STUB_lsm6dsl_sh_syncro_mode_set_TYPE lsm6dsl_sh_syncro_mode_set;
      TEST_STUB_lsm6dsl_sh_syncro_mode_get_TYPE lsm6dsl_sh_syncro_mode_get;
      TEST_STUB_lsm6dsl_sh_drdy_on_int1_set_TYPE lsm6dsl_sh_drdy_on_int1_set;
      TEST_STUB_lsm6dsl_sh_drdy_on_int1_get_TYPE lsm6dsl_sh_drdy_on_int1_get;
      TEST_STUB_lsm6dsl_sh_read_data_raw_get_TYPE lsm6dsl_sh_read_data_raw_get;
      TEST_STUB_lsm6dsl_sh_cmd_sens_sync_set_TYPE lsm6dsl_sh_cmd_sens_sync_set;
      TEST_STUB_lsm6dsl_sh_cmd_sens_sync_get_TYPE lsm6dsl_sh_cmd_sens_sync_get;
      TEST_STUB_lsm6dsl_sh_spi_sync_error_set_TYPE lsm6dsl_sh_spi_sync_error_set;
      TEST_STUB_lsm6dsl_sh_spi_sync_error_get_TYPE lsm6dsl_sh_spi_sync_error_get;
      TEST_STUB_lsm6dsl_sh_num_of_dev_connected_set_TYPE lsm6dsl_sh_num_of_dev_connected_set;
      TEST_STUB_lsm6dsl_sh_num_of_dev_connected_get_TYPE lsm6dsl_sh_num_of_dev_connected_get;
      TEST_STUB_lsm6dsl_sh_cfg_write_TYPE lsm6dsl_sh_cfg_write;
      TEST_STUB_lsm6dsl_sh_slv0_cfg_read_TYPE lsm6dsl_sh_slv0_cfg_read;
      TEST_STUB_lsm6dsl_sh_slv1_cfg_read_TYPE lsm6dsl_sh_slv1_cfg_read;
      TEST_STUB_lsm6dsl_sh_slv2_cfg_read_TYPE lsm6dsl_sh_slv2_cfg_read;
      TEST_STUB_lsm6dsl_sh_slv3_cfg_read_TYPE lsm6dsl_sh_slv3_cfg_read;
      TEST_STUB_lsm6dsl_sh_slave_0_dec_set_TYPE lsm6dsl_sh_slave_0_dec_set;
      TEST_STUB_lsm6dsl_sh_slave_0_dec_get_TYPE lsm6dsl_sh_slave_0_dec_get;
      TEST_STUB_lsm6dsl_sh_write_mode_set_TYPE lsm6dsl_sh_write_mode_set;
      TEST_STUB_lsm6dsl_sh_write_mode_get_TYPE lsm6dsl_sh_write_mode_get;
      TEST_STUB_lsm6dsl_sh_slave_1_dec_set_TYPE lsm6dsl_sh_slave_1_dec_set;
      TEST_STUB_lsm6dsl_sh_slave_1_dec_get_TYPE lsm6dsl_sh_slave_1_dec_get;
      TEST_STUB_lsm6dsl_sh_slave_2_dec_set_TYPE lsm6dsl_sh_slave_2_dec_set;
      TEST_STUB_lsm6dsl_sh_slave_2_dec_get_TYPE lsm6dsl_sh_slave_2_dec_get;
      TEST_STUB_lsm6dsl_sh_slave_3_dec_set_TYPE lsm6dsl_sh_slave_3_dec_set;
      TEST_STUB_lsm6dsl_sh_slave_3_dec_get_TYPE lsm6dsl_sh_slave_3_dec_get;
    } TEST_STUB_TYPE;
extern TEST_STUB_TYPE TEST_STUB;

#endif /* TYPES_H */