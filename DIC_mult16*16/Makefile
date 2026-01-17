VERILATOR ?= verilator
TOP ?= mult
TB_CPP ?= tb_mult.cpp
SV ?= mult.v
BUILD_DIR ?= obj_dir
WARN_FLAGS ?= -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-UNOPTFLAT

all: sim


sim:
	$(VERILATOR) -Wall $(WARN_FLAGS) -cc $(SV) --top-module $(TOP) --exe $(TB_CPP) -Mdir $(BUILD_DIR) --build
	./$(BUILD_DIR)/V$(TOP)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all sim clean
