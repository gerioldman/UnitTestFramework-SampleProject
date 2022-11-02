#ifndef TYPES_H
#define TYPES_H

#include "stm32f446xx.h"
#include "system_stm32f4xx.h"
#include "stm32f4xx.h"
#include "stm32f4xx_hal_def.h"
#include "stm32f4xx_hal_rcc_ex.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_exti.h"
#include "stm32f4xx_hal_dma.h"
#include "stm32f4xx_hal_dma_ex.h"
#include "stm32f4xx_hal_cortex.h"
#include "stm32f4xx_ll_adc.h"
#include "stm32f4xx_hal_adc.h"
#include "stm32f4xx_hal_adc_ex.h"
#include "stm32f4xx_hal_crc.h"
#include "stm32f4xx_hal_flash.h"
#include "stm32f4xx_hal_flash_ex.h"
#include "stm32f4xx_hal_flash_ramfunc.h"
#include "stm32f4xx_hal_pwr.h"
#include "stm32f4xx_hal_pwr_ex.h"
#include "stm32f4xx_hal_spi.h"
#include "stm32f4xx_hal_tim.h"
#include "stm32f4xx_hal_tim_ex.h"
#include "stm32f4xx_hal_uart.h"
#include "stm32f4xx_hal.h"
#include "main.h"
#include "lcd.h"
#include "font8x8_basic.h"
typedef enum 
{
  STUB_OPTION_VALUE,
  STUB_OPTION_REDIRECT
} stub_option_t;
typedef enum 
{
  STUB_OPTION_PARG_COPY_FROM,
  STUB_OPTION_PARG_COPY_TO
} stub_pArg_option_t;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_SystemInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_SystemCoreClockUpdate_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    RCC_PeriphCLKInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } PeriphClkInit;
  HAL_StatusTypeDef (*redirectFuncPtr)(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
} TEST_STUB_HAL_RCCEx_PeriphCLKConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    RCC_PeriphCLKInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } PeriphClkInit;
  void (*redirectFuncPtr)(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
} TEST_STUB_HAL_RCCEx_GetPeriphCLKConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t PeriphClk;
  uint32_t (*redirectFuncPtr)(uint32_t PeriphClk);
} TEST_STUB_HAL_RCCEx_GetPeriphCLKFreq_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint8_t Mode;
  void (*redirectFuncPtr)(uint8_t Mode);
} TEST_STUB_HAL_RCCEx_SelectLSEMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    RCC_PLLI2SInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } PLLI2SInit;
  HAL_StatusTypeDef (*redirectFuncPtr)(RCC_PLLI2SInitTypeDef *PLLI2SInit);
} TEST_STUB_HAL_RCCEx_EnablePLLI2S_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCCEx_DisablePLLI2S_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    RCC_PLLSAIInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } PLLSAIInit;
  HAL_StatusTypeDef (*redirectFuncPtr)(RCC_PLLSAIInitTypeDef *PLLSAIInit);
} TEST_STUB_HAL_RCCEx_EnablePLLSAI_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCCEx_DisablePLLSAI_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    RCC_OscInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } RCC_OscInitStruct;
  HAL_StatusTypeDef (*redirectFuncPtr)(RCC_OscInitTypeDef *RCC_OscInitStruct);
} TEST_STUB_HAL_RCC_OscConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    RCC_ClkInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } RCC_ClkInitStruct;
  uint32_t FLatency;
  HAL_StatusTypeDef (*redirectFuncPtr)(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);
} TEST_STUB_HAL_RCC_ClockConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t RCC_MCOx;
  uint32_t RCC_MCOSource;
  uint32_t RCC_MCODiv;
  void (*redirectFuncPtr)(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);
} TEST_STUB_HAL_RCC_MCOConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_EnableCSS_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_DisableCSS_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_GetSysClockFreq_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_GetHCLKFreq_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_GetPCLK1Freq_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_GetPCLK2Freq_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    RCC_OscInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } RCC_OscInitStruct;
  void (*redirectFuncPtr)(RCC_OscInitTypeDef *RCC_OscInitStruct);
} TEST_STUB_HAL_RCC_GetOscConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    RCC_ClkInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } RCC_ClkInitStruct;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pFLatency;
  void (*redirectFuncPtr)(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency);
} TEST_STUB_HAL_RCC_GetClockConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_NMI_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_RCC_CSSCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    GPIO_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } GPIOx;
  struct 
  {
    GPIO_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } GPIO_Init;
  void (*redirectFuncPtr)(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init);
} TEST_STUB_HAL_GPIO_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    GPIO_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } GPIOx;
  uint32_t GPIO_Pin;
  void (*redirectFuncPtr)(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);
} TEST_STUB_HAL_GPIO_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  GPIO_PinState returnValue;
  struct 
  {
    GPIO_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } GPIOx;
  uint16_t GPIO_Pin;
  GPIO_PinState (*redirectFuncPtr)(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
} TEST_STUB_HAL_GPIO_ReadPin_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    GPIO_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } GPIOx;
  uint16_t GPIO_Pin;
  GPIO_PinState PinState;
  void (*redirectFuncPtr)(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
} TEST_STUB_HAL_GPIO_WritePin_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    GPIO_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } GPIOx;
  uint16_t GPIO_Pin;
  void (*redirectFuncPtr)(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
} TEST_STUB_HAL_GPIO_TogglePin_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    GPIO_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } GPIOx;
  uint16_t GPIO_Pin;
  HAL_StatusTypeDef (*redirectFuncPtr)(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
} TEST_STUB_HAL_GPIO_LockPin_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint16_t GPIO_Pin;
  void (*redirectFuncPtr)(uint16_t GPIO_Pin);
} TEST_STUB_HAL_GPIO_EXTI_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint16_t GPIO_Pin;
  void (*redirectFuncPtr)(uint16_t GPIO_Pin);
} TEST_STUB_HAL_GPIO_EXTI_Callback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  struct 
  {
    EXTI_ConfigTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } pExtiConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);
} TEST_STUB_HAL_EXTI_SetConfigLine_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  struct 
  {
    EXTI_ConfigTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } pExtiConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);
} TEST_STUB_HAL_EXTI_GetConfigLine_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  HAL_StatusTypeDef (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti);
} TEST_STUB_HAL_EXTI_ClearConfigLine_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  EXTI_CallbackIDTypeDef CallbackID;
  void (*pPendingCbfn)(void);
  HAL_StatusTypeDef (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti, EXTI_CallbackIDTypeDef CallbackID, void (*pPendingCbfn)(void));
} TEST_STUB_HAL_EXTI_RegisterCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  uint32_t ExtiLine;
  HAL_StatusTypeDef (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti, uint32_t ExtiLine);
} TEST_STUB_HAL_EXTI_GetHandle_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  void (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti);
} TEST_STUB_HAL_EXTI_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  uint32_t Edge;
  uint32_t (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti, uint32_t Edge);
} TEST_STUB_HAL_EXTI_GetPending_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  uint32_t Edge;
  void (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti, uint32_t Edge);
} TEST_STUB_HAL_EXTI_ClearPending_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    EXTI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hexti;
  void (*redirectFuncPtr)(EXTI_HandleTypeDef *hexti);
} TEST_STUB_HAL_EXTI_GenerateSWI_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  uint32_t SrcAddress;
  uint32_t DstAddress;
  uint32_t SecondMemAddress;
  uint32_t DataLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength);
} TEST_STUB_HAL_DMAEx_MultiBufferStart_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  uint32_t SrcAddress;
  uint32_t DstAddress;
  uint32_t SecondMemAddress;
  uint32_t DataLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t SecondMemAddress, uint32_t DataLength);
} TEST_STUB_HAL_DMAEx_MultiBufferStart_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  uint32_t Address;
  HAL_DMA_MemoryTypeDef memory;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma, uint32_t Address, HAL_DMA_MemoryTypeDef memory);
} TEST_STUB_HAL_DMAEx_ChangeMemory_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_HAL_DMA_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_HAL_DMA_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  uint32_t SrcAddress;
  uint32_t DstAddress;
  uint32_t DataLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
} TEST_STUB_HAL_DMA_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  uint32_t SrcAddress;
  uint32_t DstAddress;
  uint32_t DataLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
} TEST_STUB_HAL_DMA_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_HAL_DMA_Abort_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_HAL_DMA_Abort_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_DMA_LevelCompleteTypeDef CompleteLevel;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma, HAL_DMA_LevelCompleteTypeDef CompleteLevel, uint32_t Timeout);
} TEST_STUB_HAL_DMA_PollForTransfer_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  void (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_HAL_DMA_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_HAL_DMA_CleanCallbacks_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_DMA_CallbackIDTypeDef CallbackID;
  void (*pCallback)(DMA_HandleTypeDef *_hdma);
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID, void (*pCallback)(DMA_HandleTypeDef *_hdma));
} TEST_STUB_HAL_DMA_RegisterCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_DMA_CallbackIDTypeDef CallbackID;
  HAL_StatusTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID);
} TEST_STUB_HAL_DMA_UnRegisterCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_DMA_StateTypeDef returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  HAL_DMA_StateTypeDef (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_HAL_DMA_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  uint32_t (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_HAL_DMA_GetError_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t PriorityGroup;
  void (*redirectFuncPtr)(uint32_t PriorityGroup);
} TEST_STUB_HAL_NVIC_SetPriorityGrouping_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  IRQn_Type IRQn;
  uint32_t PreemptPriority;
  uint32_t SubPriority;
  void (*redirectFuncPtr)(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
} TEST_STUB_HAL_NVIC_SetPriority_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  IRQn_Type IRQn;
  void (*redirectFuncPtr)(IRQn_Type IRQn);
} TEST_STUB_HAL_NVIC_EnableIRQ_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  IRQn_Type IRQn;
  void (*redirectFuncPtr)(IRQn_Type IRQn);
} TEST_STUB_HAL_NVIC_DisableIRQ_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_NVIC_SystemReset_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t TicksNumb;
  uint32_t (*redirectFuncPtr)(uint32_t TicksNumb);
} TEST_STUB_HAL_SYSTICK_Config_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_NVIC_GetPriorityGrouping_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  IRQn_Type IRQn;
  uint32_t PriorityGroup;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pPreemptPriority;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pSubPriority;
  void (*redirectFuncPtr)(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t *pPreemptPriority, uint32_t *pSubPriority);
} TEST_STUB_HAL_NVIC_GetPriority_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  IRQn_Type IRQn;
  uint32_t (*redirectFuncPtr)(IRQn_Type IRQn);
} TEST_STUB_HAL_NVIC_GetPendingIRQ_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  IRQn_Type IRQn;
  void (*redirectFuncPtr)(IRQn_Type IRQn);
} TEST_STUB_HAL_NVIC_SetPendingIRQ_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  IRQn_Type IRQn;
  void (*redirectFuncPtr)(IRQn_Type IRQn);
} TEST_STUB_HAL_NVIC_ClearPendingIRQ_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  IRQn_Type IRQn;
  uint32_t (*redirectFuncPtr)(IRQn_Type IRQn);
} TEST_STUB_HAL_NVIC_GetActive_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t CLKSource;
  void (*redirectFuncPtr)(uint32_t CLKSource);
} TEST_STUB_HAL_SYSTICK_CLKSourceConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_SYSTICK_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_SYSTICK_Callback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t MPU_Control;
  void (*redirectFuncPtr)(uint32_t MPU_Control);
} TEST_STUB_HAL_MPU_Enable_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_MPU_Disable_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    MPU_Region_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } MPU_Init;
  void (*redirectFuncPtr)(MPU_Region_InitTypeDef *MPU_Init);
} TEST_STUB_HAL_MPU_ConfigRegion_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADCEx_InjectedStart_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADCEx_InjectedStop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, uint32_t Timeout);
} TEST_STUB_HAL_ADCEx_InjectedPollForConversion_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADCEx_InjectedStart_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADCEx_InjectedStop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  uint32_t InjectedRank;
  uint32_t (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, uint32_t InjectedRank);
} TEST_STUB_HAL_ADCEx_InjectedGetValue_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint32_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, uint32_t *pData, uint32_t Length);
} TEST_STUB_HAL_ADCEx_MultiModeStart_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADCEx_MultiModeStop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  uint32_t (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADCEx_MultiModeGetValue_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  void (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADCEx_InjectedConvCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  struct 
  {
    ADC_InjectionConfTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfigInjected;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, ADC_InjectionConfTypeDef *sConfigInjected);
} TEST_STUB_HAL_ADCEx_InjectedConfigChannel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  struct 
  {
    ADC_MultiModeTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } multimode;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, ADC_MultiModeTypeDef *multimode);
} TEST_STUB_HAL_ADCEx_MultiModeConfigChannel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  void (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  void (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, uint32_t Timeout);
} TEST_STUB_HAL_ADC_PollForConversion_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  uint32_t EventType;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, uint32_t EventType, uint32_t Timeout);
} TEST_STUB_HAL_ADC_PollForEvent_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  void (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint32_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, uint32_t *pData, uint32_t Length);
} TEST_STUB_HAL_ADC_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  uint32_t (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_GetValue_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  void (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_ConvCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  void (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_ConvHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  void (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_LevelOutOfWindowCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  void (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_ErrorCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  struct 
  {
    ADC_ChannelConfTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, ADC_ChannelConfTypeDef *sConfig);
} TEST_STUB_HAL_ADC_ConfigChannel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  struct 
  {
    ADC_AnalogWDGConfTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } AnalogWDGConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(ADC_HandleTypeDef *hadc, ADC_AnalogWDGConfTypeDef *AnalogWDGConfig);
} TEST_STUB_HAL_ADC_AnalogWDGConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  uint32_t (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    ADC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hadc;
  uint32_t (*redirectFuncPtr)(ADC_HandleTypeDef *hadc);
} TEST_STUB_HAL_ADC_GetError_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    CRC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hcrc;
  HAL_StatusTypeDef (*redirectFuncPtr)(CRC_HandleTypeDef *hcrc);
} TEST_STUB_HAL_CRC_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    CRC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hcrc;
  HAL_StatusTypeDef (*redirectFuncPtr)(CRC_HandleTypeDef *hcrc);
} TEST_STUB_HAL_CRC_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    CRC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hcrc;
  void (*redirectFuncPtr)(CRC_HandleTypeDef *hcrc);
} TEST_STUB_HAL_CRC_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    CRC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hcrc;
  void (*redirectFuncPtr)(CRC_HandleTypeDef *hcrc);
} TEST_STUB_HAL_CRC_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    CRC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hcrc;
  struct 
  {
    uint32_t value[1];
    stub_pArg_option_t stub_pArg_option;
  } pBuffer;
  uint32_t BufferLength;
  uint32_t (*redirectFuncPtr)(CRC_HandleTypeDef *hcrc, uint32_t pBuffer[], uint32_t BufferLength);
} TEST_STUB_HAL_CRC_Accumulate_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    CRC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hcrc;
  struct 
  {
    uint32_t value[1];
    stub_pArg_option_t stub_pArg_option;
  } pBuffer;
  uint32_t BufferLength;
  uint32_t (*redirectFuncPtr)(CRC_HandleTypeDef *hcrc, uint32_t pBuffer[], uint32_t BufferLength);
} TEST_STUB_HAL_CRC_Calculate_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_CRC_StateTypeDef returnValue;
  struct 
  {
    CRC_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hcrc;
  HAL_CRC_StateTypeDef (*redirectFuncPtr)(CRC_HandleTypeDef *hcrc);
} TEST_STUB_HAL_CRC_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    FLASH_EraseInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } pEraseInit;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } SectorError;
  HAL_StatusTypeDef (*redirectFuncPtr)(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *SectorError);
} TEST_STUB_HAL_FLASHEx_Erase_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    FLASH_EraseInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } pEraseInit;
  HAL_StatusTypeDef (*redirectFuncPtr)(FLASH_EraseInitTypeDef *pEraseInit);
} TEST_STUB_HAL_FLASHEx_Erase_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    FLASH_OBProgramInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } pOBInit;
  HAL_StatusTypeDef (*redirectFuncPtr)(FLASH_OBProgramInitTypeDef *pOBInit);
} TEST_STUB_HAL_FLASHEx_OBProgram_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    FLASH_OBProgramInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } pOBInit;
  void (*redirectFuncPtr)(FLASH_OBProgramInitTypeDef *pOBInit);
} TEST_STUB_HAL_FLASHEx_OBGetConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    FLASH_AdvOBProgramInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } pAdvOBInit;
  HAL_StatusTypeDef (*redirectFuncPtr)(FLASH_AdvOBProgramInitTypeDef *pAdvOBInit);
} TEST_STUB_HAL_FLASHEx_AdvOBProgram_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    FLASH_AdvOBProgramInitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } pAdvOBInit;
  void (*redirectFuncPtr)(FLASH_AdvOBProgramInitTypeDef *pAdvOBInit);
} TEST_STUB_HAL_FLASHEx_AdvOBGetConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASHEx_OB_SelectPCROP_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASHEx_OB_DeSelectPCROP_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t Sector;
  uint8_t VoltageRange;
  void (*redirectFuncPtr)(uint32_t Sector, uint8_t VoltageRange);
} TEST_STUB_FLASH_Erase_Sector_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_FLASH_FlushCaches_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASHEx_StopFlashInterfaceClk_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASHEx_StartFlashInterfaceClk_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASHEx_EnableFlashSleepMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASHEx_DisableFlashSleepMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  uint32_t TypeProgram;
  uint32_t Address;
  uint64_t Data;
  HAL_StatusTypeDef (*redirectFuncPtr)(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
} TEST_STUB_HAL_FLASH_Program_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  uint32_t TypeProgram;
  uint32_t Address;
  uint64_t Data;
  HAL_StatusTypeDef (*redirectFuncPtr)(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
} TEST_STUB_HAL_FLASH_Program_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASH_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t ReturnValue;
  void (*redirectFuncPtr)(uint32_t ReturnValue);
} TEST_STUB_HAL_FLASH_EndOfOperationCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t ReturnValue;
  void (*redirectFuncPtr)(uint32_t ReturnValue);
} TEST_STUB_HAL_FLASH_OperationErrorCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASH_Unlock_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASH_Lock_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASH_OB_Unlock_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASH_OB_Lock_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASH_OB_Launch_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_FLASH_GetError_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(uint32_t Timeout);
} TEST_STUB_FLASH_WaitForLastOperation_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWREx_EnableFlashPowerDown_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWREx_DisableFlashPowerDown_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWREx_EnableBkUpReg_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWREx_DisableBkUpReg_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWREx_GetVoltageRange_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  uint32_t VoltageScaling;
  HAL_StatusTypeDef (*redirectFuncPtr)(uint32_t VoltageScaling);
} TEST_STUB_HAL_PWREx_ControlVoltageScaling_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWREx_EnableOverDrive_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWREx_DisableOverDrive_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  uint32_t Regulator;
  uint8_t STOPEntry;
  HAL_StatusTypeDef (*redirectFuncPtr)(uint32_t Regulator, uint8_t STOPEntry);
} TEST_STUB_HAL_PWREx_EnterUnderDriveSTOPMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_EnableBkUpAccess_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_DisableBkUpAccess_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    PWR_PVDTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfigPVD;
  void (*redirectFuncPtr)(PWR_PVDTypeDef *sConfigPVD);
} TEST_STUB_HAL_PWR_ConfigPVD_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_EnablePVD_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_DisablePVD_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t WakeUpPinx;
  void (*redirectFuncPtr)(uint32_t WakeUpPinx);
} TEST_STUB_HAL_PWR_EnableWakeUpPin_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t WakeUpPinx;
  void (*redirectFuncPtr)(uint32_t WakeUpPinx);
} TEST_STUB_HAL_PWR_DisableWakeUpPin_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t Regulator;
  uint8_t STOPEntry;
  void (*redirectFuncPtr)(uint32_t Regulator, uint8_t STOPEntry);
} TEST_STUB_HAL_PWR_EnterSTOPMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t Regulator;
  uint8_t SLEEPEntry;
  void (*redirectFuncPtr)(uint32_t Regulator, uint8_t SLEEPEntry);
} TEST_STUB_HAL_PWR_EnterSLEEPMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_EnterSTANDBYMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_PVD_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_PVDCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_EnableSleepOnExit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_DisableSleepOnExit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_EnableSEVOnPend_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_PWR_DisableSEVOnPend_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);
} TEST_STUB_HAL_SPI_Transmit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);
} TEST_STUB_HAL_SPI_Receive_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pTxData;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pRxData;
  uint16_t Size;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size, uint32_t Timeout);
} TEST_STUB_HAL_SPI_TransmitReceive_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_SPI_Transmit_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_SPI_Receive_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pTxData;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pRxData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
} TEST_STUB_HAL_SPI_TransmitReceive_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_SPI_Transmit_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_SPI_Receive_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pTxData;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pRxData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi, uint8_t *pTxData, uint8_t *pRxData, uint16_t Size);
} TEST_STUB_HAL_SPI_TransmitReceive_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_DMAPause_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_DMAResume_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_DMAStop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_Abort_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  HAL_StatusTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_Abort_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_TxCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_RxCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_TxRxCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_TxHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_RxHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_TxRxHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_ErrorCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  void (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_AbortCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_SPI_StateTypeDef returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  HAL_SPI_StateTypeDef (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    SPI_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hspi;
  uint32_t (*redirectFuncPtr)(SPI_HandleTypeDef *hspi);
} TEST_STUB_HAL_SPI_GetError_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_HallSensor_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_HallSensor_InitTypeDef *sConfig);
} TEST_STUB_HAL_TIMEx_HallSensor_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
} TEST_STUB_HAL_TIMEx_HallSensor_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_OCN_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_OCN_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_OCN_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_OCN_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
} TEST_STUB_HAL_TIMEx_OCN_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_OCN_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_PWMN_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_PWMN_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_PWMN_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_PWMN_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
} TEST_STUB_HAL_TIMEx_PWMN_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIMEx_PWMN_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OutputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
} TEST_STUB_HAL_TIMEx_OnePulseN_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OutputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
} TEST_STUB_HAL_TIMEx_OnePulseN_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OutputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
} TEST_STUB_HAL_TIMEx_OnePulseN_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OutputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
} TEST_STUB_HAL_TIMEx_OnePulseN_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t InputTrigger;
  uint32_t CommutationSource;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t InputTrigger, uint32_t CommutationSource);
} TEST_STUB_HAL_TIMEx_ConfigCommutEvent_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t InputTrigger;
  uint32_t CommutationSource;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t InputTrigger, uint32_t CommutationSource);
} TEST_STUB_HAL_TIMEx_ConfigCommutEvent_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t InputTrigger;
  uint32_t CommutationSource;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t InputTrigger, uint32_t CommutationSource);
} TEST_STUB_HAL_TIMEx_ConfigCommutEvent_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_MasterConfigTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sMasterConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_MasterConfigTypeDef *sMasterConfig);
} TEST_STUB_HAL_TIMEx_MasterConfigSynchronization_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_BreakDeadTimeConfigTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sBreakDeadTimeConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig);
} TEST_STUB_HAL_TIMEx_ConfigBreakDeadTime_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Remap;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Remap);
} TEST_STUB_HAL_TIMEx_RemapConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_CommutCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_CommutHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_BreakCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_StateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_StateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIMEx_HallSensor_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_ChannelStateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t ChannelN;
  HAL_TIM_ChannelStateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t ChannelN);
} TEST_STUB_HAL_TIMEx_GetChannelNState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  void (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_TIMEx_DMACommutationCplt_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  void (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_TIMEx_DMACommutationHalfCplt_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t *pData, uint16_t Length);
} TEST_STUB_HAL_TIM_Base_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OC_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OC_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OC_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OC_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_OC_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_OC_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_OC_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_OC_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
} TEST_STUB_HAL_TIM_OC_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_OC_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PWM_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PWM_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PWM_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PWM_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_PWM_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_PWM_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_PWM_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_PWM_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
} TEST_STUB_HAL_TIM_PWM_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_PWM_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_IC_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_IC_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_IC_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_IC_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_IC_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_IC_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_IC_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_IC_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData, uint16_t Length);
} TEST_STUB_HAL_TIM_IC_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_IC_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OnePulseMode;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OnePulseMode);
} TEST_STUB_HAL_TIM_OnePulse_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OnePulse_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OnePulse_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OnePulse_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OutputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
} TEST_STUB_HAL_TIM_OnePulse_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OutputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
} TEST_STUB_HAL_TIM_OnePulse_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OutputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
} TEST_STUB_HAL_TIM_OnePulse_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t OutputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t OutputChannel);
} TEST_STUB_HAL_TIM_OnePulse_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_Encoder_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_Encoder_InitTypeDef *sConfig);
} TEST_STUB_HAL_TIM_Encoder_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Encoder_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Encoder_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Encoder_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_Encoder_Start_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_Encoder_Stop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_Encoder_Start_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_Encoder_Stop_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData1;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData2;
  uint16_t Length;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel, uint32_t *pData1, uint32_t *pData2, uint16_t Length);
} TEST_STUB_HAL_TIM_Encoder_Start_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_Encoder_Stop_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_OC_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfig;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef *sConfig, uint32_t Channel);
} TEST_STUB_HAL_TIM_OC_ConfigChannel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_OC_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfig;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_OC_InitTypeDef *sConfig, uint32_t Channel);
} TEST_STUB_HAL_TIM_PWM_ConfigChannel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_IC_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfig;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_IC_InitTypeDef *sConfig, uint32_t Channel);
} TEST_STUB_HAL_TIM_IC_ConfigChannel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_OnePulse_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sConfig;
  uint32_t OutputChannel;
  uint32_t InputChannel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_OnePulse_InitTypeDef *sConfig, uint32_t OutputChannel, uint32_t InputChannel);
} TEST_STUB_HAL_TIM_OnePulse_ConfigChannel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_ClearInputConfigTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sClearInputConfig;
  uint32_t Channel;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_ClearInputConfigTypeDef *sClearInputConfig, uint32_t Channel);
} TEST_STUB_HAL_TIM_ConfigOCrefClear_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_ClockConfigTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sClockSourceConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_ClockConfigTypeDef *sClockSourceConfig);
} TEST_STUB_HAL_TIM_ConfigClockSource_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t TI1_Selection;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t TI1_Selection);
} TEST_STUB_HAL_TIM_ConfigTI1Input_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_SlaveConfigTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sSlaveConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig);
} TEST_STUB_HAL_TIM_SlaveConfigSynchro_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  struct 
  {
    TIM_SlaveConfigTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } sSlaveConfig;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, TIM_SlaveConfigTypeDef *sSlaveConfig);
} TEST_STUB_HAL_TIM_SlaveConfigSynchro_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t BurstBaseAddress;
  uint32_t BurstRequestSrc;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } BurstBuffer;
  uint32_t BurstLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength);
} TEST_STUB_HAL_TIM_DMABurst_WriteStart_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t BurstBaseAddress;
  uint32_t BurstRequestSrc;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } BurstBuffer;
  uint32_t BurstLength;
  uint32_t DataLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength, uint32_t DataLength);
} TEST_STUB_HAL_TIM_DMABurst_MultiWriteStart_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t BurstRequestSrc;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
} TEST_STUB_HAL_TIM_DMABurst_WriteStop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t BurstBaseAddress;
  uint32_t BurstRequestSrc;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } BurstBuffer;
  uint32_t BurstLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength);
} TEST_STUB_HAL_TIM_DMABurst_ReadStart_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t BurstBaseAddress;
  uint32_t BurstRequestSrc;
  struct 
  {
    uint32_t value;
    stub_pArg_option_t stub_pArg_option;
  } BurstBuffer;
  uint32_t BurstLength;
  uint32_t DataLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t BurstBaseAddress, uint32_t BurstRequestSrc, uint32_t *BurstBuffer, uint32_t BurstLength, uint32_t DataLength);
} TEST_STUB_HAL_TIM_DMABurst_MultiReadStart_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t BurstRequestSrc;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t BurstRequestSrc);
} TEST_STUB_HAL_TIM_DMABurst_ReadStop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t EventSource;
  HAL_StatusTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t EventSource);
} TEST_STUB_HAL_TIM_GenerateEvent_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  uint32_t (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_ReadCapturedValue_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PeriodElapsedCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PeriodElapsedHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OC_DelayElapsedCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_IC_CaptureCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_IC_CaptureHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PWM_PulseFinishedCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PWM_PulseFinishedHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_TriggerCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_TriggerHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  void (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_ErrorCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_StateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_StateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Base_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_StateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_StateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OC_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_StateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_StateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_PWM_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_StateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_StateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_IC_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_StateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_StateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_OnePulse_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_StateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_StateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_Encoder_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_ActiveChannel returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_ActiveChannel (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_GetActiveChannel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_ChannelStateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  uint32_t Channel;
  HAL_TIM_ChannelStateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim, uint32_t Channel);
} TEST_STUB_HAL_TIM_GetChannelState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TIM_DMABurstStateTypeDef returnValue;
  struct 
  {
    TIM_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } htim;
  HAL_TIM_DMABurstStateTypeDef (*redirectFuncPtr)(TIM_HandleTypeDef *htim);
} TEST_STUB_HAL_TIM_DMABurstState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } TIMx;
  struct 
  {
    TIM_Base_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } Structure;
  void (*redirectFuncPtr)(TIM_TypeDef *TIMx, TIM_Base_InitTypeDef *Structure);
} TEST_STUB_TIM_Base_SetConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } TIMx;
  uint32_t TIM_ICPolarity;
  uint32_t TIM_ICSelection;
  uint32_t TIM_ICFilter;
  void (*redirectFuncPtr)(TIM_TypeDef *TIMx, uint32_t TIM_ICPolarity, uint32_t TIM_ICSelection, uint32_t TIM_ICFilter);
} TEST_STUB_TIM_TI1_SetConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } TIMx;
  struct 
  {
    TIM_OC_InitTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } OC_Config;
  void (*redirectFuncPtr)(TIM_TypeDef *TIMx, TIM_OC_InitTypeDef *OC_Config);
} TEST_STUB_TIM_OC2_SetConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } TIMx;
  uint32_t TIM_ExtTRGPrescaler;
  uint32_t TIM_ExtTRGPolarity;
  uint32_t ExtTRGFilter;
  void (*redirectFuncPtr)(TIM_TypeDef *TIMx, uint32_t TIM_ExtTRGPrescaler, uint32_t TIM_ExtTRGPolarity, uint32_t ExtTRGFilter);
} TEST_STUB_TIM_ETR_SetConfig_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  void (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_TIM_DMADelayPulseHalfCplt_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  void (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_TIM_DMAError_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  void (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_TIM_DMACaptureCplt_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    DMA_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } hdma;
  void (*redirectFuncPtr)(DMA_HandleTypeDef *hdma);
} TEST_STUB_TIM_DMACaptureHalfCplt_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    TIM_TypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } TIMx;
  uint32_t Channel;
  uint32_t ChannelState;
  void (*redirectFuncPtr)(TIM_TypeDef *TIMx, uint32_t Channel, uint32_t ChannelState);
} TEST_STUB_TIM_CCxChannelCmd_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_HalfDuplex_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  uint32_t BreakDetectLength;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint32_t BreakDetectLength);
} TEST_STUB_HAL_LIN_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  uint8_t Address;
  uint32_t WakeUpMethod;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t Address, uint32_t WakeUpMethod);
} TEST_STUB_HAL_MultiProcessor_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  uint8_t pData;
  uint16_t Size;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size, uint32_t Timeout);
} TEST_STUB_HAL_UART_Transmit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);
} TEST_STUB_HAL_UART_Receive_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  uint8_t pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_UART_Transmit_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_UART_Receive_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  uint8_t pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, const uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_UART_Transmit_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_UART_Receive_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_DMAPause_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_DMAResume_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_DMAStop_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  struct 
  {
    uint16_t value;
    stub_pArg_option_t stub_pArg_option;
  } RxLen;
  uint32_t Timeout;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint16_t *RxLen, uint32_t Timeout);
} TEST_STUB_HAL_UARTEx_ReceiveToIdle_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_UARTEx_ReceiveToIdle_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
} TEST_STUB_HAL_UARTEx_ReceiveToIdle_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_Abort_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_AbortTransmit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_AbortReceive_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_Abort_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_AbortTransmit_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_AbortReceive_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_IRQHandler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_TxCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_TxHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_RxCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_RxHalfCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_ErrorCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_AbortCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_AbortTransmitCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_AbortReceiveCpltCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  uint16_t Size;
  void (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint16_t Size);
} TEST_STUB_HAL_UARTEx_RxEventCallback_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_LIN_SendBreak_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_MultiProcessor_EnterMuteMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_MultiProcessor_ExitMuteMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_HalfDuplex_EnableTransmitter_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_HalfDuplex_EnableReceiver_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_UART_StateTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  HAL_UART_StateTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_GetState_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  uint32_t (*redirectFuncPtr)(UART_HandleTypeDef *huart);
} TEST_STUB_HAL_UART_GetError_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
} TEST_STUB_UART_Start_Receive_IT_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  struct 
  {
    UART_HandleTypeDef value;
    stub_pArg_option_t stub_pArg_option;
  } huart;
  struct 
  {
    uint8_t value;
    stub_pArg_option_t stub_pArg_option;
  } pData;
  uint16_t Size;
  HAL_StatusTypeDef (*redirectFuncPtr)(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);
} TEST_STUB_UART_Start_Receive_DMA_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_StatusTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_DeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_MspInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_MspDeInit_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  uint32_t TickPriority;
  HAL_StatusTypeDef (*redirectFuncPtr)(uint32_t TickPriority);
} TEST_STUB_HAL_InitTick_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_IncTick_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t Delay;
  void (*redirectFuncPtr)(uint32_t Delay);
} TEST_STUB_HAL_Delay_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetTick_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetTickPrio_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  HAL_TickFreqTypeDef Freq;
  HAL_StatusTypeDef (*redirectFuncPtr)(HAL_TickFreqTypeDef Freq);
} TEST_STUB_HAL_SetTickFreq_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_TickFreqTypeDef returnValue;
  HAL_TickFreqTypeDef (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetTickFreq_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_SuspendTick_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_ResumeTick_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetHalVersion_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetREVID_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetDEVID_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_DBGMCU_EnableDBGSleepMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_DBGMCU_DisableDBGSleepMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_DBGMCU_EnableDBGStopMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_DBGMCU_DisableDBGStopMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_DBGMCU_EnableDBGStandbyMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_DBGMCU_DisableDBGStandbyMode_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_EnableCompensationCell_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_HAL_DisableCompensationCell_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetUIDw0_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetUIDw1_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t returnValue;
  uint32_t (*redirectFuncPtr)(void);
} TEST_STUB_HAL_GetUIDw2_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)(void);
} TEST_STUB_Error_Handler_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)();
} TEST_STUB_LCD_Init_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint8_t value;
  void (*redirectFuncPtr)(uint8_t value);
} TEST_STUB_LCD_Fill_Display_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint8_t value;
  void (*redirectFuncPtr)(uint8_t value);
} TEST_STUB_LCD_Fill_Buffer_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)();
} TEST_STUB_LCD_Invalidate_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint8_t pixel;
  int16_t x;
  int16_t y;
  void (*redirectFuncPtr)(uint8_t pixel, int16_t x, int16_t y);
} TEST_STUB_LCD_Write_BufferPixel_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  void (*redirectFuncPtr)();
} TEST_STUB_LCD_Data_Latch_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  LCDRWState state;
  void (*redirectFuncPtr)(LCDRWState state);
} TEST_STUB_LCD_SetRWLine_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  LCDEnableState enable;
  void (*redirectFuncPtr)(LCDEnableState enable);
} TEST_STUB_LCD_Enable_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint8_t value;
  void (*redirectFuncPtr)(uint8_t value);
} TEST_STUB_LCD_SetDataLines_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  HAL_StatusTypeDef returnValue;
  LCDCSLinesState state;
  HAL_StatusTypeDef (*redirectFuncPtr)(LCDCSLinesState state);
} TEST_STUB_LCD_SetCSLines_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint8_t state;
  void (*redirectFuncPtr)(uint8_t state);
} TEST_STUB_LCD_SetDILine_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint32_t us;
  void (*redirectFuncPtr)(uint32_t us);
} TEST_STUB_LCD_Delay_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  uint8_t value;
  LCDCSLinesState CSState;
  LCDInstructionDataState DIState;
  void (*redirectFuncPtr)(uint8_t value, LCDCSLinesState CSState, LCDInstructionDataState DIState);
} TEST_STUB_LCD_Write_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  char c;
  int16_t x;
  int16_t y;
  void (*redirectFuncPtr)(char c, int16_t x, int16_t y);
} TEST_STUB_LCD_Draw_Char_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  struct 
  {
    char value;
    stub_pArg_option_t stub_pArg_option;
  } string;
  int16_t x;
  int16_t y;
  void (*redirectFuncPtr)(char *string, int16_t x, int16_t y);
} TEST_STUB_LCD_Draw_String_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  int16_t xc;
  int16_t yc;
  int16_t r;
  void (*redirectFuncPtr)(int16_t xc, int16_t yc, int16_t r);
} TEST_STUB_LCD_Draw_Circle_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  int16_t xc;
  int16_t yc;
  int16_t x;
  int16_t y;
  void (*redirectFuncPtr)(int16_t xc, int16_t yc, int16_t x, int16_t y);
} TEST_STUB_LCD__DrawCircle_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  int16_t xc;
  int16_t yc;
  int16_t l;
  void (*redirectFuncPtr)(int16_t xc, int16_t yc, int16_t l);
} TEST_STUB_LCD_Draw_Horizontal_Line_TYPE;
typedef struct 
{
  unsigned long callcount;
  stub_option_t stub_option;
  int x0;
  int y0;
  int x1;
  int y1;
  void (*redirectFuncPtr)(int x0, int y0, int x1, int y1);
} TEST_STUB_LCD_Draw_Line_TYPE;
typedef struct 
{
  TEST_STUB_SystemInit_TYPE SystemInit;
  TEST_STUB_SystemCoreClockUpdate_TYPE SystemCoreClockUpdate;
  TEST_STUB_HAL_RCCEx_PeriphCLKConfig_TYPE HAL_RCCEx_PeriphCLKConfig;
  TEST_STUB_HAL_RCCEx_GetPeriphCLKConfig_TYPE HAL_RCCEx_GetPeriphCLKConfig;
  TEST_STUB_HAL_RCCEx_GetPeriphCLKFreq_TYPE HAL_RCCEx_GetPeriphCLKFreq;
  TEST_STUB_HAL_RCCEx_SelectLSEMode_TYPE HAL_RCCEx_SelectLSEMode;
  TEST_STUB_HAL_RCCEx_EnablePLLI2S_TYPE HAL_RCCEx_EnablePLLI2S;
  TEST_STUB_HAL_RCCEx_DisablePLLI2S_TYPE HAL_RCCEx_DisablePLLI2S;
  TEST_STUB_HAL_RCCEx_EnablePLLSAI_TYPE HAL_RCCEx_EnablePLLSAI;
  TEST_STUB_HAL_RCCEx_DisablePLLSAI_TYPE HAL_RCCEx_DisablePLLSAI;
  TEST_STUB_HAL_RCC_DeInit_TYPE HAL_RCC_DeInit;
  TEST_STUB_HAL_RCC_OscConfig_TYPE HAL_RCC_OscConfig;
  TEST_STUB_HAL_RCC_ClockConfig_TYPE HAL_RCC_ClockConfig;
  TEST_STUB_HAL_RCC_MCOConfig_TYPE HAL_RCC_MCOConfig;
  TEST_STUB_HAL_RCC_EnableCSS_TYPE HAL_RCC_EnableCSS;
  TEST_STUB_HAL_RCC_DisableCSS_TYPE HAL_RCC_DisableCSS;
  TEST_STUB_HAL_RCC_GetSysClockFreq_TYPE HAL_RCC_GetSysClockFreq;
  TEST_STUB_HAL_RCC_GetHCLKFreq_TYPE HAL_RCC_GetHCLKFreq;
  TEST_STUB_HAL_RCC_GetPCLK1Freq_TYPE HAL_RCC_GetPCLK1Freq;
  TEST_STUB_HAL_RCC_GetPCLK2Freq_TYPE HAL_RCC_GetPCLK2Freq;
  TEST_STUB_HAL_RCC_GetOscConfig_TYPE HAL_RCC_GetOscConfig;
  TEST_STUB_HAL_RCC_GetClockConfig_TYPE HAL_RCC_GetClockConfig;
  TEST_STUB_HAL_RCC_NMI_IRQHandler_TYPE HAL_RCC_NMI_IRQHandler;
  TEST_STUB_HAL_RCC_CSSCallback_TYPE HAL_RCC_CSSCallback;
  TEST_STUB_HAL_GPIO_Init_TYPE HAL_GPIO_Init;
  TEST_STUB_HAL_GPIO_DeInit_TYPE HAL_GPIO_DeInit;
  TEST_STUB_HAL_GPIO_ReadPin_TYPE HAL_GPIO_ReadPin;
  TEST_STUB_HAL_GPIO_WritePin_TYPE HAL_GPIO_WritePin;
  TEST_STUB_HAL_GPIO_TogglePin_TYPE HAL_GPIO_TogglePin;
  TEST_STUB_HAL_GPIO_LockPin_TYPE HAL_GPIO_LockPin;
  TEST_STUB_HAL_GPIO_EXTI_IRQHandler_TYPE HAL_GPIO_EXTI_IRQHandler;
  TEST_STUB_HAL_GPIO_EXTI_Callback_TYPE HAL_GPIO_EXTI_Callback;
  TEST_STUB_HAL_EXTI_SetConfigLine_TYPE HAL_EXTI_SetConfigLine;
  TEST_STUB_HAL_EXTI_GetConfigLine_TYPE HAL_EXTI_GetConfigLine;
  TEST_STUB_HAL_EXTI_ClearConfigLine_TYPE HAL_EXTI_ClearConfigLine;
  TEST_STUB_HAL_EXTI_RegisterCallback_TYPE HAL_EXTI_RegisterCallback;
  TEST_STUB_HAL_EXTI_GetHandle_TYPE HAL_EXTI_GetHandle;
  TEST_STUB_HAL_EXTI_IRQHandler_TYPE HAL_EXTI_IRQHandler;
  TEST_STUB_HAL_EXTI_GetPending_TYPE HAL_EXTI_GetPending;
  TEST_STUB_HAL_EXTI_ClearPending_TYPE HAL_EXTI_ClearPending;
  TEST_STUB_HAL_EXTI_GenerateSWI_TYPE HAL_EXTI_GenerateSWI;
  TEST_STUB_HAL_DMAEx_MultiBufferStart_TYPE HAL_DMAEx_MultiBufferStart;
  TEST_STUB_HAL_DMAEx_MultiBufferStart_IT_TYPE HAL_DMAEx_MultiBufferStart_IT;
  TEST_STUB_HAL_DMAEx_ChangeMemory_TYPE HAL_DMAEx_ChangeMemory;
  TEST_STUB_HAL_DMA_Init_TYPE HAL_DMA_Init;
  TEST_STUB_HAL_DMA_DeInit_TYPE HAL_DMA_DeInit;
  TEST_STUB_HAL_DMA_Start_TYPE HAL_DMA_Start;
  TEST_STUB_HAL_DMA_Start_IT_TYPE HAL_DMA_Start_IT;
  TEST_STUB_HAL_DMA_Abort_TYPE HAL_DMA_Abort;
  TEST_STUB_HAL_DMA_Abort_IT_TYPE HAL_DMA_Abort_IT;
  TEST_STUB_HAL_DMA_PollForTransfer_TYPE HAL_DMA_PollForTransfer;
  TEST_STUB_HAL_DMA_IRQHandler_TYPE HAL_DMA_IRQHandler;
  TEST_STUB_HAL_DMA_CleanCallbacks_TYPE HAL_DMA_CleanCallbacks;
  TEST_STUB_HAL_DMA_RegisterCallback_TYPE HAL_DMA_RegisterCallback;
  TEST_STUB_HAL_DMA_UnRegisterCallback_TYPE HAL_DMA_UnRegisterCallback;
  TEST_STUB_HAL_DMA_GetState_TYPE HAL_DMA_GetState;
  TEST_STUB_HAL_DMA_GetError_TYPE HAL_DMA_GetError;
  TEST_STUB_HAL_NVIC_SetPriorityGrouping_TYPE HAL_NVIC_SetPriorityGrouping;
  TEST_STUB_HAL_NVIC_SetPriority_TYPE HAL_NVIC_SetPriority;
  TEST_STUB_HAL_NVIC_EnableIRQ_TYPE HAL_NVIC_EnableIRQ;
  TEST_STUB_HAL_NVIC_DisableIRQ_TYPE HAL_NVIC_DisableIRQ;
  TEST_STUB_HAL_NVIC_SystemReset_TYPE HAL_NVIC_SystemReset;
  TEST_STUB_HAL_SYSTICK_Config_TYPE HAL_SYSTICK_Config;
  TEST_STUB_HAL_NVIC_GetPriorityGrouping_TYPE HAL_NVIC_GetPriorityGrouping;
  TEST_STUB_HAL_NVIC_GetPriority_TYPE HAL_NVIC_GetPriority;
  TEST_STUB_HAL_NVIC_GetPendingIRQ_TYPE HAL_NVIC_GetPendingIRQ;
  TEST_STUB_HAL_NVIC_SetPendingIRQ_TYPE HAL_NVIC_SetPendingIRQ;
  TEST_STUB_HAL_NVIC_ClearPendingIRQ_TYPE HAL_NVIC_ClearPendingIRQ;
  TEST_STUB_HAL_NVIC_GetActive_TYPE HAL_NVIC_GetActive;
  TEST_STUB_HAL_SYSTICK_CLKSourceConfig_TYPE HAL_SYSTICK_CLKSourceConfig;
  TEST_STUB_HAL_SYSTICK_IRQHandler_TYPE HAL_SYSTICK_IRQHandler;
  TEST_STUB_HAL_SYSTICK_Callback_TYPE HAL_SYSTICK_Callback;
  TEST_STUB_HAL_MPU_Enable_TYPE HAL_MPU_Enable;
  TEST_STUB_HAL_MPU_Disable_TYPE HAL_MPU_Disable;
  TEST_STUB_HAL_MPU_ConfigRegion_TYPE HAL_MPU_ConfigRegion;
  TEST_STUB_HAL_ADCEx_InjectedStart_TYPE HAL_ADCEx_InjectedStart;
  TEST_STUB_HAL_ADCEx_InjectedStop_TYPE HAL_ADCEx_InjectedStop;
  TEST_STUB_HAL_ADCEx_InjectedPollForConversion_TYPE HAL_ADCEx_InjectedPollForConversion;
  TEST_STUB_HAL_ADCEx_InjectedStart_IT_TYPE HAL_ADCEx_InjectedStart_IT;
  TEST_STUB_HAL_ADCEx_InjectedStop_IT_TYPE HAL_ADCEx_InjectedStop_IT;
  TEST_STUB_HAL_ADCEx_InjectedGetValue_TYPE HAL_ADCEx_InjectedGetValue;
  TEST_STUB_HAL_ADCEx_MultiModeStart_DMA_TYPE HAL_ADCEx_MultiModeStart_DMA;
  TEST_STUB_HAL_ADCEx_MultiModeStop_DMA_TYPE HAL_ADCEx_MultiModeStop_DMA;
  TEST_STUB_HAL_ADCEx_MultiModeGetValue_TYPE HAL_ADCEx_MultiModeGetValue;
  TEST_STUB_HAL_ADCEx_InjectedConvCpltCallback_TYPE HAL_ADCEx_InjectedConvCpltCallback;
  TEST_STUB_HAL_ADCEx_InjectedConfigChannel_TYPE HAL_ADCEx_InjectedConfigChannel;
  TEST_STUB_HAL_ADCEx_MultiModeConfigChannel_TYPE HAL_ADCEx_MultiModeConfigChannel;
  TEST_STUB_HAL_ADC_Init_TYPE HAL_ADC_Init;
  TEST_STUB_HAL_ADC_DeInit_TYPE HAL_ADC_DeInit;
  TEST_STUB_HAL_ADC_MspInit_TYPE HAL_ADC_MspInit;
  TEST_STUB_HAL_ADC_MspDeInit_TYPE HAL_ADC_MspDeInit;
  TEST_STUB_HAL_ADC_Start_TYPE HAL_ADC_Start;
  TEST_STUB_HAL_ADC_Stop_TYPE HAL_ADC_Stop;
  TEST_STUB_HAL_ADC_PollForConversion_TYPE HAL_ADC_PollForConversion;
  TEST_STUB_HAL_ADC_PollForEvent_TYPE HAL_ADC_PollForEvent;
  TEST_STUB_HAL_ADC_Start_IT_TYPE HAL_ADC_Start_IT;
  TEST_STUB_HAL_ADC_Stop_IT_TYPE HAL_ADC_Stop_IT;
  TEST_STUB_HAL_ADC_IRQHandler_TYPE HAL_ADC_IRQHandler;
  TEST_STUB_HAL_ADC_Start_DMA_TYPE HAL_ADC_Start_DMA;
  TEST_STUB_HAL_ADC_Stop_DMA_TYPE HAL_ADC_Stop_DMA;
  TEST_STUB_HAL_ADC_GetValue_TYPE HAL_ADC_GetValue;
  TEST_STUB_HAL_ADC_ConvCpltCallback_TYPE HAL_ADC_ConvCpltCallback;
  TEST_STUB_HAL_ADC_ConvHalfCpltCallback_TYPE HAL_ADC_ConvHalfCpltCallback;
  TEST_STUB_HAL_ADC_LevelOutOfWindowCallback_TYPE HAL_ADC_LevelOutOfWindowCallback;
  TEST_STUB_HAL_ADC_ErrorCallback_TYPE HAL_ADC_ErrorCallback;
  TEST_STUB_HAL_ADC_ConfigChannel_TYPE HAL_ADC_ConfigChannel;
  TEST_STUB_HAL_ADC_AnalogWDGConfig_TYPE HAL_ADC_AnalogWDGConfig;
  TEST_STUB_HAL_ADC_GetState_TYPE HAL_ADC_GetState;
  TEST_STUB_HAL_ADC_GetError_TYPE HAL_ADC_GetError;
  TEST_STUB_HAL_CRC_Init_TYPE HAL_CRC_Init;
  TEST_STUB_HAL_CRC_DeInit_TYPE HAL_CRC_DeInit;
  TEST_STUB_HAL_CRC_MspInit_TYPE HAL_CRC_MspInit;
  TEST_STUB_HAL_CRC_MspDeInit_TYPE HAL_CRC_MspDeInit;
  TEST_STUB_HAL_CRC_Accumulate_TYPE HAL_CRC_Accumulate;
  TEST_STUB_HAL_CRC_Calculate_TYPE HAL_CRC_Calculate;
  TEST_STUB_HAL_CRC_GetState_TYPE HAL_CRC_GetState;
  TEST_STUB_HAL_FLASHEx_Erase_TYPE HAL_FLASHEx_Erase;
  TEST_STUB_HAL_FLASHEx_Erase_IT_TYPE HAL_FLASHEx_Erase_IT;
  TEST_STUB_HAL_FLASHEx_OBProgram_TYPE HAL_FLASHEx_OBProgram;
  TEST_STUB_HAL_FLASHEx_OBGetConfig_TYPE HAL_FLASHEx_OBGetConfig;
  TEST_STUB_HAL_FLASHEx_AdvOBProgram_TYPE HAL_FLASHEx_AdvOBProgram;
  TEST_STUB_HAL_FLASHEx_AdvOBGetConfig_TYPE HAL_FLASHEx_AdvOBGetConfig;
  TEST_STUB_HAL_FLASHEx_OB_SelectPCROP_TYPE HAL_FLASHEx_OB_SelectPCROP;
  TEST_STUB_HAL_FLASHEx_OB_DeSelectPCROP_TYPE HAL_FLASHEx_OB_DeSelectPCROP;
  TEST_STUB_FLASH_Erase_Sector_TYPE FLASH_Erase_Sector;
  TEST_STUB_FLASH_FlushCaches_TYPE FLASH_FlushCaches;
  TEST_STUB_HAL_FLASHEx_StopFlashInterfaceClk_TYPE HAL_FLASHEx_StopFlashInterfaceClk;
  TEST_STUB_HAL_FLASHEx_StartFlashInterfaceClk_TYPE HAL_FLASHEx_StartFlashInterfaceClk;
  TEST_STUB_HAL_FLASHEx_EnableFlashSleepMode_TYPE HAL_FLASHEx_EnableFlashSleepMode;
  TEST_STUB_HAL_FLASHEx_DisableFlashSleepMode_TYPE HAL_FLASHEx_DisableFlashSleepMode;
  TEST_STUB_HAL_FLASH_Program_TYPE HAL_FLASH_Program;
  TEST_STUB_HAL_FLASH_Program_IT_TYPE HAL_FLASH_Program_IT;
  TEST_STUB_HAL_FLASH_IRQHandler_TYPE HAL_FLASH_IRQHandler;
  TEST_STUB_HAL_FLASH_EndOfOperationCallback_TYPE HAL_FLASH_EndOfOperationCallback;
  TEST_STUB_HAL_FLASH_OperationErrorCallback_TYPE HAL_FLASH_OperationErrorCallback;
  TEST_STUB_HAL_FLASH_Unlock_TYPE HAL_FLASH_Unlock;
  TEST_STUB_HAL_FLASH_Lock_TYPE HAL_FLASH_Lock;
  TEST_STUB_HAL_FLASH_OB_Unlock_TYPE HAL_FLASH_OB_Unlock;
  TEST_STUB_HAL_FLASH_OB_Lock_TYPE HAL_FLASH_OB_Lock;
  TEST_STUB_HAL_FLASH_OB_Launch_TYPE HAL_FLASH_OB_Launch;
  TEST_STUB_HAL_FLASH_GetError_TYPE HAL_FLASH_GetError;
  TEST_STUB_FLASH_WaitForLastOperation_TYPE FLASH_WaitForLastOperation;
  TEST_STUB_HAL_PWREx_EnableFlashPowerDown_TYPE HAL_PWREx_EnableFlashPowerDown;
  TEST_STUB_HAL_PWREx_DisableFlashPowerDown_TYPE HAL_PWREx_DisableFlashPowerDown;
  TEST_STUB_HAL_PWREx_EnableBkUpReg_TYPE HAL_PWREx_EnableBkUpReg;
  TEST_STUB_HAL_PWREx_DisableBkUpReg_TYPE HAL_PWREx_DisableBkUpReg;
  TEST_STUB_HAL_PWREx_GetVoltageRange_TYPE HAL_PWREx_GetVoltageRange;
  TEST_STUB_HAL_PWREx_ControlVoltageScaling_TYPE HAL_PWREx_ControlVoltageScaling;
  TEST_STUB_HAL_PWREx_EnableOverDrive_TYPE HAL_PWREx_EnableOverDrive;
  TEST_STUB_HAL_PWREx_DisableOverDrive_TYPE HAL_PWREx_DisableOverDrive;
  TEST_STUB_HAL_PWREx_EnterUnderDriveSTOPMode_TYPE HAL_PWREx_EnterUnderDriveSTOPMode;
  TEST_STUB_HAL_PWR_DeInit_TYPE HAL_PWR_DeInit;
  TEST_STUB_HAL_PWR_EnableBkUpAccess_TYPE HAL_PWR_EnableBkUpAccess;
  TEST_STUB_HAL_PWR_DisableBkUpAccess_TYPE HAL_PWR_DisableBkUpAccess;
  TEST_STUB_HAL_PWR_ConfigPVD_TYPE HAL_PWR_ConfigPVD;
  TEST_STUB_HAL_PWR_EnablePVD_TYPE HAL_PWR_EnablePVD;
  TEST_STUB_HAL_PWR_DisablePVD_TYPE HAL_PWR_DisablePVD;
  TEST_STUB_HAL_PWR_EnableWakeUpPin_TYPE HAL_PWR_EnableWakeUpPin;
  TEST_STUB_HAL_PWR_DisableWakeUpPin_TYPE HAL_PWR_DisableWakeUpPin;
  TEST_STUB_HAL_PWR_EnterSTOPMode_TYPE HAL_PWR_EnterSTOPMode;
  TEST_STUB_HAL_PWR_EnterSLEEPMode_TYPE HAL_PWR_EnterSLEEPMode;
  TEST_STUB_HAL_PWR_EnterSTANDBYMode_TYPE HAL_PWR_EnterSTANDBYMode;
  TEST_STUB_HAL_PWR_PVD_IRQHandler_TYPE HAL_PWR_PVD_IRQHandler;
  TEST_STUB_HAL_PWR_PVDCallback_TYPE HAL_PWR_PVDCallback;
  TEST_STUB_HAL_PWR_EnableSleepOnExit_TYPE HAL_PWR_EnableSleepOnExit;
  TEST_STUB_HAL_PWR_DisableSleepOnExit_TYPE HAL_PWR_DisableSleepOnExit;
  TEST_STUB_HAL_PWR_EnableSEVOnPend_TYPE HAL_PWR_EnableSEVOnPend;
  TEST_STUB_HAL_PWR_DisableSEVOnPend_TYPE HAL_PWR_DisableSEVOnPend;
  TEST_STUB_HAL_SPI_Init_TYPE HAL_SPI_Init;
  TEST_STUB_HAL_SPI_DeInit_TYPE HAL_SPI_DeInit;
  TEST_STUB_HAL_SPI_MspInit_TYPE HAL_SPI_MspInit;
  TEST_STUB_HAL_SPI_MspDeInit_TYPE HAL_SPI_MspDeInit;
  TEST_STUB_HAL_SPI_Transmit_TYPE HAL_SPI_Transmit;
  TEST_STUB_HAL_SPI_Receive_TYPE HAL_SPI_Receive;
  TEST_STUB_HAL_SPI_TransmitReceive_TYPE HAL_SPI_TransmitReceive;
  TEST_STUB_HAL_SPI_Transmit_IT_TYPE HAL_SPI_Transmit_IT;
  TEST_STUB_HAL_SPI_Receive_IT_TYPE HAL_SPI_Receive_IT;
  TEST_STUB_HAL_SPI_TransmitReceive_IT_TYPE HAL_SPI_TransmitReceive_IT;
  TEST_STUB_HAL_SPI_Transmit_DMA_TYPE HAL_SPI_Transmit_DMA;
  TEST_STUB_HAL_SPI_Receive_DMA_TYPE HAL_SPI_Receive_DMA;
  TEST_STUB_HAL_SPI_TransmitReceive_DMA_TYPE HAL_SPI_TransmitReceive_DMA;
  TEST_STUB_HAL_SPI_DMAPause_TYPE HAL_SPI_DMAPause;
  TEST_STUB_HAL_SPI_DMAResume_TYPE HAL_SPI_DMAResume;
  TEST_STUB_HAL_SPI_DMAStop_TYPE HAL_SPI_DMAStop;
  TEST_STUB_HAL_SPI_Abort_TYPE HAL_SPI_Abort;
  TEST_STUB_HAL_SPI_Abort_IT_TYPE HAL_SPI_Abort_IT;
  TEST_STUB_HAL_SPI_IRQHandler_TYPE HAL_SPI_IRQHandler;
  TEST_STUB_HAL_SPI_TxCpltCallback_TYPE HAL_SPI_TxCpltCallback;
  TEST_STUB_HAL_SPI_RxCpltCallback_TYPE HAL_SPI_RxCpltCallback;
  TEST_STUB_HAL_SPI_TxRxCpltCallback_TYPE HAL_SPI_TxRxCpltCallback;
  TEST_STUB_HAL_SPI_TxHalfCpltCallback_TYPE HAL_SPI_TxHalfCpltCallback;
  TEST_STUB_HAL_SPI_RxHalfCpltCallback_TYPE HAL_SPI_RxHalfCpltCallback;
  TEST_STUB_HAL_SPI_TxRxHalfCpltCallback_TYPE HAL_SPI_TxRxHalfCpltCallback;
  TEST_STUB_HAL_SPI_ErrorCallback_TYPE HAL_SPI_ErrorCallback;
  TEST_STUB_HAL_SPI_AbortCpltCallback_TYPE HAL_SPI_AbortCpltCallback;
  TEST_STUB_HAL_SPI_GetState_TYPE HAL_SPI_GetState;
  TEST_STUB_HAL_SPI_GetError_TYPE HAL_SPI_GetError;
  TEST_STUB_HAL_TIMEx_HallSensor_Init_TYPE HAL_TIMEx_HallSensor_Init;
  TEST_STUB_HAL_TIMEx_HallSensor_DeInit_TYPE HAL_TIMEx_HallSensor_DeInit;
  TEST_STUB_HAL_TIMEx_HallSensor_MspInit_TYPE HAL_TIMEx_HallSensor_MspInit;
  TEST_STUB_HAL_TIMEx_HallSensor_MspDeInit_TYPE HAL_TIMEx_HallSensor_MspDeInit;
  TEST_STUB_HAL_TIMEx_HallSensor_Start_TYPE HAL_TIMEx_HallSensor_Start;
  TEST_STUB_HAL_TIMEx_HallSensor_Stop_TYPE HAL_TIMEx_HallSensor_Stop;
  TEST_STUB_HAL_TIMEx_HallSensor_Start_IT_TYPE HAL_TIMEx_HallSensor_Start_IT;
  TEST_STUB_HAL_TIMEx_HallSensor_Stop_IT_TYPE HAL_TIMEx_HallSensor_Stop_IT;
  TEST_STUB_HAL_TIMEx_HallSensor_Start_DMA_TYPE HAL_TIMEx_HallSensor_Start_DMA;
  TEST_STUB_HAL_TIMEx_HallSensor_Stop_DMA_TYPE HAL_TIMEx_HallSensor_Stop_DMA;
  TEST_STUB_HAL_TIMEx_OCN_Start_TYPE HAL_TIMEx_OCN_Start;
  TEST_STUB_HAL_TIMEx_OCN_Stop_TYPE HAL_TIMEx_OCN_Stop;
  TEST_STUB_HAL_TIMEx_OCN_Start_IT_TYPE HAL_TIMEx_OCN_Start_IT;
  TEST_STUB_HAL_TIMEx_OCN_Stop_IT_TYPE HAL_TIMEx_OCN_Stop_IT;
  TEST_STUB_HAL_TIMEx_OCN_Start_DMA_TYPE HAL_TIMEx_OCN_Start_DMA;
  TEST_STUB_HAL_TIMEx_OCN_Stop_DMA_TYPE HAL_TIMEx_OCN_Stop_DMA;
  TEST_STUB_HAL_TIMEx_PWMN_Start_TYPE HAL_TIMEx_PWMN_Start;
  TEST_STUB_HAL_TIMEx_PWMN_Stop_TYPE HAL_TIMEx_PWMN_Stop;
  TEST_STUB_HAL_TIMEx_PWMN_Start_IT_TYPE HAL_TIMEx_PWMN_Start_IT;
  TEST_STUB_HAL_TIMEx_PWMN_Stop_IT_TYPE HAL_TIMEx_PWMN_Stop_IT;
  TEST_STUB_HAL_TIMEx_PWMN_Start_DMA_TYPE HAL_TIMEx_PWMN_Start_DMA;
  TEST_STUB_HAL_TIMEx_PWMN_Stop_DMA_TYPE HAL_TIMEx_PWMN_Stop_DMA;
  TEST_STUB_HAL_TIMEx_OnePulseN_Start_TYPE HAL_TIMEx_OnePulseN_Start;
  TEST_STUB_HAL_TIMEx_OnePulseN_Stop_TYPE HAL_TIMEx_OnePulseN_Stop;
  TEST_STUB_HAL_TIMEx_OnePulseN_Start_IT_TYPE HAL_TIMEx_OnePulseN_Start_IT;
  TEST_STUB_HAL_TIMEx_OnePulseN_Stop_IT_TYPE HAL_TIMEx_OnePulseN_Stop_IT;
  TEST_STUB_HAL_TIMEx_ConfigCommutEvent_TYPE HAL_TIMEx_ConfigCommutEvent;
  TEST_STUB_HAL_TIMEx_ConfigCommutEvent_IT_TYPE HAL_TIMEx_ConfigCommutEvent_IT;
  TEST_STUB_HAL_TIMEx_ConfigCommutEvent_DMA_TYPE HAL_TIMEx_ConfigCommutEvent_DMA;
  TEST_STUB_HAL_TIMEx_MasterConfigSynchronization_TYPE HAL_TIMEx_MasterConfigSynchronization;
  TEST_STUB_HAL_TIMEx_ConfigBreakDeadTime_TYPE HAL_TIMEx_ConfigBreakDeadTime;
  TEST_STUB_HAL_TIMEx_RemapConfig_TYPE HAL_TIMEx_RemapConfig;
  TEST_STUB_HAL_TIMEx_CommutCallback_TYPE HAL_TIMEx_CommutCallback;
  TEST_STUB_HAL_TIMEx_CommutHalfCpltCallback_TYPE HAL_TIMEx_CommutHalfCpltCallback;
  TEST_STUB_HAL_TIMEx_BreakCallback_TYPE HAL_TIMEx_BreakCallback;
  TEST_STUB_HAL_TIMEx_HallSensor_GetState_TYPE HAL_TIMEx_HallSensor_GetState;
  TEST_STUB_HAL_TIMEx_GetChannelNState_TYPE HAL_TIMEx_GetChannelNState;
  TEST_STUB_TIMEx_DMACommutationCplt_TYPE TIMEx_DMACommutationCplt;
  TEST_STUB_TIMEx_DMACommutationHalfCplt_TYPE TIMEx_DMACommutationHalfCplt;
  TEST_STUB_HAL_TIM_Base_Init_TYPE HAL_TIM_Base_Init;
  TEST_STUB_HAL_TIM_Base_DeInit_TYPE HAL_TIM_Base_DeInit;
  TEST_STUB_HAL_TIM_Base_MspInit_TYPE HAL_TIM_Base_MspInit;
  TEST_STUB_HAL_TIM_Base_MspDeInit_TYPE HAL_TIM_Base_MspDeInit;
  TEST_STUB_HAL_TIM_Base_Start_TYPE HAL_TIM_Base_Start;
  TEST_STUB_HAL_TIM_Base_Stop_TYPE HAL_TIM_Base_Stop;
  TEST_STUB_HAL_TIM_Base_Start_IT_TYPE HAL_TIM_Base_Start_IT;
  TEST_STUB_HAL_TIM_Base_Stop_IT_TYPE HAL_TIM_Base_Stop_IT;
  TEST_STUB_HAL_TIM_Base_Start_DMA_TYPE HAL_TIM_Base_Start_DMA;
  TEST_STUB_HAL_TIM_Base_Stop_DMA_TYPE HAL_TIM_Base_Stop_DMA;
  TEST_STUB_HAL_TIM_OC_Init_TYPE HAL_TIM_OC_Init;
  TEST_STUB_HAL_TIM_OC_DeInit_TYPE HAL_TIM_OC_DeInit;
  TEST_STUB_HAL_TIM_OC_MspInit_TYPE HAL_TIM_OC_MspInit;
  TEST_STUB_HAL_TIM_OC_MspDeInit_TYPE HAL_TIM_OC_MspDeInit;
  TEST_STUB_HAL_TIM_OC_Start_TYPE HAL_TIM_OC_Start;
  TEST_STUB_HAL_TIM_OC_Stop_TYPE HAL_TIM_OC_Stop;
  TEST_STUB_HAL_TIM_OC_Start_IT_TYPE HAL_TIM_OC_Start_IT;
  TEST_STUB_HAL_TIM_OC_Stop_IT_TYPE HAL_TIM_OC_Stop_IT;
  TEST_STUB_HAL_TIM_OC_Start_DMA_TYPE HAL_TIM_OC_Start_DMA;
  TEST_STUB_HAL_TIM_OC_Stop_DMA_TYPE HAL_TIM_OC_Stop_DMA;
  TEST_STUB_HAL_TIM_PWM_Init_TYPE HAL_TIM_PWM_Init;
  TEST_STUB_HAL_TIM_PWM_DeInit_TYPE HAL_TIM_PWM_DeInit;
  TEST_STUB_HAL_TIM_PWM_MspInit_TYPE HAL_TIM_PWM_MspInit;
  TEST_STUB_HAL_TIM_PWM_MspDeInit_TYPE HAL_TIM_PWM_MspDeInit;
  TEST_STUB_HAL_TIM_PWM_Start_TYPE HAL_TIM_PWM_Start;
  TEST_STUB_HAL_TIM_PWM_Stop_TYPE HAL_TIM_PWM_Stop;
  TEST_STUB_HAL_TIM_PWM_Start_IT_TYPE HAL_TIM_PWM_Start_IT;
  TEST_STUB_HAL_TIM_PWM_Stop_IT_TYPE HAL_TIM_PWM_Stop_IT;
  TEST_STUB_HAL_TIM_PWM_Start_DMA_TYPE HAL_TIM_PWM_Start_DMA;
  TEST_STUB_HAL_TIM_PWM_Stop_DMA_TYPE HAL_TIM_PWM_Stop_DMA;
  TEST_STUB_HAL_TIM_IC_Init_TYPE HAL_TIM_IC_Init;
  TEST_STUB_HAL_TIM_IC_DeInit_TYPE HAL_TIM_IC_DeInit;
  TEST_STUB_HAL_TIM_IC_MspInit_TYPE HAL_TIM_IC_MspInit;
  TEST_STUB_HAL_TIM_IC_MspDeInit_TYPE HAL_TIM_IC_MspDeInit;
  TEST_STUB_HAL_TIM_IC_Start_TYPE HAL_TIM_IC_Start;
  TEST_STUB_HAL_TIM_IC_Stop_TYPE HAL_TIM_IC_Stop;
  TEST_STUB_HAL_TIM_IC_Start_IT_TYPE HAL_TIM_IC_Start_IT;
  TEST_STUB_HAL_TIM_IC_Stop_IT_TYPE HAL_TIM_IC_Stop_IT;
  TEST_STUB_HAL_TIM_IC_Start_DMA_TYPE HAL_TIM_IC_Start_DMA;
  TEST_STUB_HAL_TIM_IC_Stop_DMA_TYPE HAL_TIM_IC_Stop_DMA;
  TEST_STUB_HAL_TIM_OnePulse_Init_TYPE HAL_TIM_OnePulse_Init;
  TEST_STUB_HAL_TIM_OnePulse_DeInit_TYPE HAL_TIM_OnePulse_DeInit;
  TEST_STUB_HAL_TIM_OnePulse_MspInit_TYPE HAL_TIM_OnePulse_MspInit;
  TEST_STUB_HAL_TIM_OnePulse_MspDeInit_TYPE HAL_TIM_OnePulse_MspDeInit;
  TEST_STUB_HAL_TIM_OnePulse_Start_TYPE HAL_TIM_OnePulse_Start;
  TEST_STUB_HAL_TIM_OnePulse_Stop_TYPE HAL_TIM_OnePulse_Stop;
  TEST_STUB_HAL_TIM_OnePulse_Start_IT_TYPE HAL_TIM_OnePulse_Start_IT;
  TEST_STUB_HAL_TIM_OnePulse_Stop_IT_TYPE HAL_TIM_OnePulse_Stop_IT;
  TEST_STUB_HAL_TIM_Encoder_Init_TYPE HAL_TIM_Encoder_Init;
  TEST_STUB_HAL_TIM_Encoder_DeInit_TYPE HAL_TIM_Encoder_DeInit;
  TEST_STUB_HAL_TIM_Encoder_MspInit_TYPE HAL_TIM_Encoder_MspInit;
  TEST_STUB_HAL_TIM_Encoder_MspDeInit_TYPE HAL_TIM_Encoder_MspDeInit;
  TEST_STUB_HAL_TIM_Encoder_Start_TYPE HAL_TIM_Encoder_Start;
  TEST_STUB_HAL_TIM_Encoder_Stop_TYPE HAL_TIM_Encoder_Stop;
  TEST_STUB_HAL_TIM_Encoder_Start_IT_TYPE HAL_TIM_Encoder_Start_IT;
  TEST_STUB_HAL_TIM_Encoder_Stop_IT_TYPE HAL_TIM_Encoder_Stop_IT;
  TEST_STUB_HAL_TIM_Encoder_Start_DMA_TYPE HAL_TIM_Encoder_Start_DMA;
  TEST_STUB_HAL_TIM_Encoder_Stop_DMA_TYPE HAL_TIM_Encoder_Stop_DMA;
  TEST_STUB_HAL_TIM_IRQHandler_TYPE HAL_TIM_IRQHandler;
  TEST_STUB_HAL_TIM_OC_ConfigChannel_TYPE HAL_TIM_OC_ConfigChannel;
  TEST_STUB_HAL_TIM_PWM_ConfigChannel_TYPE HAL_TIM_PWM_ConfigChannel;
  TEST_STUB_HAL_TIM_IC_ConfigChannel_TYPE HAL_TIM_IC_ConfigChannel;
  TEST_STUB_HAL_TIM_OnePulse_ConfigChannel_TYPE HAL_TIM_OnePulse_ConfigChannel;
  TEST_STUB_HAL_TIM_ConfigOCrefClear_TYPE HAL_TIM_ConfigOCrefClear;
  TEST_STUB_HAL_TIM_ConfigClockSource_TYPE HAL_TIM_ConfigClockSource;
  TEST_STUB_HAL_TIM_ConfigTI1Input_TYPE HAL_TIM_ConfigTI1Input;
  TEST_STUB_HAL_TIM_SlaveConfigSynchro_TYPE HAL_TIM_SlaveConfigSynchro;
  TEST_STUB_HAL_TIM_SlaveConfigSynchro_IT_TYPE HAL_TIM_SlaveConfigSynchro_IT;
  TEST_STUB_HAL_TIM_DMABurst_WriteStart_TYPE HAL_TIM_DMABurst_WriteStart;
  TEST_STUB_HAL_TIM_DMABurst_MultiWriteStart_TYPE HAL_TIM_DMABurst_MultiWriteStart;
  TEST_STUB_HAL_TIM_DMABurst_WriteStop_TYPE HAL_TIM_DMABurst_WriteStop;
  TEST_STUB_HAL_TIM_DMABurst_ReadStart_TYPE HAL_TIM_DMABurst_ReadStart;
  TEST_STUB_HAL_TIM_DMABurst_MultiReadStart_TYPE HAL_TIM_DMABurst_MultiReadStart;
  TEST_STUB_HAL_TIM_DMABurst_ReadStop_TYPE HAL_TIM_DMABurst_ReadStop;
  TEST_STUB_HAL_TIM_GenerateEvent_TYPE HAL_TIM_GenerateEvent;
  TEST_STUB_HAL_TIM_ReadCapturedValue_TYPE HAL_TIM_ReadCapturedValue;
  TEST_STUB_HAL_TIM_PeriodElapsedCallback_TYPE HAL_TIM_PeriodElapsedCallback;
  TEST_STUB_HAL_TIM_PeriodElapsedHalfCpltCallback_TYPE HAL_TIM_PeriodElapsedHalfCpltCallback;
  TEST_STUB_HAL_TIM_OC_DelayElapsedCallback_TYPE HAL_TIM_OC_DelayElapsedCallback;
  TEST_STUB_HAL_TIM_IC_CaptureCallback_TYPE HAL_TIM_IC_CaptureCallback;
  TEST_STUB_HAL_TIM_IC_CaptureHalfCpltCallback_TYPE HAL_TIM_IC_CaptureHalfCpltCallback;
  TEST_STUB_HAL_TIM_PWM_PulseFinishedCallback_TYPE HAL_TIM_PWM_PulseFinishedCallback;
  TEST_STUB_HAL_TIM_PWM_PulseFinishedHalfCpltCallback_TYPE HAL_TIM_PWM_PulseFinishedHalfCpltCallback;
  TEST_STUB_HAL_TIM_TriggerCallback_TYPE HAL_TIM_TriggerCallback;
  TEST_STUB_HAL_TIM_TriggerHalfCpltCallback_TYPE HAL_TIM_TriggerHalfCpltCallback;
  TEST_STUB_HAL_TIM_ErrorCallback_TYPE HAL_TIM_ErrorCallback;
  TEST_STUB_HAL_TIM_Base_GetState_TYPE HAL_TIM_Base_GetState;
  TEST_STUB_HAL_TIM_OC_GetState_TYPE HAL_TIM_OC_GetState;
  TEST_STUB_HAL_TIM_PWM_GetState_TYPE HAL_TIM_PWM_GetState;
  TEST_STUB_HAL_TIM_IC_GetState_TYPE HAL_TIM_IC_GetState;
  TEST_STUB_HAL_TIM_OnePulse_GetState_TYPE HAL_TIM_OnePulse_GetState;
  TEST_STUB_HAL_TIM_Encoder_GetState_TYPE HAL_TIM_Encoder_GetState;
  TEST_STUB_HAL_TIM_GetActiveChannel_TYPE HAL_TIM_GetActiveChannel;
  TEST_STUB_HAL_TIM_GetChannelState_TYPE HAL_TIM_GetChannelState;
  TEST_STUB_HAL_TIM_DMABurstState_TYPE HAL_TIM_DMABurstState;
  TEST_STUB_TIM_Base_SetConfig_TYPE TIM_Base_SetConfig;
  TEST_STUB_TIM_TI1_SetConfig_TYPE TIM_TI1_SetConfig;
  TEST_STUB_TIM_OC2_SetConfig_TYPE TIM_OC2_SetConfig;
  TEST_STUB_TIM_ETR_SetConfig_TYPE TIM_ETR_SetConfig;
  TEST_STUB_TIM_DMADelayPulseHalfCplt_TYPE TIM_DMADelayPulseHalfCplt;
  TEST_STUB_TIM_DMAError_TYPE TIM_DMAError;
  TEST_STUB_TIM_DMACaptureCplt_TYPE TIM_DMACaptureCplt;
  TEST_STUB_TIM_DMACaptureHalfCplt_TYPE TIM_DMACaptureHalfCplt;
  TEST_STUB_TIM_CCxChannelCmd_TYPE TIM_CCxChannelCmd;
  TEST_STUB_HAL_UART_Init_TYPE HAL_UART_Init;
  TEST_STUB_HAL_HalfDuplex_Init_TYPE HAL_HalfDuplex_Init;
  TEST_STUB_HAL_LIN_Init_TYPE HAL_LIN_Init;
  TEST_STUB_HAL_MultiProcessor_Init_TYPE HAL_MultiProcessor_Init;
  TEST_STUB_HAL_UART_DeInit_TYPE HAL_UART_DeInit;
  TEST_STUB_HAL_UART_MspInit_TYPE HAL_UART_MspInit;
  TEST_STUB_HAL_UART_MspDeInit_TYPE HAL_UART_MspDeInit;
  TEST_STUB_HAL_UART_Transmit_TYPE HAL_UART_Transmit;
  TEST_STUB_HAL_UART_Receive_TYPE HAL_UART_Receive;
  TEST_STUB_HAL_UART_Transmit_IT_TYPE HAL_UART_Transmit_IT;
  TEST_STUB_HAL_UART_Receive_IT_TYPE HAL_UART_Receive_IT;
  TEST_STUB_HAL_UART_Transmit_DMA_TYPE HAL_UART_Transmit_DMA;
  TEST_STUB_HAL_UART_Receive_DMA_TYPE HAL_UART_Receive_DMA;
  TEST_STUB_HAL_UART_DMAPause_TYPE HAL_UART_DMAPause;
  TEST_STUB_HAL_UART_DMAResume_TYPE HAL_UART_DMAResume;
  TEST_STUB_HAL_UART_DMAStop_TYPE HAL_UART_DMAStop;
  TEST_STUB_HAL_UARTEx_ReceiveToIdle_TYPE HAL_UARTEx_ReceiveToIdle;
  TEST_STUB_HAL_UARTEx_ReceiveToIdle_IT_TYPE HAL_UARTEx_ReceiveToIdle_IT;
  TEST_STUB_HAL_UARTEx_ReceiveToIdle_DMA_TYPE HAL_UARTEx_ReceiveToIdle_DMA;
  TEST_STUB_HAL_UART_Abort_TYPE HAL_UART_Abort;
  TEST_STUB_HAL_UART_AbortTransmit_TYPE HAL_UART_AbortTransmit;
  TEST_STUB_HAL_UART_AbortReceive_TYPE HAL_UART_AbortReceive;
  TEST_STUB_HAL_UART_Abort_IT_TYPE HAL_UART_Abort_IT;
  TEST_STUB_HAL_UART_AbortTransmit_IT_TYPE HAL_UART_AbortTransmit_IT;
  TEST_STUB_HAL_UART_AbortReceive_IT_TYPE HAL_UART_AbortReceive_IT;
  TEST_STUB_HAL_UART_IRQHandler_TYPE HAL_UART_IRQHandler;
  TEST_STUB_HAL_UART_TxCpltCallback_TYPE HAL_UART_TxCpltCallback;
  TEST_STUB_HAL_UART_TxHalfCpltCallback_TYPE HAL_UART_TxHalfCpltCallback;
  TEST_STUB_HAL_UART_RxCpltCallback_TYPE HAL_UART_RxCpltCallback;
  TEST_STUB_HAL_UART_RxHalfCpltCallback_TYPE HAL_UART_RxHalfCpltCallback;
  TEST_STUB_HAL_UART_ErrorCallback_TYPE HAL_UART_ErrorCallback;
  TEST_STUB_HAL_UART_AbortCpltCallback_TYPE HAL_UART_AbortCpltCallback;
  TEST_STUB_HAL_UART_AbortTransmitCpltCallback_TYPE HAL_UART_AbortTransmitCpltCallback;
  TEST_STUB_HAL_UART_AbortReceiveCpltCallback_TYPE HAL_UART_AbortReceiveCpltCallback;
  TEST_STUB_HAL_UARTEx_RxEventCallback_TYPE HAL_UARTEx_RxEventCallback;
  TEST_STUB_HAL_LIN_SendBreak_TYPE HAL_LIN_SendBreak;
  TEST_STUB_HAL_MultiProcessor_EnterMuteMode_TYPE HAL_MultiProcessor_EnterMuteMode;
  TEST_STUB_HAL_MultiProcessor_ExitMuteMode_TYPE HAL_MultiProcessor_ExitMuteMode;
  TEST_STUB_HAL_HalfDuplex_EnableTransmitter_TYPE HAL_HalfDuplex_EnableTransmitter;
  TEST_STUB_HAL_HalfDuplex_EnableReceiver_TYPE HAL_HalfDuplex_EnableReceiver;
  TEST_STUB_HAL_UART_GetState_TYPE HAL_UART_GetState;
  TEST_STUB_HAL_UART_GetError_TYPE HAL_UART_GetError;
  TEST_STUB_UART_Start_Receive_IT_TYPE UART_Start_Receive_IT;
  TEST_STUB_UART_Start_Receive_DMA_TYPE UART_Start_Receive_DMA;
  TEST_STUB_HAL_Init_TYPE HAL_Init;
  TEST_STUB_HAL_DeInit_TYPE HAL_DeInit;
  TEST_STUB_HAL_MspInit_TYPE HAL_MspInit;
  TEST_STUB_HAL_MspDeInit_TYPE HAL_MspDeInit;
  TEST_STUB_HAL_InitTick_TYPE HAL_InitTick;
  TEST_STUB_HAL_IncTick_TYPE HAL_IncTick;
  TEST_STUB_HAL_Delay_TYPE HAL_Delay;
  TEST_STUB_HAL_GetTick_TYPE HAL_GetTick;
  TEST_STUB_HAL_GetTickPrio_TYPE HAL_GetTickPrio;
  TEST_STUB_HAL_SetTickFreq_TYPE HAL_SetTickFreq;
  TEST_STUB_HAL_GetTickFreq_TYPE HAL_GetTickFreq;
  TEST_STUB_HAL_SuspendTick_TYPE HAL_SuspendTick;
  TEST_STUB_HAL_ResumeTick_TYPE HAL_ResumeTick;
  TEST_STUB_HAL_GetHalVersion_TYPE HAL_GetHalVersion;
  TEST_STUB_HAL_GetREVID_TYPE HAL_GetREVID;
  TEST_STUB_HAL_GetDEVID_TYPE HAL_GetDEVID;
  TEST_STUB_HAL_DBGMCU_EnableDBGSleepMode_TYPE HAL_DBGMCU_EnableDBGSleepMode;
  TEST_STUB_HAL_DBGMCU_DisableDBGSleepMode_TYPE HAL_DBGMCU_DisableDBGSleepMode;
  TEST_STUB_HAL_DBGMCU_EnableDBGStopMode_TYPE HAL_DBGMCU_EnableDBGStopMode;
  TEST_STUB_HAL_DBGMCU_DisableDBGStopMode_TYPE HAL_DBGMCU_DisableDBGStopMode;
  TEST_STUB_HAL_DBGMCU_EnableDBGStandbyMode_TYPE HAL_DBGMCU_EnableDBGStandbyMode;
  TEST_STUB_HAL_DBGMCU_DisableDBGStandbyMode_TYPE HAL_DBGMCU_DisableDBGStandbyMode;
  TEST_STUB_HAL_EnableCompensationCell_TYPE HAL_EnableCompensationCell;
  TEST_STUB_HAL_DisableCompensationCell_TYPE HAL_DisableCompensationCell;
  TEST_STUB_HAL_GetUIDw0_TYPE HAL_GetUIDw0;
  TEST_STUB_HAL_GetUIDw1_TYPE HAL_GetUIDw1;
  TEST_STUB_HAL_GetUIDw2_TYPE HAL_GetUIDw2;
  TEST_STUB_Error_Handler_TYPE Error_Handler;
  TEST_STUB_LCD_Init_TYPE LCD_Init;
  TEST_STUB_LCD_Fill_Display_TYPE LCD_Fill_Display;
  TEST_STUB_LCD_Fill_Buffer_TYPE LCD_Fill_Buffer;
  TEST_STUB_LCD_Invalidate_TYPE LCD_Invalidate;
  TEST_STUB_LCD_Write_BufferPixel_TYPE LCD_Write_BufferPixel;
  TEST_STUB_LCD_Data_Latch_TYPE LCD_Data_Latch;
  TEST_STUB_LCD_SetRWLine_TYPE LCD_SetRWLine;
  TEST_STUB_LCD_Enable_TYPE LCD_Enable;
  TEST_STUB_LCD_SetDataLines_TYPE LCD_SetDataLines;
  TEST_STUB_LCD_SetCSLines_TYPE LCD_SetCSLines;
  TEST_STUB_LCD_SetDILine_TYPE LCD_SetDILine;
  TEST_STUB_LCD_Delay_TYPE LCD_Delay;
  TEST_STUB_LCD_Write_TYPE LCD_Write;
  TEST_STUB_LCD_Draw_Char_TYPE LCD_Draw_Char;
  TEST_STUB_LCD_Draw_String_TYPE LCD_Draw_String;
  TEST_STUB_LCD_Draw_Circle_TYPE LCD_Draw_Circle;
  TEST_STUB_LCD__DrawCircle_TYPE LCD__DrawCircle;
  TEST_STUB_LCD_Draw_Horizontal_Line_TYPE LCD_Draw_Horizontal_Line;
  TEST_STUB_LCD_Draw_Line_TYPE LCD_Draw_Line;
} TEST_STUB_TYPE;
extern TEST_STUB_TYPE TEST_STUB;

#endif /* TYPES_H */