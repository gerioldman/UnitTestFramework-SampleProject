/**
 * @file CRC_HWI.h
 * @brief Defines interface for CommHandler to interact with CRC hardware dependant calls
 * @date 2022-11-21-15:40:17 2022-11-28-23:06:46
*/

#ifndef CRC_HWI_H
#define CRC_HWI_H

/* Includes */

#include <stdint.h>

/* Type definitions */

/* Global functions */

uint32_t CRC_HWI_Calculate(const uint32_t pBuffer[], uint32_t BufferLength);

#endif