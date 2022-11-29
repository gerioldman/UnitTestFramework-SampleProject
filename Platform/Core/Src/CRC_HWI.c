#include "CRC_HWI.h"
#include "crc.h"

uint32_t CRC_HWI_Calculate(const uint32_t pBuffer[], uint32_t BufferLength)
{
    return HAL_CRC_Calculate(&hcrc, pBuffer , BufferLength);
}