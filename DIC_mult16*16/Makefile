VERILATOR ?= verilator
WARN_FLAGS ?= -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-UNOPTFLAT
BUILD_DIR ?= obj_dir
TB_CPP ?= tb_mult.cpp

# 默认仿真 Booth+Wallace
SV = mult.v
TOP = mult

all: sim

sim:
	$(VERILATOR) -Wall $(WARN_FLAGS) -cc $(SV) --top-module $(TOP) --exe $(TB_CPP) -Mdir $(BUILD_DIR) --build
	time ./$(BUILD_DIR)/V$(TOP)

# 直接乘法仿真
sim_direct:
	$(VERILATOR) -Wall $(WARN_FLAGS) -cc mul_direct.v --top-module mul_direct --exe $(TB_CPP) -Mdir $(BUILD_DIR) --build
	time ./$(BUILD_DIR)/Vmul_direct

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all sim clean
