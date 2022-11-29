/**
 * @file UART_HWI.h
 * @brief Defines interface for CommHandler to interact with UART hardware dependant calls
 * @date 2022-11-21-15:40:17 2022-11-28-23:06:46
*/

#ifndef UART_HWI_H
#define UART_HWI_H

/* Includes */

#include <stdint.h>

/* Type definitions */

typedef enum
{
    UART_HWI_OK,
    UART_HWI_BUSY,
    UART_HWI_ERROR
}UART_HWI_StatusTypedef;

/* Global functions */

UART_HWI_StatusTypedef UART_HWI_Transmit_IT(const uint8_t pBuffer[], uint16_t BufferLength);

#endif