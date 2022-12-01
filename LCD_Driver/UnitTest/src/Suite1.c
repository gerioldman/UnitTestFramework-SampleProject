/**
 * @file Suite1.c
 * @brief TODO
 * @date 2022-11-29-00:35:31
 */

/* Private includes ----------------------------------------------------------*/

#include "TestSuites.h"
#include "stub.h"
#include "UnitTestAssert.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

static char Expected_Trace[50][50] = {
	/* Init pins */
	"LCD_HWI_SetEnable",
	"LCD_HWI_SetLatch",
	"LCD_HWI_SetRWLine",
	"LCD_HWI_SetReset",
	"LCD_HWI_SetCSLines",
	"LCD_HWI_SetEnable",
	/* End of Init pins*/

	/* Write command #0 */
	"LCD_HWI_SetDILine",
	"LCD_HWI_SetCSLines",
	"LCD_HWI_SetDataLines",
	"LCD_HWI_Delay",
	"LCD_HWI_SetLatch",
	"LCD_HWI_Delay",
	"LCD_HWI_SetLatch",
	"LCD_HWI_Delay",
	"LCD_HWI_SetCSLines",
	/* end of Write command #0 */

	/* Write command #1 */
	"LCD_HWI_SetDILine",
	"LCD_HWI_SetCSLines",
	"LCD_HWI_SetDataLines",
	"LCD_HWI_Delay",
	"LCD_HWI_SetLatch",
	"LCD_HWI_Delay",
	"LCD_HWI_SetLatch",
	"LCD_HWI_Delay",
	"LCD_HWI_SetCSLines",
	/* end of Write command #1 */

	/* Write command #2 */
	"LCD_HWI_SetDILine",
	"LCD_HWI_SetCSLines",
	"LCD_HWI_SetDataLines",
	"LCD_HWI_Delay",
	"LCD_HWI_SetLatch",
	"LCD_HWI_Delay",
	"LCD_HWI_SetLatch",
	"LCD_HWI_Delay",
	"LCD_HWI_SetCSLines",
	/* end of Write command #2 */

	/* Write command #3 */
	"LCD_HWI_SetDILine",
	"LCD_HWI_SetCSLines",
	"LCD_HWI_SetDataLines",
	"LCD_HWI_Delay",
	"LCD_HWI_SetLatch",
	"LCD_HWI_Delay",
	"LCD_HWI_SetLatch",
	"LCD_HWI_Delay",
	"LCD_HWI_SetCSLines"
	/* end of Write command #3 */
};

static char Trace_Buffer[50][101] = {{0u}};
static LCD_HWI_RW_State RW_State_Buffer[100] = {0u};
static uint8_t DataLines_Buffer[100] = {0u};
static LCD_HWI_CS_Lines_State CS_Lines_State_Buffer[100] = {0u};
static LCD_HWI_Instruction_Data_State Instruction_Data_State_Buffer[100] = {0u};
static LCD_HWI_Enable_State EnableState_Buffer[100] = {0u};
static LCD_HWI_Latch_State Latch_State_Buffer[100] = {0u};
static LCD_HWI_RST_State RST_State_Buffer[100] = {0u};
static uint32_t Delay_Buffer[100] = {0u};

static LCD_HWI_Status RW_redirect(LCD_HWI_RW_State state);
static LCD_HWI_Status DataLines_redirect(uint8_t state);
static LCD_HWI_Status CS_redirect(LCD_HWI_CS_Lines_State state);
static LCD_HWI_Status ID_redirect(LCD_HWI_Instruction_Data_State state);
static LCD_HWI_Status Enable_redirect(LCD_HWI_Enable_State state);
static LCD_HWI_Status Latch_redirect(LCD_HWI_Latch_State state);
static LCD_HWI_Status RST_redirect(LCD_HWI_RST_State state);
static void Delay(uint32_t us);

static LCD_HWI_Status RW_redirect(LCD_HWI_RW_State state)
{
	static uint8_t index = 0u;

	RW_State_Buffer[index++] = state;

	return LCD_HWI_OK;
}

