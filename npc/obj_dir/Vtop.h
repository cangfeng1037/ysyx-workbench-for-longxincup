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
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_halt_ret,0,0);
    VL_OUT8(&io_non_inst,0,0);
    VL_OUT(&io_pc,31,0);
    VL_OUT(&io_inst,31,0);
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
