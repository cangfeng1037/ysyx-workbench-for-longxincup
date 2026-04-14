// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_OUT8(&io_halt,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_halt_ret,0,0);
    VL_OUT8(&io_non_inst,0,0);
    VL_IN8(&io_interrupt,0,0);
    VL_IN8(&io_master_awready,0,0);
    VL_OUT8(&io_master_awvalid,0,0);
    VL_OUT8(&io_master_awid,3,0);
    VL_OUT8(&io_master_awlen,7,0);
    VL_OUT8(&io_master_awsize,2,0);
    VL_OUT8(&io_master_awburst,1,0);
    VL_IN8(&io_master_wready,0,0);
    VL_OUT8(&io_master_wvalid,0,0);
    VL_OUT8(&io_master_wstrb,3,0);
    VL_OUT8(&io_master_wlast,0,0);
    VL_OUT8(&io_master_bready,0,0);
    VL_IN8(&io_master_bvalid,0,0);
    VL_IN8(&io_master_bresp,1,0);
    VL_IN8(&io_master_bid,3,0);
    VL_IN8(&io_master_arready,0,0);
    VL_OUT8(&io_master_arvalid,0,0);
    VL_OUT8(&io_master_arid,3,0);
    VL_OUT8(&io_master_arlen,7,0);
    VL_OUT8(&io_master_arsize,2,0);
    VL_OUT8(&io_master_arburst,1,0);
    VL_OUT8(&io_master_rready,0,0);
    VL_IN8(&io_master_rvalid,0,0);
    VL_IN8(&io_master_rresp,1,0);
    VL_IN8(&io_master_rlast,0,0);
    VL_IN8(&io_master_rid,3,0);
    VL_OUT8(&io_slave_awready,0,0);
    VL_IN8(&io_slave_awvalid,0,0);
    VL_IN8(&io_slave_awid,3,0);
    VL_IN8(&io_slave_awlen,7,0);
    VL_IN8(&io_slave_awsize,2,0);
    VL_IN8(&io_slave_awburst,1,0);
    VL_OUT8(&io_slave_wready,0,0);
    VL_IN8(&io_slave_wvalid,0,0);
    VL_IN8(&io_slave_wstrb,3,0);
    VL_IN8(&io_slave_wlast,0,0);
    VL_IN8(&io_slave_bready,0,0);
    VL_OUT8(&io_slave_bvalid,0,0);
    VL_OUT8(&io_slave_bresp,1,0);
    VL_OUT8(&io_slave_bid,3,0);
    VL_OUT8(&io_slave_arready,0,0);
    VL_IN8(&io_slave_arvalid,0,0);
    VL_IN8(&io_slave_arid,3,0);
    VL_IN8(&io_slave_arlen,7,0);
    VL_IN8(&io_slave_arsize,2,0);
    VL_IN8(&io_slave_arburst,1,0);
    VL_IN8(&io_slave_rready,0,0);
    VL_OUT8(&io_slave_rvalid,0,0);
    VL_OUT8(&io_slave_rresp,1,0);
    VL_OUT8(&io_slave_rlast,0,0);
    VL_OUT8(&io_slave_rid,3,0);
    VL_OUT8(&io_difftest_valid,0,0);
    VL_OUT(&io_pc,31,0);
    VL_OUT(&io_inst,31,0);
    VL_OUT(&io_commit_addr,31,0);
    VL_OUT(&io_master_awaddr,31,0);
    VL_OUT(&io_master_wdata,31,0);
    VL_OUT(&io_master_araddr,31,0);
    VL_IN(&io_master_rdata,31,0);
    VL_IN(&io_slave_awaddr,31,0);
    VL_IN(&io_slave_wdata,31,0);
    VL_IN(&io_slave_araddr,31,0);
    VL_OUT(&io_slave_rdata,31,0);
    VL_OUT(&io_gpr_0,31,0);
    VL_OUT(&io_gpr_1,31,0);
    VL_OUT(&io_gpr_2,31,0);
    VL_OUT(&io_gpr_3,31,0);
    VL_OUT(&io_gpr_4,31,0);
    VL_OUT(&io_gpr_5,31,0);
    VL_OUT(&io_gpr_6,31,0);
    VL_OUT(&io_gpr_7,31,0);
    VL_OUT(&io_gpr_8,31,0);
    VL_OUT(&io_gpr_9,31,0);
    VL_OUT(&io_gpr_10,31,0);
    VL_OUT(&io_gpr_11,31,0);
    VL_OUT(&io_gpr_12,31,0);
    VL_OUT(&io_gpr_13,31,0);
    VL_OUT(&io_gpr_14,31,0);
    VL_OUT(&io_gpr_15,31,0);
    VL_OUT(&io_gpr_16,31,0);
    VL_OUT(&io_gpr_17,31,0);
    VL_OUT(&io_gpr_18,31,0);
    VL_OUT(&io_gpr_19,31,0);
    VL_OUT(&io_gpr_20,31,0);
    VL_OUT(&io_gpr_21,31,0);
    VL_OUT(&io_gpr_22,31,0);
    VL_OUT(&io_gpr_23,31,0);
    VL_OUT(&io_gpr_24,31,0);
    VL_OUT(&io_gpr_25,31,0);
    VL_OUT(&io_gpr_26,31,0);
    VL_OUT(&io_gpr_27,31,0);
    VL_OUT(&io_gpr_28,31,0);
    VL_OUT(&io_gpr_29,31,0);
    VL_OUT(&io_gpr_30,31,0);
    VL_OUT(&io_gpr_31,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static int get_bp_hit_count();
    static int get_bp_total_count();
    static int get_d_cnt();
    static int get_dcache_hit_count();
    static int get_dcache_miss_count();
    static int get_difftest_valid();
    static int get_flush_cnt();
    static int get_gpr(int idx);
    static int get_hit_count();
    static int get_i_cnt();
    static int get_inst();
    static int get_miss_count();
    static int get_non_inst();
    static int get_pc();
    static int get_stall_cnt();

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
