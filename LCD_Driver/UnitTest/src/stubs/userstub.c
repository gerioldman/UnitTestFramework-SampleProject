#include "userstub.h"
#include "UnitTestAssert.h"

/**
 * @brief 
 * 
 */
void cleanUpBefore(void)
{

}

/**
 * @brief 
 * 
 */
void cleanUpAfter(void)
{
    
}

void __HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
{
    ASSERT_HEX32_EQUAL(GPIOx,GPIOC);
    TEST_STUB.HAL_GPIO_WritePin.GPIO_Pin = GPIO_Pin;
    TEST_STUB.HAL_GPIO_WritePin.PinState = PinState;
}