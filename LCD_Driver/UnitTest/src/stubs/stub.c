/**
 * @file stub.c
 *
 * @brief This file contains the stubs for the functions
 *
 */
#include "types.h"
#include "stub.h"
TEST_STUB_TYPE TEST_STUB = {0};

HAL_StatusTypeDef HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_RCCEx_PeriphCLKConfig.callcount++;
  switch (TEST_STUB.HAL_RCCEx_PeriphCLKConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCCEx_PeriphCLKConfig.returnValue;
    if (TEST_STUB.HAL_RCCEx_PeriphCLKConfig.PeriphClkInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *PeriphClkInit = TEST_STUB.HAL_RCCEx_PeriphCLKConfig.PeriphClkInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCCEx_PeriphCLKConfig.PeriphClkInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCCEx_PeriphCLKConfig.PeriphClkInit.value = *PeriphClkInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCCEx_PeriphCLKConfig.redirectFuncPtr(PeriphClkInit);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_RCCEx_GetPeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit)
{
  TEST_STUB.HAL_RCCEx_GetPeriphCLKConfig.callcount++;
  switch (TEST_STUB.HAL_RCCEx_GetPeriphCLKConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_RCCEx_GetPeriphCLKConfig.PeriphClkInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *PeriphClkInit = TEST_STUB.HAL_RCCEx_GetPeriphCLKConfig.PeriphClkInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCCEx_GetPeriphCLKConfig.PeriphClkInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCCEx_GetPeriphCLKConfig.PeriphClkInit.value = *PeriphClkInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCCEx_GetPeriphCLKConfig.redirectFuncPtr(PeriphClkInit);
    break;

  default:
    break;
  }
}

uint32_t HAL_RCCEx_GetPeriphCLKFreq(uint32_t PeriphClk)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_RCCEx_GetPeriphCLKFreq.callcount++;
  switch (TEST_STUB.HAL_RCCEx_GetPeriphCLKFreq.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCCEx_GetPeriphCLKFreq.returnValue;
    TEST_STUB.HAL_RCCEx_GetPeriphCLKFreq.PeriphClk = PeriphClk;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCCEx_GetPeriphCLKFreq.redirectFuncPtr(PeriphClk);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_RCCEx_SelectLSEMode(uint8_t Mode)
{
  TEST_STUB.HAL_RCCEx_SelectLSEMode.callcount++;
  switch (TEST_STUB.HAL_RCCEx_SelectLSEMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_RCCEx_SelectLSEMode.Mode = Mode;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCCEx_SelectLSEMode.redirectFuncPtr(Mode);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_RCCEx_EnablePLLI2S(RCC_PLLI2SInitTypeDef *PLLI2SInit)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_RCCEx_EnablePLLI2S.callcount++;
  switch (TEST_STUB.HAL_RCCEx_EnablePLLI2S.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCCEx_EnablePLLI2S.returnValue;
    if (TEST_STUB.HAL_RCCEx_EnablePLLI2S.PLLI2SInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *PLLI2SInit = TEST_STUB.HAL_RCCEx_EnablePLLI2S.PLLI2SInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCCEx_EnablePLLI2S.PLLI2SInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCCEx_EnablePLLI2S.PLLI2SInit.value = *PLLI2SInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCCEx_EnablePLLI2S.redirectFuncPtr(PLLI2SInit);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_RCCEx_DisablePLLI2S(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_RCCEx_DisablePLLI2S.callcount++;
  switch (TEST_STUB.HAL_RCCEx_DisablePLLI2S.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCCEx_DisablePLLI2S.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCCEx_DisablePLLI2S.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_RCCEx_EnablePLLSAI(RCC_PLLSAIInitTypeDef *PLLSAIInit)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_RCCEx_EnablePLLSAI.callcount++;
  switch (TEST_STUB.HAL_RCCEx_EnablePLLSAI.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCCEx_EnablePLLSAI.returnValue;
    if (TEST_STUB.HAL_RCCEx_EnablePLLSAI.PLLSAIInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *PLLSAIInit = TEST_STUB.HAL_RCCEx_EnablePLLSAI.PLLSAIInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCCEx_EnablePLLSAI.PLLSAIInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCCEx_EnablePLLSAI.PLLSAIInit.value = *PLLSAIInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCCEx_EnablePLLSAI.redirectFuncPtr(PLLSAIInit);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_RCCEx_DisablePLLSAI(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_RCCEx_DisablePLLSAI.callcount++;
  switch (TEST_STUB.HAL_RCCEx_DisablePLLSAI.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCCEx_DisablePLLSAI.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCCEx_DisablePLLSAI.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_RCC_DeInit(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_RCC_DeInit.callcount++;
  switch (TEST_STUB.HAL_RCC_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCC_DeInit.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCC_DeInit.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_RCC_OscConfig.callcount++;
  switch (TEST_STUB.HAL_RCC_OscConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCC_OscConfig.returnValue;
    if (TEST_STUB.HAL_RCC_OscConfig.RCC_OscInitStruct.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *RCC_OscInitStruct = TEST_STUB.HAL_RCC_OscConfig.RCC_OscInitStruct.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCC_OscConfig.RCC_OscInitStruct.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCC_OscConfig.RCC_OscInitStruct.value = *RCC_OscInitStruct;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCC_OscConfig.redirectFuncPtr(RCC_OscInitStruct);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_RCC_ClockConfig.callcount++;
  switch (TEST_STUB.HAL_RCC_ClockConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCC_ClockConfig.returnValue;
    if (TEST_STUB.HAL_RCC_ClockConfig.RCC_ClkInitStruct.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *RCC_ClkInitStruct = TEST_STUB.HAL_RCC_ClockConfig.RCC_ClkInitStruct.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCC_ClockConfig.RCC_ClkInitStruct.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCC_ClockConfig.RCC_ClkInitStruct.value = *RCC_ClkInitStruct;
      }
    }
    TEST_STUB.HAL_RCC_ClockConfig.FLatency = FLatency;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCC_ClockConfig.redirectFuncPtr(RCC_ClkInitStruct, FLatency);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv)
{
  TEST_STUB.HAL_RCC_MCOConfig.callcount++;
  switch (TEST_STUB.HAL_RCC_MCOConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_RCC_MCOConfig.RCC_MCOx = RCC_MCOx;
    TEST_STUB.HAL_RCC_MCOConfig.RCC_MCOSource = RCC_MCOSource;
    TEST_STUB.HAL_RCC_MCOConfig.RCC_MCODiv = RCC_MCODiv;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCC_MCOConfig.redirectFuncPtr(RCC_MCOx, RCC_MCOSource, RCC_MCODiv);
    break;

  default:
    break;
  }
}

void HAL_RCC_EnableCSS(void)
{
  TEST_STUB.HAL_RCC_EnableCSS.callcount++;
  switch (TEST_STUB.HAL_RCC_EnableCSS.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCC_EnableCSS.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_RCC_DisableCSS(void)
{
  TEST_STUB.HAL_RCC_DisableCSS.callcount++;
  switch (TEST_STUB.HAL_RCC_DisableCSS.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCC_DisableCSS.redirectFuncPtr();
    break;

  default:
    break;
  }
}

uint32_t HAL_RCC_GetSysClockFreq(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_RCC_GetSysClockFreq.callcount++;
  switch (TEST_STUB.HAL_RCC_GetSysClockFreq.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCC_GetSysClockFreq.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCC_GetSysClockFreq.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_RCC_GetHCLKFreq(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_RCC_GetHCLKFreq.callcount++;
  switch (TEST_STUB.HAL_RCC_GetHCLKFreq.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCC_GetHCLKFreq.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCC_GetHCLKFreq.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_RCC_GetPCLK1Freq(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_RCC_GetPCLK1Freq.callcount++;
  switch (TEST_STUB.HAL_RCC_GetPCLK1Freq.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCC_GetPCLK1Freq.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCC_GetPCLK1Freq.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_RCC_GetPCLK2Freq(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_RCC_GetPCLK2Freq.callcount++;
  switch (TEST_STUB.HAL_RCC_GetPCLK2Freq.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_RCC_GetPCLK2Freq.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_RCC_GetPCLK2Freq.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct)
{
  TEST_STUB.HAL_RCC_GetOscConfig.callcount++;
  switch (TEST_STUB.HAL_RCC_GetOscConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_RCC_GetOscConfig.RCC_OscInitStruct.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *RCC_OscInitStruct = TEST_STUB.HAL_RCC_GetOscConfig.RCC_OscInitStruct.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCC_GetOscConfig.RCC_OscInitStruct.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCC_GetOscConfig.RCC_OscInitStruct.value = *RCC_OscInitStruct;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCC_GetOscConfig.redirectFuncPtr(RCC_OscInitStruct);
    break;

  default:
    break;
  }
}

void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency)
{
  TEST_STUB.HAL_RCC_GetClockConfig.callcount++;
  switch (TEST_STUB.HAL_RCC_GetClockConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_RCC_GetClockConfig.RCC_ClkInitStruct.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *RCC_ClkInitStruct = TEST_STUB.HAL_RCC_GetClockConfig.RCC_ClkInitStruct.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCC_GetClockConfig.RCC_ClkInitStruct.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCC_GetClockConfig.RCC_ClkInitStruct.value = *RCC_ClkInitStruct;
      }
    }
    if (TEST_STUB.HAL_RCC_GetClockConfig.pFLatency.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pFLatency = TEST_STUB.HAL_RCC_GetClockConfig.pFLatency.value;
    }
    else
    {
      if (TEST_STUB.HAL_RCC_GetClockConfig.pFLatency.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_RCC_GetClockConfig.pFLatency.value = *pFLatency;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCC_GetClockConfig.redirectFuncPtr(RCC_ClkInitStruct, pFLatency);
    break;

  default:
    break;
  }
}

void HAL_RCC_NMI_IRQHandler(void)
{
  TEST_STUB.HAL_RCC_NMI_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_RCC_NMI_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCC_NMI_IRQHandler.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_RCC_CSSCallback(void)
{
  TEST_STUB.HAL_RCC_CSSCallback.callcount++;
  switch (TEST_STUB.HAL_RCC_CSSCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_RCC_CSSCallback.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init)
{
  TEST_STUB.HAL_GPIO_Init.callcount++;
  switch (TEST_STUB.HAL_GPIO_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_GPIO_Init.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *GPIOx = TEST_STUB.HAL_GPIO_Init.GPIOx.value;
    }
    else
    {
      if (TEST_STUB.HAL_GPIO_Init.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_GPIO_Init.GPIOx.value = *GPIOx;
      }
    }
    if (TEST_STUB.HAL_GPIO_Init.GPIO_Init.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *GPIO_Init = TEST_STUB.HAL_GPIO_Init.GPIO_Init.value;
    }
    else
    {
      if (TEST_STUB.HAL_GPIO_Init.GPIO_Init.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_GPIO_Init.GPIO_Init.value = *GPIO_Init;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_GPIO_Init.redirectFuncPtr(GPIOx, GPIO_Init);
    break;

  default:
    break;
  }
}

void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin)
{
  TEST_STUB.HAL_GPIO_DeInit.callcount++;
  switch (TEST_STUB.HAL_GPIO_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_GPIO_DeInit.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *GPIOx = TEST_STUB.HAL_GPIO_DeInit.GPIOx.value;
    }
    else
    {
      if (TEST_STUB.HAL_GPIO_DeInit.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_GPIO_DeInit.GPIOx.value = *GPIOx;
      }
    }
    TEST_STUB.HAL_GPIO_DeInit.GPIO_Pin = GPIO_Pin;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_GPIO_DeInit.redirectFuncPtr(GPIOx, GPIO_Pin);
    break;

  default:
    break;
  }
}

GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
  GPIO_PinState returnValue = {0};
  TEST_STUB.HAL_GPIO_ReadPin.callcount++;
  switch (TEST_STUB.HAL_GPIO_ReadPin.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GPIO_ReadPin.returnValue;
    if (TEST_STUB.HAL_GPIO_ReadPin.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *GPIOx = TEST_STUB.HAL_GPIO_ReadPin.GPIOx.value;
    }
    else
    {
      if (TEST_STUB.HAL_GPIO_ReadPin.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_GPIO_ReadPin.GPIOx.value = *GPIOx;
      }
    }
    TEST_STUB.HAL_GPIO_ReadPin.GPIO_Pin = GPIO_Pin;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GPIO_ReadPin.redirectFuncPtr(GPIOx, GPIO_Pin);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
{
  TEST_STUB.HAL_GPIO_WritePin.callcount++;
  switch (TEST_STUB.HAL_GPIO_WritePin.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_GPIO_WritePin.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *GPIOx = TEST_STUB.HAL_GPIO_WritePin.GPIOx.value;
    }
    else
    {
      if (TEST_STUB.HAL_GPIO_WritePin.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_GPIO_WritePin.GPIOx.value = *GPIOx;
      }
    }
    TEST_STUB.HAL_GPIO_WritePin.GPIO_Pin = GPIO_Pin;
    TEST_STUB.HAL_GPIO_WritePin.PinState = PinState;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_GPIO_WritePin.redirectFuncPtr(GPIOx, GPIO_Pin, PinState);
    break;

  default:
    break;
  }
}

void HAL_GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
  TEST_STUB.HAL_GPIO_TogglePin.callcount++;
  switch (TEST_STUB.HAL_GPIO_TogglePin.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_GPIO_TogglePin.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *GPIOx = TEST_STUB.HAL_GPIO_TogglePin.GPIOx.value;
    }
    else
    {
      if (TEST_STUB.HAL_GPIO_TogglePin.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_GPIO_TogglePin.GPIOx.value = *GPIOx;
      }
    }
    TEST_STUB.HAL_GPIO_TogglePin.GPIO_Pin = GPIO_Pin;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_GPIO_TogglePin.redirectFuncPtr(GPIOx, GPIO_Pin);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_GPIO_LockPin.callcount++;
  switch (TEST_STUB.HAL_GPIO_LockPin.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GPIO_LockPin.returnValue;
    if (TEST_STUB.HAL_GPIO_LockPin.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *GPIOx = TEST_STUB.HAL_GPIO_LockPin.GPIOx.value;
    }
    else
    {
      if (TEST_STUB.HAL_GPIO_LockPin.GPIOx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_GPIO_LockPin.GPIOx.value = *GPIOx;
      }
    }
    TEST_STUB.HAL_GPIO_LockPin.GPIO_Pin = GPIO_Pin;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GPIO_LockPin.redirectFuncPtr(GPIOx, GPIO_Pin);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin)
{
  TEST_STUB.HAL_GPIO_EXTI_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_GPIO_EXTI_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_GPIO_EXTI_IRQHandler.GPIO_Pin = GPIO_Pin;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_GPIO_EXTI_IRQHandler.redirectFuncPtr(GPIO_Pin);
    break;

  default:
    break;
  }
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  TEST_STUB.HAL_GPIO_EXTI_Callback.callcount++;
  switch (TEST_STUB.HAL_GPIO_EXTI_Callback.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_GPIO_EXTI_Callback.GPIO_Pin = GPIO_Pin;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_GPIO_EXTI_Callback.redirectFuncPtr(GPIO_Pin);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_EXTI_SetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_EXTI_SetConfigLine.callcount++;
  switch (TEST_STUB.HAL_EXTI_SetConfigLine.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_EXTI_SetConfigLine.returnValue;
    if (TEST_STUB.HAL_EXTI_SetConfigLine.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_SetConfigLine.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_SetConfigLine.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_SetConfigLine.hexti.value = *hexti;
      }
    }
    if (TEST_STUB.HAL_EXTI_SetConfigLine.pExtiConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pExtiConfig = TEST_STUB.HAL_EXTI_SetConfigLine.pExtiConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_SetConfigLine.pExtiConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_SetConfigLine.pExtiConfig.value = *pExtiConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_EXTI_SetConfigLine.redirectFuncPtr(hexti, pExtiConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_EXTI_GetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_EXTI_GetConfigLine.callcount++;
  switch (TEST_STUB.HAL_EXTI_GetConfigLine.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_EXTI_GetConfigLine.returnValue;
    if (TEST_STUB.HAL_EXTI_GetConfigLine.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_GetConfigLine.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_GetConfigLine.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_GetConfigLine.hexti.value = *hexti;
      }
    }
    if (TEST_STUB.HAL_EXTI_GetConfigLine.pExtiConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pExtiConfig = TEST_STUB.HAL_EXTI_GetConfigLine.pExtiConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_GetConfigLine.pExtiConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_GetConfigLine.pExtiConfig.value = *pExtiConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_EXTI_GetConfigLine.redirectFuncPtr(hexti, pExtiConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_EXTI_ClearConfigLine(EXTI_HandleTypeDef *hexti)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_EXTI_ClearConfigLine.callcount++;
  switch (TEST_STUB.HAL_EXTI_ClearConfigLine.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_EXTI_ClearConfigLine.returnValue;
    if (TEST_STUB.HAL_EXTI_ClearConfigLine.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_ClearConfigLine.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_ClearConfigLine.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_ClearConfigLine.hexti.value = *hexti;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_EXTI_ClearConfigLine.redirectFuncPtr(hexti);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_EXTI_RegisterCallback(EXTI_HandleTypeDef *hexti, EXTI_CallbackIDTypeDef CallbackID, void (*pPendingCbfn)(void))
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_EXTI_RegisterCallback.callcount++;
  switch (TEST_STUB.HAL_EXTI_RegisterCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_EXTI_RegisterCallback.returnValue;
    if (TEST_STUB.HAL_EXTI_RegisterCallback.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_RegisterCallback.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_RegisterCallback.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_RegisterCallback.hexti.value = *hexti;
      }
    }
    TEST_STUB.HAL_EXTI_RegisterCallback.CallbackID = CallbackID;
    TEST_STUB.HAL_EXTI_RegisterCallback.pPendingCbfn = pPendingCbfn;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_EXTI_RegisterCallback.redirectFuncPtr(hexti, CallbackID, pPendingCbfn);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_EXTI_GetHandle(EXTI_HandleTypeDef *hexti, uint32_t ExtiLine)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_EXTI_GetHandle.callcount++;
  switch (TEST_STUB.HAL_EXTI_GetHandle.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_EXTI_GetHandle.returnValue;
    if (TEST_STUB.HAL_EXTI_GetHandle.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_GetHandle.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_GetHandle.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_GetHandle.hexti.value = *hexti;
      }
    }
    TEST_STUB.HAL_EXTI_GetHandle.ExtiLine = ExtiLine;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_EXTI_GetHandle.redirectFuncPtr(hexti, ExtiLine);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_EXTI_IRQHandler(EXTI_HandleTypeDef *hexti)
{
  TEST_STUB.HAL_EXTI_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_EXTI_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_EXTI_IRQHandler.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_IRQHandler.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_IRQHandler.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_IRQHandler.hexti.value = *hexti;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_EXTI_IRQHandler.redirectFuncPtr(hexti);
    break;

  default:
    break;
  }
}

uint32_t HAL_EXTI_GetPending(EXTI_HandleTypeDef *hexti, uint32_t Edge)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_EXTI_GetPending.callcount++;
  switch (TEST_STUB.HAL_EXTI_GetPending.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_EXTI_GetPending.returnValue;
    if (TEST_STUB.HAL_EXTI_GetPending.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_GetPending.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_GetPending.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_GetPending.hexti.value = *hexti;
      }
    }
    TEST_STUB.HAL_EXTI_GetPending.Edge = Edge;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_EXTI_GetPending.redirectFuncPtr(hexti, Edge);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_EXTI_ClearPending(EXTI_HandleTypeDef *hexti, uint32_t Edge)
{
  TEST_STUB.HAL_EXTI_ClearPending.callcount++;
  switch (TEST_STUB.HAL_EXTI_ClearPending.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_EXTI_ClearPending.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_ClearPending.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_ClearPending.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_ClearPending.hexti.value = *hexti;
      }
    }
    TEST_STUB.HAL_EXTI_ClearPending.Edge = Edge;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_EXTI_ClearPending.redirectFuncPtr(hexti, Edge);
    break;

  default:
    break;
  }
}

void HAL_EXTI_GenerateSWI(EXTI_HandleTypeDef *hexti)
{
  TEST_STUB.HAL_EXTI_GenerateSWI.callcount++;
  switch (TEST_STUB.HAL_EXTI_GenerateSWI.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_EXTI_GenerateSWI.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hexti = TEST_STUB.HAL_EXTI_GenerateSWI.hexti.value;
    }
    else
    {
      if (TEST_STUB.HAL_EXTI_GenerateSWI.hexti.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_EXTI_GenerateSWI.hexti.value = *hexti;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_EXTI_GenerateSWI.redirectFuncPtr(hexti);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_DMAEx_MultiBufferStart(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMAEx_MultiBufferStart.callcount++;
  switch (TEST_STUB.HAL_DMAEx_MultiBufferStart.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMAEx_MultiBufferStart.returnValue;
    if (TEST_STUB.HAL_DMAEx_MultiBufferStart.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMAEx_MultiBufferStart.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMAEx_MultiBufferStart.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMAEx_MultiBufferStart.hdma.value = *hdma;
      }
    }
    TEST_STUB.HAL_DMAEx_MultiBufferStart.SrcAddress = SrcAddress;
    TEST_STUB.HAL_DMAEx_MultiBufferStart.DstAddress = DstAddress;
    TEST_STUB.HAL_DMAEx_MultiBufferStart.SecondMemAddress = SecondMemAddress;
    TEST_STUB.HAL_DMAEx_MultiBufferStart.DataLength = DataLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMAEx_MultiBufferStart.redirectFuncPtr(hdma, SrcAddress, DstAddress, SecondMemAddress, DataLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMAEx_MultiBufferStart_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.callcount++;
  switch (TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.returnValue;
    if (TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.hdma.value = *hdma;
      }
    }
    TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.SrcAddress = SrcAddress;
    TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.DstAddress = DstAddress;
    TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.SecondMemAddress = SecondMemAddress;
    TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.DataLength = DataLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMAEx_MultiBufferStart_IT.redirectFuncPtr(hdma, SrcAddress, DstAddress, SecondMemAddress, DataLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMAEx_ChangeMemory(DMA_HandleTypeDef *hdma, uint32_t Address, HAL_DMA_MemoryTypeDef memory)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMAEx_ChangeMemory.callcount++;
  switch (TEST_STUB.HAL_DMAEx_ChangeMemory.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMAEx_ChangeMemory.returnValue;
    if (TEST_STUB.HAL_DMAEx_ChangeMemory.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMAEx_ChangeMemory.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMAEx_ChangeMemory.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMAEx_ChangeMemory.hdma.value = *hdma;
      }
    }
    TEST_STUB.HAL_DMAEx_ChangeMemory.Address = Address;
    TEST_STUB.HAL_DMAEx_ChangeMemory.memory = memory;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMAEx_ChangeMemory.redirectFuncPtr(hdma, Address, memory);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *hdma)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_Init.callcount++;
  switch (TEST_STUB.HAL_DMA_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_Init.returnValue;
    if (TEST_STUB.HAL_DMA_Init.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_Init.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_Init.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_Init.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_Init.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_DeInit(DMA_HandleTypeDef *hdma)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_DeInit.callcount++;
  switch (TEST_STUB.HAL_DMA_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_DeInit.returnValue;
    if (TEST_STUB.HAL_DMA_DeInit.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_DeInit.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_DeInit.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_DeInit.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_DeInit.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_Start(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_Start.callcount++;
  switch (TEST_STUB.HAL_DMA_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_Start.returnValue;
    if (TEST_STUB.HAL_DMA_Start.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_Start.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_Start.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_Start.hdma.value = *hdma;
      }
    }
    TEST_STUB.HAL_DMA_Start.SrcAddress = SrcAddress;
    TEST_STUB.HAL_DMA_Start.DstAddress = DstAddress;
    TEST_STUB.HAL_DMA_Start.DataLength = DataLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_Start.redirectFuncPtr(hdma, SrcAddress, DstAddress, DataLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_Start_IT.callcount++;
  switch (TEST_STUB.HAL_DMA_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_Start_IT.returnValue;
    if (TEST_STUB.HAL_DMA_Start_IT.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_Start_IT.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_Start_IT.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_Start_IT.hdma.value = *hdma;
      }
    }
    TEST_STUB.HAL_DMA_Start_IT.SrcAddress = SrcAddress;
    TEST_STUB.HAL_DMA_Start_IT.DstAddress = DstAddress;
    TEST_STUB.HAL_DMA_Start_IT.DataLength = DataLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_Start_IT.redirectFuncPtr(hdma, SrcAddress, DstAddress, DataLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *hdma)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_Abort.callcount++;
  switch (TEST_STUB.HAL_DMA_Abort.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_Abort.returnValue;
    if (TEST_STUB.HAL_DMA_Abort.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_Abort.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_Abort.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_Abort.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_Abort.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_Abort_IT.callcount++;
  switch (TEST_STUB.HAL_DMA_Abort_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_Abort_IT.returnValue;
    if (TEST_STUB.HAL_DMA_Abort_IT.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_Abort_IT.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_Abort_IT.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_Abort_IT.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_Abort_IT.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *hdma, HAL_DMA_LevelCompleteTypeDef CompleteLevel, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_PollForTransfer.callcount++;
  switch (TEST_STUB.HAL_DMA_PollForTransfer.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_PollForTransfer.returnValue;
    if (TEST_STUB.HAL_DMA_PollForTransfer.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_PollForTransfer.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_PollForTransfer.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_PollForTransfer.hdma.value = *hdma;
      }
    }
    TEST_STUB.HAL_DMA_PollForTransfer.CompleteLevel = CompleteLevel;
    TEST_STUB.HAL_DMA_PollForTransfer.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_PollForTransfer.redirectFuncPtr(hdma, CompleteLevel, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_DMA_IRQHandler(DMA_HandleTypeDef *hdma)
{
  TEST_STUB.HAL_DMA_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_DMA_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_DMA_IRQHandler.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_IRQHandler.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_IRQHandler.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_IRQHandler.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_DMA_IRQHandler.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_DMA_CleanCallbacks(DMA_HandleTypeDef *hdma)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_CleanCallbacks.callcount++;
  switch (TEST_STUB.HAL_DMA_CleanCallbacks.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_CleanCallbacks.returnValue;
    if (TEST_STUB.HAL_DMA_CleanCallbacks.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_CleanCallbacks.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_CleanCallbacks.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_CleanCallbacks.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_CleanCallbacks.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_RegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID, void (*pCallback)(DMA_HandleTypeDef *_hdma))
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_RegisterCallback.callcount++;
  switch (TEST_STUB.HAL_DMA_RegisterCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_RegisterCallback.returnValue;
    if (TEST_STUB.HAL_DMA_RegisterCallback.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_RegisterCallback.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_RegisterCallback.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_RegisterCallback.hdma.value = *hdma;
      }
    }
    TEST_STUB.HAL_DMA_RegisterCallback.CallbackID = CallbackID;
    TEST_STUB.HAL_DMA_RegisterCallback.pCallback = pCallback;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_RegisterCallback.redirectFuncPtr(hdma, CallbackID, pCallback);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DMA_UnRegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_UnRegisterCallback.callcount++;
  switch (TEST_STUB.HAL_DMA_UnRegisterCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_UnRegisterCallback.returnValue;
    if (TEST_STUB.HAL_DMA_UnRegisterCallback.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_UnRegisterCallback.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_UnRegisterCallback.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_UnRegisterCallback.hdma.value = *hdma;
      }
    }
    TEST_STUB.HAL_DMA_UnRegisterCallback.CallbackID = CallbackID;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_UnRegisterCallback.redirectFuncPtr(hdma, CallbackID);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef *hdma)
{
  HAL_DMA_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_DMA_GetState.callcount++;
  switch (TEST_STUB.HAL_DMA_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_GetState.returnValue;
    if (TEST_STUB.HAL_DMA_GetState.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_GetState.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_GetState.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_GetState.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_GetState.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_DMA_GetError(DMA_HandleTypeDef *hdma)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_DMA_GetError.callcount++;
  switch (TEST_STUB.HAL_DMA_GetError.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DMA_GetError.returnValue;
    if (TEST_STUB.HAL_DMA_GetError.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.HAL_DMA_GetError.hdma.value;
    }
    else
    {
      if (TEST_STUB.HAL_DMA_GetError.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_DMA_GetError.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DMA_GetError.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  TEST_STUB.HAL_NVIC_SetPriorityGrouping.callcount++;
  switch (TEST_STUB.HAL_NVIC_SetPriorityGrouping.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_NVIC_SetPriorityGrouping.PriorityGroup = PriorityGroup;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_NVIC_SetPriorityGrouping.redirectFuncPtr(PriorityGroup);
    break;

  default:
    break;
  }
}

void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority)
{
  TEST_STUB.HAL_NVIC_SetPriority.callcount++;
  switch (TEST_STUB.HAL_NVIC_SetPriority.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_NVIC_SetPriority.IRQn = IRQn;
    TEST_STUB.HAL_NVIC_SetPriority.PreemptPriority = PreemptPriority;
    TEST_STUB.HAL_NVIC_SetPriority.SubPriority = SubPriority;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_NVIC_SetPriority.redirectFuncPtr(IRQn, PreemptPriority, SubPriority);
    break;

  default:
    break;
  }
}

void HAL_NVIC_EnableIRQ(IRQn_Type IRQn)
{
  TEST_STUB.HAL_NVIC_EnableIRQ.callcount++;
  switch (TEST_STUB.HAL_NVIC_EnableIRQ.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_NVIC_EnableIRQ.IRQn = IRQn;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_NVIC_EnableIRQ.redirectFuncPtr(IRQn);
    break;

  default:
    break;
  }
}

void HAL_NVIC_DisableIRQ(IRQn_Type IRQn)
{
  TEST_STUB.HAL_NVIC_DisableIRQ.callcount++;
  switch (TEST_STUB.HAL_NVIC_DisableIRQ.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_NVIC_DisableIRQ.IRQn = IRQn;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_NVIC_DisableIRQ.redirectFuncPtr(IRQn);
    break;

  default:
    break;
  }
}

void HAL_NVIC_SystemReset(void)
{
  TEST_STUB.HAL_NVIC_SystemReset.callcount++;
  switch (TEST_STUB.HAL_NVIC_SystemReset.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_NVIC_SystemReset.redirectFuncPtr();
    break;

  default:
    break;
  }
}

uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_SYSTICK_Config.callcount++;
  switch (TEST_STUB.HAL_SYSTICK_Config.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SYSTICK_Config.returnValue;
    TEST_STUB.HAL_SYSTICK_Config.TicksNumb = TicksNumb;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SYSTICK_Config.redirectFuncPtr(TicksNumb);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_NVIC_GetPriorityGrouping(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_NVIC_GetPriorityGrouping.callcount++;
  switch (TEST_STUB.HAL_NVIC_GetPriorityGrouping.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_NVIC_GetPriorityGrouping.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_NVIC_GetPriorityGrouping.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_NVIC_GetPriority(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t *pPreemptPriority, uint32_t *pSubPriority)
{
  TEST_STUB.HAL_NVIC_GetPriority.callcount++;
  switch (TEST_STUB.HAL_NVIC_GetPriority.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_NVIC_GetPriority.IRQn = IRQn;
    TEST_STUB.HAL_NVIC_GetPriority.PriorityGroup = PriorityGroup;
    if (TEST_STUB.HAL_NVIC_GetPriority.pPreemptPriority.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pPreemptPriority = TEST_STUB.HAL_NVIC_GetPriority.pPreemptPriority.value;
    }
    else
    {
      if (TEST_STUB.HAL_NVIC_GetPriority.pPreemptPriority.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_NVIC_GetPriority.pPreemptPriority.value = *pPreemptPriority;
      }
    }
    if (TEST_STUB.HAL_NVIC_GetPriority.pSubPriority.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pSubPriority = TEST_STUB.HAL_NVIC_GetPriority.pSubPriority.value;
    }
    else
    {
      if (TEST_STUB.HAL_NVIC_GetPriority.pSubPriority.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_NVIC_GetPriority.pSubPriority.value = *pSubPriority;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_NVIC_GetPriority.redirectFuncPtr(IRQn, PriorityGroup, pPreemptPriority, pSubPriority);
    break;

  default:
    break;
  }
}

uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_NVIC_GetPendingIRQ.callcount++;
  switch (TEST_STUB.HAL_NVIC_GetPendingIRQ.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_NVIC_GetPendingIRQ.returnValue;
    TEST_STUB.HAL_NVIC_GetPendingIRQ.IRQn = IRQn;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_NVIC_GetPendingIRQ.redirectFuncPtr(IRQn);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  TEST_STUB.HAL_NVIC_SetPendingIRQ.callcount++;
  switch (TEST_STUB.HAL_NVIC_SetPendingIRQ.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_NVIC_SetPendingIRQ.IRQn = IRQn;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_NVIC_SetPendingIRQ.redirectFuncPtr(IRQn);
    break;

  default:
    break;
  }
}

void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  TEST_STUB.HAL_NVIC_ClearPendingIRQ.callcount++;
  switch (TEST_STUB.HAL_NVIC_ClearPendingIRQ.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_NVIC_ClearPendingIRQ.IRQn = IRQn;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_NVIC_ClearPendingIRQ.redirectFuncPtr(IRQn);
    break;

  default:
    break;
  }
}

uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_NVIC_GetActive.callcount++;
  switch (TEST_STUB.HAL_NVIC_GetActive.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_NVIC_GetActive.returnValue;
    TEST_STUB.HAL_NVIC_GetActive.IRQn = IRQn;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_NVIC_GetActive.redirectFuncPtr(IRQn);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource)
{
  TEST_STUB.HAL_SYSTICK_CLKSourceConfig.callcount++;
  switch (TEST_STUB.HAL_SYSTICK_CLKSourceConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_SYSTICK_CLKSourceConfig.CLKSource = CLKSource;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SYSTICK_CLKSourceConfig.redirectFuncPtr(CLKSource);
    break;

  default:
    break;
  }
}

void HAL_SYSTICK_IRQHandler(void)
{
  TEST_STUB.HAL_SYSTICK_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_SYSTICK_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SYSTICK_IRQHandler.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_SYSTICK_Callback(void)
{
  TEST_STUB.HAL_SYSTICK_Callback.callcount++;
  switch (TEST_STUB.HAL_SYSTICK_Callback.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SYSTICK_Callback.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_MPU_Enable(uint32_t MPU_Control)
{
  TEST_STUB.HAL_MPU_Enable.callcount++;
  switch (TEST_STUB.HAL_MPU_Enable.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_MPU_Enable.MPU_Control = MPU_Control;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_MPU_Enable.redirectFuncPtr(MPU_Control);
    break;

  default:
    break;
  }
}

void HAL_MPU_Disable(void)
{
  TEST_STUB.HAL_MPU_Disable.callcount++;
  switch (TEST_STUB.HAL_MPU_Disable.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_MPU_Disable.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_MPU_ConfigRegion(MPU_Region_InitTypeDef *MPU_Init)
{
  TEST_STUB.HAL_MPU_ConfigRegion.callcount++;
  switch (TEST_STUB.HAL_MPU_ConfigRegion.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_MPU_ConfigRegion.MPU_Init.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *MPU_Init = TEST_STUB.HAL_MPU_ConfigRegion.MPU_Init.value;
    }
    else
    {
      if (TEST_STUB.HAL_MPU_ConfigRegion.MPU_Init.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_MPU_ConfigRegion.MPU_Init.value = *MPU_Init;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_MPU_ConfigRegion.redirectFuncPtr(MPU_Init);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_ADCEx_InjectedStart(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_InjectedStart.callcount++;
  switch (TEST_STUB.HAL_ADCEx_InjectedStart.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedStart.returnValue;
    if (TEST_STUB.HAL_ADCEx_InjectedStart.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_InjectedStart.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedStart.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedStart.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedStart.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADCEx_InjectedStop(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_InjectedStop.callcount++;
  switch (TEST_STUB.HAL_ADCEx_InjectedStop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedStop.returnValue;
    if (TEST_STUB.HAL_ADCEx_InjectedStop.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_InjectedStop.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedStop.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedStop.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedStop.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADCEx_InjectedPollForConversion(ADC_HandleTypeDef *hadc, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_InjectedPollForConversion.callcount++;
  switch (TEST_STUB.HAL_ADCEx_InjectedPollForConversion.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedPollForConversion.returnValue;
    if (TEST_STUB.HAL_ADCEx_InjectedPollForConversion.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_InjectedPollForConversion.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedPollForConversion.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedPollForConversion.hadc.value = *hadc;
      }
    }
    TEST_STUB.HAL_ADCEx_InjectedPollForConversion.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedPollForConversion.redirectFuncPtr(hadc, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADCEx_InjectedStart_IT(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_InjectedStart_IT.callcount++;
  switch (TEST_STUB.HAL_ADCEx_InjectedStart_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedStart_IT.returnValue;
    if (TEST_STUB.HAL_ADCEx_InjectedStart_IT.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_InjectedStart_IT.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedStart_IT.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedStart_IT.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedStart_IT.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADCEx_InjectedStop_IT(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_InjectedStop_IT.callcount++;
  switch (TEST_STUB.HAL_ADCEx_InjectedStop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedStop_IT.returnValue;
    if (TEST_STUB.HAL_ADCEx_InjectedStop_IT.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_InjectedStop_IT.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedStop_IT.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedStop_IT.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedStop_IT.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_ADCEx_InjectedGetValue(ADC_HandleTypeDef *hadc, uint32_t InjectedRank)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_ADCEx_InjectedGetValue.callcount++;
  switch (TEST_STUB.HAL_ADCEx_InjectedGetValue.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedGetValue.returnValue;
    if (TEST_STUB.HAL_ADCEx_InjectedGetValue.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_InjectedGetValue.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedGetValue.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedGetValue.hadc.value = *hadc;
      }
    }
    TEST_STUB.HAL_ADCEx_InjectedGetValue.InjectedRank = InjectedRank;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedGetValue.redirectFuncPtr(hadc, InjectedRank);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADCEx_MultiModeStart_DMA(ADC_HandleTypeDef *hadc, uint32_t *pData, uint32_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.callcount++;
  switch (TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.returnValue;
    if (TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.hadc.value = *hadc;
      }
    }
    if (TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_MultiModeStart_DMA.redirectFuncPtr(hadc, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADCEx_MultiModeStop_DMA(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_MultiModeStop_DMA.callcount++;
  switch (TEST_STUB.HAL_ADCEx_MultiModeStop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_MultiModeStop_DMA.returnValue;
    if (TEST_STUB.HAL_ADCEx_MultiModeStop_DMA.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_MultiModeStop_DMA.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_MultiModeStop_DMA.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_MultiModeStop_DMA.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_MultiModeStop_DMA.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_ADCEx_MultiModeGetValue(ADC_HandleTypeDef *hadc)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_ADCEx_MultiModeGetValue.callcount++;
  switch (TEST_STUB.HAL_ADCEx_MultiModeGetValue.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_MultiModeGetValue.returnValue;
    if (TEST_STUB.HAL_ADCEx_MultiModeGetValue.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_MultiModeGetValue.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_MultiModeGetValue.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_MultiModeGetValue.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_MultiModeGetValue.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_ADCEx_InjectedConvCpltCallback(ADC_HandleTypeDef *hadc)
{
  TEST_STUB.HAL_ADCEx_InjectedConvCpltCallback.callcount++;
  switch (TEST_STUB.HAL_ADCEx_InjectedConvCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_ADCEx_InjectedConvCpltCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_InjectedConvCpltCallback.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedConvCpltCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedConvCpltCallback.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ADCEx_InjectedConvCpltCallback.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_ADCEx_InjectedConfigChannel(ADC_HandleTypeDef *hadc, ADC_InjectionConfTypeDef *sConfigInjected)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_InjectedConfigChannel.callcount++;
  switch (TEST_STUB.HAL_ADCEx_InjectedConfigChannel.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedConfigChannel.returnValue;
    if (TEST_STUB.HAL_ADCEx_InjectedConfigChannel.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_InjectedConfigChannel.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedConfigChannel.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedConfigChannel.hadc.value = *hadc;
      }
    }
    if (TEST_STUB.HAL_ADCEx_InjectedConfigChannel.sConfigInjected.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfigInjected = TEST_STUB.HAL_ADCEx_InjectedConfigChannel.sConfigInjected.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_InjectedConfigChannel.sConfigInjected.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_InjectedConfigChannel.sConfigInjected.value = *sConfigInjected;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_InjectedConfigChannel.redirectFuncPtr(hadc, sConfigInjected);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADCEx_MultiModeConfigChannel(ADC_HandleTypeDef *hadc, ADC_MultiModeTypeDef *multimode)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.callcount++;
  switch (TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.returnValue;
    if (TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.hadc.value = *hadc;
      }
    }
    if (TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.multimode.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *multimode = TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.multimode.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.multimode.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.multimode.value = *multimode;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADCEx_MultiModeConfigChannel.redirectFuncPtr(hadc, multimode);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_Init.callcount++;
  switch (TEST_STUB.HAL_ADC_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_Init.returnValue;
    if (TEST_STUB.HAL_ADC_Init.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_Init.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_Init.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_Init.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_Init.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_DeInit(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_DeInit.callcount++;
  switch (TEST_STUB.HAL_ADC_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_DeInit.returnValue;
    if (TEST_STUB.HAL_ADC_DeInit.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_DeInit.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_DeInit.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_DeInit.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_DeInit.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_ADC_MspInit(ADC_HandleTypeDef *hadc)
{
  TEST_STUB.HAL_ADC_MspInit.callcount++;
  switch (TEST_STUB.HAL_ADC_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_ADC_MspInit.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_MspInit.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_MspInit.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_MspInit.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ADC_MspInit.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }
}

void HAL_ADC_MspDeInit(ADC_HandleTypeDef *hadc)
{
  TEST_STUB.HAL_ADC_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_ADC_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_ADC_MspDeInit.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_MspDeInit.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_MspDeInit.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_MspDeInit.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ADC_MspDeInit.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_ADC_Start(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_Start.callcount++;
  switch (TEST_STUB.HAL_ADC_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_Start.returnValue;
    if (TEST_STUB.HAL_ADC_Start.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_Start.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_Start.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_Start.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_Start.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_Stop.callcount++;
  switch (TEST_STUB.HAL_ADC_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_Stop.returnValue;
    if (TEST_STUB.HAL_ADC_Stop.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_Stop.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_Stop.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_Stop.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_Stop.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef *hadc, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_PollForConversion.callcount++;
  switch (TEST_STUB.HAL_ADC_PollForConversion.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_PollForConversion.returnValue;
    if (TEST_STUB.HAL_ADC_PollForConversion.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_PollForConversion.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_PollForConversion.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_PollForConversion.hadc.value = *hadc;
      }
    }
    TEST_STUB.HAL_ADC_PollForConversion.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_PollForConversion.redirectFuncPtr(hadc, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_PollForEvent(ADC_HandleTypeDef *hadc, uint32_t EventType, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_PollForEvent.callcount++;
  switch (TEST_STUB.HAL_ADC_PollForEvent.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_PollForEvent.returnValue;
    if (TEST_STUB.HAL_ADC_PollForEvent.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_PollForEvent.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_PollForEvent.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_PollForEvent.hadc.value = *hadc;
      }
    }
    TEST_STUB.HAL_ADC_PollForEvent.EventType = EventType;
    TEST_STUB.HAL_ADC_PollForEvent.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_PollForEvent.redirectFuncPtr(hadc, EventType, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_Start_IT(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_Start_IT.callcount++;
  switch (TEST_STUB.HAL_ADC_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_Start_IT.returnValue;
    if (TEST_STUB.HAL_ADC_Start_IT.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_Start_IT.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_Start_IT.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_Start_IT.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_Start_IT.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_Stop_IT(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_ADC_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_Stop_IT.returnValue;
    if (TEST_STUB.HAL_ADC_Stop_IT.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_Stop_IT.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_Stop_IT.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_Stop_IT.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_Stop_IT.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_ADC_IRQHandler(ADC_HandleTypeDef *hadc)
{
  TEST_STUB.HAL_ADC_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_ADC_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_ADC_IRQHandler.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_IRQHandler.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_IRQHandler.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_IRQHandler.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ADC_IRQHandler.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_ADC_Start_DMA(ADC_HandleTypeDef *hadc, uint32_t *pData, uint32_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_ADC_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_Start_DMA.returnValue;
    if (TEST_STUB.HAL_ADC_Start_DMA.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_Start_DMA.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_Start_DMA.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_Start_DMA.hadc.value = *hadc;
      }
    }
    if (TEST_STUB.HAL_ADC_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_ADC_Start_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_Start_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_ADC_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_Start_DMA.redirectFuncPtr(hadc, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_Stop_DMA(ADC_HandleTypeDef *hadc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_ADC_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_ADC_Stop_DMA.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_Stop_DMA.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_Stop_DMA.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_Stop_DMA.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_Stop_DMA.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef *hadc)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_ADC_GetValue.callcount++;
  switch (TEST_STUB.HAL_ADC_GetValue.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_GetValue.returnValue;
    if (TEST_STUB.HAL_ADC_GetValue.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_GetValue.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_GetValue.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_GetValue.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_GetValue.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc)
{
  TEST_STUB.HAL_ADC_ConvCpltCallback.callcount++;
  switch (TEST_STUB.HAL_ADC_ConvCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_ADC_ConvCpltCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_ConvCpltCallback.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_ConvCpltCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_ConvCpltCallback.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ADC_ConvCpltCallback.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }
}

void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef *hadc)
{
  TEST_STUB.HAL_ADC_ConvHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_ADC_ConvHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_ADC_ConvHalfCpltCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_ConvHalfCpltCallback.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_ConvHalfCpltCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_ConvHalfCpltCallback.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ADC_ConvHalfCpltCallback.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }
}

void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef *hadc)
{
  TEST_STUB.HAL_ADC_LevelOutOfWindowCallback.callcount++;
  switch (TEST_STUB.HAL_ADC_LevelOutOfWindowCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_ADC_LevelOutOfWindowCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_LevelOutOfWindowCallback.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_LevelOutOfWindowCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_LevelOutOfWindowCallback.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ADC_LevelOutOfWindowCallback.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }
}

void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc)
{
  TEST_STUB.HAL_ADC_ErrorCallback.callcount++;
  switch (TEST_STUB.HAL_ADC_ErrorCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_ADC_ErrorCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_ErrorCallback.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_ErrorCallback.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_ErrorCallback.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ADC_ErrorCallback.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_ADC_ConfigChannel(ADC_HandleTypeDef *hadc, ADC_ChannelConfTypeDef *sConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_ConfigChannel.callcount++;
  switch (TEST_STUB.HAL_ADC_ConfigChannel.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_ConfigChannel.returnValue;
    if (TEST_STUB.HAL_ADC_ConfigChannel.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_ConfigChannel.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_ConfigChannel.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_ConfigChannel.hadc.value = *hadc;
      }
    }
    if (TEST_STUB.HAL_ADC_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfig = TEST_STUB.HAL_ADC_ConfigChannel.sConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_ConfigChannel.sConfig.value = *sConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_ConfigChannel.redirectFuncPtr(hadc, sConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_ADC_AnalogWDGConfig(ADC_HandleTypeDef *hadc, ADC_AnalogWDGConfTypeDef *AnalogWDGConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_ADC_AnalogWDGConfig.callcount++;
  switch (TEST_STUB.HAL_ADC_AnalogWDGConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_AnalogWDGConfig.returnValue;
    if (TEST_STUB.HAL_ADC_AnalogWDGConfig.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_AnalogWDGConfig.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_AnalogWDGConfig.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_AnalogWDGConfig.hadc.value = *hadc;
      }
    }
    if (TEST_STUB.HAL_ADC_AnalogWDGConfig.AnalogWDGConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *AnalogWDGConfig = TEST_STUB.HAL_ADC_AnalogWDGConfig.AnalogWDGConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_AnalogWDGConfig.AnalogWDGConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_AnalogWDGConfig.AnalogWDGConfig.value = *AnalogWDGConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_AnalogWDGConfig.redirectFuncPtr(hadc, AnalogWDGConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_ADC_GetState(ADC_HandleTypeDef *hadc)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_ADC_GetState.callcount++;
  switch (TEST_STUB.HAL_ADC_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_GetState.returnValue;
    if (TEST_STUB.HAL_ADC_GetState.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_GetState.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_GetState.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_GetState.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_GetState.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_ADC_GetError(ADC_HandleTypeDef *hadc)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_ADC_GetError.callcount++;
  switch (TEST_STUB.HAL_ADC_GetError.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_ADC_GetError.returnValue;
    if (TEST_STUB.HAL_ADC_GetError.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hadc = TEST_STUB.HAL_ADC_GetError.hadc.value;
    }
    else
    {
      if (TEST_STUB.HAL_ADC_GetError.hadc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_ADC_GetError.hadc.value = *hadc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_ADC_GetError.redirectFuncPtr(hadc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_CRC_Init(CRC_HandleTypeDef *hcrc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_CRC_Init.callcount++;
  switch (TEST_STUB.HAL_CRC_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_CRC_Init.returnValue;
    if (TEST_STUB.HAL_CRC_Init.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hcrc = TEST_STUB.HAL_CRC_Init.hcrc.value;
    }
    else
    {
      if (TEST_STUB.HAL_CRC_Init.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_CRC_Init.hcrc.value = *hcrc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_CRC_Init.redirectFuncPtr(hcrc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_CRC_DeInit(CRC_HandleTypeDef *hcrc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_CRC_DeInit.callcount++;
  switch (TEST_STUB.HAL_CRC_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_CRC_DeInit.returnValue;
    if (TEST_STUB.HAL_CRC_DeInit.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hcrc = TEST_STUB.HAL_CRC_DeInit.hcrc.value;
    }
    else
    {
      if (TEST_STUB.HAL_CRC_DeInit.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_CRC_DeInit.hcrc.value = *hcrc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_CRC_DeInit.redirectFuncPtr(hcrc);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_CRC_MspInit(CRC_HandleTypeDef *hcrc)
{
  TEST_STUB.HAL_CRC_MspInit.callcount++;
  switch (TEST_STUB.HAL_CRC_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_CRC_MspInit.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hcrc = TEST_STUB.HAL_CRC_MspInit.hcrc.value;
    }
    else
    {
      if (TEST_STUB.HAL_CRC_MspInit.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_CRC_MspInit.hcrc.value = *hcrc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_CRC_MspInit.redirectFuncPtr(hcrc);
    break;

  default:
    break;
  }
}

void HAL_CRC_MspDeInit(CRC_HandleTypeDef *hcrc)
{
  TEST_STUB.HAL_CRC_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_CRC_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_CRC_MspDeInit.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hcrc = TEST_STUB.HAL_CRC_MspDeInit.hcrc.value;
    }
    else
    {
      if (TEST_STUB.HAL_CRC_MspDeInit.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_CRC_MspDeInit.hcrc.value = *hcrc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_CRC_MspDeInit.redirectFuncPtr(hcrc);
    break;

  default:
    break;
  }
}

uint32_t HAL_CRC_Accumulate(CRC_HandleTypeDef *hcrc, uint32_t pBuffer[], uint32_t BufferLength)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_CRC_Accumulate.callcount++;
  switch (TEST_STUB.HAL_CRC_Accumulate.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_CRC_Accumulate.returnValue;
    if (TEST_STUB.HAL_CRC_Accumulate.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hcrc = TEST_STUB.HAL_CRC_Accumulate.hcrc.value;
    }
    else
    {
      if (TEST_STUB.HAL_CRC_Accumulate.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_CRC_Accumulate.hcrc.value = *hcrc;
      }
    }
    if (TEST_STUB.HAL_CRC_Accumulate.pBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      for (int i = 0; i < 1; ++i)
      {
        pBuffer[i] = TEST_STUB.HAL_CRC_Accumulate.pBuffer.value[i];
      }
    }
    else
    {
      if (TEST_STUB.HAL_CRC_Accumulate.pBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        for (int i = 0; i < 1; ++i)
        {
          TEST_STUB.HAL_CRC_Accumulate.pBuffer.value[i] = pBuffer[i];
        }
      }
    }
    TEST_STUB.HAL_CRC_Accumulate.BufferLength = BufferLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_CRC_Accumulate.redirectFuncPtr(hcrc, pBuffer, BufferLength);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_CRC_Calculate(CRC_HandleTypeDef *hcrc, uint32_t pBuffer[], uint32_t BufferLength)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_CRC_Calculate.callcount++;
  switch (TEST_STUB.HAL_CRC_Calculate.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_CRC_Calculate.returnValue;
    if (TEST_STUB.HAL_CRC_Calculate.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hcrc = TEST_STUB.HAL_CRC_Calculate.hcrc.value;
    }
    else
    {
      if (TEST_STUB.HAL_CRC_Calculate.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_CRC_Calculate.hcrc.value = *hcrc;
      }
    }
    if (TEST_STUB.HAL_CRC_Calculate.pBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      for (int i = 0; i < 1; ++i)
      {
        pBuffer[i] = TEST_STUB.HAL_CRC_Calculate.pBuffer.value[i];
      }
    }
    else
    {
      if (TEST_STUB.HAL_CRC_Calculate.pBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        for (int i = 0; i < 1; ++i)
        {
          TEST_STUB.HAL_CRC_Calculate.pBuffer.value[i] = pBuffer[i];
        }
      }
    }
    TEST_STUB.HAL_CRC_Calculate.BufferLength = BufferLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_CRC_Calculate.redirectFuncPtr(hcrc, pBuffer, BufferLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_CRC_StateTypeDef HAL_CRC_GetState(CRC_HandleTypeDef *hcrc)
{
  HAL_CRC_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_CRC_GetState.callcount++;
  switch (TEST_STUB.HAL_CRC_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_CRC_GetState.returnValue;
    if (TEST_STUB.HAL_CRC_GetState.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hcrc = TEST_STUB.HAL_CRC_GetState.hcrc.value;
    }
    else
    {
      if (TEST_STUB.HAL_CRC_GetState.hcrc.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_CRC_GetState.hcrc.value = *hcrc;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_CRC_GetState.redirectFuncPtr(hcrc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *SectorError)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_Erase.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_Erase.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_Erase.returnValue;
    if (TEST_STUB.HAL_FLASHEx_Erase.pEraseInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pEraseInit = TEST_STUB.HAL_FLASHEx_Erase.pEraseInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_FLASHEx_Erase.pEraseInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_FLASHEx_Erase.pEraseInit.value = *pEraseInit;
      }
    }
    if (TEST_STUB.HAL_FLASHEx_Erase.SectorError.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *SectorError = TEST_STUB.HAL_FLASHEx_Erase.SectorError.value;
    }
    else
    {
      if (TEST_STUB.HAL_FLASHEx_Erase.SectorError.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_FLASHEx_Erase.SectorError.value = *SectorError;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_Erase.redirectFuncPtr(pEraseInit, SectorError);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_Erase_IT.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_Erase_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_Erase_IT.returnValue;
    if (TEST_STUB.HAL_FLASHEx_Erase_IT.pEraseInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pEraseInit = TEST_STUB.HAL_FLASHEx_Erase_IT.pEraseInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_FLASHEx_Erase_IT.pEraseInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_FLASHEx_Erase_IT.pEraseInit.value = *pEraseInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_Erase_IT.redirectFuncPtr(pEraseInit);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_OBProgram.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_OBProgram.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_OBProgram.returnValue;
    if (TEST_STUB.HAL_FLASHEx_OBProgram.pOBInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pOBInit = TEST_STUB.HAL_FLASHEx_OBProgram.pOBInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_FLASHEx_OBProgram.pOBInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_FLASHEx_OBProgram.pOBInit.value = *pOBInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_OBProgram.redirectFuncPtr(pOBInit);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit)
{
  TEST_STUB.HAL_FLASHEx_OBGetConfig.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_OBGetConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_FLASHEx_OBGetConfig.pOBInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pOBInit = TEST_STUB.HAL_FLASHEx_OBGetConfig.pOBInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_FLASHEx_OBGetConfig.pOBInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_FLASHEx_OBGetConfig.pOBInit.value = *pOBInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_FLASHEx_OBGetConfig.redirectFuncPtr(pOBInit);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_FLASHEx_AdvOBProgram(FLASH_AdvOBProgramInitTypeDef *pAdvOBInit)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_AdvOBProgram.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_AdvOBProgram.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_AdvOBProgram.returnValue;
    if (TEST_STUB.HAL_FLASHEx_AdvOBProgram.pAdvOBInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pAdvOBInit = TEST_STUB.HAL_FLASHEx_AdvOBProgram.pAdvOBInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_FLASHEx_AdvOBProgram.pAdvOBInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_FLASHEx_AdvOBProgram.pAdvOBInit.value = *pAdvOBInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_AdvOBProgram.redirectFuncPtr(pAdvOBInit);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_FLASHEx_AdvOBGetConfig(FLASH_AdvOBProgramInitTypeDef *pAdvOBInit)
{
  TEST_STUB.HAL_FLASHEx_AdvOBGetConfig.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_AdvOBGetConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_FLASHEx_AdvOBGetConfig.pAdvOBInit.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pAdvOBInit = TEST_STUB.HAL_FLASHEx_AdvOBGetConfig.pAdvOBInit.value;
    }
    else
    {
      if (TEST_STUB.HAL_FLASHEx_AdvOBGetConfig.pAdvOBInit.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_FLASHEx_AdvOBGetConfig.pAdvOBInit.value = *pAdvOBInit;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_FLASHEx_AdvOBGetConfig.redirectFuncPtr(pAdvOBInit);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_FLASHEx_OB_SelectPCROP(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_OB_SelectPCROP.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_OB_SelectPCROP.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_OB_SelectPCROP.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_OB_SelectPCROP.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASHEx_OB_DeSelectPCROP(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_OB_DeSelectPCROP.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_OB_DeSelectPCROP.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_OB_DeSelectPCROP.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_OB_DeSelectPCROP.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

void FLASH_Erase_Sector(uint32_t Sector, uint8_t VoltageRange)
{
  TEST_STUB.FLASH_Erase_Sector.callcount++;
  switch (TEST_STUB.FLASH_Erase_Sector.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.FLASH_Erase_Sector.Sector = Sector;
    TEST_STUB.FLASH_Erase_Sector.VoltageRange = VoltageRange;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.FLASH_Erase_Sector.redirectFuncPtr(Sector, VoltageRange);
    break;

  default:
    break;
  }
}

void FLASH_FlushCaches(void)
{
  TEST_STUB.FLASH_FlushCaches.callcount++;
  switch (TEST_STUB.FLASH_FlushCaches.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.FLASH_FlushCaches.redirectFuncPtr();
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_FLASHEx_StopFlashInterfaceClk(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_StopFlashInterfaceClk.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_StopFlashInterfaceClk.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_StopFlashInterfaceClk.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_StopFlashInterfaceClk.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASHEx_StartFlashInterfaceClk(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_StartFlashInterfaceClk.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_StartFlashInterfaceClk.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_StartFlashInterfaceClk.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_StartFlashInterfaceClk.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASHEx_EnableFlashSleepMode(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_EnableFlashSleepMode.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_EnableFlashSleepMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_EnableFlashSleepMode.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_EnableFlashSleepMode.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASHEx_DisableFlashSleepMode(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASHEx_DisableFlashSleepMode.callcount++;
  switch (TEST_STUB.HAL_FLASHEx_DisableFlashSleepMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASHEx_DisableFlashSleepMode.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASHEx_DisableFlashSleepMode.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASH_Program.callcount++;
  switch (TEST_STUB.HAL_FLASH_Program.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASH_Program.returnValue;
    TEST_STUB.HAL_FLASH_Program.TypeProgram = TypeProgram;
    TEST_STUB.HAL_FLASH_Program.Address = Address;
    TEST_STUB.HAL_FLASH_Program.Data = Data;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASH_Program.redirectFuncPtr(TypeProgram, Address, Data);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint64_t Data)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASH_Program_IT.callcount++;
  switch (TEST_STUB.HAL_FLASH_Program_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASH_Program_IT.returnValue;
    TEST_STUB.HAL_FLASH_Program_IT.TypeProgram = TypeProgram;
    TEST_STUB.HAL_FLASH_Program_IT.Address = Address;
    TEST_STUB.HAL_FLASH_Program_IT.Data = Data;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASH_Program_IT.redirectFuncPtr(TypeProgram, Address, Data);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_FLASH_IRQHandler(void)
{
  TEST_STUB.HAL_FLASH_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_FLASH_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_FLASH_IRQHandler.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue)
{
  TEST_STUB.HAL_FLASH_EndOfOperationCallback.callcount++;
  switch (TEST_STUB.HAL_FLASH_EndOfOperationCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_FLASH_EndOfOperationCallback.ReturnValue = ReturnValue;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_FLASH_EndOfOperationCallback.redirectFuncPtr(ReturnValue);
    break;

  default:
    break;
  }
}

void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue)
{
  TEST_STUB.HAL_FLASH_OperationErrorCallback.callcount++;
  switch (TEST_STUB.HAL_FLASH_OperationErrorCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_FLASH_OperationErrorCallback.ReturnValue = ReturnValue;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_FLASH_OperationErrorCallback.redirectFuncPtr(ReturnValue);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_FLASH_Unlock(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASH_Unlock.callcount++;
  switch (TEST_STUB.HAL_FLASH_Unlock.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASH_Unlock.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASH_Unlock.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASH_Lock(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASH_Lock.callcount++;
  switch (TEST_STUB.HAL_FLASH_Lock.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASH_Lock.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASH_Lock.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASH_OB_Unlock.callcount++;
  switch (TEST_STUB.HAL_FLASH_OB_Unlock.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASH_OB_Unlock.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASH_OB_Unlock.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASH_OB_Lock(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASH_OB_Lock.callcount++;
  switch (TEST_STUB.HAL_FLASH_OB_Lock.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASH_OB_Lock.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASH_OB_Lock.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_FLASH_OB_Launch(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_FLASH_OB_Launch.callcount++;
  switch (TEST_STUB.HAL_FLASH_OB_Launch.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASH_OB_Launch.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASH_OB_Launch.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_FLASH_GetError(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_FLASH_GetError.callcount++;
  switch (TEST_STUB.HAL_FLASH_GetError.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_FLASH_GetError.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_FLASH_GetError.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.FLASH_WaitForLastOperation.callcount++;
  switch (TEST_STUB.FLASH_WaitForLastOperation.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.FLASH_WaitForLastOperation.returnValue;
    TEST_STUB.FLASH_WaitForLastOperation.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.FLASH_WaitForLastOperation.redirectFuncPtr(Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_PWREx_EnableFlashPowerDown(void)
{
  TEST_STUB.HAL_PWREx_EnableFlashPowerDown.callcount++;
  switch (TEST_STUB.HAL_PWREx_EnableFlashPowerDown.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWREx_EnableFlashPowerDown.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWREx_DisableFlashPowerDown(void)
{
  TEST_STUB.HAL_PWREx_DisableFlashPowerDown.callcount++;
  switch (TEST_STUB.HAL_PWREx_DisableFlashPowerDown.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWREx_DisableFlashPowerDown.redirectFuncPtr();
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_PWREx_EnableBkUpReg(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_PWREx_EnableBkUpReg.callcount++;
  switch (TEST_STUB.HAL_PWREx_EnableBkUpReg.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_PWREx_EnableBkUpReg.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_PWREx_EnableBkUpReg.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_PWREx_DisableBkUpReg(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_PWREx_DisableBkUpReg.callcount++;
  switch (TEST_STUB.HAL_PWREx_DisableBkUpReg.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_PWREx_DisableBkUpReg.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_PWREx_DisableBkUpReg.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_PWREx_GetVoltageRange(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_PWREx_GetVoltageRange.callcount++;
  switch (TEST_STUB.HAL_PWREx_GetVoltageRange.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_PWREx_GetVoltageRange.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_PWREx_GetVoltageRange.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_PWREx_ControlVoltageScaling(uint32_t VoltageScaling)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_PWREx_ControlVoltageScaling.callcount++;
  switch (TEST_STUB.HAL_PWREx_ControlVoltageScaling.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_PWREx_ControlVoltageScaling.returnValue;
    TEST_STUB.HAL_PWREx_ControlVoltageScaling.VoltageScaling = VoltageScaling;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_PWREx_ControlVoltageScaling.redirectFuncPtr(VoltageScaling);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_PWREx_EnableOverDrive(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_PWREx_EnableOverDrive.callcount++;
  switch (TEST_STUB.HAL_PWREx_EnableOverDrive.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_PWREx_EnableOverDrive.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_PWREx_EnableOverDrive.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_PWREx_DisableOverDrive(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_PWREx_DisableOverDrive.callcount++;
  switch (TEST_STUB.HAL_PWREx_DisableOverDrive.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_PWREx_DisableOverDrive.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_PWREx_DisableOverDrive.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_PWREx_EnterUnderDriveSTOPMode(uint32_t Regulator, uint8_t STOPEntry)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_PWREx_EnterUnderDriveSTOPMode.callcount++;
  switch (TEST_STUB.HAL_PWREx_EnterUnderDriveSTOPMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_PWREx_EnterUnderDriveSTOPMode.returnValue;
    TEST_STUB.HAL_PWREx_EnterUnderDriveSTOPMode.Regulator = Regulator;
    TEST_STUB.HAL_PWREx_EnterUnderDriveSTOPMode.STOPEntry = STOPEntry;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_PWREx_EnterUnderDriveSTOPMode.redirectFuncPtr(Regulator, STOPEntry);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_PWR_DeInit(void)
{
  TEST_STUB.HAL_PWR_DeInit.callcount++;
  switch (TEST_STUB.HAL_PWR_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_DeInit.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_EnableBkUpAccess(void)
{
  TEST_STUB.HAL_PWR_EnableBkUpAccess.callcount++;
  switch (TEST_STUB.HAL_PWR_EnableBkUpAccess.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_EnableBkUpAccess.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_DisableBkUpAccess(void)
{
  TEST_STUB.HAL_PWR_DisableBkUpAccess.callcount++;
  switch (TEST_STUB.HAL_PWR_DisableBkUpAccess.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_DisableBkUpAccess.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_ConfigPVD(PWR_PVDTypeDef *sConfigPVD)
{
  TEST_STUB.HAL_PWR_ConfigPVD.callcount++;
  switch (TEST_STUB.HAL_PWR_ConfigPVD.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_PWR_ConfigPVD.sConfigPVD.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfigPVD = TEST_STUB.HAL_PWR_ConfigPVD.sConfigPVD.value;
    }
    else
    {
      if (TEST_STUB.HAL_PWR_ConfigPVD.sConfigPVD.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_PWR_ConfigPVD.sConfigPVD.value = *sConfigPVD;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_ConfigPVD.redirectFuncPtr(sConfigPVD);
    break;

  default:
    break;
  }
}

void HAL_PWR_EnablePVD(void)
{
  TEST_STUB.HAL_PWR_EnablePVD.callcount++;
  switch (TEST_STUB.HAL_PWR_EnablePVD.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_EnablePVD.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_DisablePVD(void)
{
  TEST_STUB.HAL_PWR_DisablePVD.callcount++;
  switch (TEST_STUB.HAL_PWR_DisablePVD.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_DisablePVD.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPinx)
{
  TEST_STUB.HAL_PWR_EnableWakeUpPin.callcount++;
  switch (TEST_STUB.HAL_PWR_EnableWakeUpPin.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_PWR_EnableWakeUpPin.WakeUpPinx = WakeUpPinx;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_EnableWakeUpPin.redirectFuncPtr(WakeUpPinx);
    break;

  default:
    break;
  }
}

void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPinx)
{
  TEST_STUB.HAL_PWR_DisableWakeUpPin.callcount++;
  switch (TEST_STUB.HAL_PWR_DisableWakeUpPin.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_PWR_DisableWakeUpPin.WakeUpPinx = WakeUpPinx;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_DisableWakeUpPin.redirectFuncPtr(WakeUpPinx);
    break;

  default:
    break;
  }
}

void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t STOPEntry)
{
  TEST_STUB.HAL_PWR_EnterSTOPMode.callcount++;
  switch (TEST_STUB.HAL_PWR_EnterSTOPMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_PWR_EnterSTOPMode.Regulator = Regulator;
    TEST_STUB.HAL_PWR_EnterSTOPMode.STOPEntry = STOPEntry;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_EnterSTOPMode.redirectFuncPtr(Regulator, STOPEntry);
    break;

  default:
    break;
  }
}

void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SLEEPEntry)
{
  TEST_STUB.HAL_PWR_EnterSLEEPMode.callcount++;
  switch (TEST_STUB.HAL_PWR_EnterSLEEPMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_PWR_EnterSLEEPMode.Regulator = Regulator;
    TEST_STUB.HAL_PWR_EnterSLEEPMode.SLEEPEntry = SLEEPEntry;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_EnterSLEEPMode.redirectFuncPtr(Regulator, SLEEPEntry);
    break;

  default:
    break;
  }
}

void HAL_PWR_EnterSTANDBYMode(void)
{
  TEST_STUB.HAL_PWR_EnterSTANDBYMode.callcount++;
  switch (TEST_STUB.HAL_PWR_EnterSTANDBYMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_EnterSTANDBYMode.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_PVD_IRQHandler(void)
{
  TEST_STUB.HAL_PWR_PVD_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_PWR_PVD_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_PVD_IRQHandler.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_PVDCallback(void)
{
  TEST_STUB.HAL_PWR_PVDCallback.callcount++;
  switch (TEST_STUB.HAL_PWR_PVDCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_PVDCallback.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_EnableSleepOnExit(void)
{
  TEST_STUB.HAL_PWR_EnableSleepOnExit.callcount++;
  switch (TEST_STUB.HAL_PWR_EnableSleepOnExit.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_EnableSleepOnExit.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_DisableSleepOnExit(void)
{
  TEST_STUB.HAL_PWR_DisableSleepOnExit.callcount++;
  switch (TEST_STUB.HAL_PWR_DisableSleepOnExit.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_DisableSleepOnExit.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_EnableSEVOnPend(void)
{
  TEST_STUB.HAL_PWR_EnableSEVOnPend.callcount++;
  switch (TEST_STUB.HAL_PWR_EnableSEVOnPend.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_EnableSEVOnPend.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_PWR_DisableSEVOnPend(void)
{
  TEST_STUB.HAL_PWR_DisableSEVOnPend.callcount++;
  switch (TEST_STUB.HAL_PWR_DisableSEVOnPend.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_PWR_DisableSEVOnPend.redirectFuncPtr();
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_SPI_Init(SPI_HandleTypeDef *hspi)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Init.callcount++;
  switch (TEST_STUB.HAL_SPI_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Init.returnValue;
    if (TEST_STUB.HAL_SPI_Init.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Init.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Init.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Init.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Init.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_DeInit(SPI_HandleTypeDef *hspi)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_DeInit.callcount++;
  switch (TEST_STUB.HAL_SPI_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_DeInit.returnValue;
    if (TEST_STUB.HAL_SPI_DeInit.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_DeInit.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_DeInit.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_DeInit.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_DeInit.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_SPI_MspInit(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_MspInit.callcount++;
  switch (TEST_STUB.HAL_SPI_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_MspInit.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_MspInit.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_MspInit.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_MspInit.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_MspInit.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_MspDeInit(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_SPI_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_MspDeInit.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_MspDeInit.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_MspDeInit.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_MspDeInit.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_MspDeInit.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_SPI_Transmit(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Transmit.callcount++;
  switch (TEST_STUB.HAL_SPI_Transmit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Transmit.returnValue;
    if (TEST_STUB.HAL_SPI_Transmit.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Transmit.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Transmit.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Transmit.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_Transmit.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_SPI_Transmit.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Transmit.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Transmit.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_SPI_Transmit.Size = Size;
    TEST_STUB.HAL_SPI_Transmit.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Transmit.redirectFuncPtr(hspi, pData, Size, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_Receive(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Receive.callcount++;
  switch (TEST_STUB.HAL_SPI_Receive.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Receive.returnValue;
    if (TEST_STUB.HAL_SPI_Receive.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Receive.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Receive.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Receive.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_Receive.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_SPI_Receive.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Receive.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Receive.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_SPI_Receive.Size = Size;
    TEST_STUB.HAL_SPI_Receive.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Receive.redirectFuncPtr(hspi, pData, Size, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_TransmitReceive(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_TransmitReceive.callcount++;
  switch (TEST_STUB.HAL_SPI_TransmitReceive.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_TransmitReceive.returnValue;
    if (TEST_STUB.HAL_SPI_TransmitReceive.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_TransmitReceive.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_TransmitReceive.pTxData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pTxData = TEST_STUB.HAL_SPI_TransmitReceive.pTxData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive.pTxData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive.pTxData.value = *pTxData;
      }
    }
    if (TEST_STUB.HAL_SPI_TransmitReceive.pRxData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pRxData = TEST_STUB.HAL_SPI_TransmitReceive.pRxData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive.pRxData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive.pRxData.value = *pRxData;
      }
    }
    TEST_STUB.HAL_SPI_TransmitReceive.Size = Size;
    TEST_STUB.HAL_SPI_TransmitReceive.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_TransmitReceive.redirectFuncPtr(hspi, pTxData, pRxData, Size, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_Transmit_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Transmit_IT.callcount++;
  switch (TEST_STUB.HAL_SPI_Transmit_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Transmit_IT.returnValue;
    if (TEST_STUB.HAL_SPI_Transmit_IT.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Transmit_IT.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Transmit_IT.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Transmit_IT.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_Transmit_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_SPI_Transmit_IT.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Transmit_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Transmit_IT.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_SPI_Transmit_IT.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Transmit_IT.redirectFuncPtr(hspi, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_Receive_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Receive_IT.callcount++;
  switch (TEST_STUB.HAL_SPI_Receive_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Receive_IT.returnValue;
    if (TEST_STUB.HAL_SPI_Receive_IT.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Receive_IT.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Receive_IT.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Receive_IT.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_Receive_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_SPI_Receive_IT.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Receive_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Receive_IT.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_SPI_Receive_IT.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Receive_IT.redirectFuncPtr(hspi, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_TransmitReceive_IT(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_TransmitReceive_IT.callcount++;
  switch (TEST_STUB.HAL_SPI_TransmitReceive_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_TransmitReceive_IT.returnValue;
    if (TEST_STUB.HAL_SPI_TransmitReceive_IT.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_TransmitReceive_IT.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive_IT.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive_IT.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_TransmitReceive_IT.pTxData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pTxData = TEST_STUB.HAL_SPI_TransmitReceive_IT.pTxData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive_IT.pTxData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive_IT.pTxData.value = *pTxData;
      }
    }
    if (TEST_STUB.HAL_SPI_TransmitReceive_IT.pRxData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pRxData = TEST_STUB.HAL_SPI_TransmitReceive_IT.pRxData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive_IT.pRxData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive_IT.pRxData.value = *pRxData;
      }
    }
    TEST_STUB.HAL_SPI_TransmitReceive_IT.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_TransmitReceive_IT.redirectFuncPtr(hspi, pTxData, pRxData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_Transmit_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Transmit_DMA.callcount++;
  switch (TEST_STUB.HAL_SPI_Transmit_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Transmit_DMA.returnValue;
    if (TEST_STUB.HAL_SPI_Transmit_DMA.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Transmit_DMA.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Transmit_DMA.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Transmit_DMA.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_Transmit_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_SPI_Transmit_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Transmit_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Transmit_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_SPI_Transmit_DMA.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Transmit_DMA.redirectFuncPtr(hspi, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_Receive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Receive_DMA.callcount++;
  switch (TEST_STUB.HAL_SPI_Receive_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Receive_DMA.returnValue;
    if (TEST_STUB.HAL_SPI_Receive_DMA.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Receive_DMA.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Receive_DMA.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Receive_DMA.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_Receive_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_SPI_Receive_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Receive_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Receive_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_SPI_Receive_DMA.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Receive_DMA.redirectFuncPtr(hspi, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_TransmitReceive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_TransmitReceive_DMA.callcount++;
  switch (TEST_STUB.HAL_SPI_TransmitReceive_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_TransmitReceive_DMA.returnValue;
    if (TEST_STUB.HAL_SPI_TransmitReceive_DMA.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_TransmitReceive_DMA.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive_DMA.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive_DMA.hspi.value = *hspi;
      }
    }
    if (TEST_STUB.HAL_SPI_TransmitReceive_DMA.pTxData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pTxData = TEST_STUB.HAL_SPI_TransmitReceive_DMA.pTxData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive_DMA.pTxData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive_DMA.pTxData.value = *pTxData;
      }
    }
    if (TEST_STUB.HAL_SPI_TransmitReceive_DMA.pRxData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pRxData = TEST_STUB.HAL_SPI_TransmitReceive_DMA.pRxData.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TransmitReceive_DMA.pRxData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TransmitReceive_DMA.pRxData.value = *pRxData;
      }
    }
    TEST_STUB.HAL_SPI_TransmitReceive_DMA.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_TransmitReceive_DMA.redirectFuncPtr(hspi, pTxData, pRxData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_DMAPause(SPI_HandleTypeDef *hspi)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_DMAPause.callcount++;
  switch (TEST_STUB.HAL_SPI_DMAPause.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_DMAPause.returnValue;
    if (TEST_STUB.HAL_SPI_DMAPause.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_DMAPause.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_DMAPause.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_DMAPause.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_DMAPause.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_DMAResume(SPI_HandleTypeDef *hspi)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_DMAResume.callcount++;
  switch (TEST_STUB.HAL_SPI_DMAResume.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_DMAResume.returnValue;
    if (TEST_STUB.HAL_SPI_DMAResume.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_DMAResume.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_DMAResume.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_DMAResume.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_DMAResume.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_DMAStop(SPI_HandleTypeDef *hspi)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_DMAStop.callcount++;
  switch (TEST_STUB.HAL_SPI_DMAStop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_DMAStop.returnValue;
    if (TEST_STUB.HAL_SPI_DMAStop.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_DMAStop.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_DMAStop.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_DMAStop.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_DMAStop.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_Abort(SPI_HandleTypeDef *hspi)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Abort.callcount++;
  switch (TEST_STUB.HAL_SPI_Abort.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Abort.returnValue;
    if (TEST_STUB.HAL_SPI_Abort.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Abort.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Abort.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Abort.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Abort.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SPI_Abort_IT(SPI_HandleTypeDef *hspi)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_Abort_IT.callcount++;
  switch (TEST_STUB.HAL_SPI_Abort_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_Abort_IT.returnValue;
    if (TEST_STUB.HAL_SPI_Abort_IT.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_Abort_IT.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_Abort_IT.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_Abort_IT.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_Abort_IT.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_SPI_IRQHandler(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_SPI_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_IRQHandler.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_IRQHandler.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_IRQHandler.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_IRQHandler.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_IRQHandler.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_TxCpltCallback.callcount++;
  switch (TEST_STUB.HAL_SPI_TxCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_TxCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_TxCpltCallback.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TxCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TxCpltCallback.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_TxCpltCallback.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_RxCpltCallback.callcount++;
  switch (TEST_STUB.HAL_SPI_RxCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_RxCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_RxCpltCallback.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_RxCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_RxCpltCallback.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_RxCpltCallback.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_TxRxCpltCallback(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_TxRxCpltCallback.callcount++;
  switch (TEST_STUB.HAL_SPI_TxRxCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_TxRxCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_TxRxCpltCallback.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TxRxCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TxRxCpltCallback.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_TxRxCpltCallback.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_TxHalfCpltCallback(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_TxHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_SPI_TxHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_TxHalfCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_TxHalfCpltCallback.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TxHalfCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TxHalfCpltCallback.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_TxHalfCpltCallback.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_RxHalfCpltCallback(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_RxHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_SPI_RxHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_RxHalfCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_RxHalfCpltCallback.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_RxHalfCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_RxHalfCpltCallback.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_RxHalfCpltCallback.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_TxRxHalfCpltCallback(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_TxRxHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_SPI_TxRxHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_TxRxHalfCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_TxRxHalfCpltCallback.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_TxRxHalfCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_TxRxHalfCpltCallback.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_TxRxHalfCpltCallback.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_ErrorCallback(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_ErrorCallback.callcount++;
  switch (TEST_STUB.HAL_SPI_ErrorCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_ErrorCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_ErrorCallback.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_ErrorCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_ErrorCallback.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_ErrorCallback.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

void HAL_SPI_AbortCpltCallback(SPI_HandleTypeDef *hspi)
{
  TEST_STUB.HAL_SPI_AbortCpltCallback.callcount++;
  switch (TEST_STUB.HAL_SPI_AbortCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_SPI_AbortCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_AbortCpltCallback.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_AbortCpltCallback.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_AbortCpltCallback.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SPI_AbortCpltCallback.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }
}

HAL_SPI_StateTypeDef HAL_SPI_GetState(SPI_HandleTypeDef *hspi)
{
  HAL_SPI_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_SPI_GetState.callcount++;
  switch (TEST_STUB.HAL_SPI_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_GetState.returnValue;
    if (TEST_STUB.HAL_SPI_GetState.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_GetState.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_GetState.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_GetState.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_GetState.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_SPI_GetError(SPI_HandleTypeDef *hspi)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_SPI_GetError.callcount++;
  switch (TEST_STUB.HAL_SPI_GetError.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SPI_GetError.returnValue;
    if (TEST_STUB.HAL_SPI_GetError.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hspi = TEST_STUB.HAL_SPI_GetError.hspi.value;
    }
    else
    {
      if (TEST_STUB.HAL_SPI_GetError.hspi.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_SPI_GetError.hspi.value = *hspi;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SPI_GetError.redirectFuncPtr(hspi);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Init(TIM_HandleTypeDef *htim, TIM_HallSensor_InitTypeDef *sConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_Init.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Init.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_Init.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Init.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIMEx_HallSensor_Init.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfig = TEST_STUB.HAL_TIMEx_HallSensor_Init.sConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Init.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Init.sConfig.value = *sConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Init.redirectFuncPtr(htim, sConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_HallSensor_DeInit(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_DeInit.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_DeInit.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_DeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_DeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_DeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIMEx_HallSensor_MspInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIMEx_HallSensor_MspInit.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIMEx_HallSensor_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_MspInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_MspInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIMEx_HallSensor_MspInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIMEx_HallSensor_MspDeInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIMEx_HallSensor_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIMEx_HallSensor_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_MspDeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_MspDeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIMEx_HallSensor_MspDeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_Start.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Start.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Start.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Start.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_Stop.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Stop.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Stop.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Stop.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_IT(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Start_IT.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Start_IT.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_IT(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Stop_IT.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Stop_IT.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Start_DMA.redirectFuncPtr(htim, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_HallSensor_Stop_DMA(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_Stop_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_Stop_DMA.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_Stop_DMA.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OCN_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OCN_Start.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OCN_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Start.returnValue;
    if (TEST_STUB.HAL_TIMEx_OCN_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OCN_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OCN_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OCN_Start.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OCN_Start.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Start.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OCN_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OCN_Stop.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OCN_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Stop.returnValue;
    if (TEST_STUB.HAL_TIMEx_OCN_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OCN_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OCN_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OCN_Stop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OCN_Stop.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Stop.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OCN_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OCN_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OCN_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_OCN_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OCN_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OCN_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OCN_Start_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OCN_Start_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Start_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OCN_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OCN_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_OCN_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OCN_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OCN_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OCN_Stop_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OCN_Stop_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Stop_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OCN_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OCN_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OCN_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Start_DMA.returnValue;
    if (TEST_STUB.HAL_TIMEx_OCN_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OCN_Start_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OCN_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OCN_Start_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OCN_Start_DMA.Channel = Channel;
    if (TEST_STUB.HAL_TIMEx_OCN_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_TIMEx_OCN_Start_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OCN_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OCN_Start_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_TIMEx_OCN_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Start_DMA.redirectFuncPtr(htim, Channel, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OCN_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OCN_Stop_DMA.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_PWMN_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_PWMN_Start.callcount++;
  switch (TEST_STUB.HAL_TIMEx_PWMN_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Start.returnValue;
    if (TEST_STUB.HAL_TIMEx_PWMN_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_PWMN_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_PWMN_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_PWMN_Start.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_PWMN_Start.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Start.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_PWMN_Stop.callcount++;
  switch (TEST_STUB.HAL_TIMEx_PWMN_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Stop.returnValue;
    if (TEST_STUB.HAL_TIMEx_PWMN_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_PWMN_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_PWMN_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_PWMN_Stop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_PWMN_Stop.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Stop.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_PWMN_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_PWMN_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_PWMN_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_PWMN_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_PWMN_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_PWMN_Start_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_PWMN_Start_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Start_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Stop_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_PWMN_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.returnValue;
    if (TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.Channel = Channel;
    if (TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Start_DMA.redirectFuncPtr(htim, Channel, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_PWMN_Stop_DMA.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OnePulseN_Start.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OnePulseN_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OnePulseN_Start.returnValue;
    if (TEST_STUB.HAL_TIMEx_OnePulseN_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OnePulseN_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OnePulseN_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OnePulseN_Start.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OnePulseN_Start.OutputChannel = OutputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OnePulseN_Start.redirectFuncPtr(htim, OutputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OnePulseN_Stop.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OnePulseN_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OnePulseN_Stop.returnValue;
    if (TEST_STUB.HAL_TIMEx_OnePulseN_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OnePulseN_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OnePulseN_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OnePulseN_Stop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OnePulseN_Stop.OutputChannel = OutputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OnePulseN_Stop.redirectFuncPtr(htim, OutputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.OutputChannel = OutputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OnePulseN_Start_IT.redirectFuncPtr(htim, OutputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_OnePulseN_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.OutputChannel = OutputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_OnePulseN_Stop_IT.redirectFuncPtr(htim, OutputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent(TIM_HandleTypeDef *htim, uint32_t InputTrigger, uint32_t CommutationSource)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_ConfigCommutEvent.callcount++;
  switch (TEST_STUB.HAL_TIMEx_ConfigCommutEvent.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_ConfigCommutEvent.returnValue;
    if (TEST_STUB.HAL_TIMEx_ConfigCommutEvent.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_ConfigCommutEvent.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_ConfigCommutEvent.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_ConfigCommutEvent.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_ConfigCommutEvent.InputTrigger = InputTrigger;
    TEST_STUB.HAL_TIMEx_ConfigCommutEvent.CommutationSource = CommutationSource;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_ConfigCommutEvent.redirectFuncPtr(htim, InputTrigger, CommutationSource);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent_IT(TIM_HandleTypeDef *htim, uint32_t InputTrigger, uint32_t CommutationSource)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.callcount++;
  switch (TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.returnValue;
    if (TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.InputTrigger = InputTrigger;
    TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.CommutationSource = CommutationSource;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_ConfigCommutEvent_IT.redirectFuncPtr(htim, InputTrigger, CommutationSource);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_ConfigCommutEvent_DMA(TIM_HandleTypeDef *htim, uint32_t InputTrigger, uint32_t CommutationSource)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.callcount++;
  switch (TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.returnValue;
    if (TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.InputTrigger = InputTrigger;
    TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.CommutationSource = CommutationSource;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_ConfigCommutEvent_DMA.redirectFuncPtr(htim, InputTrigger, CommutationSource);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_MasterConfigSynchronization(TIM_HandleTypeDef *htim, TIM_MasterConfigTypeDef *sMasterConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.callcount++;
  switch (TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.returnValue;
    if (TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.sMasterConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sMasterConfig = TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.sMasterConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.sMasterConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.sMasterConfig.value = *sMasterConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_MasterConfigSynchronization.redirectFuncPtr(htim, sMasterConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_ConfigBreakDeadTime(TIM_HandleTypeDef *htim, TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.callcount++;
  switch (TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.returnValue;
    if (TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.sBreakDeadTimeConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sBreakDeadTimeConfig = TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.sBreakDeadTimeConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.sBreakDeadTimeConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.sBreakDeadTimeConfig.value = *sBreakDeadTimeConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_ConfigBreakDeadTime.redirectFuncPtr(htim, sBreakDeadTimeConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIMEx_RemapConfig(TIM_HandleTypeDef *htim, uint32_t Remap)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_RemapConfig.callcount++;
  switch (TEST_STUB.HAL_TIMEx_RemapConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_RemapConfig.returnValue;
    if (TEST_STUB.HAL_TIMEx_RemapConfig.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_RemapConfig.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_RemapConfig.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_RemapConfig.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_RemapConfig.Remap = Remap;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_RemapConfig.redirectFuncPtr(htim, Remap);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIMEx_CommutCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIMEx_CommutCallback.callcount++;
  switch (TEST_STUB.HAL_TIMEx_CommutCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIMEx_CommutCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_CommutCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_CommutCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_CommutCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIMEx_CommutCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIMEx_CommutHalfCpltCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIMEx_CommutHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_TIMEx_CommutHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIMEx_CommutHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_CommutHalfCpltCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_CommutHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_CommutHalfCpltCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIMEx_CommutHalfCpltCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIMEx_BreakCallback.callcount++;
  switch (TEST_STUB.HAL_TIMEx_BreakCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIMEx_BreakCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_BreakCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_BreakCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_BreakCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIMEx_BreakCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_TIM_StateTypeDef HAL_TIMEx_HallSensor_GetState(TIM_HandleTypeDef *htim)
{
  HAL_TIM_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_HallSensor_GetState.callcount++;
  switch (TEST_STUB.HAL_TIMEx_HallSensor_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_GetState.returnValue;
    if (TEST_STUB.HAL_TIMEx_HallSensor_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_HallSensor_GetState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_HallSensor_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_HallSensor_GetState.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_HallSensor_GetState.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_ChannelStateTypeDef HAL_TIMEx_GetChannelNState(TIM_HandleTypeDef *htim, uint32_t ChannelN)
{
  HAL_TIM_ChannelStateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIMEx_GetChannelNState.callcount++;
  switch (TEST_STUB.HAL_TIMEx_GetChannelNState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIMEx_GetChannelNState.returnValue;
    if (TEST_STUB.HAL_TIMEx_GetChannelNState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIMEx_GetChannelNState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIMEx_GetChannelNState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIMEx_GetChannelNState.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIMEx_GetChannelNState.ChannelN = ChannelN;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIMEx_GetChannelNState.redirectFuncPtr(htim, ChannelN);
    break;

  default:
    break;
  }

  return returnValue;
}

void TIMEx_DMACommutationCplt(DMA_HandleTypeDef *hdma)
{
  TEST_STUB.TIMEx_DMACommutationCplt.callcount++;
  switch (TEST_STUB.TIMEx_DMACommutationCplt.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIMEx_DMACommutationCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.TIMEx_DMACommutationCplt.hdma.value;
    }
    else
    {
      if (TEST_STUB.TIMEx_DMACommutationCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIMEx_DMACommutationCplt.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIMEx_DMACommutationCplt.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }
}

void TIMEx_DMACommutationHalfCplt(DMA_HandleTypeDef *hdma)
{
  TEST_STUB.TIMEx_DMACommutationHalfCplt.callcount++;
  switch (TEST_STUB.TIMEx_DMACommutationHalfCplt.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIMEx_DMACommutationHalfCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.TIMEx_DMACommutationHalfCplt.hdma.value;
    }
    else
    {
      if (TEST_STUB.TIMEx_DMACommutationHalfCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIMEx_DMACommutationHalfCplt.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIMEx_DMACommutationHalfCplt.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_Init.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_Init.returnValue;
    if (TEST_STUB.HAL_TIM_Base_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_Init.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_Init.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_Init.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Base_DeInit(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_DeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_DeInit.returnValue;
    if (TEST_STUB.HAL_TIM_Base_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_DeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_DeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_DeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_Base_MspInit.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_Base_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_MspInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_MspInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_Base_MspInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_Base_MspDeInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_Base_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_Base_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_MspDeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_MspDeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_Base_MspDeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_Start.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_Start.returnValue;
    if (TEST_STUB.HAL_TIM_Base_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_Start.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_Start.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_Stop.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_Stop.returnValue;
    if (TEST_STUB.HAL_TIM_Base_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_Stop.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_Stop.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIM_Base_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_Start_IT.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_Start_IT.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Base_Stop_IT(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIM_Base_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_Stop_IT.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_Stop_IT.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Base_Start_DMA(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_Start_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_Base_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_Start_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_Start_DMA.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_Base_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_TIM_Base_Start_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_Start_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_TIM_Base_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_Start_DMA.redirectFuncPtr(htim, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Base_Stop_DMA(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_Base_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_Stop_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_Stop_DMA.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_Stop_DMA.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OC_Init(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_Init.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_Init.returnValue;
    if (TEST_STUB.HAL_TIM_OC_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_Init.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_Init.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_Init.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OC_DeInit(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_DeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_DeInit.returnValue;
    if (TEST_STUB.HAL_TIM_OC_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_DeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_DeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_DeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIM_OC_MspInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_OC_MspInit.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_OC_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_MspInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_MspInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_OC_MspInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_OC_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_OC_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_MspDeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_MspDeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_OC_MspDeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIM_OC_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_Start.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_Start.returnValue;
    if (TEST_STUB.HAL_TIM_OC_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_Start.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OC_Start.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_Start.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_Stop.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_Stop.returnValue;
    if (TEST_STUB.HAL_TIM_OC_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_Stop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OC_Stop.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_Stop.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIM_OC_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_Start_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OC_Start_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_Start_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIM_OC_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_Stop_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OC_Stop_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_Stop_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_Start_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_OC_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_Start_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_Start_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OC_Start_DMA.Channel = Channel;
    if (TEST_STUB.HAL_TIM_OC_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_TIM_OC_Start_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_Start_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_TIM_OC_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_Start_DMA.redirectFuncPtr(htim, Channel, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_OC_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_Stop_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_Stop_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OC_Stop_DMA.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_Stop_DMA.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_Init.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_Init.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_Init.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_Init.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_Init.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_DeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_DeInit.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_DeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_DeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_DeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_PWM_MspInit.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_PWM_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_MspInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_MspInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_PWM_MspInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_PWM_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_PWM_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_MspDeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_MspDeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_PWM_MspDeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_Start.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_Start.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_Start.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_PWM_Start.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_Start.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_Stop.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_Stop.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_Stop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_PWM_Stop.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_Stop.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_PWM_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_Start_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_PWM_Start_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_Start_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_PWM_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_Stop_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_PWM_Stop_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_Stop_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_PWM_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_Start_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_Start_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_Start_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_PWM_Start_DMA.Channel = Channel;
    if (TEST_STUB.HAL_TIM_PWM_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_TIM_PWM_Start_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_Start_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_TIM_PWM_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_Start_DMA.redirectFuncPtr(htim, Channel, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_PWM_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_Stop_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_Stop_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_PWM_Stop_DMA.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_Stop_DMA.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_IC_Init(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_Init.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_Init.returnValue;
    if (TEST_STUB.HAL_TIM_IC_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_Init.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_Init.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_Init.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_IC_DeInit(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_DeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_DeInit.returnValue;
    if (TEST_STUB.HAL_TIM_IC_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_DeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_DeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_DeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIM_IC_MspInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_IC_MspInit.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_IC_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_MspInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_MspInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_IC_MspInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_IC_MspDeInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_IC_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_IC_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_MspDeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_MspDeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_IC_MspDeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIM_IC_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_Start.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_Start.returnValue;
    if (TEST_STUB.HAL_TIM_IC_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_Start.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_IC_Start.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_Start.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_IC_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_Stop.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_Stop.returnValue;
    if (TEST_STUB.HAL_TIM_IC_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_Stop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_IC_Stop.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_Stop.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_IC_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIM_IC_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_Start_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_IC_Start_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_Start_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_IC_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIM_IC_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_Stop_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_IC_Stop_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_Stop_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_IC_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_Start_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_IC_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_Start_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_Start_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_IC_Start_DMA.Channel = Channel;
    if (TEST_STUB.HAL_TIM_IC_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_TIM_IC_Start_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_Start_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_Start_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_TIM_IC_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_Start_DMA.redirectFuncPtr(htim, Channel, pData, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_IC_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_IC_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_Stop_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_Stop_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_IC_Stop_DMA.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_Stop_DMA.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OnePulse_Init(TIM_HandleTypeDef *htim, uint32_t OnePulseMode)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OnePulse_Init.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Init.returnValue;
    if (TEST_STUB.HAL_TIM_OnePulse_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_Init.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_Init.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OnePulse_Init.OnePulseMode = OnePulseMode;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Init.redirectFuncPtr(htim, OnePulseMode);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OnePulse_DeInit(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OnePulse_DeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_DeInit.returnValue;
    if (TEST_STUB.HAL_TIM_OnePulse_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_DeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_DeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_DeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIM_OnePulse_MspInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_OnePulse_MspInit.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_OnePulse_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_MspInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_MspInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_OnePulse_MspInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_OnePulse_MspDeInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_OnePulse_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_OnePulse_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_MspDeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_MspDeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_OnePulse_MspDeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIM_OnePulse_Start(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OnePulse_Start.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Start.returnValue;
    if (TEST_STUB.HAL_TIM_OnePulse_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_Start.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OnePulse_Start.OutputChannel = OutputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Start.redirectFuncPtr(htim, OutputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OnePulse_Stop(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OnePulse_Stop.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Stop.returnValue;
    if (TEST_STUB.HAL_TIM_OnePulse_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_Stop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OnePulse_Stop.OutputChannel = OutputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Stop.redirectFuncPtr(htim, OutputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OnePulse_Start_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OnePulse_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIM_OnePulse_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_Start_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OnePulse_Start_IT.OutputChannel = OutputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Start_IT.redirectFuncPtr(htim, OutputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OnePulse_Stop_IT(TIM_HandleTypeDef *htim, uint32_t OutputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OnePulse_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIM_OnePulse_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_Stop_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_OnePulse_Stop_IT.OutputChannel = OutputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_Stop_IT.redirectFuncPtr(htim, OutputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Encoder_Init(TIM_HandleTypeDef *htim, TIM_Encoder_InitTypeDef *sConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_Init.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Init.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_Init.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Init.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Init.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_Encoder_Init.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfig = TEST_STUB.HAL_TIM_Encoder_Init.sConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Init.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Init.sConfig.value = *sConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Init.redirectFuncPtr(htim, sConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Encoder_DeInit(TIM_HandleTypeDef *htim)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_DeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_DeInit.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_DeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_DeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_DeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_DeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIM_Encoder_MspInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_Encoder_MspInit.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_Encoder_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_MspInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_MspInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_MspInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_Encoder_MspInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_Encoder_MspDeInit(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_Encoder_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_Encoder_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_MspDeInit.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_MspDeInit.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_MspDeInit.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_Encoder_MspDeInit.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIM_Encoder_Start(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_Start.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_Start.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Start.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_Start.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Start.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Start.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_Encoder_Start.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Start.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Encoder_Stop(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_Stop.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_Stop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Stop.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_Stop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Stop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Stop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_Encoder_Stop.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Stop.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Encoder_Start_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_Start_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_Start_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Start_IT.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_Start_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Start_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Start_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_Encoder_Start_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Start_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Encoder_Stop_IT(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_Stop_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_Stop_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Stop_IT.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_Stop_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Stop_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Stop_IT.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_Encoder_Stop_IT.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Stop_IT.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Encoder_Start_DMA(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1, uint32_t *pData2, uint16_t Length)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_Start_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_Start_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Start_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_Start_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Start_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Start_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_Encoder_Start_DMA.Channel = Channel;
    if (TEST_STUB.HAL_TIM_Encoder_Start_DMA.pData1.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData1 = TEST_STUB.HAL_TIM_Encoder_Start_DMA.pData1.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Start_DMA.pData1.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Start_DMA.pData1.value = *pData1;
      }
    }
    if (TEST_STUB.HAL_TIM_Encoder_Start_DMA.pData2.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData2 = TEST_STUB.HAL_TIM_Encoder_Start_DMA.pData2.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Start_DMA.pData2.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Start_DMA.pData2.value = *pData2;
      }
    }
    TEST_STUB.HAL_TIM_Encoder_Start_DMA.Length = Length;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Start_DMA.redirectFuncPtr(htim, Channel, pData1, pData2, Length);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_Encoder_Stop_DMA(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_Stop_DMA.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_Stop_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Stop_DMA.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_Stop_DMA.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_Stop_DMA.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_Stop_DMA.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_Encoder_Stop_DMA.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_Stop_DMA.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_TIM_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_IRQHandler.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IRQHandler.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IRQHandler.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IRQHandler.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_IRQHandler.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_TIM_OC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef *sConfig, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_ConfigChannel.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_ConfigChannel.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_ConfigChannel.returnValue;
    if (TEST_STUB.HAL_TIM_OC_ConfigChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_ConfigChannel.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_ConfigChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_ConfigChannel.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_OC_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfig = TEST_STUB.HAL_TIM_OC_ConfigChannel.sConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_ConfigChannel.sConfig.value = *sConfig;
      }
    }
    TEST_STUB.HAL_TIM_OC_ConfigChannel.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_ConfigChannel.redirectFuncPtr(htim, sConfig, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef *sConfig, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_ConfigChannel.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_ConfigChannel.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_ConfigChannel.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_ConfigChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_ConfigChannel.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_ConfigChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_ConfigChannel.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_PWM_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfig = TEST_STUB.HAL_TIM_PWM_ConfigChannel.sConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_ConfigChannel.sConfig.value = *sConfig;
      }
    }
    TEST_STUB.HAL_TIM_PWM_ConfigChannel.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_ConfigChannel.redirectFuncPtr(htim, sConfig, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_IC_ConfigChannel(TIM_HandleTypeDef *htim, TIM_IC_InitTypeDef *sConfig, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_ConfigChannel.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_ConfigChannel.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_ConfigChannel.returnValue;
    if (TEST_STUB.HAL_TIM_IC_ConfigChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_ConfigChannel.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_ConfigChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_ConfigChannel.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_IC_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfig = TEST_STUB.HAL_TIM_IC_ConfigChannel.sConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_ConfigChannel.sConfig.value = *sConfig;
      }
    }
    TEST_STUB.HAL_TIM_IC_ConfigChannel.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_ConfigChannel.redirectFuncPtr(htim, sConfig, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_OnePulse_ConfigChannel(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef *sConfig, uint32_t OutputChannel, uint32_t InputChannel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.returnValue;
    if (TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sConfig = TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.sConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.sConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.sConfig.value = *sConfig;
      }
    }
    TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.OutputChannel = OutputChannel;
    TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.InputChannel = InputChannel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_ConfigChannel.redirectFuncPtr(htim, sConfig, OutputChannel, InputChannel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_ConfigOCrefClear(TIM_HandleTypeDef *htim, TIM_ClearInputConfigTypeDef *sClearInputConfig, uint32_t Channel)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_ConfigOCrefClear.callcount++;
  switch (TEST_STUB.HAL_TIM_ConfigOCrefClear.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_ConfigOCrefClear.returnValue;
    if (TEST_STUB.HAL_TIM_ConfigOCrefClear.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_ConfigOCrefClear.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_ConfigOCrefClear.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_ConfigOCrefClear.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_ConfigOCrefClear.sClearInputConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sClearInputConfig = TEST_STUB.HAL_TIM_ConfigOCrefClear.sClearInputConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_ConfigOCrefClear.sClearInputConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_ConfigOCrefClear.sClearInputConfig.value = *sClearInputConfig;
      }
    }
    TEST_STUB.HAL_TIM_ConfigOCrefClear.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_ConfigOCrefClear.redirectFuncPtr(htim, sClearInputConfig, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim, TIM_ClockConfigTypeDef *sClockSourceConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_ConfigClockSource.callcount++;
  switch (TEST_STUB.HAL_TIM_ConfigClockSource.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_ConfigClockSource.returnValue;
    if (TEST_STUB.HAL_TIM_ConfigClockSource.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_ConfigClockSource.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_ConfigClockSource.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_ConfigClockSource.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_ConfigClockSource.sClockSourceConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sClockSourceConfig = TEST_STUB.HAL_TIM_ConfigClockSource.sClockSourceConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_ConfigClockSource.sClockSourceConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_ConfigClockSource.sClockSourceConfig.value = *sClockSourceConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_ConfigClockSource.redirectFuncPtr(htim, sClockSourceConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_ConfigTI1Input(TIM_HandleTypeDef *htim, uint32_t TI1_Selection)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_ConfigTI1Input.callcount++;
  switch (TEST_STUB.HAL_TIM_ConfigTI1Input.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_ConfigTI1Input.returnValue;
    if (TEST_STUB.HAL_TIM_ConfigTI1Input.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_ConfigTI1Input.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_ConfigTI1Input.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_ConfigTI1Input.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_ConfigTI1Input.TI1_Selection = TI1_Selection;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_ConfigTI1Input.redirectFuncPtr(htim, TI1_Selection);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_SlaveConfigSynchro.callcount++;
  switch (TEST_STUB.HAL_TIM_SlaveConfigSynchro.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_SlaveConfigSynchro.returnValue;
    if (TEST_STUB.HAL_TIM_SlaveConfigSynchro.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_SlaveConfigSynchro.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_SlaveConfigSynchro.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_SlaveConfigSynchro.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_SlaveConfigSynchro.sSlaveConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sSlaveConfig = TEST_STUB.HAL_TIM_SlaveConfigSynchro.sSlaveConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_SlaveConfigSynchro.sSlaveConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_SlaveConfigSynchro.sSlaveConfig.value = *sSlaveConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_SlaveConfigSynchro.redirectFuncPtr(htim, sSlaveConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_SlaveConfigSynchro_IT(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.callcount++;
  switch (TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.returnValue;
    if (TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.htim.value = *htim;
      }
    }
    if (TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.sSlaveConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *sSlaveConfig = TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.sSlaveConfig.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.sSlaveConfig.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.sSlaveConfig.value = *sSlaveConfig;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_SlaveConfigSynchro_IT.redirectFuncPtr(htim, sSlaveConfig);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_DMABurst_WriteStart.callcount++;
  switch (TEST_STUB.HAL_TIM_DMABurst_WriteStart.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_WriteStart.returnValue;
    if (TEST_STUB.HAL_TIM_DMABurst_WriteStart.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_DMABurst_WriteStart.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_WriteStart.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_WriteStart.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_WriteStart.BurstBaseAddress = BurstBaseAddress;
    TEST_STUB.HAL_TIM_DMABurst_WriteStart.BurstRequestSrc = BurstRequestSrc;
    if (TEST_STUB.HAL_TIM_DMABurst_WriteStart.BurstBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *BurstBuffer = TEST_STUB.HAL_TIM_DMABurst_WriteStart.BurstBuffer.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_WriteStart.BurstBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_WriteStart.BurstBuffer.value = *BurstBuffer;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_WriteStart.BurstLength = BurstLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_WriteStart.redirectFuncPtr(htim, BurstBaseAddress, BurstRequestSrc, BurstBuffer, BurstLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_DMABurst_MultiWriteStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength, uint32_t DataLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.callcount++;
  switch (TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.returnValue;
    if (TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.BurstBaseAddress = BurstBaseAddress;
    TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.BurstRequestSrc = BurstRequestSrc;
    if (TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.BurstBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *BurstBuffer = TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.BurstBuffer.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.BurstBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.BurstBuffer.value = *BurstBuffer;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.BurstLength = BurstLength;
    TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.DataLength = DataLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_MultiWriteStart.redirectFuncPtr(htim, BurstBaseAddress, BurstRequestSrc, BurstBuffer, BurstLength, DataLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_DMABurst_WriteStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_DMABurst_WriteStop.callcount++;
  switch (TEST_STUB.HAL_TIM_DMABurst_WriteStop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_WriteStop.returnValue;
    if (TEST_STUB.HAL_TIM_DMABurst_WriteStop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_DMABurst_WriteStop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_WriteStop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_WriteStop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_WriteStop.BurstRequestSrc = BurstRequestSrc;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_WriteStop.redirectFuncPtr(htim, BurstRequestSrc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_DMABurst_ReadStart.callcount++;
  switch (TEST_STUB.HAL_TIM_DMABurst_ReadStart.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_ReadStart.returnValue;
    if (TEST_STUB.HAL_TIM_DMABurst_ReadStart.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_DMABurst_ReadStart.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_ReadStart.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_ReadStart.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_ReadStart.BurstBaseAddress = BurstBaseAddress;
    TEST_STUB.HAL_TIM_DMABurst_ReadStart.BurstRequestSrc = BurstRequestSrc;
    if (TEST_STUB.HAL_TIM_DMABurst_ReadStart.BurstBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *BurstBuffer = TEST_STUB.HAL_TIM_DMABurst_ReadStart.BurstBuffer.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_ReadStart.BurstBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_ReadStart.BurstBuffer.value = *BurstBuffer;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_ReadStart.BurstLength = BurstLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_ReadStart.redirectFuncPtr(htim, BurstBaseAddress, BurstRequestSrc, BurstBuffer, BurstLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_DMABurst_MultiReadStart(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength, uint32_t DataLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.callcount++;
  switch (TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.returnValue;
    if (TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.BurstBaseAddress = BurstBaseAddress;
    TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.BurstRequestSrc = BurstRequestSrc;
    if (TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.BurstBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *BurstBuffer = TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.BurstBuffer.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.BurstBuffer.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.BurstBuffer.value = *BurstBuffer;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.BurstLength = BurstLength;
    TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.DataLength = DataLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_MultiReadStart.redirectFuncPtr(htim, BurstBaseAddress, BurstRequestSrc, BurstBuffer, BurstLength, DataLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_DMABurst_ReadStop(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_DMABurst_ReadStop.callcount++;
  switch (TEST_STUB.HAL_TIM_DMABurst_ReadStop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_ReadStop.returnValue;
    if (TEST_STUB.HAL_TIM_DMABurst_ReadStop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_DMABurst_ReadStop.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurst_ReadStop.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurst_ReadStop.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_DMABurst_ReadStop.BurstRequestSrc = BurstRequestSrc;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_DMABurst_ReadStop.redirectFuncPtr(htim, BurstRequestSrc);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_TIM_GenerateEvent(TIM_HandleTypeDef *htim, uint32_t EventSource)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_GenerateEvent.callcount++;
  switch (TEST_STUB.HAL_TIM_GenerateEvent.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_GenerateEvent.returnValue;
    if (TEST_STUB.HAL_TIM_GenerateEvent.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_GenerateEvent.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_GenerateEvent.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_GenerateEvent.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_GenerateEvent.EventSource = EventSource;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_GenerateEvent.redirectFuncPtr(htim, EventSource);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_TIM_ReadCapturedValue(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_TIM_ReadCapturedValue.callcount++;
  switch (TEST_STUB.HAL_TIM_ReadCapturedValue.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_ReadCapturedValue.returnValue;
    if (TEST_STUB.HAL_TIM_ReadCapturedValue.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_ReadCapturedValue.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_ReadCapturedValue.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_ReadCapturedValue.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_ReadCapturedValue.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_ReadCapturedValue.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_PeriodElapsedCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_PeriodElapsedCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_PeriodElapsedCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PeriodElapsedCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PeriodElapsedCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PeriodElapsedCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_PeriodElapsedCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_PeriodElapsedHalfCpltCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_PeriodElapsedHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_PeriodElapsedHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_PeriodElapsedHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PeriodElapsedHalfCpltCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PeriodElapsedHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PeriodElapsedHalfCpltCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_PeriodElapsedHalfCpltCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_OC_DelayElapsedCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_DelayElapsedCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_OC_DelayElapsedCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_DelayElapsedCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_DelayElapsedCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_DelayElapsedCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_OC_DelayElapsedCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_IC_CaptureCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_CaptureCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_IC_CaptureCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_CaptureCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_CaptureCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_CaptureCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_IC_CaptureCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_IC_CaptureHalfCpltCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_IC_CaptureHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_CaptureHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_IC_CaptureHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_CaptureHalfCpltCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_CaptureHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_CaptureHalfCpltCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_IC_CaptureHalfCpltCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_PWM_PulseFinishedCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_PulseFinishedCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_PWM_PulseFinishedCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_PulseFinishedCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_PulseFinishedCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_PulseFinishedCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_PWM_PulseFinishedCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_PWM_PulseFinishedHalfCpltCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_PWM_PulseFinishedHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_PulseFinishedHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_PWM_PulseFinishedHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_PulseFinishedHalfCpltCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_PulseFinishedHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_PulseFinishedHalfCpltCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_PWM_PulseFinishedHalfCpltCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_TriggerCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_TriggerCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_TriggerCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_TriggerCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_TriggerCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_TriggerCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_TriggerCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_TriggerHalfCpltCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_TriggerHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_TriggerHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_TriggerHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_TriggerHalfCpltCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_TriggerHalfCpltCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_TriggerHalfCpltCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_TriggerHalfCpltCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim)
{
  TEST_STUB.HAL_TIM_ErrorCallback.callcount++;
  switch (TEST_STUB.HAL_TIM_ErrorCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_TIM_ErrorCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_ErrorCallback.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_ErrorCallback.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_ErrorCallback.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_TIM_ErrorCallback.redirectFuncPtr(htim);
    break;

  default:
    break;
  }
}

HAL_TIM_StateTypeDef HAL_TIM_Base_GetState(TIM_HandleTypeDef *htim)
{
  HAL_TIM_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Base_GetState.callcount++;
  switch (TEST_STUB.HAL_TIM_Base_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Base_GetState.returnValue;
    if (TEST_STUB.HAL_TIM_Base_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Base_GetState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Base_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Base_GetState.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Base_GetState.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_StateTypeDef HAL_TIM_OC_GetState(TIM_HandleTypeDef *htim)
{
  HAL_TIM_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OC_GetState.callcount++;
  switch (TEST_STUB.HAL_TIM_OC_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OC_GetState.returnValue;
    if (TEST_STUB.HAL_TIM_OC_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OC_GetState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OC_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OC_GetState.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OC_GetState.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_StateTypeDef HAL_TIM_PWM_GetState(TIM_HandleTypeDef *htim)
{
  HAL_TIM_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_PWM_GetState.callcount++;
  switch (TEST_STUB.HAL_TIM_PWM_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_PWM_GetState.returnValue;
    if (TEST_STUB.HAL_TIM_PWM_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_PWM_GetState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_PWM_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_PWM_GetState.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_PWM_GetState.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_StateTypeDef HAL_TIM_IC_GetState(TIM_HandleTypeDef *htim)
{
  HAL_TIM_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_IC_GetState.callcount++;
  switch (TEST_STUB.HAL_TIM_IC_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_IC_GetState.returnValue;
    if (TEST_STUB.HAL_TIM_IC_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_IC_GetState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_IC_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_IC_GetState.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_IC_GetState.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_StateTypeDef HAL_TIM_OnePulse_GetState(TIM_HandleTypeDef *htim)
{
  HAL_TIM_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_OnePulse_GetState.callcount++;
  switch (TEST_STUB.HAL_TIM_OnePulse_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_GetState.returnValue;
    if (TEST_STUB.HAL_TIM_OnePulse_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_OnePulse_GetState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_OnePulse_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_OnePulse_GetState.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_OnePulse_GetState.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_StateTypeDef HAL_TIM_Encoder_GetState(TIM_HandleTypeDef *htim)
{
  HAL_TIM_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_Encoder_GetState.callcount++;
  switch (TEST_STUB.HAL_TIM_Encoder_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_Encoder_GetState.returnValue;
    if (TEST_STUB.HAL_TIM_Encoder_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_Encoder_GetState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_Encoder_GetState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_Encoder_GetState.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_Encoder_GetState.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_ActiveChannel HAL_TIM_GetActiveChannel(TIM_HandleTypeDef *htim)
{
  HAL_TIM_ActiveChannel returnValue = {0};
  TEST_STUB.HAL_TIM_GetActiveChannel.callcount++;
  switch (TEST_STUB.HAL_TIM_GetActiveChannel.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_GetActiveChannel.returnValue;
    if (TEST_STUB.HAL_TIM_GetActiveChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_GetActiveChannel.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_GetActiveChannel.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_GetActiveChannel.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_GetActiveChannel.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_ChannelStateTypeDef HAL_TIM_GetChannelState(TIM_HandleTypeDef *htim, uint32_t Channel)
{
  HAL_TIM_ChannelStateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_GetChannelState.callcount++;
  switch (TEST_STUB.HAL_TIM_GetChannelState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_GetChannelState.returnValue;
    if (TEST_STUB.HAL_TIM_GetChannelState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_GetChannelState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_GetChannelState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_GetChannelState.htim.value = *htim;
      }
    }
    TEST_STUB.HAL_TIM_GetChannelState.Channel = Channel;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_GetChannelState.redirectFuncPtr(htim, Channel);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TIM_DMABurstStateTypeDef HAL_TIM_DMABurstState(TIM_HandleTypeDef *htim)
{
  HAL_TIM_DMABurstStateTypeDef returnValue = {0};
  TEST_STUB.HAL_TIM_DMABurstState.callcount++;
  switch (TEST_STUB.HAL_TIM_DMABurstState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_TIM_DMABurstState.returnValue;
    if (TEST_STUB.HAL_TIM_DMABurstState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *htim = TEST_STUB.HAL_TIM_DMABurstState.htim.value;
    }
    else
    {
      if (TEST_STUB.HAL_TIM_DMABurstState.htim.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_TIM_DMABurstState.htim.value = *htim;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_TIM_DMABurstState.redirectFuncPtr(htim);
    break;

  default:
    break;
  }

  return returnValue;
}

void TIM_Base_SetConfig(TIM_TypeDef *TIMx, TIM_Base_InitTypeDef *Structure)
{
  TEST_STUB.TIM_Base_SetConfig.callcount++;
  switch (TEST_STUB.TIM_Base_SetConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_Base_SetConfig.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *TIMx = TEST_STUB.TIM_Base_SetConfig.TIMx.value;
    }
    else
    {
      if (TEST_STUB.TIM_Base_SetConfig.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_Base_SetConfig.TIMx.value = *TIMx;
      }
    }
    if (TEST_STUB.TIM_Base_SetConfig.Structure.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *Structure = TEST_STUB.TIM_Base_SetConfig.Structure.value;
    }
    else
    {
      if (TEST_STUB.TIM_Base_SetConfig.Structure.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_Base_SetConfig.Structure.value = *Structure;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_Base_SetConfig.redirectFuncPtr(TIMx, Structure);
    break;

  default:
    break;
  }
}

void TIM_TI1_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter)
{
  TEST_STUB.TIM_TI1_SetConfig.callcount++;
  switch (TEST_STUB.TIM_TI1_SetConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_TI1_SetConfig.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *TIMx = TEST_STUB.TIM_TI1_SetConfig.TIMx.value;
    }
    else
    {
      if (TEST_STUB.TIM_TI1_SetConfig.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_TI1_SetConfig.TIMx.value = *TIMx;
      }
    }
    TEST_STUB.TIM_TI1_SetConfig.TIM_ICPolarity = TIM_ICPolarity;
    TEST_STUB.TIM_TI1_SetConfig.TIM_ICSelection = TIM_ICSelection;
    TEST_STUB.TIM_TI1_SetConfig.TIM_ICFilter = TIM_ICFilter;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_TI1_SetConfig.redirectFuncPtr(TIMx, TIM_ICPolarity, TIM_ICSelection, TIM_ICFilter);
    break;

  default:
    break;
  }
}

void TIM_OC2_SetConfig(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config)
{
  TEST_STUB.TIM_OC2_SetConfig.callcount++;
  switch (TEST_STUB.TIM_OC2_SetConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_OC2_SetConfig.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *TIMx = TEST_STUB.TIM_OC2_SetConfig.TIMx.value;
    }
    else
    {
      if (TEST_STUB.TIM_OC2_SetConfig.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_OC2_SetConfig.TIMx.value = *TIMx;
      }
    }
    if (TEST_STUB.TIM_OC2_SetConfig.OC_Config.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *OC_Config = TEST_STUB.TIM_OC2_SetConfig.OC_Config.value;
    }
    else
    {
      if (TEST_STUB.TIM_OC2_SetConfig.OC_Config.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_OC2_SetConfig.OC_Config.value = *OC_Config;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_OC2_SetConfig.redirectFuncPtr(TIMx, OC_Config);
    break;

  default:
    break;
  }
}

void TIM_ETR_SetConfig(TIM_TypeDef *TIMx, uint32_t TIM_ExtTRGPrescaler, uint32_t TIM_ExtTRGPolarity, uint32_t ExtTRGFilter)
{
  TEST_STUB.TIM_ETR_SetConfig.callcount++;
  switch (TEST_STUB.TIM_ETR_SetConfig.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_ETR_SetConfig.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *TIMx = TEST_STUB.TIM_ETR_SetConfig.TIMx.value;
    }
    else
    {
      if (TEST_STUB.TIM_ETR_SetConfig.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_ETR_SetConfig.TIMx.value = *TIMx;
      }
    }
    TEST_STUB.TIM_ETR_SetConfig.TIM_ExtTRGPrescaler = TIM_ExtTRGPrescaler;
    TEST_STUB.TIM_ETR_SetConfig.TIM_ExtTRGPolarity = TIM_ExtTRGPolarity;
    TEST_STUB.TIM_ETR_SetConfig.ExtTRGFilter = ExtTRGFilter;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_ETR_SetConfig.redirectFuncPtr(TIMx, TIM_ExtTRGPrescaler, TIM_ExtTRGPolarity, ExtTRGFilter);
    break;

  default:
    break;
  }
}

void TIM_DMADelayPulseHalfCplt(DMA_HandleTypeDef *hdma)
{
  TEST_STUB.TIM_DMADelayPulseHalfCplt.callcount++;
  switch (TEST_STUB.TIM_DMADelayPulseHalfCplt.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_DMADelayPulseHalfCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.TIM_DMADelayPulseHalfCplt.hdma.value;
    }
    else
    {
      if (TEST_STUB.TIM_DMADelayPulseHalfCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_DMADelayPulseHalfCplt.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_DMADelayPulseHalfCplt.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }
}

void TIM_DMAError(DMA_HandleTypeDef *hdma)
{
  TEST_STUB.TIM_DMAError.callcount++;
  switch (TEST_STUB.TIM_DMAError.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_DMAError.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.TIM_DMAError.hdma.value;
    }
    else
    {
      if (TEST_STUB.TIM_DMAError.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_DMAError.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_DMAError.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }
}

void TIM_DMACaptureCplt(DMA_HandleTypeDef *hdma)
{
  TEST_STUB.TIM_DMACaptureCplt.callcount++;
  switch (TEST_STUB.TIM_DMACaptureCplt.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_DMACaptureCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.TIM_DMACaptureCplt.hdma.value;
    }
    else
    {
      if (TEST_STUB.TIM_DMACaptureCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_DMACaptureCplt.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_DMACaptureCplt.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }
}

void TIM_DMACaptureHalfCplt(DMA_HandleTypeDef *hdma)
{
  TEST_STUB.TIM_DMACaptureHalfCplt.callcount++;
  switch (TEST_STUB.TIM_DMACaptureHalfCplt.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_DMACaptureHalfCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *hdma = TEST_STUB.TIM_DMACaptureHalfCplt.hdma.value;
    }
    else
    {
      if (TEST_STUB.TIM_DMACaptureHalfCplt.hdma.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_DMACaptureHalfCplt.hdma.value = *hdma;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_DMACaptureHalfCplt.redirectFuncPtr(hdma);
    break;

  default:
    break;
  }
}

void TIM_CCxChannelCmd(TIM_TypeDef *TIMx, uint32_t Channel, uint32_t ChannelState)
{
  TEST_STUB.TIM_CCxChannelCmd.callcount++;
  switch (TEST_STUB.TIM_CCxChannelCmd.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.TIM_CCxChannelCmd.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *TIMx = TEST_STUB.TIM_CCxChannelCmd.TIMx.value;
    }
    else
    {
      if (TEST_STUB.TIM_CCxChannelCmd.TIMx.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.TIM_CCxChannelCmd.TIMx.value = *TIMx;
      }
    }
    TEST_STUB.TIM_CCxChannelCmd.Channel = Channel;
    TEST_STUB.TIM_CCxChannelCmd.ChannelState = ChannelState;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.TIM_CCxChannelCmd.redirectFuncPtr(TIMx, Channel, ChannelState);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Init.callcount++;
  switch (TEST_STUB.HAL_UART_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Init.returnValue;
    if (TEST_STUB.HAL_UART_Init.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Init.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Init.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Init.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Init.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_HalfDuplex_Init(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_HalfDuplex_Init.callcount++;
  switch (TEST_STUB.HAL_HalfDuplex_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_HalfDuplex_Init.returnValue;
    if (TEST_STUB.HAL_HalfDuplex_Init.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_HalfDuplex_Init.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_HalfDuplex_Init.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_HalfDuplex_Init.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_HalfDuplex_Init.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_LIN_Init(UART_HandleTypeDef *huart, uint32_t BreakDetectLength)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_LIN_Init.callcount++;
  switch (TEST_STUB.HAL_LIN_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_LIN_Init.returnValue;
    if (TEST_STUB.HAL_LIN_Init.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_LIN_Init.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_LIN_Init.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_LIN_Init.huart.value = *huart;
      }
    }
    TEST_STUB.HAL_LIN_Init.BreakDetectLength = BreakDetectLength;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_LIN_Init.redirectFuncPtr(huart, BreakDetectLength);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_MultiProcessor_Init(UART_HandleTypeDef *huart, uint8_t Address, uint32_t WakeUpMethod)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_MultiProcessor_Init.callcount++;
  switch (TEST_STUB.HAL_MultiProcessor_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_MultiProcessor_Init.returnValue;
    if (TEST_STUB.HAL_MultiProcessor_Init.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_MultiProcessor_Init.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_MultiProcessor_Init.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_MultiProcessor_Init.huart.value = *huart;
      }
    }
    TEST_STUB.HAL_MultiProcessor_Init.Address = Address;
    TEST_STUB.HAL_MultiProcessor_Init.WakeUpMethod = WakeUpMethod;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_MultiProcessor_Init.redirectFuncPtr(huart, Address, WakeUpMethod);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_DeInit(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_DeInit.callcount++;
  switch (TEST_STUB.HAL_UART_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_DeInit.returnValue;
    if (TEST_STUB.HAL_UART_DeInit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_DeInit.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_DeInit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_DeInit.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_DeInit.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_UART_MspInit(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_MspInit.callcount++;
  switch (TEST_STUB.HAL_UART_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_MspInit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_MspInit.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_MspInit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_MspInit.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_MspInit.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_MspDeInit(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_UART_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_MspDeInit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_MspDeInit.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_MspDeInit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_MspDeInit.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_MspDeInit.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Transmit.callcount++;
  switch (TEST_STUB.HAL_UART_Transmit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Transmit.returnValue;
    if (TEST_STUB.HAL_UART_Transmit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Transmit.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Transmit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Transmit.huart.value = *huart;
      }
    }
    TEST_STUB.HAL_UART_Transmit.pData = *pData;
    TEST_STUB.HAL_UART_Transmit.Size = Size;
    TEST_STUB.HAL_UART_Transmit.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Transmit.redirectFuncPtr(huart, pData, Size, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Receive.callcount++;
  switch (TEST_STUB.HAL_UART_Receive.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Receive.returnValue;
    if (TEST_STUB.HAL_UART_Receive.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Receive.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Receive.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Receive.huart.value = *huart;
      }
    }
    if (TEST_STUB.HAL_UART_Receive.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_UART_Receive.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Receive.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Receive.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_UART_Receive.Size = Size;
    TEST_STUB.HAL_UART_Receive.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Receive.redirectFuncPtr(huart, pData, Size, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Transmit_IT.callcount++;
  switch (TEST_STUB.HAL_UART_Transmit_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Transmit_IT.returnValue;
    if (TEST_STUB.HAL_UART_Transmit_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Transmit_IT.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Transmit_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Transmit_IT.huart.value = *huart;
      }
    }
    TEST_STUB.HAL_UART_Transmit_IT.pData = *pData;
    TEST_STUB.HAL_UART_Transmit_IT.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Transmit_IT.redirectFuncPtr(huart, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Receive_IT.callcount++;
  switch (TEST_STUB.HAL_UART_Receive_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Receive_IT.returnValue;
    if (TEST_STUB.HAL_UART_Receive_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Receive_IT.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Receive_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Receive_IT.huart.value = *huart;
      }
    }
    if (TEST_STUB.HAL_UART_Receive_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_UART_Receive_IT.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Receive_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Receive_IT.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_UART_Receive_IT.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Receive_IT.redirectFuncPtr(huart, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_Transmit_DMA(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Transmit_DMA.callcount++;
  switch (TEST_STUB.HAL_UART_Transmit_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Transmit_DMA.returnValue;
    if (TEST_STUB.HAL_UART_Transmit_DMA.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Transmit_DMA.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Transmit_DMA.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Transmit_DMA.huart.value = *huart;
      }
    }
    TEST_STUB.HAL_UART_Transmit_DMA.pData = *pData;
    TEST_STUB.HAL_UART_Transmit_DMA.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Transmit_DMA.redirectFuncPtr(huart, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Receive_DMA.callcount++;
  switch (TEST_STUB.HAL_UART_Receive_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Receive_DMA.returnValue;
    if (TEST_STUB.HAL_UART_Receive_DMA.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Receive_DMA.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Receive_DMA.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Receive_DMA.huart.value = *huart;
      }
    }
    if (TEST_STUB.HAL_UART_Receive_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_UART_Receive_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Receive_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Receive_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_UART_Receive_DMA.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Receive_DMA.redirectFuncPtr(huart, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_DMAPause(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_DMAPause.callcount++;
  switch (TEST_STUB.HAL_UART_DMAPause.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_DMAPause.returnValue;
    if (TEST_STUB.HAL_UART_DMAPause.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_DMAPause.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_DMAPause.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_DMAPause.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_DMAPause.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_DMAResume(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_DMAResume.callcount++;
  switch (TEST_STUB.HAL_UART_DMAResume.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_DMAResume.returnValue;
    if (TEST_STUB.HAL_UART_DMAResume.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_DMAResume.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_DMAResume.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_DMAResume.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_DMAResume.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_DMAStop(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_DMAStop.callcount++;
  switch (TEST_STUB.HAL_UART_DMAStop.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_DMAStop.returnValue;
    if (TEST_STUB.HAL_UART_DMAStop.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_DMAStop.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_DMAStop.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_DMAStop.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_DMAStop.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UARTEx_ReceiveToIdle(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint16_t *RxLen, uint32_t Timeout)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UARTEx_ReceiveToIdle.callcount++;
  switch (TEST_STUB.HAL_UARTEx_ReceiveToIdle.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UARTEx_ReceiveToIdle.returnValue;
    if (TEST_STUB.HAL_UARTEx_ReceiveToIdle.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UARTEx_ReceiveToIdle.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UARTEx_ReceiveToIdle.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UARTEx_ReceiveToIdle.huart.value = *huart;
      }
    }
    if (TEST_STUB.HAL_UARTEx_ReceiveToIdle.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_UARTEx_ReceiveToIdle.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_UARTEx_ReceiveToIdle.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UARTEx_ReceiveToIdle.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_UARTEx_ReceiveToIdle.Size = Size;
    if (TEST_STUB.HAL_UARTEx_ReceiveToIdle.RxLen.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *RxLen = TEST_STUB.HAL_UARTEx_ReceiveToIdle.RxLen.value;
    }
    else
    {
      if (TEST_STUB.HAL_UARTEx_ReceiveToIdle.RxLen.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UARTEx_ReceiveToIdle.RxLen.value = *RxLen;
      }
    }
    TEST_STUB.HAL_UARTEx_ReceiveToIdle.Timeout = Timeout;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UARTEx_ReceiveToIdle.redirectFuncPtr(huart, pData, Size, RxLen, Timeout);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UARTEx_ReceiveToIdle_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.callcount++;
  switch (TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.returnValue;
    if (TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.huart.value = *huart;
      }
    }
    if (TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UARTEx_ReceiveToIdle_IT.redirectFuncPtr(huart, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UARTEx_ReceiveToIdle_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.callcount++;
  switch (TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.returnValue;
    if (TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.huart.value = *huart;
      }
    }
    if (TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UARTEx_ReceiveToIdle_DMA.redirectFuncPtr(huart, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_Abort(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Abort.callcount++;
  switch (TEST_STUB.HAL_UART_Abort.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Abort.returnValue;
    if (TEST_STUB.HAL_UART_Abort.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Abort.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Abort.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Abort.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Abort.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_AbortTransmit(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_AbortTransmit.callcount++;
  switch (TEST_STUB.HAL_UART_AbortTransmit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_AbortTransmit.returnValue;
    if (TEST_STUB.HAL_UART_AbortTransmit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_AbortTransmit.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_AbortTransmit.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_AbortTransmit.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_AbortTransmit.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_AbortReceive(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_AbortReceive.callcount++;
  switch (TEST_STUB.HAL_UART_AbortReceive.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_AbortReceive.returnValue;
    if (TEST_STUB.HAL_UART_AbortReceive.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_AbortReceive.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_AbortReceive.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_AbortReceive.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_AbortReceive.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_Abort_IT(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_Abort_IT.callcount++;
  switch (TEST_STUB.HAL_UART_Abort_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_Abort_IT.returnValue;
    if (TEST_STUB.HAL_UART_Abort_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_Abort_IT.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_Abort_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_Abort_IT.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_Abort_IT.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_AbortTransmit_IT(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_AbortTransmit_IT.callcount++;
  switch (TEST_STUB.HAL_UART_AbortTransmit_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_AbortTransmit_IT.returnValue;
    if (TEST_STUB.HAL_UART_AbortTransmit_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_AbortTransmit_IT.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_AbortTransmit_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_AbortTransmit_IT.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_AbortTransmit_IT.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_UART_AbortReceive_IT(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_AbortReceive_IT.callcount++;
  switch (TEST_STUB.HAL_UART_AbortReceive_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_AbortReceive_IT.returnValue;
    if (TEST_STUB.HAL_UART_AbortReceive_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_AbortReceive_IT.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_AbortReceive_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_AbortReceive_IT.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_AbortReceive_IT.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_UART_IRQHandler(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_IRQHandler.callcount++;
  switch (TEST_STUB.HAL_UART_IRQHandler.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_IRQHandler.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_IRQHandler.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_IRQHandler.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_IRQHandler.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_IRQHandler.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_TxCpltCallback.callcount++;
  switch (TEST_STUB.HAL_UART_TxCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_TxCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_TxCpltCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_TxCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_TxCpltCallback.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_TxCpltCallback.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_TxHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_UART_TxHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_TxHalfCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_TxHalfCpltCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_TxHalfCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_TxHalfCpltCallback.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_TxHalfCpltCallback.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_RxCpltCallback.callcount++;
  switch (TEST_STUB.HAL_UART_RxCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_RxCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_RxCpltCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_RxCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_RxCpltCallback.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_RxCpltCallback.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_RxHalfCpltCallback.callcount++;
  switch (TEST_STUB.HAL_UART_RxHalfCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_RxHalfCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_RxHalfCpltCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_RxHalfCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_RxHalfCpltCallback.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_RxHalfCpltCallback.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_ErrorCallback.callcount++;
  switch (TEST_STUB.HAL_UART_ErrorCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_ErrorCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_ErrorCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_ErrorCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_ErrorCallback.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_ErrorCallback.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_AbortCpltCallback(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_AbortCpltCallback.callcount++;
  switch (TEST_STUB.HAL_UART_AbortCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_AbortCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_AbortCpltCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_AbortCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_AbortCpltCallback.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_AbortCpltCallback.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_AbortTransmitCpltCallback(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_AbortTransmitCpltCallback.callcount++;
  switch (TEST_STUB.HAL_UART_AbortTransmitCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_AbortTransmitCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_AbortTransmitCpltCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_AbortTransmitCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_AbortTransmitCpltCallback.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_AbortTransmitCpltCallback.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UART_AbortReceiveCpltCallback(UART_HandleTypeDef *huart)
{
  TEST_STUB.HAL_UART_AbortReceiveCpltCallback.callcount++;
  switch (TEST_STUB.HAL_UART_AbortReceiveCpltCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UART_AbortReceiveCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_AbortReceiveCpltCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_AbortReceiveCpltCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_AbortReceiveCpltCallback.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UART_AbortReceiveCpltCallback.redirectFuncPtr(huart);
    break;

  default:
    break;
  }
}

void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size)
{
  TEST_STUB.HAL_UARTEx_RxEventCallback.callcount++;
  switch (TEST_STUB.HAL_UARTEx_RxEventCallback.stub_option)
  {
  case STUB_OPTION_VALUE:
    if (TEST_STUB.HAL_UARTEx_RxEventCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UARTEx_RxEventCallback.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UARTEx_RxEventCallback.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UARTEx_RxEventCallback.huart.value = *huart;
      }
    }
    TEST_STUB.HAL_UARTEx_RxEventCallback.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_UARTEx_RxEventCallback.redirectFuncPtr(huart, Size);
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_LIN_SendBreak(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_LIN_SendBreak.callcount++;
  switch (TEST_STUB.HAL_LIN_SendBreak.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_LIN_SendBreak.returnValue;
    if (TEST_STUB.HAL_LIN_SendBreak.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_LIN_SendBreak.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_LIN_SendBreak.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_LIN_SendBreak.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_LIN_SendBreak.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_MultiProcessor_EnterMuteMode(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_MultiProcessor_EnterMuteMode.callcount++;
  switch (TEST_STUB.HAL_MultiProcessor_EnterMuteMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_MultiProcessor_EnterMuteMode.returnValue;
    if (TEST_STUB.HAL_MultiProcessor_EnterMuteMode.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_MultiProcessor_EnterMuteMode.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_MultiProcessor_EnterMuteMode.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_MultiProcessor_EnterMuteMode.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_MultiProcessor_EnterMuteMode.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_MultiProcessor_ExitMuteMode(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_MultiProcessor_ExitMuteMode.callcount++;
  switch (TEST_STUB.HAL_MultiProcessor_ExitMuteMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_MultiProcessor_ExitMuteMode.returnValue;
    if (TEST_STUB.HAL_MultiProcessor_ExitMuteMode.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_MultiProcessor_ExitMuteMode.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_MultiProcessor_ExitMuteMode.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_MultiProcessor_ExitMuteMode.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_MultiProcessor_ExitMuteMode.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_HalfDuplex_EnableTransmitter(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_HalfDuplex_EnableTransmitter.callcount++;
  switch (TEST_STUB.HAL_HalfDuplex_EnableTransmitter.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_HalfDuplex_EnableTransmitter.returnValue;
    if (TEST_STUB.HAL_HalfDuplex_EnableTransmitter.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_HalfDuplex_EnableTransmitter.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_HalfDuplex_EnableTransmitter.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_HalfDuplex_EnableTransmitter.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_HalfDuplex_EnableTransmitter.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_HalfDuplex_EnableReceiver(UART_HandleTypeDef *huart)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_HalfDuplex_EnableReceiver.callcount++;
  switch (TEST_STUB.HAL_HalfDuplex_EnableReceiver.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_HalfDuplex_EnableReceiver.returnValue;
    if (TEST_STUB.HAL_HalfDuplex_EnableReceiver.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_HalfDuplex_EnableReceiver.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_HalfDuplex_EnableReceiver.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_HalfDuplex_EnableReceiver.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_HalfDuplex_EnableReceiver.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart)
{
  HAL_UART_StateTypeDef returnValue = {0};
  TEST_STUB.HAL_UART_GetState.callcount++;
  switch (TEST_STUB.HAL_UART_GetState.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_GetState.returnValue;
    if (TEST_STUB.HAL_UART_GetState.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_GetState.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_GetState.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_GetState.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_GetState.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_UART_GetError(UART_HandleTypeDef *huart)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_UART_GetError.callcount++;
  switch (TEST_STUB.HAL_UART_GetError.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_UART_GetError.returnValue;
    if (TEST_STUB.HAL_UART_GetError.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.HAL_UART_GetError.huart.value;
    }
    else
    {
      if (TEST_STUB.HAL_UART_GetError.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.HAL_UART_GetError.huart.value = *huart;
      }
    }
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_UART_GetError.redirectFuncPtr(huart);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef UART_Start_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.UART_Start_Receive_IT.callcount++;
  switch (TEST_STUB.UART_Start_Receive_IT.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.UART_Start_Receive_IT.returnValue;
    if (TEST_STUB.UART_Start_Receive_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.UART_Start_Receive_IT.huart.value;
    }
    else
    {
      if (TEST_STUB.UART_Start_Receive_IT.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.UART_Start_Receive_IT.huart.value = *huart;
      }
    }
    if (TEST_STUB.UART_Start_Receive_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.UART_Start_Receive_IT.pData.value;
    }
    else
    {
      if (TEST_STUB.UART_Start_Receive_IT.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.UART_Start_Receive_IT.pData.value = *pData;
      }
    }
    TEST_STUB.UART_Start_Receive_IT.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.UART_Start_Receive_IT.redirectFuncPtr(huart, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef UART_Start_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.UART_Start_Receive_DMA.callcount++;
  switch (TEST_STUB.UART_Start_Receive_DMA.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.UART_Start_Receive_DMA.returnValue;
    if (TEST_STUB.UART_Start_Receive_DMA.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *huart = TEST_STUB.UART_Start_Receive_DMA.huart.value;
    }
    else
    {
      if (TEST_STUB.UART_Start_Receive_DMA.huart.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.UART_Start_Receive_DMA.huart.value = *huart;
      }
    }
    if (TEST_STUB.UART_Start_Receive_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_TO)
    {
      *pData = TEST_STUB.UART_Start_Receive_DMA.pData.value;
    }
    else
    {
      if (TEST_STUB.UART_Start_Receive_DMA.pData.stub_pArg_option == STUB_OPTION_PARG_COPY_FROM)
      {
        TEST_STUB.UART_Start_Receive_DMA.pData.value = *pData;
      }
    }
    TEST_STUB.UART_Start_Receive_DMA.Size = Size;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.UART_Start_Receive_DMA.redirectFuncPtr(huart, pData, Size);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_Init(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_Init.callcount++;
  switch (TEST_STUB.HAL_Init.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_Init.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_Init.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_DeInit(void)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_DeInit.callcount++;
  switch (TEST_STUB.HAL_DeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_DeInit.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_DeInit.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_MspInit(void)
{
  TEST_STUB.HAL_MspInit.callcount++;
  switch (TEST_STUB.HAL_MspInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_MspInit.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_MspDeInit(void)
{
  TEST_STUB.HAL_MspDeInit.callcount++;
  switch (TEST_STUB.HAL_MspDeInit.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_MspDeInit.redirectFuncPtr();
    break;

  default:
    break;
  }
}

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_InitTick.callcount++;
  switch (TEST_STUB.HAL_InitTick.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_InitTick.returnValue;
    TEST_STUB.HAL_InitTick.TickPriority = TickPriority;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_InitTick.redirectFuncPtr(TickPriority);
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_IncTick(void)
{
  TEST_STUB.HAL_IncTick.callcount++;
  switch (TEST_STUB.HAL_IncTick.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_IncTick.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_Delay(uint32_t Delay)
{
  TEST_STUB.HAL_Delay.callcount++;
  switch (TEST_STUB.HAL_Delay.stub_option)
  {
  case STUB_OPTION_VALUE:
    TEST_STUB.HAL_Delay.Delay = Delay;
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_Delay.redirectFuncPtr(Delay);
    break;

  default:
    break;
  }
}

uint32_t HAL_GetTick(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_GetTick.callcount++;
  switch (TEST_STUB.HAL_GetTick.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetTick.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetTick.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_GetTickPrio(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_GetTickPrio.callcount++;
  switch (TEST_STUB.HAL_GetTickPrio.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetTickPrio.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetTickPrio.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_StatusTypeDef HAL_SetTickFreq(HAL_TickFreqTypeDef Freq)
{
  HAL_StatusTypeDef returnValue = {0};
  TEST_STUB.HAL_SetTickFreq.callcount++;
  switch (TEST_STUB.HAL_SetTickFreq.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_SetTickFreq.returnValue;
    TEST_STUB.HAL_SetTickFreq.Freq = Freq;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_SetTickFreq.redirectFuncPtr(Freq);
    break;

  default:
    break;
  }

  return returnValue;
}

HAL_TickFreqTypeDef HAL_GetTickFreq(void)
{
  HAL_TickFreqTypeDef returnValue = {0};
  TEST_STUB.HAL_GetTickFreq.callcount++;
  switch (TEST_STUB.HAL_GetTickFreq.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetTickFreq.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetTickFreq.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_SuspendTick(void)
{
  TEST_STUB.HAL_SuspendTick.callcount++;
  switch (TEST_STUB.HAL_SuspendTick.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_SuspendTick.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_ResumeTick(void)
{
  TEST_STUB.HAL_ResumeTick.callcount++;
  switch (TEST_STUB.HAL_ResumeTick.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_ResumeTick.redirectFuncPtr();
    break;

  default:
    break;
  }
}

uint32_t HAL_GetHalVersion(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_GetHalVersion.callcount++;
  switch (TEST_STUB.HAL_GetHalVersion.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetHalVersion.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetHalVersion.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_GetREVID(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_GetREVID.callcount++;
  switch (TEST_STUB.HAL_GetREVID.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetREVID.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetREVID.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_GetDEVID(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_GetDEVID.callcount++;
  switch (TEST_STUB.HAL_GetDEVID.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetDEVID.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetDEVID.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

void HAL_DBGMCU_EnableDBGSleepMode(void)
{
  TEST_STUB.HAL_DBGMCU_EnableDBGSleepMode.callcount++;
  switch (TEST_STUB.HAL_DBGMCU_EnableDBGSleepMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_DBGMCU_EnableDBGSleepMode.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_DBGMCU_DisableDBGSleepMode(void)
{
  TEST_STUB.HAL_DBGMCU_DisableDBGSleepMode.callcount++;
  switch (TEST_STUB.HAL_DBGMCU_DisableDBGSleepMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_DBGMCU_DisableDBGSleepMode.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_DBGMCU_EnableDBGStopMode(void)
{
  TEST_STUB.HAL_DBGMCU_EnableDBGStopMode.callcount++;
  switch (TEST_STUB.HAL_DBGMCU_EnableDBGStopMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_DBGMCU_EnableDBGStopMode.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_DBGMCU_DisableDBGStopMode(void)
{
  TEST_STUB.HAL_DBGMCU_DisableDBGStopMode.callcount++;
  switch (TEST_STUB.HAL_DBGMCU_DisableDBGStopMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_DBGMCU_DisableDBGStopMode.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_DBGMCU_EnableDBGStandbyMode(void)
{
  TEST_STUB.HAL_DBGMCU_EnableDBGStandbyMode.callcount++;
  switch (TEST_STUB.HAL_DBGMCU_EnableDBGStandbyMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_DBGMCU_EnableDBGStandbyMode.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_DBGMCU_DisableDBGStandbyMode(void)
{
  TEST_STUB.HAL_DBGMCU_DisableDBGStandbyMode.callcount++;
  switch (TEST_STUB.HAL_DBGMCU_DisableDBGStandbyMode.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_DBGMCU_DisableDBGStandbyMode.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_EnableCompensationCell(void)
{
  TEST_STUB.HAL_EnableCompensationCell.callcount++;
  switch (TEST_STUB.HAL_EnableCompensationCell.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_EnableCompensationCell.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void HAL_DisableCompensationCell(void)
{
  TEST_STUB.HAL_DisableCompensationCell.callcount++;
  switch (TEST_STUB.HAL_DisableCompensationCell.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.HAL_DisableCompensationCell.redirectFuncPtr();
    break;

  default:
    break;
  }
}

uint32_t HAL_GetUIDw0(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_GetUIDw0.callcount++;
  switch (TEST_STUB.HAL_GetUIDw0.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetUIDw0.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetUIDw0.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_GetUIDw1(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_GetUIDw1.callcount++;
  switch (TEST_STUB.HAL_GetUIDw1.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetUIDw1.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetUIDw1.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

uint32_t HAL_GetUIDw2(void)
{
  uint32_t returnValue = {0};
  TEST_STUB.HAL_GetUIDw2.callcount++;
  switch (TEST_STUB.HAL_GetUIDw2.stub_option)
  {
  case STUB_OPTION_VALUE:
    returnValue = TEST_STUB.HAL_GetUIDw2.returnValue;
    break;

  case STUB_OPTION_REDIRECT:
    returnValue = TEST_STUB.HAL_GetUIDw2.redirectFuncPtr();
    break;

  default:
    break;
  }

  return returnValue;
}

void Error_Handler(void)
{
  TEST_STUB.Error_Handler.callcount++;
  switch (TEST_STUB.Error_Handler.stub_option)
  {
  case STUB_OPTION_VALUE:
    break;

  case STUB_OPTION_REDIRECT:
    TEST_STUB.Error_Handler.redirectFuncPtr();
    break;

  default:
    break;
  }
}

void TEST_CALL_LCD_Init()
{
  TEST_STUB.LCD_Init.callcount++;
  LCD_Init();
}

void TEST_CALL_LCD_Fill_Display(uint8_t value)
{
  TEST_STUB.LCD_Fill_Display.callcount++;
  LCD_Fill_Display(value);
}

void TEST_CALL_LCD_Fill_Buffer(uint8_t value)
{
  TEST_STUB.LCD_Fill_Buffer.callcount++;
  LCD_Fill_Buffer(value);
}

void TEST_CALL_LCD_Invalidate()
{
  TEST_STUB.LCD_Invalidate.callcount++;
  LCD_Invalidate();
}

void TEST_CALL_LCD_Write_BufferPixel(uint8_t pixel, int16_t x, int16_t y)
{
  TEST_STUB.LCD_Write_BufferPixel.callcount++;
  LCD_Write_BufferPixel(pixel, x, y);
}

void TEST_CALL_LCD_Data_Latch()
{
  TEST_STUB.LCD_Data_Latch.callcount++;
  LCD_Data_Latch();
}

void TEST_CALL_LCD_SetRWLine(LCDRWState state)
{
  TEST_STUB.LCD_SetRWLine.callcount++;
  LCD_SetRWLine(state);
}

void TEST_CALL_LCD_Enable(LCDEnableState enable)
{
  TEST_STUB.LCD_Enable.callcount++;
  LCD_Enable(enable);
}

void TEST_CALL_LCD_SetDataLines(uint8_t value)
{
  TEST_STUB.LCD_SetDataLines.callcount++;
  LCD_SetDataLines(value);
}

HAL_StatusTypeDef TEST_CALL_LCD_SetCSLines(LCDCSLinesState state)
{
  TEST_STUB.LCD_SetCSLines.callcount++;
  return LCD_SetCSLines(state);
}

void TEST_CALL_LCD_SetDILine(uint8_t state)
{
  TEST_STUB.LCD_SetDILine.callcount++;
  LCD_SetDILine(state);
}

void TEST_CALL_LCD_Delay(uint32_t us)
{
  TEST_STUB.LCD_Delay.callcount++;
  LCD_Delay(us);
}

void TEST_CALL_LCD_Write(uint8_t value, LCDCSLinesState CSState, LCDInstructionDataState DIState)
{
  TEST_STUB.LCD_Write.callcount++;
  LCD_Write(value, CSState, DIState);
}

void TEST_CALL_LCD_Draw_Char(char c, int16_t x, int16_t y)
{
  TEST_STUB.LCD_Draw_Char.callcount++;
  LCD_Draw_Char(c, x, y);
}

void TEST_CALL_LCD_Draw_String(char *string, int16_t x, int16_t y)
{
  TEST_STUB.LCD_Draw_String.callcount++;
  LCD_Draw_String(string, x, y);
}

void TEST_CALL_LCD_Draw_Circle(int16_t xc, int16_t yc, int16_t r)
{
  TEST_STUB.LCD_Draw_Circle.callcount++;
  LCD_Draw_Circle(xc, yc, r);
}

void TEST_CALL_LCD__DrawCircle(int16_t xc, int16_t yc, int16_t x, int16_t y)
{
  TEST_STUB.LCD__DrawCircle.callcount++;
  LCD__DrawCircle(xc, yc, x, y);
}

void TEST_CALL_LCD_Draw_Horizontal_Line(int16_t xc, int16_t yc, int16_t l)
{
  TEST_STUB.LCD_Draw_Horizontal_Line.callcount++;
  LCD_Draw_Horizontal_Line(xc, yc, l);
}

void TEST_CALL_LCD_Draw_Line(int x0, int y0, int x1, int y1)
{
  TEST_STUB.LCD_Draw_Line.callcount++;
  LCD_Draw_Line(x0, y0, x1, y1);
}
