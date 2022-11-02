#include "types.h"

void cleanUpBefore(void);
void cleanUpAfter(void);

void __HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);