static LCD_HWI_Status DataLines_redirect(uint8_t state)
{
	static uint8_t index = 0u;

	DataLines_Buffer[index++] = state;

	return LCD_HWI_OK;
}

static LCD_HWI_Status CS_redirect(LCD_HWI_CS_Lines_State state)
{
	static uint8_t index = 0u;

	CS_Lines_State_Buffer[index++] = state;

	return LCD_HWI_OK;
}

static LCD_HWI_Status ID_redirect(LCD_HWI_Instruction_Data_State state)
{
	static uint8_t index = 0u;

	Instruction_Data_State_Buffer[index++] = state;

	return LCD_HWI_OK;
}

static LCD_HWI_Status Enable_redirect(LCD_HWI_Enable_State state)
{
	static uint8_t index = 0u;

	EnableState_Buffer[index++] = state;

	return LCD_HWI_OK;
}

static LCD_HWI_Status Latch_redirect(LCD_HWI_Latch_State state)
{
	static uint8_t index = 0u;

	Latch_State_Buffer[index++] = state;

	return LCD_HWI_OK;
}

static LCD_HWI_Status RST_redirect(LCD_HWI_RST_State state)
{
	static uint8_t index = 0u;

	RST_State_Buffer[index++] = state;

	return LCD_HWI_OK;
}

static void Delay(uint32_t us)
{
	static uint8_t index = 0u;

	Delay_Buffer[index++] = us;
}

/**
 * @brief Tests the Init function
 *
 */
