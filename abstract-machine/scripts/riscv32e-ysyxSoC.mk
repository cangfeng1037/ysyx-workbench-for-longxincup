include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/ysyxSoC.mk
COMMON_CFLAGS += -march=rv32e_zicsr -mabi=ilp32e  # overwrite
LDFLAGS       += -melf32lriscv					# overwrite

# RISC-V32E 不包含乘除法指令，需要软件实现
# 这些是 libgcc 运行时库文件，用于实现编译器不提供的底层操作
AM_SRCS += riscv/ysyxSoC/libgcc/div.S \
		   riscv/ysyxSoC/libgcc/muldi3.S \
		   riscv/ysyxSoC/libgcc/multi3.c \
		   riscv/ysyxSoC/libgcc/ashldi3.c \
		   riscv/ysyxSoC/libgcc/unused.c