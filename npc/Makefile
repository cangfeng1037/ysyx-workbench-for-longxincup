# 基本配置
TOP_MODULE = top
TOPNAME = $(TOP_MODULE)


IMAGE ?=
ELF   ?=
ARGS  ?= 
WAVE  ?= 0


# 工具配置
VERILATOR = verilator
VERILATOR_CFLAGS = -Wall --cc --trace --exe --build -j 0 \
    -Wno-DECLFILENAME -Wno-UNUSEDPARAM -Wno-UNUSEDSIGNAL \
	--vpi

#chisel配置
CHISEL_FIRTOOL = /home/cangfeng_/.local/bin/firtool
SBT = sbt
GEN_SCRIPT = ./gen_verilog.sh

# 目录配置
BUILD_DIR = ./obj_dir
OBJ_DIR = $(BUILD_DIR)
VSRC_DIR = ./verilog
CSRC_DIR = ./csrc

# 目标文件
BIN = $(BUILD_DIR)/V$(TOPNAME)

# 源文件搜索
VSRCS = $(VSRC_DIR)/$(TOPNAME).sv
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp")

# 编译标志
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

# 配置选项 DiffTest
#CFLAGS += -DCONFIG_DIFFTEST
#CXXFLAGS += -DCONFIG_DIFFTEST

LDFLAGS += -ldl

CFLAGS   += -DCONFIG_MTRACE
CXXFLAGS += -DCONFIG_MTRACE

CFLAGS   += -DCONFIG_PATCH
CXXFLAGS += -DCONFIG_PATCH


# Chisel 源文件检测
CHISEL_SRCS = $(shell find src/main/scala -name "*.scala" 2>/dev/null)

# 默认目标
all: sim

# Chisel 生成 Verilog
$(VSRCS): $(CHISEL_SRCS)
	@echo "=== Generating Verilog from Chisel ==="
	@chmod +x $(GEN_SCRIPT)
	@CHISEL_FIRTOOL_PATH=$(CHISEL_FIRTOOL) $(GEN_SCRIPT)
	@echo "=== Verilog generation completed ==="

# 强制重新生成 Verilog
gen-verilog:
	@echo "=== Forcing Verilog generation from Chisel ==="
	@chmod +x $(GEN_SCRIPT)
	@CHISEL_FIRTOOL_PATH=$(CHISEL_FIRTOOL) $(GEN_SCRIPT)
	@echo "=== Verilog generation completed ==="

# 构建规则 - 依赖 Verilog 生成
$(BIN): $(VSRCS) $(CSRCS)
	@echo "Building simulation with Verilator..."
	@echo "Verilog sources: $(VSRCS)"
	@echo "C++ sources: $(CSRCS)"
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $(VSRCS) $(CSRCS) \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
	@echo "Build completed: $(BIN)"

# 仿真运行
sim: $(BIN)
	@echo "Running simulation..."
	@$(BIN) $(IMAGE) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

# 快速运行
run: $(BIN)
	@echo "Running simulation (quick)..."
	@$(BIN) $(IMAGE) # 快速运行


# 调试信息
info:
	@echo "=== Makefile Configuration ==="
	@echo "TOP_MODULE: $(TOP_MODULE)"
	@echo "TOPNAME: $(TOPNAME)"
	@echo "BIN: $(BIN)"
	@echo "BUILD_DIR: $(BUILD_DIR)"
	@echo "VSRC_DIR: $(VSRC_DIR)"
	@echo "CSRC_DIR: $(CSRC_DIR)"
	@echo "VSRCS: $(VSRCS)"
	@echo "CSRCS: $(CSRCS)"
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
	rm -rf $(VSRC_DIR)/*.sv $(VSRC_DIR)/*.v $(VSRC_DIR)/*.fir
	rm -rf target project/target
	@echo "Deep clean completed."

# 强制重建
rebuild: clean sim

# 创建必要目录
setup:
	@mkdir -p $(VSRC_DIR) $(CSRC_DIR)

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

.PHONY: all sim run clean rebuild lint info setup help gen-verilog

# 包含上级Makefile
include ../Makefile
