/**
 * @file LCD_HWI.h
 * @brief Defines interface for LCD_Driver to interact with hardware dependant calls
 * @date 2022-11-21-15:40:17
*/

#ifndef LCD_HWI_H
#define LCD_HWI_H

#include <stdint.h>

/* Type definitions */

/**
 * @brief Enumeration for the LCD_HWI function call return values
 * 
 */
typedef enum
{
    LCD_HWI_OK,
    LCD_HWI_NOT_OK
}LCD_HWI_Status;

/**
 * @brief Enumeration for the LCD Enable pin's state
 * 
 */
typedef enum
{
	LCD_HWI_Enable_OFF = 0,
	LCD_HWI_Enable_ON = 1
}LCD_HWI_Enable_State;

/**
 * @brief Enumeration for the LCD Latch pin's state
 * 
 */
typedef enum
{
	LCD_HWI_Latch_OFF = 0,
	LCD_HWI_Latch_ON = 1
}LCD_HWI_Latch_State;

/**
 * @brief Enumeration for the LCD Data/Instruction pin's state
 * 
 */
typedef enum
{
	LCD_HWI_DI_Data,
	LCD_HWI_DI_Instruction
}LCD_HWI_Instruction_Data_State;

/**
 * @brief Enumeration for the LCD Chip select lines state
 * 
 */
typedef enum
{
	LCD_HWI_CS_OFF = 0,
	LCD_HWI_CS1 = 1,
	LCD_HWI_CS2 = 2,
	LCD_HWI_CS12 = 3
}LCD_HWI_CS_Lines_State;

/**
 * @brief Enumeration for the LCD Read/Write pin's state
 * 
 */
typedef enum
{
	LCD_HWI_RW_Write,
	LCD_HWI_RW_Read
}LCD_HWI_RW_State;

/**
 * @brief Enumeration for the LCD RESET pin's state
 * 
 */
typedef enum
{
	LCD_HWI_RST_ON,
	LCD_HWI_RST_OFF
}LCD_HWI_RST_State;

/**
 * @brief Provides call to set the R/W pins state
 * 
 * @param state
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetRWLine(LCD_HWI_RW_State state);

/**
 * @brief Provides call to set the LCD datalines
 * 
 * @param value takes a byte long value, and sets the 8 lines value to the corresponding bits value
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetDataLines(uint8_t value);

/**
 * @brief Provides call to set the LCD Chip select lines
 * 
 * @param state 
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetCSLines(LCD_HWI_CS_Lines_State state);

/**
 * @brief Provides call to set the state of the Data/Instruction pin
 * 
 * @param state 
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetDILine(LCD_HWI_Instruction_Data_State state);

/**
 * @brief Provides call to set the state of the Enable pin
 * 
 * @param enable 
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetEnable(LCD_HWI_Enable_State enable);

/**
 * @brief Provides call to set the state of the Enable pin
 *
 * @param enable
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetLatch(LCD_HWI_Latch_State enable);

/**
 * @brief Provides call to set the state of the Enable pin
 *
 * @param enable
 * @return LCD_HWI_Status, returns success of the function call
 */
LCD_HWI_Status LCD_HWI_SetReset(LCD_HWI_RST_State state);

/**
 * @brief Provides call to delay execution by given number of microseconds
 * 
 * @param us 
 */
void LCD_HWI_Delay(uint32_t us);			




#endif