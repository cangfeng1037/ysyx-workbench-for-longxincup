# 基本配置
SIM_MODE ?= core

ifeq ($(SIM_MODE),core)
TOP_MODULE = top
else ifeq ($(SIM_MODE),soc)
TOP_MODULE = ysyxSoCFull
else
$(error Unsupported SIM_MODE '$(SIM_MODE)'; expected 'soc' or 'core')
endif
TOPNAME = $(TOP_MODULE)

ifeq ($(SIM_MODE),core)
NPC_RESET_PC = 0x80000000
else
NPC_RESET_PC = 0x30000000
endif


IMAGE ?=
ELF   ?=
ARGS  ?= 
WAVE  ?= 1
DIFFTEST ?= 0
NPC_WB_THREE_CYCLE ?= 0
NPC_HW_FWD_DEBUG ?= 0


# 工具配置
VERILATOR = verilator
VERILATOR_CFLAGS = --cc --trace --exe --build -j 0 \
    -Wno-DECLFILENAME -Wno-UNUSEDPARAM -Wno-UNUSEDSIGNAL -Wno-ASSIGNDLY \
    -Wno-PINCONNECTEMPTY -Wno-PINMISSING -Wno-DEFPARAM \
    -Wno-UNDRIVEN -Wno-SYNCASYNCNET \
	--timescale 1ns/1ns \
	--no-timing \
	--vpi $(addprefix -I, $(PERIP_INC_PATHS))

#chisel配置
CHISEL_FIRTOOL = /home/cangfeng_/circt-build/circt/build/bin
SBT = sbt
GEN_SCRIPT = ./gen_verilog.sh

# 目录配置
BUILD_DIR = ./obj_dir/$(SIM_MODE)
OBJ_DIR = $(BUILD_DIR)
VSRC_DIR = ./verilog
CSRC_DIR = ./csrc
GEN_VSRC_DIR = $(VSRC_DIR)/$(SIM_MODE)

# 目标文件
BIN = $(BUILD_DIR)/V$(TOPNAME)

# 源文件搜索
GEN_VSRCS = $(GEN_VSRC_DIR)/top.sv

ifeq ($(SIM_MODE),core)
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp" | grep -v char-test.cpp | grep -v top.cpp)
else
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp" | grep -v char-test.cpp | grep -v top_core.cpp)
endif

# 外部 Verilog 源文件 （ysyxSoC/perip）
PERIP_VSRCS = $(shell find $(abspath ../ysyxSoC/perip) -name "*.v" 2>/dev/null)
PERIP_INC_PATHS = $(abspath ../ysyxSoC/perip/uart16550/rtl) \
                 $(abspath ../ysyxSoC/perip/spi/rtl) 
YSYXSOC_VSRCS = ../ysyxSoC/build/ysyxSoCFull.v

ifeq ($(SIM_MODE),core)
EXT_VSRCS =
else
EXT_VSRCS = $(PERIP_VSRCS) $(YSYXSOC_VSRCS)
endif
VSRCS = $(GEN_VSRCS) $(EXT_VSRCS)

# 编译标志
INCFLAGS = $(addprefix -I, $(INC_PATH) $(PERIP_INC_PATHS)) 
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

# 配置选项 DiffTest
#CFLAGS += -DCONFIG_DIFFTEST
#CXXFLAGS += -DCONFIG_DIFFTEST

LDFLAGS += -ldl

CFLAGS   += -DCONFIG_MTRACE
CXXFLAGS += -DCONFIG_MTRACE

CFLAGS   += -DCONFIG_PATCH
CXXFLAGS += -DCONFIG_PATCH

ifeq ($(WAVE),1)
CFLAGS   += -DCONFIG_WAVE
CXXFLAGS += -DCONFIG_WAVE
endif

# Chisel 源文件检测
CHISEL_SRCS = $(shell find src/main/scala -name "*.scala" 2>/dev/null)

# 默认目标
all: sim

check-image:
ifeq ($(strip $(IMAGE)),)
	$(error IMAGE is required. Example: make run IMAGE=/abs/path/to/program.bin)
endif

# Chisel 生成 Verilog
$(GEN_VSRCS): $(CHISEL_SRCS)
	@echo "=== Generating Verilog from Chisel ==="
	@chmod +x $(GEN_SCRIPT)
	@mkdir -p $(GEN_VSRC_DIR)
	@CHISEL_FIRTOOL_PATH=$(CHISEL_FIRTOOL) NPC_VERILOG_DIR=$(GEN_VSRC_DIR) NPC_RESET_PC=$(NPC_RESET_PC) NPC_WB_THREE_CYCLE=$(NPC_WB_THREE_CYCLE) NPC_HW_FWD_DEBUG=$(NPC_HW_FWD_DEBUG) $(GEN_SCRIPT)
	@echo "=== Verilog generation completed ==="

