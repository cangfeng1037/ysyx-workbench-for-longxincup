# 基础配置
TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

# verilator配置
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --trace --build -O3 --x-assign fast --x-initial fast --noassert

# 构建目录配置
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

# SDL2配置
CFLAGS += -I/usr/include/SDL2
LDFLAGS += -lSDL2

# 自动引脚绑定
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)

# 源文件配置
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# 包含NVboard规则
include $(NVBOARD_HOME)/scripts/nvboard.mk

# 默认目标
all: $(BIN)

# 生成自动绑定
$(SRC_AUTO_BIND): $(NXDC_FILES)
	@mkdir -p $(BUILD_DIR)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# 构建可执行文件
$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

# 运行目标
run: $(BIN)
		@$^

# 清理
clean:
		rm -rf $(BUILD_DIR) waveform.vcd

.PHONY: all run clean