void TS1_Test1()
{
	/* Set up trace */
	TEST_STUB.TEST_TRACE.trace_buffer = Trace_Buffer;
	TEST_STUB.TEST_TRACE.trace_buffer_index = 0u;
	TEST_STUB.TEST_TRACE.trace_buffer_length = 50u;
	TEST_STUB.TEST_TRACE.trace_enabled = STUB_OPTION_TRACE_ON;

	/* Set up redirection functions to save function call parameters to an array */

	TEST_STUB.LCD_HWI_SetRWLine.redirectFuncPtr = RW_redirect;
	TEST_STUB.LCD_HWI_SetRWLine.stub_option = STUB_OPTION_REDIRECT;

	TEST_STUB.LCD_HWI_SetDataLines.redirectFuncPtr = DataLines_redirect;
	TEST_STUB.LCD_HWI_SetDataLines.stub_option = STUB_OPTION_REDIRECT;

	TEST_STUB.LCD_HWI_SetCSLines.redirectFuncPtr = CS_redirect;
	TEST_STUB.LCD_HWI_SetCSLines.stub_option = STUB_OPTION_REDIRECT;

	TEST_STUB.LCD_HWI_SetDILine.redirectFuncPtr = ID_redirect;
	TEST_STUB.LCD_HWI_SetDILine.stub_option = STUB_OPTION_REDIRECT;

	TEST_STUB.LCD_HWI_SetEnable.redirectFuncPtr = Enable_redirect;
	TEST_STUB.LCD_HWI_SetEnable.stub_option = STUB_OPTION_REDIRECT;

	TEST_STUB.LCD_HWI_SetLatch.redirectFuncPtr = Latch_redirect;
	TEST_STUB.LCD_HWI_SetLatch.stub_option = STUB_OPTION_REDIRECT;

	TEST_STUB.LCD_HWI_SetReset.redirectFuncPtr = RST_redirect;
	TEST_STUB.LCD_HWI_SetReset.stub_option = STUB_OPTION_REDIRECT;

	TEST_STUB.LCD_HWI_Delay.redirectFuncPtr = Delay;
	TEST_STUB.LCD_HWI_Delay.stub_option = STUB_OPTION_REDIRECT;

	/* Call LCD_Init */

	TEST_CALL_LCD_Init();

	/* Test Trace if function call order was correct */

	for (uint8_t i = 0u; i < TEST_STUB.TEST_TRACE.trace_buffer_index; i++)
	{
		ASSERT_STRING_EQUAL(TEST_STUB.TEST_TRACE.trace_buffer[i], Expected_Trace[i], 50u);
	}

	ASSERT_UINT32_EQUAL(TEST_STUB.TEST_TRACE.trace_buffer_index, 42u);

	/* Test arrays */

	ASSERT_UINT8_EQUAL(RW_State_Buffer[0], LCD_HWI_RW_Write);

	ASSERT_HEX8_EQUAL(DataLines_Buffer[0], LCD_COMMAND_DISPLAY_ON);
	ASSERT_HEX8_EQUAL(DataLines_Buffer[1], LCD_SETYADDRESS);
	ASSERT_HEX8_EQUAL(DataLines_Buffer[2], LCD_SETPAGE);
	ASSERT_HEX8_EQUAL(DataLines_Buffer[3], LCD_DISPLAY_START_LINE);

	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[0], LCD_HWI_CS_OFF);
	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[1], LCD_HWI_CS12);
	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[2], LCD_HWI_CS_OFF);
	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[3], LCD_HWI_CS12);
	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[4], LCD_HWI_CS_OFF);
	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[5], LCD_HWI_CS12);
	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[6], LCD_HWI_CS_OFF);
	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[7], LCD_HWI_CS12);
	ASSERT_UINT8_EQUAL(CS_Lines_State_Buffer[8], LCD_HWI_CS_OFF);

	ASSERT_UINT8_EQUAL(Instruction_Data_State_Buffer[0], LCD_HWI_DI_Instruction);
	ASSERT_UINT8_EQUAL(Instruction_Data_State_Buffer[1], LCD_HWI_DI_Instruction);
	ASSERT_UINT8_EQUAL(Instruction_Data_State_Buffer[2], LCD_HWI_DI_Instruction);
	ASSERT_UINT8_EQUAL(Instruction_Data_State_Buffer[3], LCD_HWI_DI_Instruction);

	ASSERT_UINT8_EQUAL(EnableState_Buffer[0], LCD_HWI_Enable_OFF);
	ASSERT_UINT8_EQUAL(EnableState_Buffer[1], LCD_HWI_Enable_ON);

	ASSERT_UINT8_EQUAL(Latch_State_Buffer[0], LCD_HWI_Latch_ON);
	ASSERT_UINT8_EQUAL(Latch_State_Buffer[1], LCD_HWI_Latch_OFF);
	ASSERT_UINT8_EQUAL(Latch_State_Buffer[2], LCD_HWI_Latch_ON);
	ASSERT_UINT8_EQUAL(Latch_State_Buffer[3], LCD_HWI_Latch_OFF);
	ASSERT_UINT8_EQUAL(Latch_State_Buffer[4], LCD_HWI_Latch_ON);
	ASSERT_UINT8_EQUAL(Latch_State_Buffer[5], LCD_HWI_Latch_OFF);
	ASSERT_UINT8_EQUAL(Latch_State_Buffer[6], LCD_HWI_Latch_ON);
	ASSERT_UINT8_EQUAL(Latch_State_Buffer[7], LCD_HWI_Latch_OFF);
	ASSERT_UINT8_EQUAL(Latch_State_Buffer[8], LCD_HWI_Latch_ON);

	ASSERT_UINT8_EQUAL(RST_State_Buffer[0], LCD_HWI_RST_OFF);

	ASSERT_UINT32_EQUAL(Delay_Buffer[0],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[1],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[2],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[3],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[4],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[5],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[6],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[7],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[8],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[9],  1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[10], 1u);
	ASSERT_UINT32_EQUAL(Delay_Buffer[11], 1u);
}

/**
 * @brief
 *
 */
void TS1_Test2()
{
}

TestSuite Suite1 = {
	.name = "Suite1",
	.TestCases =
		{
			TEST_CASE_ENTRY(TS1_Test1),
			TEST_CASE_ENTRY(TS1_Test2),
			TEST_CASE_ENTRY(TEST_CASE_END),
		}};