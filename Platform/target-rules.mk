######################################
# target
######################################



######################################
# building variables
######################################
# debug build?
DEBUG 	?= 1
# optimization
OPT 	?= -Og

TARGET_CC = arm-none-eabi-gcc
TARGET_AS = arm-none-eabi-gcc -x assembler-with-cpp
TARGET_CP = arm-none-eabi-objcopy
TARGET_SZ = arm-none-eabi-size

HEX = $(TARGET_CP) -O ihex
BIN = $(TARGET_CP) -O binary -S

BUILD_DIR = .obj
PLATFORM_DIR = Platform

######################################
# source
######################################
# C sources
C_SOURCES =  \
$(PLATFORM_DIR)/Core/Src/gpio.c \
$(PLATFORM_DIR)/Core/Src/adc.c \
$(PLATFORM_DIR)/Core/Src/crc.c \
$(PLATFORM_DIR)/Core/Src/spi.c \
$(PLATFORM_DIR)/Core/Src/tim.c \
$(PLATFORM_DIR)/Core/Src/usart.c \
$(PLATFORM_DIR)/Core/Src/stm32f4xx_it.c \
$(PLATFORM_DIR)/Core/Src/stm32f4xx_hal_msp.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_adc_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_adc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_crc.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_spi.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c \
$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_uart.c \
$(PLATFORM_DIR)/Core/Src/system_stm32f4xx.c \
$(PLATFORM_DIR)/Core/Src/lsm6dsl_reg.c \
$(PLATFORM_DIR)/Core/Src/main.c


# ASM sources
ASM_SOURCES =  \
$(PLATFORM_DIR)/startup_stm32f446xx.s

#######################################
# TARGET_CFLAGS
#######################################
# cpu
CPU = -mcpu=cortex-m4

# fpu
FPU = -mfpu=fpv4-sp-d16

# float-abi
FLOAT-ABI = -mfloat-abi=hard

# mcu
MCU = $(CPU) -mthumb $(FPU) $(FLOAT-ABI)

# macros for gcc
# AS defines
AS_DEFS = 


# C defines
C_DEFS =  \
-DUSE_HAL_DRIVER \
-DSTM32F446xx \
-DUNITTEST=$(UNITTEST)


# AS includes
AS_INCLUDES = 

# C includes
C_INCLUDES =  \
-I$(PLATFORM_DIR)/Core/Inc \
-I$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Inc \
-I$(PLATFORM_DIR)/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy \
-I$(PLATFORM_DIR)/Drivers/CMSIS/Device/ST/STM32F4xx/Include \
-I$(PLATFORM_DIR)/Drivers/CMSIS/Include

# compile gcc flags
ASFLAGS = $(MCU) $(AS_DEFS) $(AS_INCLUDES) $(OPT) -Wall -fdata-sections -ffunction-sections

TARGET_CFLAGS += $(MCU) $(C_DEFS) $(C_INCLUDES) $(INCLUDE_FOLDERS) $(OPT) -Wall -fdata-sections -ffunction-sections

ifeq ($(DEBUG), 1)
TARGET_CFLAGS += -g -gdwarf-2
endif

# Generate dependency information
TARGET_CFLAGS += -MMD -MP -MF"$(@:%.o=%.d)"

#######################################
# TARGET_LDFLAGS
#######################################
# link script
LDSCRIPT = $(PLATFORM_DIR)/STM32F446RETx_FLASH.ld

# libraries
TARGET_LIBS 	:= -lc -lm -lnosys 
TARGET_LIBDIR 	:= 
TARGET_LDFLAGS 	:= $(MCU) -specs=nano.specs -T$(LDSCRIPT) $(TARGET_LIBDIR) $(TARGET_LIBS) -Wl,-Map=$(BUILD_DIR)/$(TARGET).map,--cref -Wl,--gc-sections -u _printf_float

#######################################
# build the application
#######################################
# list of objects
PLATFORMOBJS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))
# list of ASM program objects
PLATFORMOBJS += $(addprefix $(BUILD_DIR)/,$(notdir $(ASM_SOURCES:.s=.o)))
vpath %.s $(sort $(dir $(ASM_SOURCES)))

OBJS 			:= $(PLATFORMOBJS) $(UNITTESTRUNNEROBJS) $(UNITTESTSTUBOBJS) $(UNITTESTOBJS) $(UNITOBJS)

$(BUILD_DIR)/%.o: %.c Makefile | $(BUILD_DIR)
	@echo Building file: $<
	$(TARGET_CC) -c $(TARGET_CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/%.o: %.s Makefile | $(BUILD_DIR)
	@echo Building file: $<
	@$(TARGET_AS) -c $(TARGET_CFLAGS) $< -o $@

$(BUILD_DIR)/$(TARGET).elf: $(OBJS) unit_build_internal Makefile
	@echo Linking target: $@
	@$(TARGET_CC) $(OBJS) $(TARGET_LDFLAGS) -o $@
	@echo Finished building target: $@
	@$(TARGET_SZ) $@

$(BUILD_DIR)/$(TARGET).hex: $(BUILD_DIR)/$(TARGET).elf | $(BUILD_DIR)
	@echo Creating HEX file: $@
	@$(HEX) $< $@
	
$(BUILD_DIR)/$(TARGET).bin: $(BUILD_DIR)/$(TARGET).elf | $(BUILD_DIR)
	@echo Creating BIN file: $@
	@$(BIN) $< $@

.PHONY: onboard_build

onboard_build: $(BUILD_DIR)/$(TARGET).elf $(BUILD_DIR)/$(TARGET).hex $(BUILD_DIR)/$(TARGET).bin
