/**
* @file stub.c
*
* @brief This file contains the stubs for the functions
*
*/
#include "types.h"
#include "stub.h"
TEST_STUB_TYPE TEST_STUB = {0};
int32_t platform_write(void *handle, uint8_t reg, const uint8_t *bufp, uint16_t len)
{
  int32_t returnValue = {0};
  TEST_STUB.platform_write.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "platform_write";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.platform_write.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.platform_write.returnValue;
      TEST_STUB.platform_write.handle = handle;
      TEST_STUB.platform_write.reg = reg;
      TEST_STUB.platform_write.bufp = *bufp;
      TEST_STUB.platform_write.len = len;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.platform_write.redirectFuncPtr(handle, reg, bufp, len);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t platform_read(void *handle, uint8_t reg, uint8_t *bufp, uint16_t len)
{
  int32_t returnValue = {0};
  TEST_STUB.platform_read.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "platform_read";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.platform_read.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.platform_read.returnValue;
      TEST_STUB.platform_read.handle = handle;
      TEST_STUB.platform_read.reg = reg;
      if (TEST_STUB.platform_read.bufp.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *bufp = TEST_STUB.platform_read.bufp.value;
    }
    else
    {
      if (TEST_STUB.platform_read.bufp.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.platform_read.bufp.value = *bufp;
      }
    }
      TEST_STUB.platform_read.len = len;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.platform_read.redirectFuncPtr(handle, reg, bufp, len);
      break;

    default:
      break;

  }

  return returnValue;
}

void IMU_HWI_Delay(uint32_t ms)
{
  TEST_STUB.IMU_HWI_Delay.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "IMU_HWI_Delay";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.IMU_HWI_Delay.stub_option)
  {
    case STUB_OPTION_VALUE:
      TEST_STUB.IMU_HWI_Delay.ms = ms;
      break;

    case STUB_OPTION_REDIRECT:
      TEST_STUB.IMU_HWI_Delay.redirectFuncPtr(ms);
      break;

    default:
      break;

  }

}

