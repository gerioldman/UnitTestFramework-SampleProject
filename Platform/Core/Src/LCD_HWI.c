/**
 * @file LCD_BSP_Interface.c
 * @brief Implements interface for LCD_Driver to interact with hardware dependant calls
 * @date 2022-11-21-15:40:04
 */

#include "LCD_HWI.h"
#include "gpio.h"
#include "main.h"

/**
 * @brief Provides call to set the R/W pins state
 *
 * @param state
 */
LCD_HWI_Status LCD_HWI_SetRWLine(LCD_HWI_RW_State state)
{
    LCD_HWI_Status returnValue;

    /* Determine state and set return value*/
    if (LCD_HWI_RW_Write == state)
    {
        HAL_GPIO_WritePin(LCD_R_W_GPIO_Port, LCD_R_W_Pin, GPIO_PIN_RESET);
        returnValue = LCD_HWI_OK;
    }
    else if (LCD_HWI_RW_Read == state)
    {
        HAL_GPIO_WritePin(LCD_R_W_GPIO_Port, LCD_R_W_Pin, GPIO_PIN_SET);
        returnValue = LCD_HWI_OK;
    }
    else
    {
        returnValue = LCD_HWI_NOT_OK;
    }

    return returnValue;
}

/**
 * @brief Provides call to set the LCD datalines
 *
 * @param value takes a byte long value, and sets the 8 lines value to the corresponding bits value
 */
LCD_HWI_Status LCD_HWI_SetDataLines(uint8_t value)
{
    GPIOC->BSRR = 0x000000FF & (uint32_t)value;
    GPIOC->BSRR = (((uint32_t)(~value)) & 0x000000FF) << 16;

    return LCD_HWI_OK;
}

/**
 * @brief Provides call to set the LCD Chip select lines
 *
 * @param state
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetCSLines(LCD_HWI_CS_Lines_State state)
{
    LCD_HWI_Status returnValue = LCD_HWI_OK;

    switch (state)
    {
    case LCD_HWI_CS_OFF:
        HAL_GPIO_WritePin(LCD_CS1_GPIO_Port, LCD_CS1_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(LCD_CS2_GPIO_Port, LCD_CS2_Pin, GPIO_PIN_RESET);
        break;
    case LCD_HWI_CS1:
        HAL_GPIO_WritePin(LCD_CS1_GPIO_Port, LCD_CS1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(LCD_CS2_GPIO_Port, LCD_CS2_Pin, GPIO_PIN_RESET);
        break;
    case LCD_HWI_CS2:
        HAL_GPIO_WritePin(LCD_CS1_GPIO_Port, LCD_CS1_Pin, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(LCD_CS2_GPIO_Port, LCD_CS2_Pin, GPIO_PIN_SET);
        break;
    case LCD_HWI_CS12:
        HAL_GPIO_WritePin(LCD_CS1_GPIO_Port, LCD_CS1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(LCD_CS2_GPIO_Port, LCD_CS2_Pin, GPIO_PIN_SET);
        break;
    default:
        returnValue = LCD_HWI_NOT_OK;
    }
    return returnValue;
}

/**
 * @brief Provides call to set the state of the Data/Instruction pin
 *
 * @param state
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetDILine(uint8_t state)
{
    LCD_HWI_Status returnValue;

    /* Determine state and set return value*/
    if (LCD_HWI_DI_Instruction == state)
    {
        HAL_GPIO_WritePin(LCD_D_I_GPIO_Port, LCD_D_I_Pin, GPIO_PIN_RESET);
        returnValue = LCD_HWI_OK;
    }
    else if (LCD_HWI_DI_Data == state)
    {
        HAL_GPIO_WritePin(LCD_D_I_GPIO_Port, LCD_D_I_Pin, GPIO_PIN_SET);
        returnValue = LCD_HWI_OK;
    }
    else
    {
        returnValue = LCD_HWI_NOT_OK;
    }

    return returnValue;
}

/**
 * @brief Provides call to set the state of the Enable pin
 *
 * @param enable
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetEnable(LCD_HWI_Enable_State enable)
{
    LCD_HWI_Status returnValue;

    /* Determine state and set return value*/
    if (LCD_HWI_Enable_ON == enable)
    {
        HAL_GPIO_WritePin(LCD_EN_GPIO_Port, LCD_EN_Pin, GPIO_PIN_RESET);
        returnValue = LCD_HWI_OK;
    }
    else if (LCD_HWI_Enable_OFF == enable)
    {
        HAL_GPIO_WritePin(LCD_EN_GPIO_Port, LCD_EN_Pin, GPIO_PIN_SET);
        returnValue = LCD_HWI_OK;
    }
    else
    {
        returnValue = LCD_HWI_NOT_OK;
    }

    return returnValue;
}

/**
 * @brief Provides call to set the state of the Latch pin
 *
 * @param enable
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetLatch(LCD_HWI_Latch_State enable)
{
    LCD_HWI_Status returnValue;

    /* Determine state and set return value*/
    if (LCD_HWI_Latch_ON == enable)
    {
        HAL_GPIO_WritePin(LCD_E_GPIO_Port, LCD_E_Pin, GPIO_PIN_RESET);
        returnValue = LCD_HWI_OK;
    }
    else if (LCD_HWI_Latch_OFF == enable)
    {
        HAL_GPIO_WritePin(LCD_E_GPIO_Port, LCD_E_Pin, GPIO_PIN_SET);
        returnValue = LCD_HWI_OK;
    }
    else
    {
        returnValue = LCD_HWI_NOT_OK;
    }

    return returnValue;
}

/**
 * @brief Provides call to set the state of the RESET pin
 *
 * @param enable
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetReset(LCD_HWI_RST_State state)
{
    LCD_HWI_Status returnValue;

    /* Determine state and set return value*/
    if (LCD_HWI_RST_ON == state)
    {
        HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin, GPIO_PIN_RESET);
        returnValue = LCD_HWI_OK;
    }
    else if (LCD_HWI_RST_OFF == state)
    {
        HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin, GPIO_PIN_SET);
        returnValue = LCD_HWI_OK;
    }
    else
    {
        returnValue = LCD_HWI_NOT_OK;
    }

    return returnValue;
}

/**
 * @brief Provides call to delay execution by given number of microseconds
 *
 * @param us
 */
void LCD_HWI_Delay(uint32_t us)
{
    for(uint32_t i=0;i<100*us;i++)
	{
		__NOP();
	}
}