# 强制重新生成 Verilog
gen-verilog:
	@echo "=== Forcing Verilog generation from Chisel ==="
	@chmod +x $(GEN_SCRIPT)
	@mkdir -p $(GEN_VSRC_DIR)
	@CHISEL_FIRTOOL_PATH=$(CHISEL_FIRTOOL) NPC_VERILOG_DIR=$(GEN_VSRC_DIR) NPC_RESET_PC=$(NPC_RESET_PC) NPC_WB_THREE_CYCLE=$(NPC_WB_THREE_CYCLE) NPC_HW_FWD_DEBUG=$(NPC_HW_FWD_DEBUG) $(GEN_SCRIPT)
	@echo "=== Verilog generation completed ==="

# 构建规则 - 依赖 Verilog 生成
$(BIN): $(VSRCS) $(CSRCS)
	@echo "Building simulation with Verilator..."
	@echo "Simulation mode: $(SIM_MODE)"
	@echo "Top module: $(TOPNAME)"
	@echo "Image: $(IMAGE)"
	@echo "Verilog sources: $(VSRCS)"
	@echo "C++ sources: $(CSRCS)"
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $(VSRCS) $(CSRCS) \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
	@echo "Build completed: $(BIN)"

# 仿真运行
sim: check-image $(BIN)
	@echo "Running simulation..."
	@$(BIN) $(IMAGE) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

# 快速运行
run: check-image $(BIN)
	@echo "Running simulation (quick)..."
	@echo "Simulation mode: $(SIM_MODE), top: $(TOPNAME)"
	@$(BIN) $(IMAGE) # 快速运行


# 调试信息
info:
	@echo "=== Makefile Configuration ==="
	@echo "TOP_MODULE: $(TOP_MODULE)"
	@echo "TOPNAME: $(TOPNAME)"
	@echo "BIN: $(BIN)"
	@echo "BUILD_DIR: $(BUILD_DIR)"
	@echo "VSRC_DIR: $(VSRC_DIR)"
	@echo "GEN_VSRC_DIR: $(GEN_VSRC_DIR)"
	@echo "CSRC_DIR: $(CSRC_DIR)"
	@echo "VSRCS: $(VSRCS)"
	@echo "CSRCS: $(CSRCS)"
	@echo "NPC_RESET_PC: $(NPC_RESET_PC)"
	@echo "DIFFTEST: $(DIFFTEST)"
	@echo "NPC_WB_THREE_CYCLE: $(NPC_WB_THREE_CYCLE)"
	@echo "NPC_HW_FWD_DEBUG: $(NPC_HW_FWD_DEBUG)"
	@echo "WAVE: $(WAVE)"
	@echo "VERILATOR_CFLAGS: $(VERILATOR_CFLAGS)"
	@echo "CHISEL_SRCS: $(CHISEL_SRCS)"
	@echo "CHISEL_FIRTOOL: $(CHISEL_FIRTOOL)"
	@echo "VERILATOR_CFLAGS: $(VERILATOR_CFLAGS)"

# 语法检查
lint:
	@echo "Checking Verilog syntax..."
	$(VERILATOR) --lint-only $(VSRCS)

# 清理
clean:
	@echo "Cleaning build files..."
	rm -rf $(BUILD_DIR)
	rm -f *.vcd
	@echo "Clean completed."

# 深度清理 - 包括生成的 Verilog
distclean: clean
	@echo "Cleaning generated Verilog..."
	rm -rf $(VSRC_DIR)/core $(VSRC_DIR)/soc
	rm -rf $(VSRC_DIR)/*.sv $(VSRC_DIR)/*.v $(VSRC_DIR)/*.fir
	rm -rf target project/target
	@echo "Deep clean completed."

# 强制重建
rebuild: clean sim

# 创建必要目录
setup:
	@mkdir -p $(VSRC_DIR) $(GEN_VSRC_DIR) $(CSRC_DIR)

# 帮助信息
help:
	@echo "Available targets:"
	@echo "  all     - Build and run simulation"
	@echo "  sim     - Build and run simulation with git commit"
	@echo "  run     - Build and run simulation (no git commit)"
	@echo "  clean   - Remove build files"
	@echo "  rebuild - Clean and rebuild"
	@echo "  lint    - Check Verilog syntax"
	@echo "  info    - Show configuration"
	@echo "  setup   - Create directories"
	@echo "  help    - Show this help"

.PHONY: all sim run clean rebuild lint info setup help gen-verilog check-image

# 包含上级Makefile
include ../Makefile