int32_t lsm6dsl_read_reg(stmdev_ctx_t *ctx, uint8_t reg, uint8_t *data, uint16_t len)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_read_reg.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_read_reg";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_read_reg.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_read_reg.returnValue;
      if (TEST_STUB.lsm6dsl_read_reg.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_read_reg.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_read_reg.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_read_reg.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_read_reg.reg = reg;
      if (TEST_STUB.lsm6dsl_read_reg.data.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *data = TEST_STUB.lsm6dsl_read_reg.data.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_read_reg.data.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_read_reg.data.value = *data;
      }
    }
      TEST_STUB.lsm6dsl_read_reg.len = len;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_read_reg.redirectFuncPtr(ctx, reg, data, len);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_write_reg(stmdev_ctx_t *ctx, uint8_t reg, uint8_t *data, uint16_t len)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_write_reg.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_write_reg";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_write_reg.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_write_reg.returnValue;
      if (TEST_STUB.lsm6dsl_write_reg.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_write_reg.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_write_reg.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_write_reg.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_write_reg.reg = reg;
      if (TEST_STUB.lsm6dsl_write_reg.data.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *data = TEST_STUB.lsm6dsl_write_reg.data.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_write_reg.data.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_write_reg.data.value = *data;
      }
    }
      TEST_STUB.lsm6dsl_write_reg.len = len;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_write_reg.redirectFuncPtr(ctx, reg, data, len);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs2g_to_mg(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs2g_to_mg.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs2g_to_mg";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs2g_to_mg.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs2g_to_mg.returnValue;
      TEST_STUB.lsm6dsl_from_fs2g_to_mg.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs2g_to_mg.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs4g_to_mg(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs4g_to_mg.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs4g_to_mg";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs4g_to_mg.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs4g_to_mg.returnValue;
      TEST_STUB.lsm6dsl_from_fs4g_to_mg.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs4g_to_mg.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs8g_to_mg(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs8g_to_mg.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs8g_to_mg";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs8g_to_mg.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs8g_to_mg.returnValue;
      TEST_STUB.lsm6dsl_from_fs8g_to_mg.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs8g_to_mg.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs16g_to_mg(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs16g_to_mg.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs16g_to_mg";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs16g_to_mg.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs16g_to_mg.returnValue;
      TEST_STUB.lsm6dsl_from_fs16g_to_mg.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs16g_to_mg.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs125dps_to_mdps(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs125dps_to_mdps.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs125dps_to_mdps";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs125dps_to_mdps.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs125dps_to_mdps.returnValue;
      TEST_STUB.lsm6dsl_from_fs125dps_to_mdps.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs125dps_to_mdps.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs250dps_to_mdps(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs250dps_to_mdps.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs250dps_to_mdps";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs250dps_to_mdps.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs250dps_to_mdps.returnValue;
      TEST_STUB.lsm6dsl_from_fs250dps_to_mdps.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs250dps_to_mdps.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs500dps_to_mdps(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs500dps_to_mdps.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs500dps_to_mdps";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs500dps_to_mdps.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs500dps_to_mdps.returnValue;
      TEST_STUB.lsm6dsl_from_fs500dps_to_mdps.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs500dps_to_mdps.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs1000dps_to_mdps(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs1000dps_to_mdps.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs1000dps_to_mdps";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs1000dps_to_mdps.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs1000dps_to_mdps.returnValue;
      TEST_STUB.lsm6dsl_from_fs1000dps_to_mdps.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs1000dps_to_mdps.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_fs2000dps_to_mdps(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_fs2000dps_to_mdps.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_fs2000dps_to_mdps";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_fs2000dps_to_mdps.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_fs2000dps_to_mdps.returnValue;
      TEST_STUB.lsm6dsl_from_fs2000dps_to_mdps.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_fs2000dps_to_mdps.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

float_t lsm6dsl_from_lsb_to_celsius(int16_t lsb)
{
  float_t returnValue = {0};
  TEST_STUB.lsm6dsl_from_lsb_to_celsius.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_from_lsb_to_celsius";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_from_lsb_to_celsius.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_from_lsb_to_celsius.returnValue;
      TEST_STUB.lsm6dsl_from_lsb_to_celsius.lsb = lsb;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_from_lsb_to_celsius.redirectFuncPtr(lsb);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_full_scale_set(stmdev_ctx_t *ctx, lsm6dsl_fs_xl_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_full_scale_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_full_scale_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_full_scale_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_full_scale_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_full_scale_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_full_scale_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_full_scale_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_full_scale_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_full_scale_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_full_scale_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_full_scale_get(stmdev_ctx_t *ctx, lsm6dsl_fs_xl_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_full_scale_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_full_scale_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_full_scale_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_full_scale_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_full_scale_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_full_scale_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_full_scale_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_full_scale_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_full_scale_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_full_scale_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_full_scale_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_full_scale_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_full_scale_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_data_rate_set(stmdev_ctx_t *ctx, lsm6dsl_odr_xl_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_data_rate_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_data_rate_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_data_rate_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_data_rate_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_data_rate_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_data_rate_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_data_rate_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_data_rate_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_data_rate_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_data_rate_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_data_rate_get(stmdev_ctx_t *ctx, lsm6dsl_odr_xl_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_data_rate_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_data_rate_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_data_rate_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_data_rate_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_data_rate_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_data_rate_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_data_rate_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_data_rate_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_data_rate_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_data_rate_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_data_rate_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_data_rate_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_data_rate_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_full_scale_set(stmdev_ctx_t *ctx, lsm6dsl_fs_g_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_full_scale_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_full_scale_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_full_scale_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_full_scale_set.returnValue;
      if (TEST_STUB.lsm6dsl_gy_full_scale_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_full_scale_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_full_scale_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_full_scale_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_gy_full_scale_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_full_scale_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_full_scale_get(stmdev_ctx_t *ctx, lsm6dsl_fs_g_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_full_scale_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_full_scale_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_full_scale_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_full_scale_get.returnValue;
      if (TEST_STUB.lsm6dsl_gy_full_scale_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_full_scale_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_full_scale_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_full_scale_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_gy_full_scale_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_gy_full_scale_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_full_scale_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_full_scale_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_full_scale_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_data_rate_set(stmdev_ctx_t *ctx, lsm6dsl_odr_g_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_data_rate_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_data_rate_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_data_rate_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_data_rate_set.returnValue;
      if (TEST_STUB.lsm6dsl_gy_data_rate_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_data_rate_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_data_rate_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_data_rate_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_gy_data_rate_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_data_rate_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_data_rate_get(stmdev_ctx_t *ctx, lsm6dsl_odr_g_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_data_rate_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_data_rate_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_data_rate_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_data_rate_get.returnValue;
      if (TEST_STUB.lsm6dsl_gy_data_rate_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_data_rate_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_data_rate_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_data_rate_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_gy_data_rate_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_gy_data_rate_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_data_rate_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_data_rate_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_data_rate_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_block_data_update_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_block_data_update_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_block_data_update_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_block_data_update_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_block_data_update_set.returnValue;
      if (TEST_STUB.lsm6dsl_block_data_update_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_block_data_update_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_block_data_update_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_block_data_update_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_block_data_update_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_block_data_update_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_block_data_update_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_block_data_update_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_block_data_update_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_block_data_update_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_block_data_update_get.returnValue;
      if (TEST_STUB.lsm6dsl_block_data_update_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_block_data_update_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_block_data_update_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_block_data_update_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_block_data_update_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_block_data_update_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_block_data_update_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_block_data_update_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_block_data_update_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_offset_weight_set(stmdev_ctx_t *ctx, lsm6dsl_usr_off_w_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_offset_weight_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_offset_weight_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_offset_weight_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_offset_weight_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_offset_weight_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_offset_weight_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_offset_weight_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_offset_weight_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_offset_weight_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_offset_weight_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_offset_weight_get(stmdev_ctx_t *ctx, lsm6dsl_usr_off_w_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_offset_weight_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_offset_weight_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_offset_weight_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_offset_weight_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_offset_weight_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_offset_weight_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_offset_weight_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_offset_weight_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_offset_weight_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_offset_weight_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_offset_weight_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_offset_weight_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_offset_weight_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_power_mode_set(stmdev_ctx_t *ctx, lsm6dsl_xl_hm_mode_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_power_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_power_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_power_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_power_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_power_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_power_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_power_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_power_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_power_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_power_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_power_mode_get(stmdev_ctx_t *ctx, lsm6dsl_xl_hm_mode_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_power_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_power_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_power_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_power_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_power_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_power_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_power_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_power_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_power_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_power_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_power_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_power_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_power_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_rounding_on_status_set(stmdev_ctx_t *ctx, lsm6dsl_rounding_status_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_rounding_on_status_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_rounding_on_status_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_rounding_on_status_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_rounding_on_status_set.returnValue;
      if (TEST_STUB.lsm6dsl_rounding_on_status_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_rounding_on_status_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_rounding_on_status_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_rounding_on_status_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_rounding_on_status_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_rounding_on_status_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_rounding_on_status_get(stmdev_ctx_t *ctx, lsm6dsl_rounding_status_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_rounding_on_status_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_rounding_on_status_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_rounding_on_status_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_rounding_on_status_get.returnValue;
      if (TEST_STUB.lsm6dsl_rounding_on_status_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_rounding_on_status_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_rounding_on_status_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_rounding_on_status_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_rounding_on_status_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_rounding_on_status_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_rounding_on_status_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_rounding_on_status_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_rounding_on_status_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_power_mode_set(stmdev_ctx_t *ctx, lsm6dsl_g_hm_mode_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_power_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_power_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_power_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_power_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_gy_power_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_power_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_power_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_power_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_gy_power_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_power_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_power_mode_get(stmdev_ctx_t *ctx, lsm6dsl_g_hm_mode_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_power_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_power_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_power_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_power_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_gy_power_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_power_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_power_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_power_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_gy_power_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_gy_power_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_power_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_power_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_power_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_all_sources_get(stmdev_ctx_t *ctx, lsm6dsl_all_sources_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_all_sources_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_all_sources_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_all_sources_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_all_sources_get.returnValue;
      if (TEST_STUB.lsm6dsl_all_sources_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_all_sources_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_all_sources_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_all_sources_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_all_sources_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_all_sources_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_all_sources_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_all_sources_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_all_sources_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_status_reg_get(stmdev_ctx_t *ctx, lsm6dsl_status_reg_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_status_reg_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_status_reg_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_status_reg_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_status_reg_get.returnValue;
      if (TEST_STUB.lsm6dsl_status_reg_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_status_reg_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_status_reg_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_status_reg_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_status_reg_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_status_reg_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_status_reg_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_status_reg_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_status_reg_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_flag_data_ready_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_flag_data_ready_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_flag_data_ready_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_flag_data_ready_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_flag_data_ready_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_flag_data_ready_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_flag_data_ready_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_flag_data_ready_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_flag_data_ready_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_flag_data_ready_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_flag_data_ready_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_flag_data_ready_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_flag_data_ready_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_flag_data_ready_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_flag_data_ready_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_flag_data_ready_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_flag_data_ready_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_flag_data_ready_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_flag_data_ready_get.returnValue;
      if (TEST_STUB.lsm6dsl_gy_flag_data_ready_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_flag_data_ready_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_flag_data_ready_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_flag_data_ready_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_gy_flag_data_ready_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_gy_flag_data_ready_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_flag_data_ready_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_flag_data_ready_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_flag_data_ready_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_temp_flag_data_ready_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_temp_flag_data_ready_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_temp_flag_data_ready_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_temp_flag_data_ready_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_temp_flag_data_ready_get.returnValue;
      if (TEST_STUB.lsm6dsl_temp_flag_data_ready_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_temp_flag_data_ready_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_temp_flag_data_ready_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_temp_flag_data_ready_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_temp_flag_data_ready_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_temp_flag_data_ready_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_temp_flag_data_ready_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_temp_flag_data_ready_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_temp_flag_data_ready_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_usr_offset_set(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_usr_offset_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_usr_offset_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_usr_offset_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_usr_offset_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_usr_offset_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_usr_offset_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_usr_offset_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_usr_offset_set.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_usr_offset_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_xl_usr_offset_set.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_usr_offset_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_usr_offset_set.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_usr_offset_set.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_usr_offset_get(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_usr_offset_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_usr_offset_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_usr_offset_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_usr_offset_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_usr_offset_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_usr_offset_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_usr_offset_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_usr_offset_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_usr_offset_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_xl_usr_offset_get.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_usr_offset_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_usr_offset_get.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_usr_offset_get.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_timestamp_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_timestamp_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_timestamp_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_timestamp_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_timestamp_set.returnValue;
      if (TEST_STUB.lsm6dsl_timestamp_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_timestamp_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_timestamp_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_timestamp_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_timestamp_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_timestamp_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_timestamp_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_timestamp_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_timestamp_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_timestamp_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_timestamp_get.returnValue;
      if (TEST_STUB.lsm6dsl_timestamp_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_timestamp_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_timestamp_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_timestamp_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_timestamp_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_timestamp_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_timestamp_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_timestamp_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_timestamp_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_timestamp_res_set(stmdev_ctx_t *ctx, lsm6dsl_timer_hr_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_timestamp_res_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_timestamp_res_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_timestamp_res_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_timestamp_res_set.returnValue;
      if (TEST_STUB.lsm6dsl_timestamp_res_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_timestamp_res_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_timestamp_res_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_timestamp_res_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_timestamp_res_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_timestamp_res_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_timestamp_res_get(stmdev_ctx_t *ctx, lsm6dsl_timer_hr_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_timestamp_res_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_timestamp_res_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_timestamp_res_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_timestamp_res_get.returnValue;
      if (TEST_STUB.lsm6dsl_timestamp_res_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_timestamp_res_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_timestamp_res_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_timestamp_res_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_timestamp_res_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_timestamp_res_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_timestamp_res_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_timestamp_res_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_timestamp_res_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_rounding_mode_set(stmdev_ctx_t *ctx, lsm6dsl_rounding_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_rounding_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_rounding_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_rounding_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_rounding_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_rounding_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_rounding_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_rounding_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_rounding_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_rounding_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_rounding_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_rounding_mode_get(stmdev_ctx_t *ctx, lsm6dsl_rounding_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_rounding_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_rounding_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_rounding_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_rounding_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_rounding_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_rounding_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_rounding_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_rounding_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_rounding_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_rounding_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_rounding_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_rounding_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_rounding_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_temperature_raw_get(stmdev_ctx_t *ctx, int16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_temperature_raw_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_temperature_raw_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_temperature_raw_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_temperature_raw_get.returnValue;
      if (TEST_STUB.lsm6dsl_temperature_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_temperature_raw_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_temperature_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_temperature_raw_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_temperature_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_temperature_raw_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_temperature_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_temperature_raw_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_temperature_raw_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_angular_rate_raw_get(stmdev_ctx_t *ctx, int16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_angular_rate_raw_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_angular_rate_raw_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_angular_rate_raw_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_angular_rate_raw_get.returnValue;
      if (TEST_STUB.lsm6dsl_angular_rate_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_angular_rate_raw_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_angular_rate_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_angular_rate_raw_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_angular_rate_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_angular_rate_raw_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_angular_rate_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_angular_rate_raw_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_angular_rate_raw_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_acceleration_raw_get(stmdev_ctx_t *ctx, int16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_acceleration_raw_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_acceleration_raw_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_acceleration_raw_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_acceleration_raw_get.returnValue;
      if (TEST_STUB.lsm6dsl_acceleration_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_acceleration_raw_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_acceleration_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_acceleration_raw_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_acceleration_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_acceleration_raw_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_acceleration_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_acceleration_raw_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_acceleration_raw_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_calibrated_raw_get(stmdev_ctx_t *ctx, int16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_calibrated_raw_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_calibrated_raw_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_calibrated_raw_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_calibrated_raw_get.returnValue;
      if (TEST_STUB.lsm6dsl_mag_calibrated_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_calibrated_raw_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_calibrated_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_calibrated_raw_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_mag_calibrated_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_mag_calibrated_raw_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_calibrated_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_calibrated_raw_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_calibrated_raw_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_raw_data_get(stmdev_ctx_t *ctx, uint8_t *buffer, uint8_t len)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_raw_data_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_raw_data_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_raw_data_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_raw_data_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_raw_data_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_raw_data_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_raw_data_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_raw_data_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_raw_data_get.buffer.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buffer = TEST_STUB.lsm6dsl_fifo_raw_data_get.buffer.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_raw_data_get.buffer.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_raw_data_get.buffer.value = *buffer;
      }
    }
      TEST_STUB.lsm6dsl_fifo_raw_data_get.len = len;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_raw_data_get.redirectFuncPtr(ctx, buffer, len);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mem_bank_set(stmdev_ctx_t *ctx, lsm6dsl_func_cfg_en_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mem_bank_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mem_bank_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mem_bank_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mem_bank_set.returnValue;
      if (TEST_STUB.lsm6dsl_mem_bank_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mem_bank_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mem_bank_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mem_bank_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_mem_bank_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mem_bank_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mem_bank_get(stmdev_ctx_t *ctx, lsm6dsl_func_cfg_en_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mem_bank_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mem_bank_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mem_bank_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mem_bank_get.returnValue;
      if (TEST_STUB.lsm6dsl_mem_bank_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mem_bank_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mem_bank_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mem_bank_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_mem_bank_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_mem_bank_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mem_bank_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mem_bank_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mem_bank_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_data_ready_mode_set(stmdev_ctx_t *ctx, lsm6dsl_drdy_pulsed_g_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_data_ready_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_data_ready_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_data_ready_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_data_ready_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_data_ready_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_data_ready_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_data_ready_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_data_ready_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_data_ready_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_data_ready_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_data_ready_mode_get(stmdev_ctx_t *ctx, lsm6dsl_drdy_pulsed_g_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_data_ready_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_data_ready_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_data_ready_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_data_ready_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_data_ready_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_data_ready_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_data_ready_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_data_ready_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_data_ready_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_data_ready_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_data_ready_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_data_ready_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_data_ready_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_device_id_get(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_device_id_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_device_id_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_device_id_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_device_id_get.returnValue;
      if (TEST_STUB.lsm6dsl_device_id_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_device_id_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_device_id_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_device_id_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_device_id_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_device_id_get.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_device_id_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_device_id_get.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_device_id_get.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_reset_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_reset_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_reset_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_reset_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_reset_set.returnValue;
      if (TEST_STUB.lsm6dsl_reset_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_reset_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_reset_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_reset_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_reset_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_reset_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_reset_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_reset_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_reset_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_reset_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_reset_get.returnValue;
      if (TEST_STUB.lsm6dsl_reset_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_reset_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_reset_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_reset_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_reset_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_reset_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_reset_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_reset_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_reset_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_data_format_set(stmdev_ctx_t *ctx, lsm6dsl_ble_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_data_format_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_data_format_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_data_format_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_data_format_set.returnValue;
      if (TEST_STUB.lsm6dsl_data_format_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_data_format_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_data_format_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_data_format_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_data_format_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_data_format_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_data_format_get(stmdev_ctx_t *ctx, lsm6dsl_ble_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_data_format_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_data_format_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_data_format_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_data_format_get.returnValue;
      if (TEST_STUB.lsm6dsl_data_format_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_data_format_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_data_format_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_data_format_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_data_format_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_data_format_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_data_format_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_data_format_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_data_format_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_auto_increment_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_auto_increment_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_auto_increment_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_auto_increment_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_auto_increment_set.returnValue;
      if (TEST_STUB.lsm6dsl_auto_increment_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_auto_increment_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_auto_increment_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_auto_increment_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_auto_increment_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_auto_increment_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_auto_increment_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_auto_increment_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_auto_increment_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_auto_increment_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_auto_increment_get.returnValue;
      if (TEST_STUB.lsm6dsl_auto_increment_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_auto_increment_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_auto_increment_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_auto_increment_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_auto_increment_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_auto_increment_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_auto_increment_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_auto_increment_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_auto_increment_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_boot_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_boot_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_boot_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_boot_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_boot_set.returnValue;
      if (TEST_STUB.lsm6dsl_boot_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_boot_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_boot_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_boot_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_boot_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_boot_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_boot_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_boot_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_boot_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_boot_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_boot_get.returnValue;
      if (TEST_STUB.lsm6dsl_boot_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_boot_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_boot_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_boot_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_boot_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_boot_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_boot_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_boot_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_boot_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_self_test_set(stmdev_ctx_t *ctx, lsm6dsl_st_xl_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_self_test_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_self_test_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_self_test_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_self_test_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_self_test_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_self_test_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_self_test_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_self_test_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_self_test_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_self_test_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_self_test_get(stmdev_ctx_t *ctx, lsm6dsl_st_xl_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_self_test_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_self_test_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_self_test_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_self_test_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_self_test_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_self_test_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_self_test_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_self_test_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_self_test_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_self_test_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_self_test_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_self_test_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_self_test_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_self_test_set(stmdev_ctx_t *ctx, lsm6dsl_st_g_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_self_test_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_self_test_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_self_test_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_self_test_set.returnValue;
      if (TEST_STUB.lsm6dsl_gy_self_test_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_self_test_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_self_test_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_self_test_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_gy_self_test_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_self_test_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_self_test_get(stmdev_ctx_t *ctx, lsm6dsl_st_g_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_self_test_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_self_test_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_self_test_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_self_test_get.returnValue;
      if (TEST_STUB.lsm6dsl_gy_self_test_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_self_test_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_self_test_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_self_test_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_gy_self_test_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_gy_self_test_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_self_test_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_self_test_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_self_test_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_filter_settling_mask_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_filter_settling_mask_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_filter_settling_mask_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_filter_settling_mask_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_filter_settling_mask_set.returnValue;
      if (TEST_STUB.lsm6dsl_filter_settling_mask_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_filter_settling_mask_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_filter_settling_mask_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_filter_settling_mask_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_filter_settling_mask_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_filter_settling_mask_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_filter_settling_mask_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_filter_settling_mask_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_filter_settling_mask_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_filter_settling_mask_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_filter_settling_mask_get.returnValue;
      if (TEST_STUB.lsm6dsl_filter_settling_mask_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_filter_settling_mask_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_filter_settling_mask_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_filter_settling_mask_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_filter_settling_mask_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_filter_settling_mask_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_filter_settling_mask_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_filter_settling_mask_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_filter_settling_mask_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_hp_path_internal_set(stmdev_ctx_t *ctx, lsm6dsl_slope_fds_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_hp_path_internal_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_hp_path_internal_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_hp_path_internal_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_hp_path_internal_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_hp_path_internal_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_hp_path_internal_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_hp_path_internal_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_hp_path_internal_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_hp_path_internal_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_hp_path_internal_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_hp_path_internal_get(stmdev_ctx_t *ctx, lsm6dsl_slope_fds_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_hp_path_internal_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_hp_path_internal_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_hp_path_internal_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_hp_path_internal_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_hp_path_internal_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_hp_path_internal_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_hp_path_internal_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_hp_path_internal_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_hp_path_internal_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_hp_path_internal_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_hp_path_internal_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_hp_path_internal_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_hp_path_internal_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_filter_analog_set(stmdev_ctx_t *ctx, lsm6dsl_bw0_xl_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_filter_analog_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_filter_analog_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_filter_analog_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_filter_analog_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_filter_analog_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_filter_analog_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_filter_analog_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_filter_analog_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_filter_analog_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_filter_analog_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_filter_analog_get(stmdev_ctx_t *ctx, lsm6dsl_bw0_xl_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_filter_analog_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_filter_analog_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_filter_analog_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_filter_analog_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_filter_analog_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_filter_analog_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_filter_analog_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_filter_analog_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_filter_analog_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_filter_analog_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_filter_analog_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_filter_analog_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_filter_analog_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_lp1_bandwidth_set(stmdev_ctx_t *ctx, lsm6dsl_lpf1_bw_sel_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_lp1_bandwidth_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_lp1_bandwidth_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_lp1_bandwidth_get(stmdev_ctx_t *ctx, lsm6dsl_lpf1_bw_sel_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_lp1_bandwidth_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_lp1_bandwidth_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_lp2_bandwidth_set(stmdev_ctx_t *ctx, lsm6dsl_input_composite_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_lp2_bandwidth_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_lp2_bandwidth_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_lp2_bandwidth_get(stmdev_ctx_t *ctx, lsm6dsl_input_composite_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_lp2_bandwidth_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_lp2_bandwidth_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_reference_mode_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_reference_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_reference_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_reference_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_reference_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_reference_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_reference_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_reference_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_reference_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_reference_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_reference_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_reference_mode_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_reference_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_reference_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_reference_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_reference_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_reference_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_reference_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_reference_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_reference_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_reference_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_reference_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_reference_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_reference_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_reference_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_hp_bandwidth_set(stmdev_ctx_t *ctx, lsm6dsl_hpcf_xl_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_hp_bandwidth_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.returnValue;
      if (TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_hp_bandwidth_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_xl_hp_bandwidth_get(stmdev_ctx_t *ctx, lsm6dsl_hpcf_xl_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_xl_hp_bandwidth_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.returnValue;
      if (TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_xl_hp_bandwidth_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_band_pass_set(stmdev_ctx_t *ctx, lsm6dsl_lpf1_sel_g_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_band_pass_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_band_pass_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_band_pass_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_band_pass_set.returnValue;
      if (TEST_STUB.lsm6dsl_gy_band_pass_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_band_pass_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_band_pass_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_band_pass_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_gy_band_pass_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_band_pass_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_band_pass_get(stmdev_ctx_t *ctx, lsm6dsl_lpf1_sel_g_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_band_pass_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_band_pass_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_band_pass_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_band_pass_get.returnValue;
      if (TEST_STUB.lsm6dsl_gy_band_pass_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_band_pass_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_band_pass_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_band_pass_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_gy_band_pass_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_gy_band_pass_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_band_pass_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_band_pass_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_band_pass_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_spi_mode_set(stmdev_ctx_t *ctx, lsm6dsl_sim_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_spi_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_spi_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_spi_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_spi_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_spi_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_spi_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_spi_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_spi_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_spi_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_spi_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_spi_mode_get(stmdev_ctx_t *ctx, lsm6dsl_sim_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_spi_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_spi_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_spi_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_spi_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_spi_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_spi_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_spi_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_spi_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_spi_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_spi_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_spi_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_spi_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_spi_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_i2c_interface_set(stmdev_ctx_t *ctx, lsm6dsl_i2c_disable_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_i2c_interface_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_i2c_interface_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_i2c_interface_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_i2c_interface_set.returnValue;
      if (TEST_STUB.lsm6dsl_i2c_interface_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_i2c_interface_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_i2c_interface_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_i2c_interface_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_i2c_interface_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_i2c_interface_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_i2c_interface_get(stmdev_ctx_t *ctx, lsm6dsl_i2c_disable_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_i2c_interface_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_i2c_interface_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_i2c_interface_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_i2c_interface_get.returnValue;
      if (TEST_STUB.lsm6dsl_i2c_interface_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_i2c_interface_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_i2c_interface_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_i2c_interface_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_i2c_interface_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_i2c_interface_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_i2c_interface_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_i2c_interface_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_i2c_interface_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pin_int1_route_set(stmdev_ctx_t *ctx, lsm6dsl_int1_route_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pin_int1_route_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pin_int1_route_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pin_int1_route_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pin_int1_route_set.returnValue;
      if (TEST_STUB.lsm6dsl_pin_int1_route_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pin_int1_route_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_int1_route_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_int1_route_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pin_int1_route_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pin_int1_route_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pin_int1_route_get(stmdev_ctx_t *ctx, lsm6dsl_int1_route_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pin_int1_route_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pin_int1_route_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pin_int1_route_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pin_int1_route_get.returnValue;
      if (TEST_STUB.lsm6dsl_pin_int1_route_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pin_int1_route_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_int1_route_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_int1_route_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pin_int1_route_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pin_int1_route_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_int1_route_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_int1_route_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pin_int1_route_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pin_int2_route_set(stmdev_ctx_t *ctx, lsm6dsl_int2_route_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pin_int2_route_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pin_int2_route_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pin_int2_route_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pin_int2_route_set.returnValue;
      if (TEST_STUB.lsm6dsl_pin_int2_route_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pin_int2_route_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_int2_route_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_int2_route_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pin_int2_route_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pin_int2_route_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pin_int2_route_get(stmdev_ctx_t *ctx, lsm6dsl_int2_route_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pin_int2_route_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pin_int2_route_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pin_int2_route_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pin_int2_route_get.returnValue;
      if (TEST_STUB.lsm6dsl_pin_int2_route_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pin_int2_route_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_int2_route_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_int2_route_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pin_int2_route_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pin_int2_route_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_int2_route_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_int2_route_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pin_int2_route_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pin_mode_set(stmdev_ctx_t *ctx, lsm6dsl_pp_od_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pin_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pin_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pin_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pin_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_pin_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pin_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pin_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pin_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pin_mode_get(stmdev_ctx_t *ctx, lsm6dsl_pp_od_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pin_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pin_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pin_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pin_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_pin_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pin_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pin_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pin_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pin_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pin_polarity_set(stmdev_ctx_t *ctx, lsm6dsl_h_lactive_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pin_polarity_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pin_polarity_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pin_polarity_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pin_polarity_set.returnValue;
      if (TEST_STUB.lsm6dsl_pin_polarity_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pin_polarity_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_polarity_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_polarity_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pin_polarity_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pin_polarity_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pin_polarity_get(stmdev_ctx_t *ctx, lsm6dsl_h_lactive_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pin_polarity_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pin_polarity_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pin_polarity_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pin_polarity_get.returnValue;
      if (TEST_STUB.lsm6dsl_pin_polarity_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pin_polarity_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_polarity_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_polarity_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pin_polarity_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pin_polarity_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pin_polarity_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pin_polarity_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pin_polarity_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_all_on_int1_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_all_on_int1_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_all_on_int1_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_all_on_int1_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_all_on_int1_set.returnValue;
      if (TEST_STUB.lsm6dsl_all_on_int1_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_all_on_int1_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_all_on_int1_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_all_on_int1_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_all_on_int1_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_all_on_int1_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_all_on_int1_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_all_on_int1_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_all_on_int1_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_all_on_int1_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_all_on_int1_get.returnValue;
      if (TEST_STUB.lsm6dsl_all_on_int1_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_all_on_int1_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_all_on_int1_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_all_on_int1_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_all_on_int1_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_all_on_int1_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_all_on_int1_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_all_on_int1_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_all_on_int1_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_int_notification_set(stmdev_ctx_t *ctx, lsm6dsl_lir_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_int_notification_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_int_notification_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_int_notification_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_int_notification_set.returnValue;
      if (TEST_STUB.lsm6dsl_int_notification_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_int_notification_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_int_notification_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_int_notification_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_int_notification_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_int_notification_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_int_notification_get(stmdev_ctx_t *ctx, lsm6dsl_lir_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_int_notification_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_int_notification_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_int_notification_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_int_notification_get.returnValue;
      if (TEST_STUB.lsm6dsl_int_notification_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_int_notification_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_int_notification_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_int_notification_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_int_notification_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_int_notification_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_int_notification_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_int_notification_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_int_notification_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_wkup_threshold_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_wkup_threshold_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_wkup_threshold_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_wkup_threshold_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_wkup_threshold_set.returnValue;
      if (TEST_STUB.lsm6dsl_wkup_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_wkup_threshold_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wkup_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wkup_threshold_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_wkup_threshold_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_wkup_threshold_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_wkup_threshold_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_wkup_threshold_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_wkup_threshold_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_wkup_threshold_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_wkup_threshold_get.returnValue;
      if (TEST_STUB.lsm6dsl_wkup_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_wkup_threshold_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wkup_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wkup_threshold_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_wkup_threshold_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_wkup_threshold_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wkup_threshold_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wkup_threshold_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_wkup_threshold_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_wkup_dur_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_wkup_dur_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_wkup_dur_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_wkup_dur_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_wkup_dur_set.returnValue;
      if (TEST_STUB.lsm6dsl_wkup_dur_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_wkup_dur_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wkup_dur_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wkup_dur_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_wkup_dur_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_wkup_dur_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_wkup_dur_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_wkup_dur_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_wkup_dur_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_wkup_dur_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_wkup_dur_get.returnValue;
      if (TEST_STUB.lsm6dsl_wkup_dur_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_wkup_dur_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wkup_dur_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wkup_dur_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_wkup_dur_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_wkup_dur_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wkup_dur_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wkup_dur_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_wkup_dur_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_sleep_mode_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_sleep_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_sleep_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_sleep_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_sleep_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_gy_sleep_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_sleep_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_sleep_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_sleep_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_gy_sleep_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_sleep_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_gy_sleep_mode_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_gy_sleep_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_gy_sleep_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_gy_sleep_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_gy_sleep_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_gy_sleep_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_gy_sleep_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_sleep_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_sleep_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_gy_sleep_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_gy_sleep_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_gy_sleep_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_gy_sleep_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_gy_sleep_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_act_mode_set(stmdev_ctx_t *ctx, lsm6dsl_inact_en_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_act_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_act_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_act_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_act_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_act_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_act_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_act_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_act_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_act_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_act_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_act_mode_get(stmdev_ctx_t *ctx, lsm6dsl_inact_en_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_act_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_act_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_act_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_act_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_act_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_act_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_act_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_act_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_act_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_act_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_act_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_act_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_act_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_act_sleep_dur_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_act_sleep_dur_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_act_sleep_dur_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_act_sleep_dur_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_act_sleep_dur_set.returnValue;
      if (TEST_STUB.lsm6dsl_act_sleep_dur_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_act_sleep_dur_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_act_sleep_dur_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_act_sleep_dur_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_act_sleep_dur_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_act_sleep_dur_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_act_sleep_dur_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_act_sleep_dur_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_act_sleep_dur_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_act_sleep_dur_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_act_sleep_dur_get.returnValue;
      if (TEST_STUB.lsm6dsl_act_sleep_dur_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_act_sleep_dur_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_act_sleep_dur_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_act_sleep_dur_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_act_sleep_dur_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_act_sleep_dur_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_act_sleep_dur_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_act_sleep_dur_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_act_sleep_dur_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_src_get(stmdev_ctx_t *ctx, lsm6dsl_tap_src_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_src_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_src_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_src_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_src_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_src_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_src_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_src_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_src_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_src_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_src_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_src_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_src_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_src_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_detection_on_z_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_detection_on_z_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_detection_on_z_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_detection_on_z_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_z_set.returnValue;
      if (TEST_STUB.lsm6dsl_tap_detection_on_z_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_detection_on_z_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_z_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_z_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tap_detection_on_z_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_z_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_detection_on_z_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_detection_on_z_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_detection_on_z_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_detection_on_z_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_z_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_detection_on_z_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_detection_on_z_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_z_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_z_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_detection_on_z_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_detection_on_z_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_z_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_z_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_z_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_detection_on_y_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_detection_on_y_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_detection_on_y_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_detection_on_y_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_y_set.returnValue;
      if (TEST_STUB.lsm6dsl_tap_detection_on_y_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_detection_on_y_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_y_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_y_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tap_detection_on_y_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_y_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_detection_on_y_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_detection_on_y_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_detection_on_y_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_detection_on_y_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_y_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_detection_on_y_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_detection_on_y_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_y_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_y_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_detection_on_y_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_detection_on_y_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_y_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_y_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_y_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_detection_on_x_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_detection_on_x_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_detection_on_x_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_detection_on_x_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_x_set.returnValue;
      if (TEST_STUB.lsm6dsl_tap_detection_on_x_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_detection_on_x_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_x_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_x_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tap_detection_on_x_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_x_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_detection_on_x_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_detection_on_x_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_detection_on_x_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_detection_on_x_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_x_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_detection_on_x_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_detection_on_x_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_x_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_x_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_detection_on_x_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_detection_on_x_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_detection_on_x_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_detection_on_x_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_detection_on_x_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_threshold_x_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_threshold_x_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_threshold_x_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_threshold_x_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_threshold_x_set.returnValue;
      if (TEST_STUB.lsm6dsl_tap_threshold_x_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_threshold_x_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_threshold_x_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_threshold_x_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tap_threshold_x_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_threshold_x_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_threshold_x_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_threshold_x_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_threshold_x_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_threshold_x_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_threshold_x_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_threshold_x_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_threshold_x_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_threshold_x_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_threshold_x_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_threshold_x_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_threshold_x_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_threshold_x_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_threshold_x_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_threshold_x_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_shock_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_shock_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_shock_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_shock_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_shock_set.returnValue;
      if (TEST_STUB.lsm6dsl_tap_shock_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_shock_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_shock_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_shock_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tap_shock_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_shock_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_shock_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_shock_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_shock_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_shock_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_shock_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_shock_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_shock_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_shock_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_shock_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_shock_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_shock_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_shock_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_shock_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_shock_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_quiet_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_quiet_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_quiet_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_quiet_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_quiet_set.returnValue;
      if (TEST_STUB.lsm6dsl_tap_quiet_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_quiet_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_quiet_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_quiet_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tap_quiet_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_quiet_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_quiet_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_quiet_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_quiet_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_quiet_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_quiet_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_quiet_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_quiet_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_quiet_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_quiet_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_quiet_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_quiet_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_quiet_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_quiet_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_quiet_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_dur_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_dur_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_dur_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_dur_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_dur_set.returnValue;
      if (TEST_STUB.lsm6dsl_tap_dur_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_dur_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_dur_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_dur_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tap_dur_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_dur_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_dur_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_dur_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_dur_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_dur_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_dur_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_dur_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_dur_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_dur_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_dur_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_dur_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_dur_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_dur_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_dur_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_dur_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_mode_set(stmdev_ctx_t *ctx, lsm6dsl_single_double_tap_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_tap_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tap_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tap_mode_get(stmdev_ctx_t *ctx, lsm6dsl_single_double_tap_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tap_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tap_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tap_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tap_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_tap_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tap_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tap_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tap_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tap_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tap_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tap_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_6d_feed_data_set(stmdev_ctx_t *ctx, lsm6dsl_low_pass_on_6d_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_6d_feed_data_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_6d_feed_data_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_6d_feed_data_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_6d_feed_data_set.returnValue;
      if (TEST_STUB.lsm6dsl_6d_feed_data_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_6d_feed_data_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_6d_feed_data_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_6d_feed_data_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_6d_feed_data_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_6d_feed_data_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_6d_feed_data_get(stmdev_ctx_t *ctx, lsm6dsl_low_pass_on_6d_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_6d_feed_data_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_6d_feed_data_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_6d_feed_data_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_6d_feed_data_get.returnValue;
      if (TEST_STUB.lsm6dsl_6d_feed_data_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_6d_feed_data_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_6d_feed_data_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_6d_feed_data_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_6d_feed_data_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_6d_feed_data_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_6d_feed_data_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_6d_feed_data_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_6d_feed_data_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_6d_threshold_set(stmdev_ctx_t *ctx, lsm6dsl_sixd_ths_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_6d_threshold_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_6d_threshold_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_6d_threshold_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_6d_threshold_set.returnValue;
      if (TEST_STUB.lsm6dsl_6d_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_6d_threshold_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_6d_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_6d_threshold_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_6d_threshold_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_6d_threshold_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_6d_threshold_get(stmdev_ctx_t *ctx, lsm6dsl_sixd_ths_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_6d_threshold_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_6d_threshold_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_6d_threshold_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_6d_threshold_get.returnValue;
      if (TEST_STUB.lsm6dsl_6d_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_6d_threshold_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_6d_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_6d_threshold_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_6d_threshold_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_6d_threshold_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_6d_threshold_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_6d_threshold_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_6d_threshold_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_4d_mode_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_4d_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_4d_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_4d_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_4d_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_4d_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_4d_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_4d_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_4d_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_4d_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_4d_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_4d_mode_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_4d_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_4d_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_4d_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_4d_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_4d_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_4d_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_4d_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_4d_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_4d_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_4d_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_4d_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_4d_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_4d_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_ff_dur_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_ff_dur_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_ff_dur_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_ff_dur_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_ff_dur_set.returnValue;
      if (TEST_STUB.lsm6dsl_ff_dur_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_ff_dur_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_ff_dur_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_ff_dur_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_ff_dur_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_ff_dur_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_ff_dur_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_ff_dur_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_ff_dur_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_ff_dur_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_ff_dur_get.returnValue;
      if (TEST_STUB.lsm6dsl_ff_dur_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_ff_dur_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_ff_dur_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_ff_dur_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_ff_dur_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_ff_dur_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_ff_dur_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_ff_dur_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_ff_dur_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_ff_threshold_set(stmdev_ctx_t *ctx, lsm6dsl_ff_ths_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_ff_threshold_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_ff_threshold_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_ff_threshold_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_ff_threshold_set.returnValue;
      if (TEST_STUB.lsm6dsl_ff_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_ff_threshold_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_ff_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_ff_threshold_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_ff_threshold_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_ff_threshold_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_ff_threshold_get(stmdev_ctx_t *ctx, lsm6dsl_ff_ths_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_ff_threshold_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_ff_threshold_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_ff_threshold_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_ff_threshold_get.returnValue;
      if (TEST_STUB.lsm6dsl_ff_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_ff_threshold_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_ff_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_ff_threshold_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_ff_threshold_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_ff_threshold_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_ff_threshold_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_ff_threshold_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_ff_threshold_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_watermark_set(stmdev_ctx_t *ctx, uint16_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_watermark_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_watermark_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_watermark_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_watermark_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_watermark_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_watermark_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_watermark_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_watermark_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_watermark_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_watermark_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_watermark_get(stmdev_ctx_t *ctx, uint16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_watermark_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_watermark_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_watermark_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_watermark_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_watermark_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_watermark_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_watermark_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_watermark_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_watermark_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_watermark_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_watermark_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_watermark_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_watermark_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_data_level_get(stmdev_ctx_t *ctx, uint16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_data_level_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_data_level_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_data_level_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_data_level_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_data_level_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_data_level_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_data_level_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_data_level_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_data_level_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_data_level_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_data_level_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_data_level_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_data_level_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_wtm_flag_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_wtm_flag_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_wtm_flag_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_wtm_flag_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_wtm_flag_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_wtm_flag_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_wtm_flag_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_wtm_flag_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_wtm_flag_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_wtm_flag_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_wtm_flag_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_wtm_flag_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_wtm_flag_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_wtm_flag_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_pattern_get(stmdev_ctx_t *ctx, uint16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_pattern_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_pattern_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_pattern_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_pattern_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_pattern_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_pattern_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_pattern_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_pattern_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_pattern_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_pattern_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_pattern_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_pattern_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_pattern_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_temp_batch_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_temp_batch_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_temp_batch_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_temp_batch_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_temp_batch_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_temp_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_temp_batch_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_temp_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_temp_batch_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_temp_batch_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_temp_batch_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_temp_batch_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_temp_batch_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_temp_batch_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_temp_batch_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_temp_batch_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_temp_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_temp_batch_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_temp_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_temp_batch_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_temp_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_temp_batch_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_temp_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_temp_batch_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_temp_batch_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_write_trigger_set(stmdev_ctx_t *ctx, lsm6dsl_trigger_fifo_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_write_trigger_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_write_trigger_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_write_trigger_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_write_trigger_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_write_trigger_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_write_trigger_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_write_trigger_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_write_trigger_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_write_trigger_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_write_trigger_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_write_trigger_get(stmdev_ctx_t *ctx, lsm6dsl_trigger_fifo_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_write_trigger_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_write_trigger_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_write_trigger_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_write_trigger_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_write_trigger_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_write_trigger_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_write_trigger_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_write_trigger_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_write_trigger_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_write_trigger_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_write_trigger_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_write_trigger_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_write_trigger_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_pedo_and_timestamp_batch_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_pedo_and_timestamp_batch_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_pedo_and_timestamp_batch_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_pedo_and_timestamp_batch_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_pedo_and_timestamp_batch_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_xl_batch_set(stmdev_ctx_t *ctx, lsm6dsl_dec_fifo_xl_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_xl_batch_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_xl_batch_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_xl_batch_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_xl_batch_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_xl_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_xl_batch_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_xl_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_xl_batch_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_xl_batch_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_xl_batch_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_xl_batch_get(stmdev_ctx_t *ctx, lsm6dsl_dec_fifo_xl_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_xl_batch_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_xl_batch_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_xl_batch_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_xl_batch_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_xl_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_xl_batch_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_xl_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_xl_batch_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_xl_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_xl_batch_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_xl_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_xl_batch_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_xl_batch_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_gy_batch_set(stmdev_ctx_t *ctx, lsm6dsl_dec_fifo_gyro_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_gy_batch_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_gy_batch_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_gy_batch_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_gy_batch_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_gy_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_gy_batch_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_gy_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_gy_batch_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_gy_batch_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_gy_batch_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_gy_batch_get(stmdev_ctx_t *ctx, lsm6dsl_dec_fifo_gyro_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_gy_batch_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_gy_batch_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_gy_batch_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_gy_batch_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_gy_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_gy_batch_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_gy_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_gy_batch_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_gy_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_gy_batch_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_gy_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_gy_batch_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_gy_batch_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_dataset_3_batch_set(stmdev_ctx_t *ctx, lsm6dsl_dec_ds3_fifo_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_dataset_3_batch_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_dataset_3_batch_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_dataset_3_batch_get(stmdev_ctx_t *ctx, lsm6dsl_dec_ds3_fifo_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_dataset_3_batch_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_dataset_3_batch_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_dataset_4_batch_set(stmdev_ctx_t *ctx, lsm6dsl_dec_ds4_fifo_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_dataset_4_batch_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_dataset_4_batch_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_dataset_4_batch_get(stmdev_ctx_t *ctx, lsm6dsl_dec_ds4_fifo_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_dataset_4_batch_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_dataset_4_batch_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_xl_gy_8bit_format_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_xl_gy_8bit_format_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_xl_gy_8bit_format_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_xl_gy_8bit_format_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_xl_gy_8bit_format_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_stop_on_wtm_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_stop_on_wtm_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_stop_on_wtm_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_stop_on_wtm_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_stop_on_wtm_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_stop_on_wtm_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_mode_set(stmdev_ctx_t *ctx, lsm6dsl_fifo_mode_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_mode_get(stmdev_ctx_t *ctx, lsm6dsl_fifo_mode_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_data_rate_set(stmdev_ctx_t *ctx, lsm6dsl_odr_fifo_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_data_rate_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_data_rate_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_data_rate_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_data_rate_set.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_data_rate_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_data_rate_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_data_rate_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_data_rate_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_fifo_data_rate_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_data_rate_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_fifo_data_rate_get(stmdev_ctx_t *ctx, lsm6dsl_odr_fifo_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_fifo_data_rate_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_fifo_data_rate_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_fifo_data_rate_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_fifo_data_rate_get.returnValue;
      if (TEST_STUB.lsm6dsl_fifo_data_rate_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_fifo_data_rate_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_data_rate_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_data_rate_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_fifo_data_rate_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_fifo_data_rate_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_fifo_data_rate_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_fifo_data_rate_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_fifo_data_rate_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_polarity_set(stmdev_ctx_t *ctx, lsm6dsl_den_lh_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_polarity_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_polarity_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_polarity_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_polarity_set.returnValue;
      if (TEST_STUB.lsm6dsl_den_polarity_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_polarity_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_polarity_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_polarity_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_den_polarity_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_polarity_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_polarity_get(stmdev_ctx_t *ctx, lsm6dsl_den_lh_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_polarity_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_polarity_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_polarity_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_polarity_get.returnValue;
      if (TEST_STUB.lsm6dsl_den_polarity_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_polarity_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_polarity_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_polarity_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_den_polarity_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_den_polarity_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_polarity_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_polarity_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_polarity_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_mode_set(stmdev_ctx_t *ctx, lsm6dsl_den_mode_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_den_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_den_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_mode_get(stmdev_ctx_t *ctx, lsm6dsl_den_mode_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_den_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_den_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_den_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_enable_set(stmdev_ctx_t *ctx, lsm6dsl_den_xl_en_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_enable_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_enable_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_enable_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_enable_set.returnValue;
      if (TEST_STUB.lsm6dsl_den_enable_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_enable_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_enable_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_enable_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_den_enable_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_enable_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_enable_get(stmdev_ctx_t *ctx, lsm6dsl_den_xl_en_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_enable_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_enable_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_enable_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_enable_get.returnValue;
      if (TEST_STUB.lsm6dsl_den_enable_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_enable_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_enable_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_enable_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_den_enable_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_den_enable_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_enable_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_enable_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_enable_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_mark_axis_z_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_mark_axis_z_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_mark_axis_z_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_mark_axis_z_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_z_set.returnValue;
      if (TEST_STUB.lsm6dsl_den_mark_axis_z_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_mark_axis_z_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_z_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_z_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_den_mark_axis_z_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_z_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_mark_axis_z_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_mark_axis_z_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_mark_axis_z_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_mark_axis_z_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_z_get.returnValue;
      if (TEST_STUB.lsm6dsl_den_mark_axis_z_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_mark_axis_z_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_z_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_z_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_den_mark_axis_z_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_den_mark_axis_z_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_z_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_z_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_z_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_mark_axis_y_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_mark_axis_y_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_mark_axis_y_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_mark_axis_y_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_y_set.returnValue;
      if (TEST_STUB.lsm6dsl_den_mark_axis_y_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_mark_axis_y_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_y_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_y_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_den_mark_axis_y_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_y_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_mark_axis_y_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_mark_axis_y_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_mark_axis_y_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_mark_axis_y_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_y_get.returnValue;
      if (TEST_STUB.lsm6dsl_den_mark_axis_y_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_mark_axis_y_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_y_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_y_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_den_mark_axis_y_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_den_mark_axis_y_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_y_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_y_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_y_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_mark_axis_x_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_mark_axis_x_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_mark_axis_x_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_mark_axis_x_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_x_set.returnValue;
      if (TEST_STUB.lsm6dsl_den_mark_axis_x_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_mark_axis_x_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_x_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_x_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_den_mark_axis_x_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_x_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_den_mark_axis_x_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_den_mark_axis_x_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_den_mark_axis_x_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_den_mark_axis_x_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_x_get.returnValue;
      if (TEST_STUB.lsm6dsl_den_mark_axis_x_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_den_mark_axis_x_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_x_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_x_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_den_mark_axis_x_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_den_mark_axis_x_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_den_mark_axis_x_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_den_mark_axis_x_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_den_mark_axis_x_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_step_reset_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_step_reset_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_step_reset_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_step_reset_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_step_reset_set.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_step_reset_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_step_reset_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_step_reset_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_step_reset_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pedo_step_reset_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_step_reset_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_step_reset_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_step_reset_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_step_reset_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_step_reset_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_step_reset_get.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_step_reset_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_step_reset_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_step_reset_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_step_reset_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pedo_step_reset_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pedo_step_reset_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_step_reset_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_step_reset_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_step_reset_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_sens_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_sens_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_sens_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_sens_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_sens_set.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_sens_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_sens_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_sens_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_sens_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pedo_sens_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_sens_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_sens_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_sens_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_sens_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_sens_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_sens_get.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_sens_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_sens_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_sens_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_sens_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pedo_sens_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pedo_sens_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_sens_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_sens_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_sens_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_threshold_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_threshold_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_threshold_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_threshold_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_threshold_set.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_threshold_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_threshold_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pedo_threshold_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_threshold_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_threshold_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_threshold_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_threshold_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_threshold_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_threshold_get.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_threshold_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_threshold_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pedo_threshold_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pedo_threshold_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_threshold_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_threshold_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_threshold_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_full_scale_set(stmdev_ctx_t *ctx, lsm6dsl_pedo_fs_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_full_scale_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_full_scale_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_full_scale_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_full_scale_set.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_full_scale_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_full_scale_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_full_scale_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_full_scale_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pedo_full_scale_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_full_scale_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_full_scale_get(stmdev_ctx_t *ctx, lsm6dsl_pedo_fs_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_full_scale_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_full_scale_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_full_scale_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_full_scale_get.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_full_scale_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_full_scale_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_full_scale_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_full_scale_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pedo_full_scale_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pedo_full_scale_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_full_scale_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_full_scale_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_full_scale_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_debounce_steps_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_debounce_steps_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_debounce_steps_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_debounce_steps_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_debounce_steps_set.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_debounce_steps_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_debounce_steps_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_debounce_steps_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_debounce_steps_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pedo_debounce_steps_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_debounce_steps_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_debounce_steps_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_debounce_steps_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_debounce_steps_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_debounce_steps_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_debounce_steps_get.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_debounce_steps_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_debounce_steps_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_debounce_steps_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_debounce_steps_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pedo_debounce_steps_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pedo_debounce_steps_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_debounce_steps_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_debounce_steps_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_debounce_steps_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_timeout_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_timeout_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_timeout_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_timeout_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_timeout_set.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_timeout_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_timeout_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_timeout_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_timeout_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_pedo_timeout_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_timeout_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_timeout_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_timeout_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_timeout_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_timeout_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_timeout_get.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_timeout_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_timeout_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_timeout_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_timeout_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pedo_timeout_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_pedo_timeout_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_timeout_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_timeout_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_timeout_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_steps_period_set(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_steps_period_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_steps_period_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_steps_period_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_steps_period_set.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_steps_period_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_steps_period_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_steps_period_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_steps_period_set.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pedo_steps_period_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_pedo_steps_period_set.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_steps_period_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_steps_period_set.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_steps_period_set.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_pedo_steps_period_get(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_pedo_steps_period_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_pedo_steps_period_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_pedo_steps_period_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_pedo_steps_period_get.returnValue;
      if (TEST_STUB.lsm6dsl_pedo_steps_period_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_pedo_steps_period_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_steps_period_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_steps_period_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_pedo_steps_period_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_pedo_steps_period_get.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_pedo_steps_period_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_pedo_steps_period_get.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_pedo_steps_period_get.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_motion_sens_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_motion_sens_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_motion_sens_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_motion_sens_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_motion_sens_set.returnValue;
      if (TEST_STUB.lsm6dsl_motion_sens_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_motion_sens_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_motion_sens_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_motion_sens_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_motion_sens_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_motion_sens_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_motion_sens_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_motion_sens_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_motion_sens_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_motion_sens_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_motion_sens_get.returnValue;
      if (TEST_STUB.lsm6dsl_motion_sens_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_motion_sens_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_motion_sens_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_motion_sens_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_motion_sens_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_motion_sens_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_motion_sens_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_motion_sens_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_motion_sens_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_motion_threshold_set(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_motion_threshold_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_motion_threshold_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_motion_threshold_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_motion_threshold_set.returnValue;
      if (TEST_STUB.lsm6dsl_motion_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_motion_threshold_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_motion_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_motion_threshold_set.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_motion_threshold_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_motion_threshold_set.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_motion_threshold_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_motion_threshold_set.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_motion_threshold_set.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_motion_threshold_get(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_motion_threshold_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_motion_threshold_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_motion_threshold_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_motion_threshold_get.returnValue;
      if (TEST_STUB.lsm6dsl_motion_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_motion_threshold_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_motion_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_motion_threshold_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_motion_threshold_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_motion_threshold_get.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_motion_threshold_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_motion_threshold_get.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_motion_threshold_get.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tilt_sens_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tilt_sens_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tilt_sens_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tilt_sens_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tilt_sens_set.returnValue;
      if (TEST_STUB.lsm6dsl_tilt_sens_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tilt_sens_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_sens_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_sens_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_tilt_sens_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tilt_sens_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tilt_sens_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tilt_sens_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tilt_sens_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tilt_sens_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tilt_sens_get.returnValue;
      if (TEST_STUB.lsm6dsl_tilt_sens_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tilt_sens_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_sens_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_sens_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tilt_sens_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tilt_sens_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_sens_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_sens_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tilt_sens_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_wrist_tilt_sens_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_wrist_tilt_sens_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_wrist_tilt_sens_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_wrist_tilt_sens_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_wrist_tilt_sens_set.returnValue;
      if (TEST_STUB.lsm6dsl_wrist_tilt_sens_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_wrist_tilt_sens_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wrist_tilt_sens_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wrist_tilt_sens_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_wrist_tilt_sens_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_wrist_tilt_sens_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_wrist_tilt_sens_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_wrist_tilt_sens_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_wrist_tilt_sens_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_wrist_tilt_sens_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_wrist_tilt_sens_get.returnValue;
      if (TEST_STUB.lsm6dsl_wrist_tilt_sens_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_wrist_tilt_sens_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wrist_tilt_sens_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wrist_tilt_sens_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_wrist_tilt_sens_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_wrist_tilt_sens_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_wrist_tilt_sens_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_wrist_tilt_sens_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_wrist_tilt_sens_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tilt_latency_set(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tilt_latency_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tilt_latency_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tilt_latency_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tilt_latency_set.returnValue;
      if (TEST_STUB.lsm6dsl_tilt_latency_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tilt_latency_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_latency_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_latency_set.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tilt_latency_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_tilt_latency_set.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_latency_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_latency_set.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tilt_latency_set.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tilt_latency_get(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tilt_latency_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tilt_latency_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tilt_latency_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tilt_latency_get.returnValue;
      if (TEST_STUB.lsm6dsl_tilt_latency_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tilt_latency_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_latency_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_latency_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tilt_latency_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_tilt_latency_get.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_latency_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_latency_get.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tilt_latency_get.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tilt_threshold_set(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tilt_threshold_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tilt_threshold_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tilt_threshold_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tilt_threshold_set.returnValue;
      if (TEST_STUB.lsm6dsl_tilt_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tilt_threshold_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_threshold_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_threshold_set.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tilt_threshold_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_tilt_threshold_set.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_threshold_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_threshold_set.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tilt_threshold_set.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tilt_threshold_get(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tilt_threshold_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tilt_threshold_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tilt_threshold_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tilt_threshold_get.returnValue;
      if (TEST_STUB.lsm6dsl_tilt_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tilt_threshold_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_threshold_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_threshold_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tilt_threshold_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_tilt_threshold_get.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_threshold_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_threshold_get.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tilt_threshold_get.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tilt_src_set(stmdev_ctx_t *ctx, lsm6dsl_a_wrist_tilt_mask_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tilt_src_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tilt_src_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tilt_src_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tilt_src_set.returnValue;
      if (TEST_STUB.lsm6dsl_tilt_src_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tilt_src_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_src_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_src_set.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tilt_src_set.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tilt_src_set.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_src_set.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_src_set.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tilt_src_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_tilt_src_get(stmdev_ctx_t *ctx, lsm6dsl_a_wrist_tilt_mask_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_tilt_src_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_tilt_src_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_tilt_src_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_tilt_src_get.returnValue;
      if (TEST_STUB.lsm6dsl_tilt_src_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_tilt_src_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_src_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_src_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_tilt_src_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_tilt_src_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_tilt_src_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_tilt_src_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_tilt_src_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_soft_iron_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_soft_iron_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_soft_iron_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_soft_iron_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_soft_iron_set.returnValue;
      if (TEST_STUB.lsm6dsl_mag_soft_iron_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_soft_iron_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_soft_iron_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_soft_iron_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_mag_soft_iron_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_soft_iron_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_soft_iron_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_soft_iron_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_soft_iron_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_soft_iron_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_soft_iron_get.returnValue;
      if (TEST_STUB.lsm6dsl_mag_soft_iron_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_soft_iron_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_soft_iron_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_soft_iron_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_mag_soft_iron_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_mag_soft_iron_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_soft_iron_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_soft_iron_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_soft_iron_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_hard_iron_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_hard_iron_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_hard_iron_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_hard_iron_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_hard_iron_set.returnValue;
      if (TEST_STUB.lsm6dsl_mag_hard_iron_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_hard_iron_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_hard_iron_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_hard_iron_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_mag_hard_iron_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_hard_iron_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_hard_iron_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_hard_iron_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_hard_iron_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_hard_iron_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_hard_iron_get.returnValue;
      if (TEST_STUB.lsm6dsl_mag_hard_iron_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_hard_iron_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_hard_iron_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_hard_iron_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_mag_hard_iron_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_mag_hard_iron_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_hard_iron_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_hard_iron_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_hard_iron_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_soft_iron_mat_set(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_soft_iron_mat_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.returnValue;
      if (TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_soft_iron_mat_set.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_soft_iron_mat_get(stmdev_ctx_t *ctx, uint8_t *buff)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_soft_iron_mat_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.returnValue;
      if (TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *buff = TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.buff.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.buff.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.buff.value = *buff;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_soft_iron_mat_get.redirectFuncPtr(ctx, buff);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_offset_set(stmdev_ctx_t *ctx, int16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_offset_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_offset_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_offset_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_offset_set.returnValue;
      if (TEST_STUB.lsm6dsl_mag_offset_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_offset_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_offset_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_offset_set.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_mag_offset_set.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_mag_offset_set.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_offset_set.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_offset_set.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_offset_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_mag_offset_get(stmdev_ctx_t *ctx, int16_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_mag_offset_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_mag_offset_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_mag_offset_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_mag_offset_get.returnValue;
      if (TEST_STUB.lsm6dsl_mag_offset_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_mag_offset_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_offset_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_offset_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_mag_offset_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_mag_offset_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_mag_offset_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_mag_offset_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_mag_offset_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_func_en_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_func_en_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_func_en_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_func_en_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_func_en_set.returnValue;
      if (TEST_STUB.lsm6dsl_func_en_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_func_en_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_func_en_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_func_en_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_func_en_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_func_en_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_sync_sens_frame_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_sync_sens_frame_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_sync_sens_frame_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_sync_sens_frame_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_sync_sens_frame_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_sync_sens_frame_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_sync_sens_ratio_set(stmdev_ctx_t *ctx, lsm6dsl_rr_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_sync_sens_ratio_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_sync_sens_ratio_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_sync_sens_ratio_get(stmdev_ctx_t *ctx, lsm6dsl_rr_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_sync_sens_ratio_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_sync_sens_ratio_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_master_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_master_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_master_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_master_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_master_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_master_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_master_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_master_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_master_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_master_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_master_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_master_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_master_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_master_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_master_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_master_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_master_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_master_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_master_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_master_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_master_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_master_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_master_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_master_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_master_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_pass_through_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_pass_through_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_pass_through_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_pass_through_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_pass_through_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_pass_through_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_pass_through_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_pass_through_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_pass_through_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_pass_through_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_pass_through_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_pass_through_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_pass_through_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_pass_through_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_pass_through_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_pass_through_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_pass_through_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_pass_through_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_pass_through_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_pass_through_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_pass_through_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_pass_through_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_pass_through_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_pass_through_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_pass_through_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_pin_mode_set(stmdev_ctx_t *ctx, lsm6dsl_pull_up_en_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_pin_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_pin_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_pin_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_pin_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_pin_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_pin_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_pin_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_pin_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_pin_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_pin_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_pin_mode_get(stmdev_ctx_t *ctx, lsm6dsl_pull_up_en_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_pin_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_pin_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_pin_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_pin_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_pin_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_pin_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_pin_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_pin_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_pin_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_pin_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_pin_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_pin_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_pin_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_syncro_mode_set(stmdev_ctx_t *ctx, lsm6dsl_start_config_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_syncro_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_syncro_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_syncro_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_syncro_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_syncro_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_syncro_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_syncro_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_syncro_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_syncro_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_syncro_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_syncro_mode_get(stmdev_ctx_t *ctx, lsm6dsl_start_config_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_syncro_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_syncro_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_syncro_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_syncro_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_syncro_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_syncro_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_syncro_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_syncro_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_syncro_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_syncro_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_syncro_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_syncro_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_syncro_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_drdy_on_int1_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_drdy_on_int1_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_drdy_on_int1_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_drdy_on_int1_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_drdy_on_int1_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_drdy_on_int1_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_read_data_raw_get(stmdev_ctx_t *ctx, lsm6dsl_emb_sh_read_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_read_data_raw_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_read_data_raw_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_read_data_raw_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_read_data_raw_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_read_data_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_read_data_raw_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_read_data_raw_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_read_data_raw_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_read_data_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_read_data_raw_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_read_data_raw_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_read_data_raw_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_read_data_raw_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_cmd_sens_sync_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_cmd_sens_sync_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_cmd_sens_sync_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_cmd_sens_sync_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_cmd_sens_sync_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_cmd_sens_sync_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_spi_sync_error_set(stmdev_ctx_t *ctx, uint8_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_spi_sync_error_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_spi_sync_error_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_spi_sync_error_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_spi_sync_error_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_spi_sync_error_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_spi_sync_error_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_spi_sync_error_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_spi_sync_error_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_spi_sync_error_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_spi_sync_error_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_spi_sync_error_get(stmdev_ctx_t *ctx, uint8_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_spi_sync_error_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_spi_sync_error_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_spi_sync_error_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_spi_sync_error_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_spi_sync_error_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_spi_sync_error_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_spi_sync_error_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_spi_sync_error_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_spi_sync_error_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_spi_sync_error_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_spi_sync_error_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_spi_sync_error_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_spi_sync_error_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_num_of_dev_connected_set(stmdev_ctx_t *ctx, lsm6dsl_aux_sens_on_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_num_of_dev_connected_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_num_of_dev_connected_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_num_of_dev_connected_get(stmdev_ctx_t *ctx, lsm6dsl_aux_sens_on_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_num_of_dev_connected_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_num_of_dev_connected_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_cfg_write(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_write_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_cfg_write.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_cfg_write";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_cfg_write.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_cfg_write.returnValue;
      if (TEST_STUB.lsm6dsl_sh_cfg_write.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_cfg_write.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_cfg_write.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_cfg_write.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_cfg_write.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_cfg_write.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_cfg_write.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_cfg_write.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_cfg_write.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slv0_cfg_read(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_read_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slv0_cfg_read.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slv0_cfg_read";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slv0_cfg_read.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slv0_cfg_read.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slv0_cfg_read.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slv0_cfg_read.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slv0_cfg_read.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slv0_cfg_read.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_slv0_cfg_read.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_slv0_cfg_read.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slv0_cfg_read.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slv0_cfg_read.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slv0_cfg_read.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slv1_cfg_read(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_read_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slv1_cfg_read.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slv1_cfg_read";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slv1_cfg_read.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slv1_cfg_read.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slv1_cfg_read.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slv1_cfg_read.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slv1_cfg_read.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slv1_cfg_read.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_slv1_cfg_read.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_slv1_cfg_read.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slv1_cfg_read.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slv1_cfg_read.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slv1_cfg_read.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slv2_cfg_read(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_read_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slv2_cfg_read.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slv2_cfg_read";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slv2_cfg_read.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slv2_cfg_read.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slv2_cfg_read.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slv2_cfg_read.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slv2_cfg_read.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slv2_cfg_read.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_slv2_cfg_read.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_slv2_cfg_read.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slv2_cfg_read.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slv2_cfg_read.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slv2_cfg_read.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slv3_cfg_read(stmdev_ctx_t *ctx, lsm6dsl_sh_cfg_read_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slv3_cfg_read.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slv3_cfg_read";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slv3_cfg_read.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slv3_cfg_read.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slv3_cfg_read.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slv3_cfg_read.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slv3_cfg_read.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slv3_cfg_read.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_slv3_cfg_read.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_slv3_cfg_read.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slv3_cfg_read.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slv3_cfg_read.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slv3_cfg_read.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slave_0_dec_set(stmdev_ctx_t *ctx, lsm6dsl_slave0_rate_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slave_0_dec_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slave_0_dec_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slave_0_dec_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_0_dec_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slave_0_dec_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slave_0_dec_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_0_dec_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_0_dec_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_slave_0_dec_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_0_dec_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slave_0_dec_get(stmdev_ctx_t *ctx, lsm6dsl_slave0_rate_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slave_0_dec_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slave_0_dec_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slave_0_dec_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_0_dec_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slave_0_dec_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slave_0_dec_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_0_dec_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_0_dec_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_slave_0_dec_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_slave_0_dec_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_0_dec_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_0_dec_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_0_dec_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_write_mode_set(stmdev_ctx_t *ctx, lsm6dsl_write_once_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_write_mode_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_write_mode_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_write_mode_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_write_mode_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_write_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_write_mode_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_write_mode_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_write_mode_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_write_mode_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_write_mode_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_write_mode_get(stmdev_ctx_t *ctx, lsm6dsl_write_once_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_write_mode_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_write_mode_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_write_mode_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_write_mode_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_write_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_write_mode_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_write_mode_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_write_mode_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_write_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_write_mode_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_write_mode_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_write_mode_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_write_mode_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slave_1_dec_set(stmdev_ctx_t *ctx, lsm6dsl_slave1_rate_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slave_1_dec_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slave_1_dec_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slave_1_dec_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_1_dec_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slave_1_dec_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slave_1_dec_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_1_dec_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_1_dec_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_slave_1_dec_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_1_dec_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slave_1_dec_get(stmdev_ctx_t *ctx, lsm6dsl_slave1_rate_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slave_1_dec_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slave_1_dec_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slave_1_dec_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_1_dec_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slave_1_dec_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slave_1_dec_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_1_dec_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_1_dec_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_slave_1_dec_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_slave_1_dec_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_1_dec_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_1_dec_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_1_dec_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slave_2_dec_set(stmdev_ctx_t *ctx, lsm6dsl_slave2_rate_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slave_2_dec_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slave_2_dec_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slave_2_dec_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_2_dec_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slave_2_dec_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slave_2_dec_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_2_dec_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_2_dec_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_slave_2_dec_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_2_dec_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slave_2_dec_get(stmdev_ctx_t *ctx, lsm6dsl_slave2_rate_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slave_2_dec_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slave_2_dec_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slave_2_dec_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_2_dec_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slave_2_dec_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slave_2_dec_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_2_dec_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_2_dec_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_slave_2_dec_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_slave_2_dec_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_2_dec_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_2_dec_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_2_dec_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slave_3_dec_set(stmdev_ctx_t *ctx, lsm6dsl_slave3_rate_t val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slave_3_dec_set.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slave_3_dec_set";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slave_3_dec_set.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_3_dec_set.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slave_3_dec_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slave_3_dec_set.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_3_dec_set.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_3_dec_set.ctx.value = *ctx;
      }
    }
      TEST_STUB.lsm6dsl_sh_slave_3_dec_set.val = val;
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_3_dec_set.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

int32_t lsm6dsl_sh_slave_3_dec_get(stmdev_ctx_t *ctx, lsm6dsl_slave3_rate_t *val)
{
  int32_t returnValue = {0};
  TEST_STUB.lsm6dsl_sh_slave_3_dec_get.callcount++;
  if ((TEST_STUB.TEST_TRACE.trace_enabled == STUB_OPTION_TRACE_ON) && (TEST_STUB.TEST_TRACE.trace_buffer != NULL))
    if (TEST_STUB.TEST_TRACE.trace_buffer_index < TEST_STUB.TEST_TRACE.trace_buffer_length)
  {
    TEST_STUB.TEST_TRACE.trace_buffer[TEST_STUB.TEST_TRACE.trace_buffer_index] = "lsm6dsl_sh_slave_3_dec_get";
    TEST_STUB.TEST_TRACE.trace_buffer_index++;
  }
  switch (TEST_STUB.lsm6dsl_sh_slave_3_dec_get.stub_option)
  {
    case STUB_OPTION_VALUE:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_3_dec_get.returnValue;
      if (TEST_STUB.lsm6dsl_sh_slave_3_dec_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *ctx = TEST_STUB.lsm6dsl_sh_slave_3_dec_get.ctx.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_3_dec_get.ctx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_3_dec_get.ctx.value = *ctx;
      }
    }
      if (TEST_STUB.lsm6dsl_sh_slave_3_dec_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *val = TEST_STUB.lsm6dsl_sh_slave_3_dec_get.val.value;
    }
    else
    {
      if (TEST_STUB.lsm6dsl_sh_slave_3_dec_get.val.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.lsm6dsl_sh_slave_3_dec_get.val.value = *val;
      }
    }
      break;

    case STUB_OPTION_REDIRECT:
      returnValue = TEST_STUB.lsm6dsl_sh_slave_3_dec_get.redirectFuncPtr(ctx, val);
      break;

    default:
      break;

  }

  return returnValue;
}

void TEST_CALL_IMU_Handler_Init()
{
  TEST_STUB.IMU_Handler_Init.callcount++;
  IMU_Handler_Init();
}

void TEST_CALL_IMU_Handler_HandleInterrupt()
{
  TEST_STUB.IMU_Handler_HandleInterrupt.callcount++;
  IMU_Handler_HandleInterrupt();
}

IMU_Handler_Data TEST_CALL_IMU_Handler_GetData()
{
  TEST_STUB.IMU_Handler_GetData.callcount++;
  return IMU_Handler_GetData();
}

