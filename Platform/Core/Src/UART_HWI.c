#include "UART_HWI.h"
#include "usart.h"

UART_HWI_StatusTypedef UART_HWI_Transmit_IT(const uint8_t pBuffer[], uint16_t BufferLength)
{
    UART_HWI_StatusTypedef retVal;
    HAL_StatusTypeDef returnValue = HAL_UART_Transmit_IT(&huart2,pBuffer,BufferLength);
    switch (returnValue)
    {
    case HAL_OK:
        retVal = UART_HWI_OK;
        break;
    case HAL_BUSY:
        retVal = UART_HWI_BUSY;
        break;
    case HAL_ERROR:
        retVal = UART_HWI_ERROR;
        break;
    default:
        retVal = UART_HWI_ERROR;
        break;
    }
    return retVal;
}