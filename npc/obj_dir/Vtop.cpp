// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_halt_ret{vlSymsp->TOP.io_halt_ret}
    , io_non_inst{vlSymsp->TOP.io_non_inst}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_gpr_0{vlSymsp->TOP.io_gpr_0}
    , io_gpr_1{vlSymsp->TOP.io_gpr_1}
    , io_gpr_2{vlSymsp->TOP.io_gpr_2}
    , io_gpr_3{vlSymsp->TOP.io_gpr_3}
    , io_gpr_4{vlSymsp->TOP.io_gpr_4}
    , io_gpr_5{vlSymsp->TOP.io_gpr_5}
    , io_gpr_6{vlSymsp->TOP.io_gpr_6}
    , io_gpr_7{vlSymsp->TOP.io_gpr_7}
    , io_gpr_8{vlSymsp->TOP.io_gpr_8}
    , io_gpr_9{vlSymsp->TOP.io_gpr_9}
    , io_gpr_10{vlSymsp->TOP.io_gpr_10}
    , io_gpr_11{vlSymsp->TOP.io_gpr_11}
    , io_gpr_12{vlSymsp->TOP.io_gpr_12}
    , io_gpr_13{vlSymsp->TOP.io_gpr_13}
    , io_gpr_14{vlSymsp->TOP.io_gpr_14}
    , io_gpr_15{vlSymsp->TOP.io_gpr_15}
    , io_gpr_16{vlSymsp->TOP.io_gpr_16}
    , io_gpr_17{vlSymsp->TOP.io_gpr_17}
    , io_gpr_18{vlSymsp->TOP.io_gpr_18}
    , io_gpr_19{vlSymsp->TOP.io_gpr_19}
    , io_gpr_20{vlSymsp->TOP.io_gpr_20}
    , io_gpr_21{vlSymsp->TOP.io_gpr_21}
    , io_gpr_22{vlSymsp->TOP.io_gpr_22}
    , io_gpr_23{vlSymsp->TOP.io_gpr_23}
    , io_gpr_24{vlSymsp->TOP.io_gpr_24}
    , io_gpr_25{vlSymsp->TOP.io_gpr_25}
    , io_gpr_26{vlSymsp->TOP.io_gpr_26}
    , io_gpr_27{vlSymsp->TOP.io_gpr_27}
    , io_gpr_28{vlSymsp->TOP.io_gpr_28}
    , io_gpr_29{vlSymsp->TOP.io_gpr_29}
    , io_gpr_30{vlSymsp->TOP.io_gpr_30}
    , io_gpr_31{vlSymsp->TOP.io_gpr_31}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_decl_types(tracep);
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
