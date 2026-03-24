AM_SRCS := riscv/ysyxSoC/start.S \
		   riscv/ysyxSoC/trm.c \
		   riscv/ysyxSoC/cte.c \
		   riscv/ysyxSoC/ioe.c \
		   riscv/ysyxSoC/trap.S \
		   riscv/ysyxSoC/uart.c \
		   riscv/ysyxSoC/spi.c \
		   riscv/ysyxSoC/timer.c \
		   riscv/ysyxSoC/input.c \

#include $(NPC_HOME)/Makefile

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker_ysyxSoC.ld
LDFLAGS   += --defsym=_flash_start=0x30000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)
YSYX_SOC_MAKE ?= $(MAKE) -C $(NPC_HOME)

# 用 python 脚本将 mainargs 插入到.bin文件
insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt     
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
	#@echo "+ YSYXSoC Run:"
	#@echo " IMAGE = $(IMAGE).bin"
	@$(YSYX_SOC_MAKE) run IMAGE=$(abspath $(IMAGE).bin)

.PHONY: insert-arg run image
