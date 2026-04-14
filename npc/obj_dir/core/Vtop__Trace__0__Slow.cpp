// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1514,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1515,0,"io_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1516,0,"io_commit_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1517,0,"io_halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1518,0,"io_non_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1519,0,"io_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1520,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1521,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1523,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1524,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1525,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1526,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1527,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1528,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1529,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1530,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1531,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1532,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1533,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1534,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1535,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1536,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1537,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1538,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1539,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1540,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1541,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1542,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1543,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1544,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1545,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1546,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1547,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1548,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1549,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1550,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1551,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1552,0,"io_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1553,0,"io_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1554,0,"io_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1555,0,"io_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1556,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1557,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1558,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1559,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1560,0,"io_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1561,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1562,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1563,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1564,0,"io_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1565,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1566,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1567,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1568,0,"io_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1569,0,"io_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1570,0,"io_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1571,0,"io_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1572,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1573,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1574,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1575,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1576,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1577,0,"io_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1578,0,"io_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1579,0,"io_gpr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1580,0,"io_gpr_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1581,0,"io_gpr_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1582,0,"io_gpr_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1583,0,"io_gpr_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1584,0,"io_gpr_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1585,0,"io_gpr_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"io_gpr_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1587,0,"io_gpr_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1588,0,"io_gpr_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1589,0,"io_gpr_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"io_gpr_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1591,0,"io_gpr_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1592,0,"io_gpr_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1593,0,"io_gpr_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1594,0,"io_gpr_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1595,0,"io_gpr_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1596,0,"io_gpr_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1597,0,"io_gpr_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1598,0,"io_gpr_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1599,0,"io_gpr_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1600,0,"io_gpr_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1601,0,"io_gpr_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1602,0,"io_gpr_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1603,0,"io_gpr_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1604,0,"io_gpr_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1605,0,"io_gpr_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1606,0,"io_gpr_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1607,0,"io_gpr_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1608,0,"io_gpr_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1609,0,"io_gpr_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1610,0,"io_gpr_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1611,0,"io_difftest_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1514,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1515,0,"io_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1516,0,"io_commit_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1517,0,"io_halt_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1518,0,"io_non_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1519,0,"io_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1520,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1521,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1523,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1524,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1525,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1526,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1527,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1528,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1529,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1530,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1531,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1532,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1533,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1534,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1535,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1536,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1537,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1538,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1539,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1540,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1541,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1542,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1543,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1544,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1545,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1546,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1547,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1548,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1549,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1550,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1551,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1552,0,"io_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1553,0,"io_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1554,0,"io_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1555,0,"io_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1556,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1557,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1558,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1559,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1560,0,"io_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1561,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1562,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1563,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1564,0,"io_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1565,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1566,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1567,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1568,0,"io_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1569,0,"io_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1570,0,"io_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1571,0,"io_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1572,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1573,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1574,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1575,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1576,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1577,0,"io_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1578,0,"io_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1579,0,"io_gpr_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1580,0,"io_gpr_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1581,0,"io_gpr_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1582,0,"io_gpr_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1583,0,"io_gpr_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1584,0,"io_gpr_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1585,0,"io_gpr_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"io_gpr_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1587,0,"io_gpr_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1588,0,"io_gpr_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1589,0,"io_gpr_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"io_gpr_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1591,0,"io_gpr_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1592,0,"io_gpr_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1593,0,"io_gpr_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1594,0,"io_gpr_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1595,0,"io_gpr_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1596,0,"io_gpr_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1597,0,"io_gpr_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1598,0,"io_gpr_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1599,0,"io_gpr_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1600,0,"io_gpr_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1601,0,"io_gpr_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1602,0,"io_gpr_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1603,0,"io_gpr_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1604,0,"io_gpr_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1605,0,"io_gpr_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1606,0,"io_gpr_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1607,0,"io_gpr_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1608,0,"io_gpr_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1609,0,"io_gpr_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1610,0,"io_gpr_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1611,0,"io_difftest_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1578,0,"io_halt_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("difftest_dpi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"difftest_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1616,0,"non_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1617,0,"gpr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"gpr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"gpr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"gpr3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"gpr4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"gpr5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"gpr6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"gpr7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"gpr8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"gpr9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"gpr10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"gpr11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"gpr12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"gpr13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"gpr14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"gpr15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"gpr16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"gpr17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"gpr18",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"gpr19",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"gpr20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"gpr21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"gpr22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"gpr23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"gpr24",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"gpr25",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"gpr26",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"gpr27",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"gpr28",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"gpr29",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"gpr30",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"gpr31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"hit_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"miss_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"dcache_hit_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"dcache_miss_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"i_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"d_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"stall_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"flush_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"bp_total_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"bp_hit_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ebreak_box", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1578,0,"is_ebreak",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("npc_cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1520,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1521,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1523,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1525,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1527,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1528,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1529,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1530,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1531,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1532,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1533,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1536,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1537,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1538,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1539,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1540,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1541,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1542,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1543,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1544,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1546,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1547,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_regs_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_regs_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"io_regs_out_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"io_regs_out_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"io_regs_out_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"io_regs_out_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"io_regs_out_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"io_regs_out_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"io_regs_out_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"io_regs_out_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"io_regs_out_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"io_regs_out_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"io_regs_out_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"io_regs_out_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_regs_out_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_regs_out_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_regs_out_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"io_regs_out_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"io_regs_out_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"io_regs_out_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"io_regs_out_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"io_regs_out_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"io_regs_out_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"io_regs_out_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"io_regs_out_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"io_regs_out_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"io_regs_out_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"io_regs_out_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"io_regs_out_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"io_regs_out_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"io_regs_out_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"io_commit_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_commit_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1516,0,"io_commit_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"io_difftest_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"io_hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"io_miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"io_dcache_hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_dcache_miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"io_i_cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"io_d_cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"io_stall_cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"io_flush_cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"io_bp_total_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"io_bp_hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"idu_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"stall_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"flush_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("axi_arbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"io_ifu_master_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_ifu_master_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_ifu_master_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"io_ifu_master_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"io_ifu_master_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"io_ifu_master_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_ifu_master_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_ifu_master_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"io_ifu_master_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1612,0,"io_mem_master_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_mem_master_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"io_mem_master_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"io_mem_master_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"io_mem_master_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"io_mem_master_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"io_mem_master_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"io_mem_master_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+100,0,"io_mem_master_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_mem_master_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1613,0,"io_mem_master_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"io_mem_master_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"io_mem_master_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"io_mem_master_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"io_mem_master_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"io_mem_master_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"io_mem_master_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_mem_master_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1614,0,"io_mem_master_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"io_mem_master_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_clint_slave_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"io_clint_slave_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_clint_slave_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"io_clint_slave_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_clint_slave_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"io_clint_slave_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1520,0,"io_master_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1521,0,"io_master_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"io_master_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1523,0,"io_master_out_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1525,0,"io_master_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1527,0,"io_master_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1528,0,"io_master_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1529,0,"io_master_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1530,0,"io_master_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1531,0,"io_master_out_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1532,0,"io_master_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1533,0,"io_master_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1536,0,"io_master_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1537,0,"io_master_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1538,0,"io_master_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1539,0,"io_master_out_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1540,0,"io_master_out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1541,0,"io_master_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1542,0,"io_master_out_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1543,0,"io_master_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1544,0,"io_master_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1546,0,"io_master_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1547,0,"io_master_out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"using_ifu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"is_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"w_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"using_clint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"rdAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"isClintWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1521,0,"io_master_out_awvalid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"memClintRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"io_clint_slave_arvalid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1537,0,"io_master_out_arvalid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_master_out_wvalid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_master_out_bready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"io_clint_slave_rready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_master_out_rready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("axi_clint_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_clint_bus_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"io_clint_bus_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_clint_bus_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+108,0,"io_clint_bus_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_clint_bus_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"io_clint_bus_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"mtime_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"mtime_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("axi_ifu_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_inst_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_inst_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_inst_req_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"io_inst_req_bits_burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_inst_resp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"io_inst_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_inst_resp_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"io_inst_resp_bits_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"killPending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"canIssueAr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_master_arvalid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"io_master_rready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"r_last_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("axi_mem_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1612,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+100,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1613,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1614,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_mem_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_mem_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"io_mem_req_bits_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"io_mem_req_bits_rsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+132,0,"io_mem_req_bits_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"io_mem_req_bits_rlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+134,0,"io_mem_req_bits_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"io_mem_req_bits_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+136,0,"io_mem_req_bits_wsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+137,0,"io_mem_req_bits_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"io_mem_req_bits_burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_mem_resp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_mem_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"io_mem_resp_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"io_mem_resp_bits_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"req_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"req_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"req_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"io_master_awvalid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"awFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"io_master_arvalid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1615,0,"arFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_master_rready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"io_master_wvalid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"io_master_bready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("bpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"io_pred_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"io_pred_next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+146,0,"io_update_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"io_update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"io_update_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"io_update_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_update_is_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"ghr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+152,0,"pred_pc_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"update_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"update_pc_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+155,0,"update_taken_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"update_target_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"update_ghr_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+158,0,"update_idx_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+159,0,"update_fire_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"update_idx_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+161,0,"update_btb_idx_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+162,0,"update_taken_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"update_target_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("btb_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+164,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1618,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+165,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+161,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+167,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+168,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("pht_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1618,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+158,0,"R1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+153,0,"R1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"R1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+160,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+159,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"io_csr_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+175,0,"io_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"io_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+177,0,"io_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"io_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"io_is_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"io_is_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("dcache1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"io_dcache_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"io_dcache_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"io_dcache_req_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"io_dcache_req_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"io_dcache_req_bits_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"io_dcache_req_bits_rsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+191,0,"io_dcache_req_bits_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"io_dcache_req_bits_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"io_dcache_req_bits_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"io_dcache_req_bits_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"io_dcache_req_bits_wsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+195,0,"io_dcache_req_bits_bypass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"io_dcache_resp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io_dcache_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"io_dcache_resp_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"io_dcache_resp_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"io_data_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_data_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"io_data_req_bits_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"io_data_req_bits_rsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+132,0,"io_data_req_bits_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"io_data_req_bits_rlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+134,0,"io_data_req_bits_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"io_data_req_bits_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+136,0,"io_data_req_bits_wsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+137,0,"io_data_req_bits_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+138,0,"io_data_req_bits_burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_data_resp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"io_data_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"io_data_resp_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"io_data_resp_bits_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"io_hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"io_data_resp_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_data_req_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"valid_array_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"valid_array_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"valid_array_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"valid_array_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"valid_array_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"valid_array_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"valid_array_0_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"valid_array_0_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"valid_array_0_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"valid_array_0_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"valid_array_0_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"valid_array_0_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"valid_array_0_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"valid_array_0_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"valid_array_0_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"valid_array_0_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"valid_array_0_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"valid_array_0_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"valid_array_0_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"valid_array_0_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"valid_array_0_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"valid_array_0_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"valid_array_0_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"valid_array_0_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"valid_array_0_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"valid_array_0_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"valid_array_0_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"valid_array_0_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"valid_array_0_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"valid_array_0_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"valid_array_0_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"valid_array_0_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"valid_array_0_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"valid_array_0_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"valid_array_0_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"valid_array_0_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"valid_array_0_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"valid_array_0_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"valid_array_0_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"valid_array_0_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"valid_array_0_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"valid_array_0_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"valid_array_0_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"valid_array_0_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"valid_array_0_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"valid_array_0_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"valid_array_0_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"valid_array_0_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"valid_array_0_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"valid_array_0_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"valid_array_0_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"valid_array_0_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"valid_array_0_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"valid_array_0_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"valid_array_0_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"valid_array_0_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"valid_array_0_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"valid_array_0_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"valid_array_0_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"valid_array_0_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"valid_array_0_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"valid_array_0_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"valid_array_0_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"valid_array_0_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"valid_array_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"valid_array_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"valid_array_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"valid_array_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"valid_array_1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"valid_array_1_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"valid_array_1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"valid_array_1_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"valid_array_1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"valid_array_1_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"valid_array_1_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"valid_array_1_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"valid_array_1_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"valid_array_1_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"valid_array_1_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"valid_array_1_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"valid_array_1_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"valid_array_1_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"valid_array_1_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"valid_array_1_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"valid_array_1_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"valid_array_1_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"valid_array_1_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"valid_array_1_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"valid_array_1_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"valid_array_1_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"valid_array_1_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"valid_array_1_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"valid_array_1_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"valid_array_1_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"valid_array_1_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"valid_array_1_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"valid_array_1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"valid_array_1_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"valid_array_1_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"valid_array_1_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"valid_array_1_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"valid_array_1_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"valid_array_1_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"valid_array_1_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"valid_array_1_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"valid_array_1_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"valid_array_1_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"valid_array_1_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"valid_array_1_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"valid_array_1_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"valid_array_1_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"valid_array_1_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"valid_array_1_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"valid_array_1_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"valid_array_1_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"valid_array_1_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"valid_array_1_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"valid_array_1_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"valid_array_1_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"valid_array_1_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"valid_array_1_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"valid_array_1_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"valid_array_1_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"valid_array_1_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"valid_array_1_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"valid_array_1_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"valid_array_1_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"valid_array_1_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"valid_array_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"valid_array_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"valid_array_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"valid_array_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"valid_array_2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"valid_array_2_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"valid_array_2_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"valid_array_2_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"valid_array_2_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"valid_array_2_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"valid_array_2_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"valid_array_2_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"valid_array_2_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"valid_array_2_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"valid_array_2_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"valid_array_2_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"valid_array_2_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"valid_array_2_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"valid_array_2_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"valid_array_2_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"valid_array_2_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"valid_array_2_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"valid_array_2_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"valid_array_2_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"valid_array_2_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"valid_array_2_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"valid_array_2_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"valid_array_2_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"valid_array_2_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"valid_array_2_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"valid_array_2_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"valid_array_2_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"valid_array_2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"valid_array_2_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"valid_array_2_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"valid_array_2_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"valid_array_2_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"valid_array_2_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"valid_array_2_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"valid_array_2_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"valid_array_2_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"valid_array_2_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"valid_array_2_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"valid_array_2_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"valid_array_2_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"valid_array_2_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"valid_array_2_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"valid_array_2_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"valid_array_2_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"valid_array_2_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"valid_array_2_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"valid_array_2_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"valid_array_2_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"valid_array_2_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"valid_array_2_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"valid_array_2_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"valid_array_2_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"valid_array_2_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"valid_array_2_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"valid_array_2_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"valid_array_2_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"valid_array_2_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"valid_array_2_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"valid_array_2_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"valid_array_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"valid_array_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"valid_array_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"valid_array_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"valid_array_3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"valid_array_3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"valid_array_3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"valid_array_3_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"valid_array_3_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"valid_array_3_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"valid_array_3_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"valid_array_3_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"valid_array_3_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"valid_array_3_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"valid_array_3_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"valid_array_3_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"valid_array_3_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"valid_array_3_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"valid_array_3_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"valid_array_3_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"valid_array_3_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"valid_array_3_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"valid_array_3_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"valid_array_3_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"valid_array_3_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"valid_array_3_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"valid_array_3_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"valid_array_3_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"valid_array_3_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"valid_array_3_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"valid_array_3_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"valid_array_3_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"valid_array_3_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"valid_array_3_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"valid_array_3_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"valid_array_3_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"valid_array_3_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"valid_array_3_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"valid_array_3_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"valid_array_3_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"valid_array_3_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"valid_array_3_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"valid_array_3_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"valid_array_3_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"valid_array_3_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"valid_array_3_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"valid_array_3_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"valid_array_3_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"valid_array_3_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"valid_array_3_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"valid_array_3_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"valid_array_3_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"valid_array_3_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"valid_array_3_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"valid_array_3_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"valid_array_3_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"valid_array_3_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"valid_array_3_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"valid_array_3_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"valid_array_3_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"valid_array_3_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"valid_array_3_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"valid_array_3_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"valid_array_3_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"dirty_array_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"dirty_array_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"dirty_array_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"dirty_array_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"dirty_array_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"dirty_array_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"dirty_array_0_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"dirty_array_0_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"dirty_array_0_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"dirty_array_0_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"dirty_array_0_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"dirty_array_0_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"dirty_array_0_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"dirty_array_0_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"dirty_array_0_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"dirty_array_0_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"dirty_array_0_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"dirty_array_0_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"dirty_array_0_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"dirty_array_0_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"dirty_array_0_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"dirty_array_0_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"dirty_array_0_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"dirty_array_0_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"dirty_array_0_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"dirty_array_0_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"dirty_array_0_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"dirty_array_0_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"dirty_array_0_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"dirty_array_0_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"dirty_array_0_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"dirty_array_0_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"dirty_array_0_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"dirty_array_0_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"dirty_array_0_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"dirty_array_0_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"dirty_array_0_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"dirty_array_0_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"dirty_array_0_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"dirty_array_0_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"dirty_array_0_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"dirty_array_0_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"dirty_array_0_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"dirty_array_0_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"dirty_array_0_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"dirty_array_0_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"dirty_array_0_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"dirty_array_0_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"dirty_array_0_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"dirty_array_0_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"dirty_array_0_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"dirty_array_0_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"dirty_array_0_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"dirty_array_0_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"dirty_array_0_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"dirty_array_0_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"dirty_array_0_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"dirty_array_0_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"dirty_array_0_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"dirty_array_0_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"dirty_array_0_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"dirty_array_0_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"dirty_array_0_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"dirty_array_0_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"dirty_array_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"dirty_array_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"dirty_array_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"dirty_array_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"dirty_array_1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"dirty_array_1_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"dirty_array_1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"dirty_array_1_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"dirty_array_1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"dirty_array_1_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"dirty_array_1_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"dirty_array_1_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"dirty_array_1_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"dirty_array_1_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"dirty_array_1_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"dirty_array_1_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"dirty_array_1_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"dirty_array_1_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"dirty_array_1_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"dirty_array_1_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"dirty_array_1_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"dirty_array_1_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"dirty_array_1_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"dirty_array_1_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"dirty_array_1_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"dirty_array_1_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"dirty_array_1_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"dirty_array_1_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"dirty_array_1_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"dirty_array_1_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"dirty_array_1_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"dirty_array_1_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"dirty_array_1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"dirty_array_1_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"dirty_array_1_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"dirty_array_1_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"dirty_array_1_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"dirty_array_1_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"dirty_array_1_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"dirty_array_1_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"dirty_array_1_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"dirty_array_1_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"dirty_array_1_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"dirty_array_1_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"dirty_array_1_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"dirty_array_1_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"dirty_array_1_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"dirty_array_1_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"dirty_array_1_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"dirty_array_1_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"dirty_array_1_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"dirty_array_1_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"dirty_array_1_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"dirty_array_1_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"dirty_array_1_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"dirty_array_1_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"dirty_array_1_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"dirty_array_1_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"dirty_array_1_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"dirty_array_1_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"dirty_array_1_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"dirty_array_1_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"dirty_array_1_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"dirty_array_1_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"dirty_array_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"dirty_array_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"dirty_array_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"dirty_array_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+588,0,"dirty_array_2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"dirty_array_2_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"dirty_array_2_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"dirty_array_2_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"dirty_array_2_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"dirty_array_2_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"dirty_array_2_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"dirty_array_2_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+596,0,"dirty_array_2_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"dirty_array_2_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"dirty_array_2_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"dirty_array_2_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"dirty_array_2_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"dirty_array_2_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"dirty_array_2_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"dirty_array_2_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"dirty_array_2_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"dirty_array_2_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"dirty_array_2_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"dirty_array_2_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"dirty_array_2_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"dirty_array_2_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"dirty_array_2_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"dirty_array_2_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"dirty_array_2_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"dirty_array_2_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"dirty_array_2_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"dirty_array_2_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"dirty_array_2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"dirty_array_2_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"dirty_array_2_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"dirty_array_2_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"dirty_array_2_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"dirty_array_2_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"dirty_array_2_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"dirty_array_2_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"dirty_array_2_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"dirty_array_2_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"dirty_array_2_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"dirty_array_2_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"dirty_array_2_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"dirty_array_2_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"dirty_array_2_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"dirty_array_2_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"dirty_array_2_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"dirty_array_2_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"dirty_array_2_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"dirty_array_2_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"dirty_array_2_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"dirty_array_2_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"dirty_array_2_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"dirty_array_2_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"dirty_array_2_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"dirty_array_2_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+642,0,"dirty_array_2_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"dirty_array_2_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+644,0,"dirty_array_2_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"dirty_array_2_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"dirty_array_2_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"dirty_array_2_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"dirty_array_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"dirty_array_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"dirty_array_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"dirty_array_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"dirty_array_3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"dirty_array_3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"dirty_array_3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"dirty_array_3_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+656,0,"dirty_array_3_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+657,0,"dirty_array_3_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"dirty_array_3_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"dirty_array_3_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"dirty_array_3_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"dirty_array_3_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"dirty_array_3_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"dirty_array_3_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+664,0,"dirty_array_3_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"dirty_array_3_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"dirty_array_3_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+667,0,"dirty_array_3_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"dirty_array_3_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+669,0,"dirty_array_3_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+670,0,"dirty_array_3_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"dirty_array_3_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"dirty_array_3_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+673,0,"dirty_array_3_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"dirty_array_3_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"dirty_array_3_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+676,0,"dirty_array_3_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+677,0,"dirty_array_3_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"dirty_array_3_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"dirty_array_3_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"dirty_array_3_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"dirty_array_3_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+682,0,"dirty_array_3_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"dirty_array_3_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"dirty_array_3_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"dirty_array_3_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"dirty_array_3_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"dirty_array_3_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"dirty_array_3_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"dirty_array_3_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"dirty_array_3_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"dirty_array_3_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"dirty_array_3_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"dirty_array_3_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"dirty_array_3_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"dirty_array_3_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"dirty_array_3_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"dirty_array_3_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"dirty_array_3_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"dirty_array_3_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"dirty_array_3_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+701,0,"dirty_array_3_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"dirty_array_3_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"dirty_array_3_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"dirty_array_3_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"dirty_array_3_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"dirty_array_3_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"dirty_array_3_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"dirty_array_3_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,0,"dirty_array_3_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"dirty_array_3_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"dirty_array_3_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+712,0,"tag_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+713,0,"index_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+714,0,"offset_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+715,0,"line_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+716,0,"req_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"miss_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+718,0,"miss_cacheable_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+719,0,"bypass_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"bypass_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+721,0,"resp_is_bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+722,0,"resp_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+723,0,"wen_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+724,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+725,0,"wmask_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+726,0,"wsize_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+727,0,"wb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+728,0,"rsize_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+729,0,"req_pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,0,"req_inst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+731,0,"rand_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+732,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+733,0,"refill_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+734,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"hit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"miss_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+735,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+737,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"hit0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"hit1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"casez_tmp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+742,0,"hit2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,0,"casez_tmp_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+744,0,"hit3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+745,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+746,0,"byteMask32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+747,0,"allocWay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+748,0,"casez_tmp_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"casez_tmp_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"casez_tmp_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"casez_tmp_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"casez_tmp_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"casez_tmp_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"casez_tmp_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"casez_tmp_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"casez_tmp_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+757,0,"casez_tmp_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+758,0,"casez_tmp_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"casez_tmp_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"casez_tmp_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"casez_tmp_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"casez_tmp_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"casez_tmp_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"casez_tmp_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"casez_tmp_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"casez_tmp_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"casez_tmp_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"casez_tmp_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+769,0,"casez_tmp_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"casez_tmp_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"casez_tmp_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"casez_tmp_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"casez_tmp_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+774,0,"casez_tmp_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+775,0,"casez_tmp_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+776,0,"casez_tmp_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"casez_tmp_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+778,0,"casez_tmp_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"casez_tmp_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"casez_tmp_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+781,0,"casez_tmp_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"casez_tmp_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+783,0,"casez_tmp_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"casez_tmp_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"casez_tmp_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"casez_tmp_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"casez_tmp_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"casez_tmp_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"casez_tmp_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"casez_tmp_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"casez_tmp_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"casez_tmp_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"casez_tmp_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"casez_tmp_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"casez_tmp_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"casez_tmp_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"casez_tmp_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+798,0,"casez_tmp_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"casez_tmp_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"casez_tmp_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"casez_tmp_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"casez_tmp_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"casez_tmp_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"casez_tmp_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"casez_tmp_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"casez_tmp_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"casez_tmp_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"casez_tmp_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"casez_tmp_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"casez_tmp_65",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"casez_tmp_66",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"casez_tmp_67",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"casez_tmp_68",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+814,0,"casez_tmp_69",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+815,0,"casez_tmp_70",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"casez_tmp_71",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"casez_tmp_72",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"casez_tmp_73",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"casez_tmp_74",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"casez_tmp_75",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+821,0,"casez_tmp_76",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+822,0,"casez_tmp_77",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+823,0,"casez_tmp_78",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"casez_tmp_79",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"casez_tmp_80",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"casez_tmp_81",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+827,0,"casez_tmp_82",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+828,0,"casez_tmp_83",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+829,0,"casez_tmp_84",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+830,0,"casez_tmp_85",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"casez_tmp_86",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"casez_tmp_87",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"casez_tmp_88",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"casez_tmp_89",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"casez_tmp_90",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+836,0,"casez_tmp_91",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+837,0,"casez_tmp_92",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"casez_tmp_93",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"casez_tmp_94",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"casez_tmp_95",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"casez_tmp_96",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"casez_tmp_97",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"casez_tmp_98",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"casez_tmp_99",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"casez_tmp_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"casez_tmp_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"casez_tmp_102",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"casez_tmp_103",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"casez_tmp_104",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"casez_tmp_105",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"casez_tmp_106",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"casez_tmp_107",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"casez_tmp_108",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"casez_tmp_109",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+855,0,"casez_tmp_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"casez_tmp_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"casez_tmp_112",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"casez_tmp_113",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"casez_tmp_114",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"casez_tmp_115",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"casez_tmp_116",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"casez_tmp_117",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"casez_tmp_118",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"casez_tmp_119",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+865,0,"casez_tmp_120",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"casez_tmp_121",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"casez_tmp_122",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"casez_tmp_123",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"casez_tmp_124",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"casez_tmp_125",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"casez_tmp_126",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"casez_tmp_127",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"casez_tmp_128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"casez_tmp_129",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"casez_tmp_130",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"casez_tmp_131",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"casez_tmp_132",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+878,0,"casez_tmp_133",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+879,0,"isTargetWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+746,0,"byteMask32_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"mergedWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"lineWordData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"io_dcache_resp_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"io_data_req_bits_wsize_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+134,0,"io_data_req_bits_wdata_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"io_data_req_bits_wmask_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+137,0,"io_data_req_bits_waddr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("data_array_0_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+736,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+735,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+880,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+881,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+28,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"W1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+883,0,"W1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+884,0,"W1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_array_1_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+736,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+735,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+885,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+881,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+29,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"W1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+886,0,"W1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"W1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_array_2_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+736,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+735,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+888,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+881,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+30,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"W1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+889,0,"W1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"W1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_array_3_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+736,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+735,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+891,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+881,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+31,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"W1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+892,0,"W1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"W1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("lfsr_prng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"io_out_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"io_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"io_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"io_out_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"io_out_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"io_out_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"io_out_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"io_out_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"state_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"state_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"state_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"state_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"state_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"state_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"state_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"state_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tag_array_0_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+713,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+902,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+903,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+713,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+32,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+712,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("tag_array_1_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+713,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+902,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+904,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+713,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+33,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+712,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("tag_array_2_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+713,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+902,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+905,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+713,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+34,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+712,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("tag_array_3_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+713,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+902,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+906,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+713,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+35,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+712,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+909,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+911,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+912,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+913,0,"io_in_bits_alu_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,0,"io_in_bits_alu_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"io_in_bits_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+916,0,"io_in_bits_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,0,"io_in_bits_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+919,0,"io_in_bits_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+920,0,"io_in_bits_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+175,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+921,0,"io_in_bits_is_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"io_in_bits_is_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+924,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"io_in_bits_is_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"io_in_bits_is_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"io_in_bits_is_lb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"io_in_bits_is_sb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"io_in_bits_is_lh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"io_in_bits_is_sh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"io_in_bits_is_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"io_in_bits_is_lhu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"io_in_bits_is_beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"io_in_bits_is_bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"io_in_bits_is_blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_in_bits_is_bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"io_in_bits_is_bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"io_in_bits_is_bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"io_in_bits_is_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"io_in_bits_is_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"io_out_bits_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"io_out_bits_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+944,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+945,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+946,0,"io_out_bits_load_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+947,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+948,0,"io_out_bits_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+949,0,"io_out_bits_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+950,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+951,0,"io_out_bits_is_csrrw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"io_out_bits_is_csrrs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+953,0,"io_out_bits_is_lw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+954,0,"io_out_bits_is_lbu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"io_out_bits_is_lh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"io_out_bits_is_lhu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"io_out_bits_is_lb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"io_out_bits_is_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"io_out_bits_is_sb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"io_out_bits_is_sh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+961,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"io_out_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+963,0,"io_branch_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"io_branch_bits_pc_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"io_branch_bits_pc_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+964,0,"io_branch_bits_pc_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+965,0,"io_branch_bits_is_branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"io_branch_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+961,0,"io_branch_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+966,0,"io_branch_bits_is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+967,0,"io_branch_bits_is_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+950,0,"io_branch_bits_pc_csr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+968,0,"io_branch_bits_is_redirect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+969,0,"io_branch_bits_redirect_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+970,0,"io_exu_fwd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+971,0,"io_exu_fwd_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+972,0,"io_exu_fwd_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"io_exu_fwd_rd_is_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+974,0,"io_exu_fwd_val_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"io_load_tag_alloc_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+944,0,"io_load_tag_alloc_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+976,0,"io_load_tag_alloc_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+146,0,"io_bpu_update_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"io_bpu_update_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"io_bpu_update_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"io_bpu_update_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"io_bpu_update_is_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"io_bp_total_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"io_bp_hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+940,0,"io_out_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+979,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+982,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+950,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+944,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+945,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+947,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+948,0,"csr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+949,0,"csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+951,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+953,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+954,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+961,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+966,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+967,0,"is_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+984,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+985,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+986,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+987,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+989,0,"fwd_hold_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+990,0,"fwd_hold_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+991,0,"fwd_hold_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"fwd_hold_rd_is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+993,0,"fwd_hold_val_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+976,0,"nextLoadTag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+969,0,"expected_next_pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+994,0,"first_inst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+995,0,"bp_expect_valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"bp_total_count_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"bp_hit_count_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+968,0,"redirect_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"is_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+996,0,"exu_fwd_live_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"io_load_tag_alloc_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+997,0,"bp_check_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"hold_capture",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+979,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+942,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("hazard_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+970,0,"io_exu_fwd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+971,0,"io_exu_fwd_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+972,0,"io_exu_fwd_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"io_exu_fwd_rd_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+974,0,"io_exu_fwd_val_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"io_mem1_fwd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1000,0,"io_mem1_fwd_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1001,0,"io_mem1_fwd_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1002,0,"io_mem1_fwd_val_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1003,0,"io_mem2_fwd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1004,0,"io_mem2_fwd_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1005,0,"io_mem2_fwd_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"io_mem2_fwd_rd_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"io_mem2_fwd_val_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1008,0,"io_wb_fwd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1009,0,"io_wb_fwd_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1008,0,"io_wb_fwd_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1010,0,"io_wb_fwd_val_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+975,0,"io_load_tag_alloc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+944,0,"io_load_tag_alloc_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+976,0,"io_load_tag_alloc_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1011,0,"io_load_tag_commit_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1004,0,"io_load_tag_commit_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1012,0,"io_load_tag_commit_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1013,0,"io_id_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1014,0,"io_id_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1015,0,"io_use_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"io_use_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"io_id_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"io_fs1_fwd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"io_fs1_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1020,0,"io_fs2_fwd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1021,0,"io_fs2_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1022,0,"io_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1023,0,"pendingValid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"pendingValid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1025,0,"pendingValid_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"pendingValid_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"pendingValid_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1028,0,"pendingValid_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1029,0,"pendingValid_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1030,0,"pendingValid_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1031,0,"pendingValid_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"pendingValid_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1033,0,"pendingValid_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1034,0,"pendingValid_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1035,0,"pendingValid_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1036,0,"pendingValid_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1037,0,"pendingValid_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1038,0,"pendingValid_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1039,0,"pendingValid_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1040,0,"pendingValid_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1041,0,"pendingValid_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1042,0,"pendingValid_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1043,0,"pendingValid_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1044,0,"pendingValid_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"pendingValid_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1046,0,"pendingValid_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1047,0,"pendingValid_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1048,0,"pendingValid_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1049,0,"pendingValid_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1050,0,"pendingValid_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1051,0,"pendingValid_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1052,0,"pendingValid_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1053,0,"pendingValid_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1054,0,"pendingValid_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1055,0,"pendingTag_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1056,0,"pendingTag_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1057,0,"pendingTag_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1058,0,"pendingTag_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1059,0,"pendingTag_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1060,0,"pendingTag_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1061,0,"pendingTag_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1062,0,"pendingTag_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1063,0,"pendingTag_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1064,0,"pendingTag_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1065,0,"pendingTag_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1066,0,"pendingTag_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1067,0,"pendingTag_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1068,0,"pendingTag_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1069,0,"pendingTag_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1070,0,"pendingTag_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1071,0,"pendingTag_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1072,0,"pendingTag_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1073,0,"pendingTag_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1074,0,"pendingTag_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1075,0,"pendingTag_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1076,0,"pendingTag_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1077,0,"pendingTag_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1078,0,"pendingTag_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1079,0,"pendingTag_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1080,0,"pendingTag_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1081,0,"pendingTag_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1082,0,"pendingTag_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1083,0,"pendingTag_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1084,0,"pendingTag_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1085,0,"pendingTag_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1086,0,"pendingTag_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1087,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1088,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1089,0,"rs1_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1090,0,"rs2_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1091,0,"exuHasRd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"mem1HasRd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1093,0,"mem2HasRd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1094,0,"wbHasRd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1095,0,"rs1_exu_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"rs1_mem1_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1097,0,"rs1_mem2_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1098,0,"rs1_wb_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"rs1_exu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1100,0,"rs2_exu_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1101,0,"rs2_mem1_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1102,0,"rs2_mem2_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1103,0,"rs2_wb_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"rs2_exu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1105,0,"casez_tmp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1106,0,"casez_tmp_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("icache1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1107,0,"io_fetch_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"io_fetch_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1109,0,"io_fetch_req_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1110,0,"io_fetch_resp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1111,0,"io_fetch_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1112,0,"io_fetch_resp_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1113,0,"io_fetch_resp_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"io_inst_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_inst_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_inst_req_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"io_inst_req_bits_burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_inst_resp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"io_inst_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_inst_resp_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"io_inst_resp_bits_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"io_hit_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"io_miss_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1114,0,"valid_array_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1115,0,"valid_array_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1116,0,"valid_array_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1117,0,"valid_array_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1118,0,"valid_array_0_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1119,0,"valid_array_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1120,0,"valid_array_0_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1121,0,"valid_array_0_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1122,0,"valid_array_0_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1123,0,"valid_array_0_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1124,0,"valid_array_0_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1125,0,"valid_array_0_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"valid_array_0_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1127,0,"valid_array_0_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1128,0,"valid_array_0_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1129,0,"valid_array_0_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1130,0,"valid_array_0_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1131,0,"valid_array_0_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1132,0,"valid_array_0_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1133,0,"valid_array_0_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1134,0,"valid_array_0_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"valid_array_0_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"valid_array_0_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1137,0,"valid_array_0_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1138,0,"valid_array_0_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1139,0,"valid_array_0_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1140,0,"valid_array_0_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1141,0,"valid_array_0_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1142,0,"valid_array_0_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1143,0,"valid_array_0_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"valid_array_0_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1145,0,"valid_array_0_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1146,0,"valid_array_0_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1147,0,"valid_array_0_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1148,0,"valid_array_0_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"valid_array_0_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"valid_array_0_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"valid_array_0_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"valid_array_0_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"valid_array_0_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"valid_array_0_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"valid_array_0_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"valid_array_0_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"valid_array_0_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1158,0,"valid_array_0_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"valid_array_0_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1160,0,"valid_array_0_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"valid_array_0_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"valid_array_0_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"valid_array_0_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1164,0,"valid_array_0_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"valid_array_0_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"valid_array_0_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1167,0,"valid_array_0_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1168,0,"valid_array_0_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"valid_array_0_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1170,0,"valid_array_0_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1171,0,"valid_array_0_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1172,0,"valid_array_0_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1173,0,"valid_array_0_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1174,0,"valid_array_0_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1175,0,"valid_array_0_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1176,0,"valid_array_0_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1177,0,"valid_array_0_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1178,0,"valid_array_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1179,0,"valid_array_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1180,0,"valid_array_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1181,0,"valid_array_1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1182,0,"valid_array_1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1183,0,"valid_array_1_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"valid_array_1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1185,0,"valid_array_1_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1186,0,"valid_array_1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1187,0,"valid_array_1_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1188,0,"valid_array_1_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1189,0,"valid_array_1_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1190,0,"valid_array_1_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"valid_array_1_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1192,0,"valid_array_1_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"valid_array_1_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"valid_array_1_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1195,0,"valid_array_1_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1196,0,"valid_array_1_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"valid_array_1_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"valid_array_1_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1199,0,"valid_array_1_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1200,0,"valid_array_1_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1201,0,"valid_array_1_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1202,0,"valid_array_1_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1203,0,"valid_array_1_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1204,0,"valid_array_1_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"valid_array_1_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1206,0,"valid_array_1_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1207,0,"valid_array_1_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1208,0,"valid_array_1_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1209,0,"valid_array_1_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"valid_array_1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"valid_array_1_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"valid_array_1_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1213,0,"valid_array_1_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1214,0,"valid_array_1_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1215,0,"valid_array_1_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1216,0,"valid_array_1_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1217,0,"valid_array_1_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1218,0,"valid_array_1_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"valid_array_1_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1220,0,"valid_array_1_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1221,0,"valid_array_1_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1222,0,"valid_array_1_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1223,0,"valid_array_1_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1224,0,"valid_array_1_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1225,0,"valid_array_1_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1226,0,"valid_array_1_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1227,0,"valid_array_1_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1228,0,"valid_array_1_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1229,0,"valid_array_1_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1230,0,"valid_array_1_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1231,0,"valid_array_1_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1232,0,"valid_array_1_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"valid_array_1_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1234,0,"valid_array_1_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"valid_array_1_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1236,0,"valid_array_1_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1237,0,"valid_array_1_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1238,0,"valid_array_1_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1239,0,"valid_array_1_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1240,0,"valid_array_1_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1241,0,"valid_array_1_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1242,0,"valid_array_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"valid_array_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1244,0,"valid_array_2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1245,0,"valid_array_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1246,0,"valid_array_2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1247,0,"valid_array_2_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1248,0,"valid_array_2_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1249,0,"valid_array_2_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1250,0,"valid_array_2_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1251,0,"valid_array_2_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1252,0,"valid_array_2_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"valid_array_2_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1254,0,"valid_array_2_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"valid_array_2_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1256,0,"valid_array_2_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1257,0,"valid_array_2_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1258,0,"valid_array_2_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1259,0,"valid_array_2_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1260,0,"valid_array_2_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1261,0,"valid_array_2_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1262,0,"valid_array_2_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1263,0,"valid_array_2_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"valid_array_2_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1265,0,"valid_array_2_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"valid_array_2_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"valid_array_2_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1268,0,"valid_array_2_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1269,0,"valid_array_2_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1270,0,"valid_array_2_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1271,0,"valid_array_2_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1272,0,"valid_array_2_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1273,0,"valid_array_2_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1274,0,"valid_array_2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1275,0,"valid_array_2_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1276,0,"valid_array_2_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1277,0,"valid_array_2_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1278,0,"valid_array_2_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1279,0,"valid_array_2_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1280,0,"valid_array_2_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1281,0,"valid_array_2_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1282,0,"valid_array_2_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1283,0,"valid_array_2_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1284,0,"valid_array_2_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1285,0,"valid_array_2_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1286,0,"valid_array_2_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1287,0,"valid_array_2_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1288,0,"valid_array_2_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1289,0,"valid_array_2_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1290,0,"valid_array_2_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1291,0,"valid_array_2_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1292,0,"valid_array_2_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1293,0,"valid_array_2_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1294,0,"valid_array_2_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1295,0,"valid_array_2_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1296,0,"valid_array_2_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1297,0,"valid_array_2_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1298,0,"valid_array_2_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"valid_array_2_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1300,0,"valid_array_2_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1301,0,"valid_array_2_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1302,0,"valid_array_2_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1303,0,"valid_array_2_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1304,0,"valid_array_2_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1305,0,"valid_array_2_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1306,0,"valid_array_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1307,0,"valid_array_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"valid_array_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1309,0,"valid_array_3_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"valid_array_3_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"valid_array_3_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1312,0,"valid_array_3_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1313,0,"valid_array_3_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"valid_array_3_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1315,0,"valid_array_3_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1316,0,"valid_array_3_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1317,0,"valid_array_3_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1318,0,"valid_array_3_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1319,0,"valid_array_3_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1320,0,"valid_array_3_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1321,0,"valid_array_3_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1322,0,"valid_array_3_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1323,0,"valid_array_3_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"valid_array_3_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1325,0,"valid_array_3_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"valid_array_3_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"valid_array_3_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1328,0,"valid_array_3_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1329,0,"valid_array_3_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1330,0,"valid_array_3_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"valid_array_3_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1332,0,"valid_array_3_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1333,0,"valid_array_3_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"valid_array_3_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1335,0,"valid_array_3_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1336,0,"valid_array_3_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1337,0,"valid_array_3_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"valid_array_3_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"valid_array_3_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"valid_array_3_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1341,0,"valid_array_3_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1342,0,"valid_array_3_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1343,0,"valid_array_3_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1344,0,"valid_array_3_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"valid_array_3_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1346,0,"valid_array_3_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1347,0,"valid_array_3_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"valid_array_3_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1349,0,"valid_array_3_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1350,0,"valid_array_3_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1351,0,"valid_array_3_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1352,0,"valid_array_3_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1353,0,"valid_array_3_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1354,0,"valid_array_3_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1355,0,"valid_array_3_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1356,0,"valid_array_3_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1357,0,"valid_array_3_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1358,0,"valid_array_3_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1359,0,"valid_array_3_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1360,0,"valid_array_3_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1361,0,"valid_array_3_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1362,0,"valid_array_3_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1363,0,"valid_array_3_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1364,0,"valid_array_3_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1365,0,"valid_array_3_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1366,0,"valid_array_3_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1367,0,"valid_array_3_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1368,0,"valid_array_3_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1369,0,"valid_array_3_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1370,0,"tag_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1371,0,"index_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1372,0,"offset_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1373,0,"lk_tag_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1374,0,"lk_index_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1375,0,"lk_offset_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1376,0,"lk_pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1377,0,"rd_tags_reg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1378,0,"rd_tags_reg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1379,0,"rd_tags_reg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1380,0,"rd_tags_reg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1381,0,"rd_words_reg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1382,0,"rd_words_reg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1383,0,"rd_words_reg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1384,0,"rd_words_reg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1385,0,"line_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1386,0,"miss_pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1387,0,"miss_cacheable_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"resp_inst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1389,0,"resp_pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1390,0,"victim_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1391,0,"refill_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1392,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"hit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"miss_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1393,0,"lookup_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1394,0,"lookup_word_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1107,0,"io_fetch_req_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1395,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1396,0,"hit0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1397,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1398,0,"hit1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1399,0,"casez_tmp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1400,0,"hit2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1401,0,"casez_tmp_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1402,0,"hit3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1403,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_inst_req_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_inst_resp_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"casez_tmp_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1111,0,"io_fetch_resp_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"casez_tmp_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1404,0,"rand_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("data_array_0_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1394,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1393,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1405,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1406,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+38,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_array_1_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1394,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1393,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1407,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1406,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+39,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_array_2_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1394,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1393,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1408,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1406,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+40,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("data_array_3_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1394,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1393,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1409,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1406,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+41,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("lfsr_prng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1410,0,"io_out_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1411,0,"io_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1412,0,"io_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1413,0,"io_out_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1414,0,"io_out_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1415,0,"io_out_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1416,0,"io_out_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1417,0,"io_out_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1410,0,"state_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1411,0,"state_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1412,0,"state_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1413,0,"state_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1414,0,"state_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1415,0,"state_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1416,0,"state_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1417,0,"state_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tag_array_0_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1393,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1418,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1371,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+42,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1370,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("tag_array_1_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1393,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1419,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1371,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+43,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1370,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("tag_array_2_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1393,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1420,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1371,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+44,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1370,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("tag_array_3_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1371,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1393,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1421,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1371,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+45,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1512,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1370,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1422,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1423,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1113,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1112,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+907,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+909,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+911,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+912,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+913,0,"io_out_bits_alu_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,0,"io_out_bits_alu_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"io_out_bits_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+916,0,"io_out_bits_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,0,"io_out_bits_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+919,0,"io_out_bits_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+920,0,"io_out_bits_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+175,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+921,0,"io_out_bits_is_csrrw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"io_out_bits_is_csrrs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"io_out_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+924,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"io_out_bits_is_lw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"io_out_bits_is_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"io_out_bits_is_lb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"io_out_bits_is_sb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"io_out_bits_is_lh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"io_out_bits_is_sh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"io_out_bits_is_lbu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"io_out_bits_is_lhu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"io_out_bits_is_beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"io_out_bits_is_bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"io_out_bits_is_blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"io_out_bits_is_bltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"io_out_bits_is_bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"io_out_bits_is_bgeu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"io_out_bits_is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"io_out_bits_is_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1424,0,"io_reg_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1425,0,"io_reg_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1426,0,"io_reg_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1427,0,"io_reg_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"io_csr_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+175,0,"io_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+179,0,"io_is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"io_is_mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"io_fwd_rs1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1020,0,"io_fwd_rs2_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"io_fwd_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"io_fwd_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1013,0,"io_id_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1014,0,"io_id_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1015,0,"io_use_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"io_use_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"io_id_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1422,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"io_out_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+910,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+909,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1428,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1429,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1430,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1431,0,"is_op_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1432,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1435,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+924,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1436,0,"is_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1437,0,"is_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1438,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"is_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1439,0,"is_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+916,0,"rs1_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,0,"rs2_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ifu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1440,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1441,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1109,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+963,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"io_in_bits_pc_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"io_in_bits_pc_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+964,0,"io_in_bits_pc_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+965,0,"io_in_bits_is_branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+961,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+966,0,"io_in_bits_is_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+967,0,"io_in_bits_is_mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+950,0,"io_in_bits_pc_csr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+968,0,"io_in_bits_is_redirect",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+969,0,"io_in_bits_redirect_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1107,0,"io_inst_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"io_inst_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1109,0,"io_inst_req_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"io_bpu_pred_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"io_bpu_pred_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1109,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1442,0,"req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1441,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1443,0,"pred_next_pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1444,0,"wait_pred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1445,0,"pred_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1446,0,"redirect_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"io_inst_req_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_flush_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ifu2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1440,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1441,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1109,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1422,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1423,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1113,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1112,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1110,0,"io_inst_resp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1111,0,"io_inst_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1112,0,"io_inst_resp_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1113,0,"io_inst_resp_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"io_i_cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1447,0,"waiting",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1448,0,"wait_pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"i_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1440,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1110,0,"io_inst_resp_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mem1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"io_in_bits_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"io_in_bits_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+944,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+945,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+946,0,"io_in_bits_load_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+947,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+948,0,"io_in_bits_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+949,0,"io_in_bits_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+950,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+951,0,"io_in_bits_is_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"io_in_bits_is_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+953,0,"io_in_bits_is_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+954,0,"io_in_bits_is_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"io_in_bits_is_lh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"io_in_bits_is_lhu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"io_in_bits_is_lb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"io_in_bits_is_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"io_in_bits_is_sb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"io_in_bits_is_sh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+961,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1449,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1450,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"io_out_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1000,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1451,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1452,0,"io_out_bits_load_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1453,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1454,0,"io_out_bits_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1455,0,"io_out_bits_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1456,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1457,0,"io_out_bits_is_csrrw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1458,0,"io_out_bits_is_csrrs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1459,0,"io_out_bits_is_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1460,0,"io_out_bits_is_store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1461,0,"io_out_bits_is_lb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1462,0,"io_out_bits_is_lbu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1463,0,"io_out_bits_is_lh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1464,0,"io_out_bits_is_lhu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1465,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1466,0,"io_out_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+999,0,"io_mem1_fwd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1000,0,"io_mem1_fwd_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1001,0,"io_mem1_fwd_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1002,0,"io_mem1_fwd_val_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"io_mem_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"io_mem_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"io_mem_req_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"io_mem_req_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+189,0,"io_mem_req_bits_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"io_mem_req_bits_rsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+191,0,"io_mem_req_bits_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"io_mem_req_bits_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"io_mem_req_bits_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"io_mem_req_bits_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"io_mem_req_bits_wsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+195,0,"io_mem_req_bits_bypass",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1467,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1000,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1451,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1452,0,"load_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1453,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1454,0,"csr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1455,0,"csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1456,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1457,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1458,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1462,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1463,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1464,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1461,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1468,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1469,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1470,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1465,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1466,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1459,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1460,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1471,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+939,0,"in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1472,0,"req_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1473,0,"out_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"io_mem_req_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1450,0,"io_out_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"io_mem1_fwd_rd_en_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mem2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1449,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1450,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"io_in_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1000,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1451,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1452,0,"io_in_bits_load_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1453,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1454,0,"io_in_bits_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1455,0,"io_in_bits_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1456,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1457,0,"io_in_bits_is_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1458,0,"io_in_bits_is_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1459,0,"io_in_bits_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1460,0,"io_in_bits_is_store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1461,0,"io_in_bits_is_lb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1462,0,"io_in_bits_is_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1463,0,"io_in_bits_is_lh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1464,0,"io_in_bits_is_lhu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1465,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1466,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1475,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1476,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1477,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,0,"io_out_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1005,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1479,0,"io_out_bits_mem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1006,0,"io_out_bits_is_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1480,0,"io_out_bits_is_store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1481,0,"io_out_bits_is_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1482,0,"io_out_bits_is_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1483,0,"io_out_bits_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1484,0,"io_out_bits_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1485,0,"io_out_bits_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1486,0,"io_out_bits_csr_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1487,0,"io_out_bits_is_csrrw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1488,0,"io_out_bits_is_csrrs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"io_mem_resp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io_mem_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"io_mem_resp_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"io_mem_resp_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1003,0,"io_mem2_fwd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1004,0,"io_mem2_fwd_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1005,0,"io_mem2_fwd_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"io_mem2_fwd_rd_is_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"io_mem2_fwd_val_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1011,0,"io_load_tag_commit_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1004,0,"io_load_tag_commit_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1012,0,"io_load_tag_commit_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+85,0,"io_d_cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"total_mem_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1489,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1476,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1477,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1005,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"load_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1006,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1480,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1490,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1491,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1492,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1493,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1481,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1482,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1483,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1484,0,"csr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1485,0,"csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1486,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1487,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1488,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1479,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1449,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"io_mem_resp_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1494,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1475,0,"io_out_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1495,0,"halfData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1424,0,"io_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1425,0,"io_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1496,0,"io_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1497,0,"io_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1498,0,"io_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1426,0,"io_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1427,0,"io_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"io_regs_out_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_regs_out_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"io_regs_out_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"io_regs_out_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"io_regs_out_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"io_regs_out_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"io_regs_out_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"io_regs_out_8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"io_regs_out_9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"io_regs_out_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"io_regs_out_11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"io_regs_out_12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"io_regs_out_13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"io_regs_out_14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_regs_out_15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_regs_out_16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_regs_out_17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"io_regs_out_18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"io_regs_out_19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"io_regs_out_20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"io_regs_out_21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"io_regs_out_22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"io_regs_out_23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"io_regs_out_24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"io_regs_out_25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"io_regs_out_26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"io_regs_out_27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"io_regs_out_28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"io_regs_out_29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"io_regs_out_30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"io_regs_out_31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1499,0,"regs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"regs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"regs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"regs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"regs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"regs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"regs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"regs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"regs_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"regs_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"regs_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"regs_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"regs_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"regs_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"regs_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"regs_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"regs_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"regs_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"regs_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"regs_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"regs_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"regs_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"regs_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"regs_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"regs_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"regs_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"regs_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"regs_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"regs_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"regs_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"regs_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"regs_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1500,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1501,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1512,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1513,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1474,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1475,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1476,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1477,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,0,"io_in_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1005,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1479,0,"io_in_bits_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1006,0,"io_in_bits_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1480,0,"io_in_bits_is_store",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1481,0,"io_in_bits_is_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1482,0,"io_in_bits_is_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1483,0,"io_in_bits_csr_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1484,0,"io_in_bits_csr_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1485,0,"io_in_bits_csr_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1486,0,"io_in_bits_csr_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1487,0,"io_in_bits_is_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1488,0,"io_in_bits_is_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1496,0,"io_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1497,0,"io_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1498,0,"io_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"io_csr_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+177,0,"io_csr_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"io_csr_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_commit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"io_commit_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_commit_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1516,0,"io_commit_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1008,0,"io_wb_fwd_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1009,0,"io_wb_fwd_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1008,0,"io_wb_fwd_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1010,0,"io_wb_fwd_val_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1502,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1496,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1498,0,"rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1503,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1504,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1505,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1506,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1507,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"csr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"csr_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1508,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1509,0,"is_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1510,0,"is_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1497,0,"wb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1511,0,"dbgFollowCnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1008,0,"wbFwdActive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1616,(0U));
    bufp->fullIData(oldp+1617,(0U),32);
    bufp->fullBit(oldp+1618,(1U));
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready));
    bufp->fullBit(oldp+2,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid));
    bufp->fullBit(oldp+3,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_rready));
    bufp->fullBit(oldp+4,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid));
    bufp->fullIData(oldp+5,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rdata),32);
    bufp->fullBit(oldp+6,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rlast));
    bufp->fullBit(oldp+7,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready));
    bufp->fullBit(oldp+8,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid));
    bufp->fullBit(oldp+9,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid));
    bufp->fullBit(oldp+10,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast));
    bufp->fullBit(oldp+11,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_arvalid));
    bufp->fullIData(oldp+12,(((1U & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_2)) 
                                     | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_4)))
                               ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr)),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__rdAddr),32);
    bufp->fullBit(oldp+14,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead));
    bufp->fullBit(oldp+15,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_rready_0));
    bufp->fullBit(oldp+16,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_arready) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr))));
    bufp->fullBit(oldp+17,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending)) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_ifu_master_rvalid))));
    bufp->fullBit(oldp+18,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__ar_fire));
    bufp->fullBit(oldp+19,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__r_last_fire));
    bufp->fullBit(oldp+20,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                            & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                                : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)))));
    bufp->fullBit(oldp+21,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                            & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid)
                                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_5) 
                                   & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid))))));
    bufp->fullIData(oldp+22,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_data),32);
    bufp->fullBit(oldp+23,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_mem_resp_bits_last));
    bufp->fullBit(oldp+24,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire));
    bufp->fullCData(oldp+25,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                               ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_0)
                                   ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__awFire)
                                       ? (2U | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0) 
                                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready)))
                                       : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                   : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_3)
                                       ? 1U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)))
                               : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                   ? ((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rvalid) 
                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0)) 
                                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_rlast))
                                       ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                   : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                       ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0) 
                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_wready))
                                           ? 3U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state))
                                       : ((((3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)) 
                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_mem_master_bvalid)) 
                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0))
                                           ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state)))))),2);
    bufp->fullIData(oldp+26,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__mergedWord),32);
    bufp->fullIData(oldp+27,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lineWordData),32);
    bufp->fullBit(oldp+28,(((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16))));
    bufp->fullBit(oldp+29,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
                            & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
                            & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
    bufp->fullBit(oldp+31,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_16) 
                            & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
    bufp->fullBit(oldp+32,(((~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))) 
                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17))));
    bufp->fullBit(oldp+33,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
                            & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
    bufp->fullBit(oldp+34,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
                            & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
    bufp->fullBit(oldp+35,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_17) 
                            & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way)))));
    bufp->fullCData(oldp+36,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_3),3);
    bufp->fullCData(oldp+37,(((4U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                               ? ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                   ? (((6U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)) 
                                       & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_inst_resp_ready_0) 
                                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid)))
                                       ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                   : ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                       ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_11) 
                                           & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_21))
                                           ? 6U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                       : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_25)
                                           ? 5U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))))
                               : ((2U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                   ? ((1U & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                       ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit)
                                           ? 6U : (4U 
                                                   | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_25)))
                                       : 3U) : ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))
                                                 ? 2U
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT___GEN_0)
                                                  ? 1U
                                                  : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state)))))),3);
    bufp->fullBit(oldp+38,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
                            & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    bufp->fullBit(oldp+39,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
                            & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    bufp->fullBit(oldp+40,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
                            & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    bufp->fullBit(oldp+41,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_3) 
                            & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
                            & (0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    bufp->fullBit(oldp+43,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
                            & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    bufp->fullBit(oldp+44,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
                            & (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    bufp->fullBit(oldp+45,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT____VdfgRegularize_haa51248d_0_5) 
                            & (3U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way)))));
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__pc),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__inst),32);
    bufp->fullBit(oldp+48,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state));
    bufp->fullIData(oldp+49,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_1),32);
    bufp->fullIData(oldp+50,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_2),32);
    bufp->fullIData(oldp+51,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_3),32);
    bufp->fullIData(oldp+52,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_4),32);
    bufp->fullIData(oldp+53,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_5),32);
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_6),32);
    bufp->fullIData(oldp+55,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_7),32);
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_8),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_9),32);
    bufp->fullIData(oldp+58,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_10),32);
    bufp->fullIData(oldp+59,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_11),32);
    bufp->fullIData(oldp+60,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_12),32);
    bufp->fullIData(oldp+61,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_13),32);
    bufp->fullIData(oldp+62,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_14),32);
    bufp->fullIData(oldp+63,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_15),32);
    bufp->fullIData(oldp+64,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_16),32);
    bufp->fullIData(oldp+65,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_17),32);
    bufp->fullIData(oldp+66,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_18),32);
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_19),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_20),32);
    bufp->fullIData(oldp+69,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_21),32);
    bufp->fullIData(oldp+70,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_22),32);
    bufp->fullIData(oldp+71,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_23),32);
    bufp->fullIData(oldp+72,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_24),32);
    bufp->fullIData(oldp+73,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_25),32);
    bufp->fullIData(oldp+74,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_26),32);
    bufp->fullIData(oldp+75,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_27),32);
    bufp->fullIData(oldp+76,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_28),32);
    bufp->fullIData(oldp+77,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_29),32);
    bufp->fullIData(oldp+78,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_30),32);
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_31),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit_count),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_count),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit_count),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_count),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__i_cnt),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__total_mem_cycles),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top__DOT__npc_cpu__DOT__stall_cnt),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__npc_cpu__DOT__flush_cnt),32);
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_total_count_reg),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_hit_count_reg),32);
    bufp->fullBit(oldp+90,(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall));
    bufp->fullIData(oldp+91,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst)
                               ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base
                               : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg)),32);
    bufp->fullCData(oldp+92,((7U & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst))))),8);
    bufp->fullCData(oldp+93,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst),2);
    bufp->fullBit(oldp+94,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid));
    bufp->fullIData(oldp+95,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awaddr),32);
    bufp->fullCData(oldp+96,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_awvalid) 
                               & (3U > (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0)))
                               ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0)
                               : 2U)),3);
    bufp->fullBit(oldp+97,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_wvalid_0));
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wdata),32);
    bufp->fullCData(oldp+99,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_wstrb),4);
    bufp->fullBit(oldp+100,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_bready_0));
    bufp->fullBit(oldp+101,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid));
    bufp->fullIData(oldp+102,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_araddr),32);
    bufp->fullCData(oldp+103,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2)
                                ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst)
                                         ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10)
                                             ? 0U : 
                                            (7U & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18)))))
                                         : 0U))),8);
    bufp->fullCData(oldp+104,(((1U & ((~ ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid) 
                                          & (3U > (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize)))) 
                                      | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT____VdfgRegularize_h96986e78_0_1)))
                                ? 2U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize))),3);
    bufp->fullCData(oldp+105,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT___GEN_2)
                                ? 0U : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst))),2);
    bufp->fullBit(oldp+106,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__io_master_rready_0));
    bufp->fullBit(oldp+107,((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)))));
    bufp->fullBit(oldp+108,(vlSelfRef.top__DOT__npc_cpu__DOT___axi_arbiter_io_clint_slave_rready));
    bufp->fullBit(oldp+109,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state));
    bufp->fullIData(oldp+110,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                                ? ((0x200bff8U == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low
                                    : ((0x200bffcU 
                                        == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+111,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__busy));
    bufp->fullBit(oldp+112,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu));
    bufp->fullBit(oldp+113,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__is_write));
    bufp->fullBit(oldp+114,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__w_phase));
    bufp->fullBit(oldp+115,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint));
    bufp->fullBit(oldp+116,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__isClintWrite));
    bufp->fullBit(oldp+117,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_wvalid_0));
    bufp->fullBit(oldp+118,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__io_master_out_bready_0));
    bufp->fullIData(oldp+119,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low),32);
    bufp->fullIData(oldp+120,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high),32);
    bufp->fullIData(oldp+121,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg),32);
    bufp->fullBit(oldp+122,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_valid));
    bufp->fullBit(oldp+123,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_req_bits_burst));
    bufp->fullBit(oldp+124,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_inst_resp_ready));
    bufp->fullBit(oldp+125,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0));
    bufp->fullBit(oldp+126,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__pending));
    bufp->fullBit(oldp+127,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__killPending));
    bufp->fullBit(oldp+128,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_ifu_master__DOT__canIssueAr));
    bufp->fullBit(oldp+129,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_valid));
    bufp->fullBit(oldp+130,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_20)) 
                             & ((4U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)) 
                                | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_6)) 
                                   & (9U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))))));
    bufp->fullCData(oldp+131,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_rsize),3);
    bufp->fullIData(oldp+132,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_11)
                                ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg)
                                         ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base
                                         : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg))),32);
    bufp->fullCData(oldp+133,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_10)
                                ? 0U : (7U & (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_18)))))),3);
    bufp->fullIData(oldp+134,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wdata_0),32);
    bufp->fullCData(oldp+135,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wmask_0),4);
    bufp->fullCData(oldp+136,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_wsize_0),3);
    bufp->fullIData(oldp+137,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__io_data_req_bits_waddr_0),32);
    bufp->fullBit(oldp+138,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_req_bits_burst));
    bufp->fullBit(oldp+139,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_data_resp_ready));
    bufp->fullCData(oldp+140,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__state),2);
    bufp->fullIData(oldp+141,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wdata),32);
    bufp->fullCData(oldp+142,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_wmask),4);
    bufp->fullIData(oldp+143,(vlSelfRef.top__DOT__npc_cpu__DOT__axi_mem_master__DOT__req_waddr),32);
    bufp->fullIData(oldp+144,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc),32);
    bufp->fullIData(oldp+145,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0) 
                                & ((vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory
                                    [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0] 
                                    >> 0x20U) & (vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                                                 [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R0_addr_d0] 
                                                 >> 1U)))
                                ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0)
                                    ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory
                                              [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0])
                                    : 0U) : ((IData)(4U) 
                                             + vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pred_pc_s1))),32);
    bufp->fullBit(oldp+146,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___io_bpu_update_valid_T) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch))));
    bufp->fullIData(oldp+147,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__pc),32);
    bufp->fullBit(oldp+148,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_taken));
    bufp->fullIData(oldp+149,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jal_T),32);
    bufp->fullBit(oldp+150,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_bpu_update_is_branch));
    bufp->fullSData(oldp+151,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr),10);
    bufp->fullIData(oldp+152,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pred_pc_s1),32);
    bufp->fullBit(oldp+153,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire));
    bufp->fullIData(oldp+154,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_pc_s0),32);
    bufp->fullBit(oldp+155,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s0));
    bufp->fullIData(oldp+156,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s0),32);
    bufp->fullSData(oldp+157,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_ghr_s0),10);
    bufp->fullSData(oldp+158,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s0),10);
    bufp->fullBit(oldp+159,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire_s1));
    bufp->fullSData(oldp+160,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_idx_s1),10);
    bufp->fullSData(oldp+161,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_btb_idx_s1),10);
    bufp->fullBit(oldp+162,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1));
    bufp->fullIData(oldp+163,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s1),32);
    bufp->fullSData(oldp+164,((0x3ffU & vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc)),10);
    bufp->fullQData(oldp+165,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0)
                                ? vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT__Memory
                               [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_addr_d0]
                                : 0ULL)),33);
    bufp->fullBit(oldp+167,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_fire_s1) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1))));
    bufp->fullQData(oldp+168,((0x100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_target_s1)))),33);
    bufp->fullSData(oldp+170,((0x3ffU & (vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc 
                                         ^ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__ghr)))),10);
    bufp->fullCData(oldp+171,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__btb_ext__DOT___R0_en_d0)
                                ? vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                               [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R0_addr_d0]
                                : 0U)),2);
    bufp->fullCData(oldp+172,(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data),2);
    bufp->fullCData(oldp+173,((3U & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__update_taken_s1)
                                      ? (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_en_d0) 
                                          & (3U == 
                                             vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT__Memory
                                             [vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT__pht_ext__DOT___R1_addr_d0]))
                                          ? 3U : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data)))
                                      : ((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data))
                                          ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__bpu__DOT___pht_ext_R1_data) 
                                                  - (IData)(1U)))))),2);
    bufp->fullSData(oldp+174,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr),12);
    bufp->fullIData(oldp+175,(((0xf12U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                ? 0x25080212U : ((0xf11U 
                                                  == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                                  ? 0x79737978U
                                                  : 
                                                 ((0x300U 
                                                   == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus
                                                   : 
                                                  ((0x342U 
                                                    == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause
                                                    : 
                                                   ((0x341U 
                                                     == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                                     ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mepc
                                                     : 
                                                    ((0x305U 
                                                      == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_csr_raddr))
                                                      ? vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mtvec
                                                      : 0U))))))),32);
    bufp->fullSData(oldp+176,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_waddr),12);
    bufp->fullIData(oldp+177,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wdata),32);
    bufp->fullBit(oldp+178,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_wen));
    bufp->fullBit(oldp+179,((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    bufp->fullBit(oldp+180,((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)));
    bufp->fullIData(oldp+181,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mtvec),32);
    bufp->fullIData(oldp+182,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mepc),32);
    bufp->fullIData(oldp+183,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mcause),32);
    bufp->fullIData(oldp+184,(vlSelfRef.top__DOT__npc_cpu__DOT__csr__DOT__mstatus),32);
    bufp->fullBit(oldp+185,((1U & (~ (IData)((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))))));
    bufp->fullBit(oldp+186,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__io_mem_req_valid_0));
    bufp->fullIData(oldp+187,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__pc),32);
    bufp->fullIData(oldp+188,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__inst),32);
    bufp->fullBit(oldp+189,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_wen));
    bufp->fullCData(oldp+190,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb) 
                                | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu))
                                ? 0U : (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh) 
                                         | (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu))
                                         ? 1U : 2U))),3);
    bufp->fullIData(oldp+191,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                                ? ((0xffU & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                                   << (0x18U & (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                                << 3U)))
                                : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                    ? ((0xffffU & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data) 
                                       << (0x10U & 
                                           (vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result 
                                            << 3U)))
                                    : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw)
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data
                                        : 0U)))),32);
    bufp->fullCData(oldp+192,((0xfU & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                                        ? ((IData)(1U) 
                                           << (3U & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result))
                                        : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                            ? ((2U 
                                                & vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result)
                                                ? 0xcU
                                                : 3U)
                                            : (- (IData)((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw))))))),4);
    bufp->fullIData(oldp+193,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__alu_result),32);
    bufp->fullCData(oldp+194,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb)
                                ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh)
                                         ? 1U : 2U))),3);
    bufp->fullBit(oldp+195,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem_req_bits_bypass));
    bufp->fullBit(oldp+196,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)) 
                             & (1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state)))));
    bufp->fullBit(oldp+197,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_21)) 
                             & (8U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state)))));
    bufp->fullIData(oldp+198,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_addr),32);
    bufp->fullIData(oldp+199,(vlSelfRef.top__DOT__npc_cpu__DOT___dcache1_io_dcache_resp_bits_data),32);
    bufp->fullBit(oldp+200,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0));
    bufp->fullBit(oldp+201,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1));
    bufp->fullBit(oldp+202,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2));
    bufp->fullBit(oldp+203,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3));
    bufp->fullBit(oldp+204,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4));
    bufp->fullBit(oldp+205,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5));
    bufp->fullBit(oldp+206,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6));
    bufp->fullBit(oldp+207,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7));
    bufp->fullBit(oldp+208,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8));
    bufp->fullBit(oldp+209,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9));
    bufp->fullBit(oldp+210,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10));
    bufp->fullBit(oldp+211,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11));
    bufp->fullBit(oldp+212,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12));
    bufp->fullBit(oldp+213,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13));
    bufp->fullBit(oldp+214,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14));
    bufp->fullBit(oldp+215,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15));
    bufp->fullBit(oldp+216,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16));
    bufp->fullBit(oldp+217,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17));
    bufp->fullBit(oldp+218,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18));
    bufp->fullBit(oldp+219,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19));
    bufp->fullBit(oldp+220,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20));
    bufp->fullBit(oldp+221,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21));
    bufp->fullBit(oldp+222,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22));
    bufp->fullBit(oldp+223,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23));
    bufp->fullBit(oldp+224,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24));
    bufp->fullBit(oldp+225,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25));
    bufp->fullBit(oldp+226,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26));
    bufp->fullBit(oldp+227,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27));
    bufp->fullBit(oldp+228,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28));
    bufp->fullBit(oldp+229,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29));
    bufp->fullBit(oldp+230,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30));
    bufp->fullBit(oldp+231,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31));
    bufp->fullBit(oldp+232,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32));
    bufp->fullBit(oldp+233,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33));
    bufp->fullBit(oldp+234,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34));
    bufp->fullBit(oldp+235,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35));
    bufp->fullBit(oldp+236,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36));
    bufp->fullBit(oldp+237,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37));
    bufp->fullBit(oldp+238,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38));
    bufp->fullBit(oldp+239,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39));
    bufp->fullBit(oldp+240,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40));
    bufp->fullBit(oldp+241,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41));
    bufp->fullBit(oldp+242,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42));
    bufp->fullBit(oldp+243,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43));
    bufp->fullBit(oldp+244,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44));
    bufp->fullBit(oldp+245,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45));
    bufp->fullBit(oldp+246,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46));
    bufp->fullBit(oldp+247,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47));
    bufp->fullBit(oldp+248,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48));
    bufp->fullBit(oldp+249,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49));
    bufp->fullBit(oldp+250,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50));
    bufp->fullBit(oldp+251,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51));
    bufp->fullBit(oldp+252,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52));
    bufp->fullBit(oldp+253,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53));
    bufp->fullBit(oldp+254,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54));
    bufp->fullBit(oldp+255,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55));
    bufp->fullBit(oldp+256,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56));
    bufp->fullBit(oldp+257,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57));
    bufp->fullBit(oldp+258,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58));
    bufp->fullBit(oldp+259,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59));
    bufp->fullBit(oldp+260,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60));
    bufp->fullBit(oldp+261,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61));
    bufp->fullBit(oldp+262,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62));
    bufp->fullBit(oldp+263,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63));
    bufp->fullBit(oldp+264,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0));
    bufp->fullBit(oldp+265,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1));
    bufp->fullBit(oldp+266,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2));
    bufp->fullBit(oldp+267,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3));
    bufp->fullBit(oldp+268,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4));
    bufp->fullBit(oldp+269,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5));
    bufp->fullBit(oldp+270,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6));
    bufp->fullBit(oldp+271,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7));
    bufp->fullBit(oldp+272,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8));
    bufp->fullBit(oldp+273,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9));
    bufp->fullBit(oldp+274,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10));
    bufp->fullBit(oldp+275,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11));
    bufp->fullBit(oldp+276,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12));
    bufp->fullBit(oldp+277,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13));
    bufp->fullBit(oldp+278,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14));
    bufp->fullBit(oldp+279,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15));
    bufp->fullBit(oldp+280,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16));
    bufp->fullBit(oldp+281,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17));
    bufp->fullBit(oldp+282,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18));
    bufp->fullBit(oldp+283,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19));
    bufp->fullBit(oldp+284,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20));
    bufp->fullBit(oldp+285,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21));
    bufp->fullBit(oldp+286,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22));
    bufp->fullBit(oldp+287,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23));
    bufp->fullBit(oldp+288,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24));
    bufp->fullBit(oldp+289,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25));
    bufp->fullBit(oldp+290,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26));
    bufp->fullBit(oldp+291,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27));
    bufp->fullBit(oldp+292,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28));
    bufp->fullBit(oldp+293,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29));
    bufp->fullBit(oldp+294,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30));
    bufp->fullBit(oldp+295,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31));
    bufp->fullBit(oldp+296,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32));
    bufp->fullBit(oldp+297,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33));
    bufp->fullBit(oldp+298,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34));
    bufp->fullBit(oldp+299,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35));
    bufp->fullBit(oldp+300,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36));
    bufp->fullBit(oldp+301,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37));
    bufp->fullBit(oldp+302,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38));
    bufp->fullBit(oldp+303,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39));
    bufp->fullBit(oldp+304,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40));
    bufp->fullBit(oldp+305,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41));
    bufp->fullBit(oldp+306,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42));
    bufp->fullBit(oldp+307,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43));
    bufp->fullBit(oldp+308,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44));
    bufp->fullBit(oldp+309,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45));
    bufp->fullBit(oldp+310,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46));
    bufp->fullBit(oldp+311,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47));
    bufp->fullBit(oldp+312,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48));
    bufp->fullBit(oldp+313,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49));
    bufp->fullBit(oldp+314,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50));
    bufp->fullBit(oldp+315,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51));
    bufp->fullBit(oldp+316,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52));
    bufp->fullBit(oldp+317,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53));
    bufp->fullBit(oldp+318,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54));
    bufp->fullBit(oldp+319,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55));
    bufp->fullBit(oldp+320,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56));
    bufp->fullBit(oldp+321,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57));
    bufp->fullBit(oldp+322,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58));
    bufp->fullBit(oldp+323,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59));
    bufp->fullBit(oldp+324,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60));
    bufp->fullBit(oldp+325,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61));
    bufp->fullBit(oldp+326,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62));
    bufp->fullBit(oldp+327,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63));
    bufp->fullBit(oldp+328,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0));
    bufp->fullBit(oldp+329,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1));
    bufp->fullBit(oldp+330,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2));
    bufp->fullBit(oldp+331,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3));
    bufp->fullBit(oldp+332,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4));
    bufp->fullBit(oldp+333,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5));
    bufp->fullBit(oldp+334,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6));
    bufp->fullBit(oldp+335,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7));
    bufp->fullBit(oldp+336,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8));
    bufp->fullBit(oldp+337,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9));
    bufp->fullBit(oldp+338,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10));
    bufp->fullBit(oldp+339,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11));
    bufp->fullBit(oldp+340,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12));
    bufp->fullBit(oldp+341,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13));
    bufp->fullBit(oldp+342,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14));
    bufp->fullBit(oldp+343,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15));
    bufp->fullBit(oldp+344,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16));
    bufp->fullBit(oldp+345,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17));
    bufp->fullBit(oldp+346,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18));
    bufp->fullBit(oldp+347,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19));
    bufp->fullBit(oldp+348,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20));
    bufp->fullBit(oldp+349,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21));
    bufp->fullBit(oldp+350,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22));
    bufp->fullBit(oldp+351,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23));
    bufp->fullBit(oldp+352,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24));
    bufp->fullBit(oldp+353,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25));
    bufp->fullBit(oldp+354,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26));
    bufp->fullBit(oldp+355,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27));
    bufp->fullBit(oldp+356,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28));
    bufp->fullBit(oldp+357,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29));
    bufp->fullBit(oldp+358,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30));
    bufp->fullBit(oldp+359,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31));
    bufp->fullBit(oldp+360,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32));
    bufp->fullBit(oldp+361,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33));
    bufp->fullBit(oldp+362,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34));
    bufp->fullBit(oldp+363,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35));
    bufp->fullBit(oldp+364,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36));
    bufp->fullBit(oldp+365,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37));
    bufp->fullBit(oldp+366,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38));
    bufp->fullBit(oldp+367,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39));
    bufp->fullBit(oldp+368,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40));
    bufp->fullBit(oldp+369,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41));
    bufp->fullBit(oldp+370,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42));
    bufp->fullBit(oldp+371,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43));
    bufp->fullBit(oldp+372,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44));
    bufp->fullBit(oldp+373,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45));
    bufp->fullBit(oldp+374,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46));
    bufp->fullBit(oldp+375,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47));
    bufp->fullBit(oldp+376,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48));
    bufp->fullBit(oldp+377,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49));
    bufp->fullBit(oldp+378,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50));
    bufp->fullBit(oldp+379,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51));
    bufp->fullBit(oldp+380,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52));
    bufp->fullBit(oldp+381,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53));
    bufp->fullBit(oldp+382,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54));
    bufp->fullBit(oldp+383,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55));
    bufp->fullBit(oldp+384,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56));
    bufp->fullBit(oldp+385,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57));
    bufp->fullBit(oldp+386,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58));
    bufp->fullBit(oldp+387,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59));
    bufp->fullBit(oldp+388,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60));
    bufp->fullBit(oldp+389,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61));
    bufp->fullBit(oldp+390,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62));
    bufp->fullBit(oldp+391,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63));
    bufp->fullBit(oldp+392,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0));
    bufp->fullBit(oldp+393,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1));
    bufp->fullBit(oldp+394,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2));
    bufp->fullBit(oldp+395,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3));
    bufp->fullBit(oldp+396,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4));
    bufp->fullBit(oldp+397,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5));
    bufp->fullBit(oldp+398,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6));
    bufp->fullBit(oldp+399,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7));
    bufp->fullBit(oldp+400,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8));
    bufp->fullBit(oldp+401,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9));
    bufp->fullBit(oldp+402,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10));
    bufp->fullBit(oldp+403,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11));
    bufp->fullBit(oldp+404,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12));
    bufp->fullBit(oldp+405,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13));
    bufp->fullBit(oldp+406,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14));
    bufp->fullBit(oldp+407,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15));
    bufp->fullBit(oldp+408,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16));
    bufp->fullBit(oldp+409,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17));
    bufp->fullBit(oldp+410,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18));
    bufp->fullBit(oldp+411,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19));
    bufp->fullBit(oldp+412,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20));
    bufp->fullBit(oldp+413,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21));
    bufp->fullBit(oldp+414,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22));
    bufp->fullBit(oldp+415,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23));
    bufp->fullBit(oldp+416,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24));
    bufp->fullBit(oldp+417,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25));
    bufp->fullBit(oldp+418,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26));
    bufp->fullBit(oldp+419,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27));
    bufp->fullBit(oldp+420,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28));
    bufp->fullBit(oldp+421,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29));
    bufp->fullBit(oldp+422,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30));
    bufp->fullBit(oldp+423,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31));
    bufp->fullBit(oldp+424,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32));
    bufp->fullBit(oldp+425,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33));
    bufp->fullBit(oldp+426,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34));
    bufp->fullBit(oldp+427,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35));
    bufp->fullBit(oldp+428,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36));
    bufp->fullBit(oldp+429,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37));
    bufp->fullBit(oldp+430,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38));
    bufp->fullBit(oldp+431,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39));
    bufp->fullBit(oldp+432,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40));
    bufp->fullBit(oldp+433,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41));
    bufp->fullBit(oldp+434,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42));
    bufp->fullBit(oldp+435,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43));
    bufp->fullBit(oldp+436,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44));
    bufp->fullBit(oldp+437,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45));
    bufp->fullBit(oldp+438,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46));
    bufp->fullBit(oldp+439,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47));
    bufp->fullBit(oldp+440,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48));
    bufp->fullBit(oldp+441,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49));
    bufp->fullBit(oldp+442,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50));
    bufp->fullBit(oldp+443,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51));
    bufp->fullBit(oldp+444,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52));
    bufp->fullBit(oldp+445,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53));
    bufp->fullBit(oldp+446,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54));
    bufp->fullBit(oldp+447,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55));
    bufp->fullBit(oldp+448,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56));
    bufp->fullBit(oldp+449,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57));
    bufp->fullBit(oldp+450,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58));
    bufp->fullBit(oldp+451,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59));
    bufp->fullBit(oldp+452,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60));
    bufp->fullBit(oldp+453,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61));
    bufp->fullBit(oldp+454,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62));
    bufp->fullBit(oldp+455,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63));
    bufp->fullBit(oldp+456,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0));
    bufp->fullBit(oldp+457,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1));
    bufp->fullBit(oldp+458,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2));
    bufp->fullBit(oldp+459,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3));
    bufp->fullBit(oldp+460,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4));
    bufp->fullBit(oldp+461,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5));
    bufp->fullBit(oldp+462,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6));
    bufp->fullBit(oldp+463,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7));
    bufp->fullBit(oldp+464,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8));
    bufp->fullBit(oldp+465,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9));
    bufp->fullBit(oldp+466,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10));
    bufp->fullBit(oldp+467,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11));
    bufp->fullBit(oldp+468,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12));
    bufp->fullBit(oldp+469,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13));
    bufp->fullBit(oldp+470,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14));
    bufp->fullBit(oldp+471,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15));
    bufp->fullBit(oldp+472,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16));
    bufp->fullBit(oldp+473,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17));
    bufp->fullBit(oldp+474,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18));
    bufp->fullBit(oldp+475,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19));
    bufp->fullBit(oldp+476,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20));
    bufp->fullBit(oldp+477,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21));
    bufp->fullBit(oldp+478,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22));
    bufp->fullBit(oldp+479,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23));
    bufp->fullBit(oldp+480,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24));
    bufp->fullBit(oldp+481,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25));
    bufp->fullBit(oldp+482,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26));
    bufp->fullBit(oldp+483,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27));
    bufp->fullBit(oldp+484,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28));
    bufp->fullBit(oldp+485,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29));
    bufp->fullBit(oldp+486,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30));
    bufp->fullBit(oldp+487,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31));
    bufp->fullBit(oldp+488,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32));
    bufp->fullBit(oldp+489,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33));
    bufp->fullBit(oldp+490,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34));
    bufp->fullBit(oldp+491,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35));
    bufp->fullBit(oldp+492,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36));
    bufp->fullBit(oldp+493,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37));
    bufp->fullBit(oldp+494,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38));
    bufp->fullBit(oldp+495,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39));
    bufp->fullBit(oldp+496,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40));
    bufp->fullBit(oldp+497,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41));
    bufp->fullBit(oldp+498,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42));
    bufp->fullBit(oldp+499,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43));
    bufp->fullBit(oldp+500,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44));
    bufp->fullBit(oldp+501,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45));
    bufp->fullBit(oldp+502,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46));
    bufp->fullBit(oldp+503,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47));
    bufp->fullBit(oldp+504,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48));
    bufp->fullBit(oldp+505,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49));
    bufp->fullBit(oldp+506,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50));
    bufp->fullBit(oldp+507,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51));
    bufp->fullBit(oldp+508,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52));
    bufp->fullBit(oldp+509,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53));
    bufp->fullBit(oldp+510,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54));
    bufp->fullBit(oldp+511,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55));
    bufp->fullBit(oldp+512,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56));
    bufp->fullBit(oldp+513,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57));
    bufp->fullBit(oldp+514,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58));
    bufp->fullBit(oldp+515,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59));
    bufp->fullBit(oldp+516,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60));
    bufp->fullBit(oldp+517,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61));
    bufp->fullBit(oldp+518,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62));
    bufp->fullBit(oldp+519,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63));
    bufp->fullBit(oldp+520,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0));
    bufp->fullBit(oldp+521,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1));
    bufp->fullBit(oldp+522,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2));
    bufp->fullBit(oldp+523,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3));
    bufp->fullBit(oldp+524,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4));
    bufp->fullBit(oldp+525,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5));
    bufp->fullBit(oldp+526,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6));
    bufp->fullBit(oldp+527,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7));
    bufp->fullBit(oldp+528,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8));
    bufp->fullBit(oldp+529,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9));
    bufp->fullBit(oldp+530,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10));
    bufp->fullBit(oldp+531,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11));
    bufp->fullBit(oldp+532,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12));
    bufp->fullBit(oldp+533,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13));
    bufp->fullBit(oldp+534,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14));
    bufp->fullBit(oldp+535,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15));
    bufp->fullBit(oldp+536,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16));
    bufp->fullBit(oldp+537,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17));
    bufp->fullBit(oldp+538,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18));
    bufp->fullBit(oldp+539,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19));
    bufp->fullBit(oldp+540,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20));
    bufp->fullBit(oldp+541,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21));
    bufp->fullBit(oldp+542,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22));
    bufp->fullBit(oldp+543,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23));
    bufp->fullBit(oldp+544,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24));
    bufp->fullBit(oldp+545,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25));
    bufp->fullBit(oldp+546,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26));
    bufp->fullBit(oldp+547,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27));
    bufp->fullBit(oldp+548,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28));
    bufp->fullBit(oldp+549,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29));
    bufp->fullBit(oldp+550,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30));
    bufp->fullBit(oldp+551,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31));
    bufp->fullBit(oldp+552,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32));
    bufp->fullBit(oldp+553,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33));
    bufp->fullBit(oldp+554,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34));
    bufp->fullBit(oldp+555,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35));
    bufp->fullBit(oldp+556,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36));
    bufp->fullBit(oldp+557,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37));
    bufp->fullBit(oldp+558,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38));
    bufp->fullBit(oldp+559,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39));
    bufp->fullBit(oldp+560,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40));
    bufp->fullBit(oldp+561,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41));
    bufp->fullBit(oldp+562,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42));
    bufp->fullBit(oldp+563,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43));
    bufp->fullBit(oldp+564,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44));
    bufp->fullBit(oldp+565,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45));
    bufp->fullBit(oldp+566,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46));
    bufp->fullBit(oldp+567,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47));
    bufp->fullBit(oldp+568,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48));
    bufp->fullBit(oldp+569,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49));
    bufp->fullBit(oldp+570,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50));
    bufp->fullBit(oldp+571,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51));
    bufp->fullBit(oldp+572,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52));
    bufp->fullBit(oldp+573,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53));
    bufp->fullBit(oldp+574,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54));
    bufp->fullBit(oldp+575,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55));
    bufp->fullBit(oldp+576,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56));
    bufp->fullBit(oldp+577,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57));
    bufp->fullBit(oldp+578,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58));
    bufp->fullBit(oldp+579,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59));
    bufp->fullBit(oldp+580,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60));
    bufp->fullBit(oldp+581,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61));
    bufp->fullBit(oldp+582,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62));
    bufp->fullBit(oldp+583,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63));
    bufp->fullBit(oldp+584,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0));
    bufp->fullBit(oldp+585,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1));
    bufp->fullBit(oldp+586,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2));
    bufp->fullBit(oldp+587,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3));
    bufp->fullBit(oldp+588,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4));
    bufp->fullBit(oldp+589,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5));
    bufp->fullBit(oldp+590,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6));
    bufp->fullBit(oldp+591,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7));
    bufp->fullBit(oldp+592,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8));
    bufp->fullBit(oldp+593,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9));
    bufp->fullBit(oldp+594,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10));
    bufp->fullBit(oldp+595,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11));
    bufp->fullBit(oldp+596,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12));
    bufp->fullBit(oldp+597,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13));
    bufp->fullBit(oldp+598,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14));
    bufp->fullBit(oldp+599,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15));
    bufp->fullBit(oldp+600,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16));
    bufp->fullBit(oldp+601,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17));
    bufp->fullBit(oldp+602,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18));
    bufp->fullBit(oldp+603,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19));
    bufp->fullBit(oldp+604,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20));
    bufp->fullBit(oldp+605,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21));
    bufp->fullBit(oldp+606,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22));
    bufp->fullBit(oldp+607,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23));
    bufp->fullBit(oldp+608,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24));
    bufp->fullBit(oldp+609,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25));
    bufp->fullBit(oldp+610,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26));
    bufp->fullBit(oldp+611,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27));
    bufp->fullBit(oldp+612,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28));
    bufp->fullBit(oldp+613,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29));
    bufp->fullBit(oldp+614,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30));
    bufp->fullBit(oldp+615,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31));
    bufp->fullBit(oldp+616,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32));
    bufp->fullBit(oldp+617,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33));
    bufp->fullBit(oldp+618,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34));
    bufp->fullBit(oldp+619,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35));
    bufp->fullBit(oldp+620,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36));
    bufp->fullBit(oldp+621,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37));
    bufp->fullBit(oldp+622,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38));
    bufp->fullBit(oldp+623,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39));
    bufp->fullBit(oldp+624,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40));
    bufp->fullBit(oldp+625,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41));
    bufp->fullBit(oldp+626,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42));
    bufp->fullBit(oldp+627,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43));
    bufp->fullBit(oldp+628,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44));
    bufp->fullBit(oldp+629,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45));
    bufp->fullBit(oldp+630,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46));
    bufp->fullBit(oldp+631,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47));
    bufp->fullBit(oldp+632,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48));
    bufp->fullBit(oldp+633,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49));
    bufp->fullBit(oldp+634,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50));
    bufp->fullBit(oldp+635,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51));
    bufp->fullBit(oldp+636,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52));
    bufp->fullBit(oldp+637,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53));
    bufp->fullBit(oldp+638,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54));
    bufp->fullBit(oldp+639,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55));
    bufp->fullBit(oldp+640,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56));
    bufp->fullBit(oldp+641,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57));
    bufp->fullBit(oldp+642,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58));
    bufp->fullBit(oldp+643,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59));
    bufp->fullBit(oldp+644,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60));
    bufp->fullBit(oldp+645,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61));
    bufp->fullBit(oldp+646,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62));
    bufp->fullBit(oldp+647,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63));
    bufp->fullBit(oldp+648,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0));
    bufp->fullBit(oldp+649,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1));
    bufp->fullBit(oldp+650,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2));
    bufp->fullBit(oldp+651,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3));
    bufp->fullBit(oldp+652,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4));
    bufp->fullBit(oldp+653,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5));
    bufp->fullBit(oldp+654,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6));
    bufp->fullBit(oldp+655,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7));
    bufp->fullBit(oldp+656,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8));
    bufp->fullBit(oldp+657,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9));
    bufp->fullBit(oldp+658,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10));
    bufp->fullBit(oldp+659,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11));
    bufp->fullBit(oldp+660,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12));
    bufp->fullBit(oldp+661,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13));
    bufp->fullBit(oldp+662,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14));
    bufp->fullBit(oldp+663,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15));
    bufp->fullBit(oldp+664,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16));
    bufp->fullBit(oldp+665,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17));
    bufp->fullBit(oldp+666,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18));
    bufp->fullBit(oldp+667,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19));
    bufp->fullBit(oldp+668,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20));
    bufp->fullBit(oldp+669,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21));
    bufp->fullBit(oldp+670,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22));
    bufp->fullBit(oldp+671,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23));
    bufp->fullBit(oldp+672,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24));
    bufp->fullBit(oldp+673,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25));
    bufp->fullBit(oldp+674,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26));
    bufp->fullBit(oldp+675,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27));
    bufp->fullBit(oldp+676,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28));
    bufp->fullBit(oldp+677,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29));
    bufp->fullBit(oldp+678,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30));
    bufp->fullBit(oldp+679,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31));
    bufp->fullBit(oldp+680,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32));
    bufp->fullBit(oldp+681,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33));
    bufp->fullBit(oldp+682,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34));
    bufp->fullBit(oldp+683,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35));
    bufp->fullBit(oldp+684,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36));
    bufp->fullBit(oldp+685,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37));
    bufp->fullBit(oldp+686,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38));
    bufp->fullBit(oldp+687,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39));
    bufp->fullBit(oldp+688,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40));
    bufp->fullBit(oldp+689,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41));
    bufp->fullBit(oldp+690,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42));
    bufp->fullBit(oldp+691,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43));
    bufp->fullBit(oldp+692,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44));
    bufp->fullBit(oldp+693,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45));
    bufp->fullBit(oldp+694,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46));
    bufp->fullBit(oldp+695,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47));
    bufp->fullBit(oldp+696,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48));
    bufp->fullBit(oldp+697,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49));
    bufp->fullBit(oldp+698,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50));
    bufp->fullBit(oldp+699,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51));
    bufp->fullBit(oldp+700,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52));
    bufp->fullBit(oldp+701,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53));
    bufp->fullBit(oldp+702,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54));
    bufp->fullBit(oldp+703,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55));
    bufp->fullBit(oldp+704,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56));
    bufp->fullBit(oldp+705,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57));
    bufp->fullBit(oldp+706,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58));
    bufp->fullBit(oldp+707,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59));
    bufp->fullBit(oldp+708,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60));
    bufp->fullBit(oldp+709,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61));
    bufp->fullBit(oldp+710,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62));
    bufp->fullBit(oldp+711,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63));
    bufp->fullIData(oldp+712,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__tag_reg),21);
    bufp->fullCData(oldp+713,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__index_reg),6);
    bufp->fullCData(oldp+714,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__offset_reg),5);
    bufp->fullIData(oldp+715,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__line_base),32);
    bufp->fullIData(oldp+716,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_addr_reg),32);
    bufp->fullIData(oldp+717,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_addr_reg),32);
    bufp->fullBit(oldp+718,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__miss_cacheable_reg));
    bufp->fullIData(oldp+719,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_data_reg),32);
    bufp->fullIData(oldp+720,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__bypass_addr_reg),32);
    bufp->fullBit(oldp+721,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_is_bypass));
    bufp->fullIData(oldp+722,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__resp_data_reg),32);
    bufp->fullBit(oldp+723,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg));
    bufp->fullIData(oldp+724,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wdata_reg),32);
    bufp->fullCData(oldp+725,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wmask_reg),4);
    bufp->fullCData(oldp+726,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wsize_reg),3);
    bufp->fullIData(oldp+727,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wb_addr),32);
    bufp->fullCData(oldp+728,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rsize_reg),3);
    bufp->fullIData(oldp+729,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_pc_reg),32);
    bufp->fullIData(oldp+730,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__req_inst_reg),32);
    bufp->fullCData(oldp+731,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__rand_way),2);
    bufp->fullCData(oldp+732,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__victim_way),2);
    bufp->fullCData(oldp+733,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__refill_cnt),3);
    bufp->fullCData(oldp+734,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state),4);
    bufp->fullBit(oldp+735,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_en));
    bufp->fullSData(oldp+736,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__read_addr),9);
    bufp->fullBit(oldp+737,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp));
    bufp->fullBit(oldp+738,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0));
    bufp->fullBit(oldp+739,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_0));
    bufp->fullBit(oldp+740,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1));
    bufp->fullBit(oldp+741,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_1));
    bufp->fullBit(oldp+742,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2));
    bufp->fullBit(oldp+743,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_2));
    bufp->fullBit(oldp+744,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit3));
    bufp->fullBit(oldp+745,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit));
    bufp->fullIData(oldp+746,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32),32);
    bufp->fullCData(oldp+747,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay),2);
    bufp->fullBit(oldp+748,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_0)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_0)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_0)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_0))))));
    bufp->fullBit(oldp+749,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_1)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_1)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_1)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_1))))));
    bufp->fullBit(oldp+750,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_2)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_2)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_2)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_2))))));
    bufp->fullBit(oldp+751,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_3)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_3)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_3)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_3))))));
    bufp->fullBit(oldp+752,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_4)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_4)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_4)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_4))))));
    bufp->fullBit(oldp+753,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_5)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_5)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_5)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_5))))));
    bufp->fullBit(oldp+754,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_6)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_6)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_6)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_6))))));
    bufp->fullBit(oldp+755,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_7)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_7)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_7)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_7))))));
    bufp->fullBit(oldp+756,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_8)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_8)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_8)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_8))))));
    bufp->fullBit(oldp+757,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_9)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_9)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_9)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_9))))));
    bufp->fullBit(oldp+758,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_10)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_10)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_10)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_10))))));
    bufp->fullBit(oldp+759,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_11)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_11)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_11)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_11))))));
    bufp->fullBit(oldp+760,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_12)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_12)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_12)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_12))))));
    bufp->fullBit(oldp+761,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_13)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_13)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_13)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_13))))));
    bufp->fullBit(oldp+762,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_14)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_14)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_14)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_14))))));
    bufp->fullBit(oldp+763,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_15)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_15)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_15)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_15))))));
    bufp->fullBit(oldp+764,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_16)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_16)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_16)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_16))))));
    bufp->fullBit(oldp+765,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_17)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_17)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_17)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_17))))));
    bufp->fullBit(oldp+766,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_18)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_18)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_18)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_18))))));
    bufp->fullBit(oldp+767,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_19)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_19)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_19)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_19))))));
    bufp->fullBit(oldp+768,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_20)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_20)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_20)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_20))))));
    bufp->fullBit(oldp+769,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_21)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_21)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_21)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_21))))));
    bufp->fullBit(oldp+770,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_22)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_22)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_22)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_22))))));
    bufp->fullBit(oldp+771,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_23)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_23)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_23)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_23))))));
    bufp->fullBit(oldp+772,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_24)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_24)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_24)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_24))))));
    bufp->fullBit(oldp+773,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_25)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_25)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_25)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_25))))));
    bufp->fullBit(oldp+774,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_26)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_26)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_26)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_26))))));
    bufp->fullBit(oldp+775,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_27)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_27)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_27)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_27))))));
    bufp->fullBit(oldp+776,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_28)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_28)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_28)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_28))))));
    bufp->fullBit(oldp+777,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_29)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_29)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_29)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_29))))));
    bufp->fullBit(oldp+778,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_30)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_30)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_30)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_30))))));
    bufp->fullBit(oldp+779,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_31)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_31)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_31)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_31))))));
    bufp->fullBit(oldp+780,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_32)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_32)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_32)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_32))))));
    bufp->fullBit(oldp+781,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_33)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_33)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_33)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_33))))));
    bufp->fullBit(oldp+782,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_34)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_34)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_34)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_34))))));
    bufp->fullBit(oldp+783,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_35)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_35)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_35)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_35))))));
    bufp->fullBit(oldp+784,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_36)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_36)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_36)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_36))))));
    bufp->fullBit(oldp+785,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_37)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_37)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_37)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_37))))));
    bufp->fullBit(oldp+786,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_38)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_38)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_38)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_38))))));
    bufp->fullBit(oldp+787,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_39)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_39)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_39)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_39))))));
    bufp->fullBit(oldp+788,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_40)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_40)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_40)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_40))))));
    bufp->fullBit(oldp+789,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_41)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_41)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_41)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_41))))));
    bufp->fullBit(oldp+790,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_42)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_42)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_42)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_42))))));
    bufp->fullBit(oldp+791,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_43)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_43)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_43)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_43))))));
    bufp->fullBit(oldp+792,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_44)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_44)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_44)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_44))))));
    bufp->fullBit(oldp+793,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_45)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_45)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_45)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_45))))));
    bufp->fullBit(oldp+794,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_46)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_46)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_46)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_46))))));
    bufp->fullBit(oldp+795,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_47)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_47)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_47)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_47))))));
    bufp->fullBit(oldp+796,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_48)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_48)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_48)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_48))))));
    bufp->fullBit(oldp+797,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_49)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_49)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_49)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_49))))));
    bufp->fullBit(oldp+798,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_50)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_50)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_50)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_50))))));
    bufp->fullBit(oldp+799,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_51)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_51)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_51)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_51))))));
    bufp->fullBit(oldp+800,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_52)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_52)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_52)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_52))))));
    bufp->fullBit(oldp+801,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_53)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_53)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_53)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_53))))));
    bufp->fullBit(oldp+802,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_54)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_54)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_54)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_54))))));
    bufp->fullBit(oldp+803,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_55)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_55)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_55)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_55))))));
    bufp->fullBit(oldp+804,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_56)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_56)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_56)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_56))))));
    bufp->fullBit(oldp+805,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_57)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_57)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_57)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_57))))));
    bufp->fullBit(oldp+806,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_58)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_58)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_58)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_58))))));
    bufp->fullBit(oldp+807,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_59)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_59)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_59)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_59))))));
    bufp->fullBit(oldp+808,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_60)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_60)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_60)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_60))))));
    bufp->fullBit(oldp+809,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_61)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_61)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_61)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_61))))));
    bufp->fullBit(oldp+810,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_62)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_62)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_62)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_62))))));
    bufp->fullBit(oldp+811,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_0_63)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_1_63)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_2_63)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__valid_array_3_63))))));
    bufp->fullBit(oldp+812,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_67));
    bufp->fullBit(oldp+813,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_0)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_0)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_0)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_0))))));
    bufp->fullBit(oldp+814,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_1)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_1)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_1)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_1))))));
    bufp->fullBit(oldp+815,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_2)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_2)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_2)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_2))))));
    bufp->fullBit(oldp+816,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_3)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_3)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_3)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_3))))));
    bufp->fullBit(oldp+817,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_4)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_4)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_4)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_4))))));
    bufp->fullBit(oldp+818,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_5)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_5)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_5)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_5))))));
    bufp->fullBit(oldp+819,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_6)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_6)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_6)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_6))))));
    bufp->fullBit(oldp+820,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_7)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_7)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_7)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_7))))));
    bufp->fullBit(oldp+821,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_8)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_8)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_8)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_8))))));
    bufp->fullBit(oldp+822,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_9)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_9)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_9)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_9))))));
    bufp->fullBit(oldp+823,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_10)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_10)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_10)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_10))))));
    bufp->fullBit(oldp+824,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_11)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_11)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_11)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_11))))));
    bufp->fullBit(oldp+825,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_12)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_12)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_12)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_12))))));
    bufp->fullBit(oldp+826,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_13)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_13)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_13)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_13))))));
    bufp->fullBit(oldp+827,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_14)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_14)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_14)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_14))))));
    bufp->fullBit(oldp+828,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_15)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_15)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_15)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_15))))));
    bufp->fullBit(oldp+829,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_16)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_16)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_16)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_16))))));
    bufp->fullBit(oldp+830,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_17)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_17)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_17)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_17))))));
    bufp->fullBit(oldp+831,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_18)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_18)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_18)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_18))))));
    bufp->fullBit(oldp+832,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_19)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_19)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_19)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_19))))));
    bufp->fullBit(oldp+833,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_20)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_20)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_20)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_20))))));
    bufp->fullBit(oldp+834,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_21)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_21)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_21)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_21))))));
    bufp->fullBit(oldp+835,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_22)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_22)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_22)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_22))))));
    bufp->fullBit(oldp+836,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_23)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_23)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_23)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_23))))));
    bufp->fullBit(oldp+837,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_24)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_24)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_24)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_24))))));
    bufp->fullBit(oldp+838,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_25)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_25)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_25)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_25))))));
    bufp->fullBit(oldp+839,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_26)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_26)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_26)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_26))))));
    bufp->fullBit(oldp+840,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_27)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_27)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_27)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_27))))));
    bufp->fullBit(oldp+841,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_28)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_28)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_28)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_28))))));
    bufp->fullBit(oldp+842,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_29)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_29)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_29)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_29))))));
    bufp->fullBit(oldp+843,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_30)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_30)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_30)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_30))))));
    bufp->fullBit(oldp+844,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_31)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_31)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_31)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_31))))));
    bufp->fullBit(oldp+845,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_32)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_32)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_32)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_32))))));
    bufp->fullBit(oldp+846,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_33)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_33)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_33)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_33))))));
    bufp->fullBit(oldp+847,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_34)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_34)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_34)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_34))))));
    bufp->fullBit(oldp+848,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_35)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_35)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_35)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_35))))));
    bufp->fullBit(oldp+849,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_36)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_36)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_36)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_36))))));
    bufp->fullBit(oldp+850,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_37)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_37)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_37)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_37))))));
    bufp->fullBit(oldp+851,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_38)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_38)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_38)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_38))))));
    bufp->fullBit(oldp+852,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_39)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_39)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_39)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_39))))));
    bufp->fullBit(oldp+853,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_40)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_40)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_40)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_40))))));
    bufp->fullBit(oldp+854,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_41)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_41)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_41)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_41))))));
    bufp->fullBit(oldp+855,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_42)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_42)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_42)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_42))))));
    bufp->fullBit(oldp+856,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_43)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_43)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_43)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_43))))));
    bufp->fullBit(oldp+857,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_44)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_44)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_44)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_44))))));
    bufp->fullBit(oldp+858,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_45)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_45)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_45)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_45))))));
    bufp->fullBit(oldp+859,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_46)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_46)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_46)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_46))))));
    bufp->fullBit(oldp+860,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_47)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_47)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_47)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_47))))));
    bufp->fullBit(oldp+861,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_48)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_48)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_48)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_48))))));
    bufp->fullBit(oldp+862,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_49)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_49)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_49)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_49))))));
    bufp->fullBit(oldp+863,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_50)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_50)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_50)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_50))))));
    bufp->fullBit(oldp+864,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_51)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_51)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_51)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_51))))));
    bufp->fullBit(oldp+865,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_52)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_52)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_52)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_52))))));
    bufp->fullBit(oldp+866,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_53)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_53)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_53)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_53))))));
    bufp->fullBit(oldp+867,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_54)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_54)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_54)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_54))))));
    bufp->fullBit(oldp+868,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_55)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_55)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_55)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_55))))));
    bufp->fullBit(oldp+869,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_56)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_56)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_56)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_56))))));
    bufp->fullBit(oldp+870,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_57)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_57)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_57)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_57))))));
    bufp->fullBit(oldp+871,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_58)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_58)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_58)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_58))))));
    bufp->fullBit(oldp+872,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_59)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_59)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_59)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_59))))));
    bufp->fullBit(oldp+873,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_60)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_60)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_60)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_60))))));
    bufp->fullBit(oldp+874,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_61)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_61)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_61)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_61))))));
    bufp->fullBit(oldp+875,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_62)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_62)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_62)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_62))))));
    bufp->fullBit(oldp+876,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_0_63)
                              : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                  ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_1_63)
                                  : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                      ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_2_63)
                                      : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__dirty_array_3_63))))));
    bufp->fullBit(oldp+877,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__casez_tmp_132));
    bufp->fullIData(oldp+878,(((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_0_ext_R0_data
                                : ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                    ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_1_ext_R0_data
                                    : ((2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__allocWay))
                                        ? vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data
                                        : vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data)))),21);
    bufp->fullBit(oldp+879,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__isTargetWord));
    bufp->fullIData(oldp+880,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data),32);
    bufp->fullSData(oldp+881,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___read_addr_T_3),9);
    bufp->fullSData(oldp+882,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_2),9);
    bufp->fullBit(oldp+883,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14) 
                             & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__wen_reg) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit0)))));
    bufp->fullIData(oldp+884,((((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                                & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_0_ext_R0_data) 
                               | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)),32);
    bufp->fullIData(oldp+885,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data),32);
    bufp->fullBit(oldp+886,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_14) 
                             & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_4)) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit1)))));
    bufp->fullIData(oldp+887,((((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                                & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_1_ext_R0_data) 
                               | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)),32);
    bufp->fullIData(oldp+888,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data),32);
    bufp->fullBit(oldp+889,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2))));
    bufp->fullIData(oldp+890,((((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                                & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_2_ext_R0_data) 
                               | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)),32);
    bufp->fullIData(oldp+891,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data),32);
    bufp->fullBit(oldp+892,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__hit2)) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT____VdfgRegularize_hb5959c1d_0_19))));
    bufp->fullIData(oldp+893,((((~ vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__byteMask32) 
                                & vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___data_array_3_ext_R0_data) 
                               | vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___GEN_3)),32);
    bufp->fullBit(oldp+894,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_0));
    bufp->fullBit(oldp+895,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_1));
    bufp->fullBit(oldp+896,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_2));
    bufp->fullBit(oldp+897,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_3));
    bufp->fullBit(oldp+898,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_4));
    bufp->fullBit(oldp+899,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_5));
    bufp->fullBit(oldp+900,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_6));
    bufp->fullBit(oldp+901,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__lfsr_prng__DOT__state_7));
    bufp->fullBit(oldp+902,((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT__state))));
    bufp->fullIData(oldp+903,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_0_ext_R0_data),21);
    bufp->fullIData(oldp+904,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_1_ext_R0_data),21);
    bufp->fullIData(oldp+905,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_2_ext_R0_data),21);
    bufp->fullIData(oldp+906,(vlSelfRef.top__DOT__npc_cpu__DOT__dcache1__DOT___tag_array_3_ext_R0_data),21);
    bufp->fullBit(oldp+907,((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state)))));
    bufp->fullBit(oldp+908,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__io_out_valid_0));
    bufp->fullIData(oldp+909,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc),32);
    bufp->fullIData(oldp+910,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst),32);
    bufp->fullCData(oldp+911,((0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+912,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load) 
                             | ((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                      | ((0x6fU == 
                                          (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                         | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr) 
                                            | ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                               | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_10) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                         >> 7U)))))))))))));
    bufp->fullIData(oldp+913,((((0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)))
                                ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc
                                : ((0x37U == (0x7fU 
                                              & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))
                                    ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data))),32);
    bufp->fullIData(oldp+914,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_b),32);
    bufp->fullCData(oldp+915,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_alu_op),4);
    bufp->fullIData(oldp+916,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data),32);
    bufp->fullIData(oldp+917,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs2_data),32);
    bufp->fullIData(oldp+918,(((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                ? vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__pc
                                : ((0x30200073U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                    ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_rs1_data))),32);
    bufp->fullBit(oldp+919,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw) 
                             | (0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullSData(oldp+920,(((0x73U == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                ? 0x341U : ((0x30200073U 
                                             == vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst)
                                             ? 0x342U
                                             : (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                >> 0x14U)))),12);
    bufp->fullBit(oldp+921,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrw));
    bufp->fullBit(oldp+922,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_csrrs));
    bufp->fullBit(oldp+923,((0x6fU == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+924,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_jalr));
    bufp->fullBit(oldp+925,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lw));
    bufp->fullBit(oldp+926,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sw));
    bufp->fullBit(oldp+927,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lb));
    bufp->fullBit(oldp+928,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sb));
    bufp->fullBit(oldp+929,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lh));
    bufp->fullBit(oldp+930,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_sh));
    bufp->fullBit(oldp+931,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lbu));
    bufp->fullBit(oldp+932,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_lhu));
    bufp->fullBit(oldp+933,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_beq));
    bufp->fullBit(oldp+934,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bne));
    bufp->fullBit(oldp+935,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_blt));
    bufp->fullBit(oldp+936,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bltu));
    bufp->fullBit(oldp+937,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bge));
    bufp->fullBit(oldp+938,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_out_bits_is_bgeu));
    bufp->fullBit(oldp+939,((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))));
    bufp->fullBit(oldp+940,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_out_valid));
    bufp->fullIData(oldp+941,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__inst),32);
    bufp->fullIData(oldp+942,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+943,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs2_data),32);
    bufp->fullCData(oldp+944,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_addr),5);
    bufp->fullBit(oldp+945,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en));
    bufp->fullCData(oldp+946,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0) 
                                & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en))
                                ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag)
                                : 0U)),6);
    bufp->fullIData(oldp+947,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wdata),32);
    bufp->fullBit(oldp+948,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_wen));
    bufp->fullSData(oldp+949,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_waddr),12);
    bufp->fullIData(oldp+950,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__csr_rdata),32);
    bufp->fullBit(oldp+951,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrw));
    bufp->fullBit(oldp+952,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_csrrs));
    bufp->fullBit(oldp+953,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lw));
    bufp->fullBit(oldp+954,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lbu));
    bufp->fullBit(oldp+955,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lh));
    bufp->fullBit(oldp+956,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lhu));
    bufp->fullBit(oldp+957,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_lb));
    bufp->fullBit(oldp+958,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sw));
    bufp->fullBit(oldp+959,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sb));
    bufp->fullBit(oldp+960,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_sh));
    bufp->fullBit(oldp+961,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jalr));
    bufp->fullBit(oldp+962,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_jal));
    bufp->fullBit(oldp+963,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___GEN_1));
    bufp->fullIData(oldp+964,((0xfffffffeU & vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT___cur_pc_jalr_T)),32);
    bufp->fullBit(oldp+965,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_branch_bits_is_branch_taken));
    bufp->fullBit(oldp+966,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_ecall));
    bufp->fullBit(oldp+967,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_mret));
    bufp->fullBit(oldp+968,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__redirect_now));
    bufp->fullIData(oldp+969,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__expected_next_pc_reg),32);
    bufp->fullBit(oldp+970,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid));
    bufp->fullCData(oldp+971,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_addr),5);
    bufp->fullBit(oldp+972,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid)
                              ? (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rd_en)
                              : (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en))));
    bufp->fullBit(oldp+973,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load));
    bufp->fullIData(oldp+974,(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out),32);
    bufp->fullBit(oldp+975,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__io_load_tag_alloc_valid_0));
    bufp->fullCData(oldp+976,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__nextLoadTag),6);
    bufp->fullBit(oldp+977,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__state));
    bufp->fullBit(oldp+978,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__out_valid));
    bufp->fullIData(oldp+979,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+980,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_b),32);
    bufp->fullCData(oldp+981,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__alu_op),4);
    bufp->fullIData(oldp+982,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__rs1_data),32);
    bufp->fullBit(oldp+983,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_beq));
    bufp->fullBit(oldp+984,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bne));
    bufp->fullBit(oldp+985,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_blt));
    bufp->fullBit(oldp+986,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bltu));
    bufp->fullBit(oldp+987,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bge));
    bufp->fullBit(oldp+988,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__is_bgeu));
    bufp->fullBit(oldp+989,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_valid));
    bufp->fullCData(oldp+990,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_addr),5);
    bufp->fullBit(oldp+991,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_en));
    bufp->fullBit(oldp+992,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_rd_is_load));
    bufp->fullIData(oldp+993,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__fwd_hold_val_out),32);
    bufp->fullBit(oldp+994,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__first_inst_reg));
    bufp->fullBit(oldp+995,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_expect_valid_reg));
    bufp->fullBit(oldp+996,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__exu_fwd_live_valid));
    bufp->fullBit(oldp+997,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__bp_check_now));
    bufp->fullBit(oldp+998,(vlSelfRef.top__DOT__npc_cpu__DOT__exu__DOT__hold_capture));
    bufp->fullBit(oldp+999,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load)) 
                             & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en))));
    bufp->fullCData(oldp+1000,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_addr),5);
    bufp->fullBit(oldp+1001,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_rd_en));
    bufp->fullIData(oldp+1002,(vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out),32);
    bufp->fullBit(oldp+1003,(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid));
    bufp->fullCData(oldp+1004,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_addr),5);
    bufp->fullBit(oldp+1005,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__rd_en));
    bufp->fullBit(oldp+1006,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load));
    bufp->fullIData(oldp+1007,(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out),32);
    bufp->fullBit(oldp+1008,(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_valid));
    bufp->fullCData(oldp+1009,(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_rd_addr),5);
    bufp->fullIData(oldp+1010,(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out),32);
    bufp->fullBit(oldp+1011,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)) 
                              & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid) 
                                 & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load) 
                                    & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6))))));
    bufp->fullCData(oldp+1012,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__load_tag),6);
    bufp->fullCData(oldp+1013,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs1),5);
    bufp->fullCData(oldp+1014,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_id_rs2),5);
    bufp->fullBit(oldp+1015,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs1));
    bufp->fullBit(oldp+1016,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs2));
    bufp->fullBit(oldp+1017,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state));
    bufp->fullBit(oldp+1018,(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en));
    bufp->fullIData(oldp+1019,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out
                                 : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep)
                                     ? vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out
                                     : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep)
                                         ? vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out
                                         : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep)
                                             ? vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out
                                             : 0U))))),32);
    bufp->fullBit(oldp+1020,(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en));
    bufp->fullIData(oldp+1021,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_val_out
                                 : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep)
                                     ? vlSelfRef.top__DOT__npc_cpu__DOT___mem1_io_mem1_fwd_val_out
                                     : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep)
                                         ? vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_val_out
                                         : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep)
                                             ? vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_wb_fwd_val_out
                                             : 0U))))),32);
    bufp->fullBit(oldp+1022,((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__state) 
                               & (((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs1) 
                                   & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_0) 
                                      & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_1))) 
                                  | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_use_rs2) 
                                     & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_2) 
                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_2))))) 
                              | (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
                                    & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9) 
                                       & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_10))) 
                                   | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
                                      & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_9) 
                                         & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_8)))) 
                                  & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_rd_is_load) 
                                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___exu_io_exu_fwd_valid))) 
                                 | (((((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use) 
                                       & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6) 
                                          & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_7))) 
                                      | ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use) 
                                         & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_6) 
                                            & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT____VdfgRegularize_h64c7b595_0_5)))) 
                                     & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_mem2_fwd_valid)) 
                                        & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_load))) 
                                    | (((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs1_fwd_en)) 
                                        & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_6))) 
                                       | ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___hazard_unit_io_fs2_fwd_en)) 
                                          & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep) 
                                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5)))))))));
    bufp->fullBit(oldp+1023,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_0));
    bufp->fullBit(oldp+1024,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_1));
    bufp->fullBit(oldp+1025,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_2));
    bufp->fullBit(oldp+1026,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_3));
    bufp->fullBit(oldp+1027,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_4));
    bufp->fullBit(oldp+1028,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_5));
    bufp->fullBit(oldp+1029,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_6));
    bufp->fullBit(oldp+1030,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_7));
    bufp->fullBit(oldp+1031,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_8));
    bufp->fullBit(oldp+1032,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_9));
    bufp->fullBit(oldp+1033,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_10));
    bufp->fullBit(oldp+1034,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_11));
    bufp->fullBit(oldp+1035,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_12));
    bufp->fullBit(oldp+1036,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_13));
    bufp->fullBit(oldp+1037,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_14));
    bufp->fullBit(oldp+1038,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_15));
    bufp->fullBit(oldp+1039,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_16));
    bufp->fullBit(oldp+1040,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_17));
    bufp->fullBit(oldp+1041,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_18));
    bufp->fullBit(oldp+1042,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_19));
    bufp->fullBit(oldp+1043,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_20));
    bufp->fullBit(oldp+1044,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_21));
    bufp->fullBit(oldp+1045,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_22));
    bufp->fullBit(oldp+1046,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_23));
    bufp->fullBit(oldp+1047,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_24));
    bufp->fullBit(oldp+1048,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_25));
    bufp->fullBit(oldp+1049,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_26));
    bufp->fullBit(oldp+1050,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_27));
    bufp->fullBit(oldp+1051,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_28));
    bufp->fullBit(oldp+1052,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_29));
    bufp->fullBit(oldp+1053,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_30));
    bufp->fullBit(oldp+1054,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingValid_31));
    bufp->fullCData(oldp+1055,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_0),6);
    bufp->fullCData(oldp+1056,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_1),6);
    bufp->fullCData(oldp+1057,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_2),6);
    bufp->fullCData(oldp+1058,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_3),6);
    bufp->fullCData(oldp+1059,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_4),6);
    bufp->fullCData(oldp+1060,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_5),6);
    bufp->fullCData(oldp+1061,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_6),6);
    bufp->fullCData(oldp+1062,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_7),6);
    bufp->fullCData(oldp+1063,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_8),6);
    bufp->fullCData(oldp+1064,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_9),6);
    bufp->fullCData(oldp+1065,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_10),6);
    bufp->fullCData(oldp+1066,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_11),6);
    bufp->fullCData(oldp+1067,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_12),6);
    bufp->fullCData(oldp+1068,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_13),6);
    bufp->fullCData(oldp+1069,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_14),6);
    bufp->fullCData(oldp+1070,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_15),6);
    bufp->fullCData(oldp+1071,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_16),6);
    bufp->fullCData(oldp+1072,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_17),6);
    bufp->fullCData(oldp+1073,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_18),6);
    bufp->fullCData(oldp+1074,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_19),6);
    bufp->fullCData(oldp+1075,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_20),6);
    bufp->fullCData(oldp+1076,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_21),6);
    bufp->fullCData(oldp+1077,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_22),6);
    bufp->fullCData(oldp+1078,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_23),6);
    bufp->fullCData(oldp+1079,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_24),6);
    bufp->fullCData(oldp+1080,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_25),6);
    bufp->fullCData(oldp+1081,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_26),6);
    bufp->fullCData(oldp+1082,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_27),6);
    bufp->fullCData(oldp+1083,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_28),6);
    bufp->fullCData(oldp+1084,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_29),6);
    bufp->fullCData(oldp+1085,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_30),6);
    bufp->fullCData(oldp+1086,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__pendingTag_31),6);
    bufp->fullCData(oldp+1087,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp),6);
    bufp->fullBit(oldp+1088,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_0));
    bufp->fullBit(oldp+1089,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_use));
    bufp->fullBit(oldp+1090,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_use));
    bufp->fullBit(oldp+1091,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__exuHasRd));
    bufp->fullBit(oldp+1092,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem1HasRd));
    bufp->fullBit(oldp+1093,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__mem2HasRd));
    bufp->fullBit(oldp+1094,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__wbHasRd));
    bufp->fullBit(oldp+1095,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_dep));
    bufp->fullBit(oldp+1096,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem1_dep));
    bufp->fullBit(oldp+1097,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_mem2_dep));
    bufp->fullBit(oldp+1098,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_wb_dep));
    bufp->fullBit(oldp+1099,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs1_exu_ready));
    bufp->fullBit(oldp+1100,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_dep));
    bufp->fullBit(oldp+1101,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem1_dep));
    bufp->fullBit(oldp+1102,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_mem2_dep));
    bufp->fullBit(oldp+1103,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_wb_dep));
    bufp->fullBit(oldp+1104,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__rs2_exu_ready));
    bufp->fullBit(oldp+1105,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_1));
    bufp->fullBit(oldp+1106,(vlSelfRef.top__DOT__npc_cpu__DOT__hazard_unit__DOT__casez_tmp_2));
    bufp->fullBit(oldp+1107,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_1));
    bufp->fullBit(oldp+1108,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid) 
                              & ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__idu_io_stall)) 
                                 & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid))))));
    bufp->fullIData(oldp+1109,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pc_reg),32);
    bufp->fullBit(oldp+1110,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__io_inst_resp_ready_0));
    bufp->fullBit(oldp+1111,(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid));
    bufp->fullIData(oldp+1112,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24)
                                 ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg)),32);
    bufp->fullIData(oldp+1113,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_24)
                                 ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg)),32);
    bufp->fullBit(oldp+1114,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_0));
    bufp->fullBit(oldp+1115,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_1));
    bufp->fullBit(oldp+1116,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_2));
    bufp->fullBit(oldp+1117,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_3));
    bufp->fullBit(oldp+1118,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_4));
    bufp->fullBit(oldp+1119,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_5));
    bufp->fullBit(oldp+1120,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_6));
    bufp->fullBit(oldp+1121,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_7));
    bufp->fullBit(oldp+1122,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_8));
    bufp->fullBit(oldp+1123,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_9));
    bufp->fullBit(oldp+1124,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_10));
    bufp->fullBit(oldp+1125,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_11));
    bufp->fullBit(oldp+1126,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_12));
    bufp->fullBit(oldp+1127,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_13));
    bufp->fullBit(oldp+1128,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_14));
    bufp->fullBit(oldp+1129,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_15));
    bufp->fullBit(oldp+1130,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_16));
    bufp->fullBit(oldp+1131,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_17));
    bufp->fullBit(oldp+1132,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_18));
    bufp->fullBit(oldp+1133,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_19));
    bufp->fullBit(oldp+1134,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_20));
    bufp->fullBit(oldp+1135,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_21));
    bufp->fullBit(oldp+1136,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_22));
    bufp->fullBit(oldp+1137,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_23));
    bufp->fullBit(oldp+1138,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_24));
    bufp->fullBit(oldp+1139,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_25));
    bufp->fullBit(oldp+1140,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_26));
    bufp->fullBit(oldp+1141,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_27));
    bufp->fullBit(oldp+1142,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_28));
    bufp->fullBit(oldp+1143,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_29));
    bufp->fullBit(oldp+1144,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_30));
    bufp->fullBit(oldp+1145,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_31));
    bufp->fullBit(oldp+1146,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_32));
    bufp->fullBit(oldp+1147,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_33));
    bufp->fullBit(oldp+1148,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_34));
    bufp->fullBit(oldp+1149,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_35));
    bufp->fullBit(oldp+1150,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_36));
    bufp->fullBit(oldp+1151,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_37));
    bufp->fullBit(oldp+1152,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_38));
    bufp->fullBit(oldp+1153,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_39));
    bufp->fullBit(oldp+1154,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_40));
    bufp->fullBit(oldp+1155,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_41));
    bufp->fullBit(oldp+1156,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_42));
    bufp->fullBit(oldp+1157,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_43));
    bufp->fullBit(oldp+1158,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_44));
    bufp->fullBit(oldp+1159,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_45));
    bufp->fullBit(oldp+1160,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_46));
    bufp->fullBit(oldp+1161,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_47));
    bufp->fullBit(oldp+1162,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_48));
    bufp->fullBit(oldp+1163,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_49));
    bufp->fullBit(oldp+1164,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_50));
    bufp->fullBit(oldp+1165,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_51));
    bufp->fullBit(oldp+1166,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_52));
    bufp->fullBit(oldp+1167,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_53));
    bufp->fullBit(oldp+1168,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_54));
    bufp->fullBit(oldp+1169,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_55));
    bufp->fullBit(oldp+1170,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_56));
    bufp->fullBit(oldp+1171,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_57));
    bufp->fullBit(oldp+1172,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_58));
    bufp->fullBit(oldp+1173,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_59));
    bufp->fullBit(oldp+1174,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_60));
    bufp->fullBit(oldp+1175,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_61));
    bufp->fullBit(oldp+1176,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_62));
    bufp->fullBit(oldp+1177,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_0_63));
    bufp->fullBit(oldp+1178,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_0));
    bufp->fullBit(oldp+1179,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_1));
    bufp->fullBit(oldp+1180,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_2));
    bufp->fullBit(oldp+1181,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_3));
    bufp->fullBit(oldp+1182,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_4));
    bufp->fullBit(oldp+1183,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_5));
    bufp->fullBit(oldp+1184,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_6));
    bufp->fullBit(oldp+1185,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_7));
    bufp->fullBit(oldp+1186,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_8));
    bufp->fullBit(oldp+1187,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_9));
    bufp->fullBit(oldp+1188,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_10));
    bufp->fullBit(oldp+1189,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_11));
    bufp->fullBit(oldp+1190,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_12));
    bufp->fullBit(oldp+1191,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_13));
    bufp->fullBit(oldp+1192,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_14));
    bufp->fullBit(oldp+1193,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_15));
    bufp->fullBit(oldp+1194,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_16));
    bufp->fullBit(oldp+1195,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_17));
    bufp->fullBit(oldp+1196,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_18));
    bufp->fullBit(oldp+1197,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_19));
    bufp->fullBit(oldp+1198,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_20));
    bufp->fullBit(oldp+1199,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_21));
    bufp->fullBit(oldp+1200,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_22));
    bufp->fullBit(oldp+1201,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_23));
    bufp->fullBit(oldp+1202,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_24));
    bufp->fullBit(oldp+1203,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_25));
    bufp->fullBit(oldp+1204,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_26));
    bufp->fullBit(oldp+1205,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_27));
    bufp->fullBit(oldp+1206,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_28));
    bufp->fullBit(oldp+1207,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_29));
    bufp->fullBit(oldp+1208,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_30));
    bufp->fullBit(oldp+1209,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_31));
    bufp->fullBit(oldp+1210,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_32));
    bufp->fullBit(oldp+1211,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_33));
    bufp->fullBit(oldp+1212,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_34));
    bufp->fullBit(oldp+1213,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_35));
    bufp->fullBit(oldp+1214,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_36));
    bufp->fullBit(oldp+1215,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_37));
    bufp->fullBit(oldp+1216,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_38));
    bufp->fullBit(oldp+1217,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_39));
    bufp->fullBit(oldp+1218,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_40));
    bufp->fullBit(oldp+1219,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_41));
    bufp->fullBit(oldp+1220,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_42));
    bufp->fullBit(oldp+1221,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_43));
    bufp->fullBit(oldp+1222,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_44));
    bufp->fullBit(oldp+1223,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_45));
    bufp->fullBit(oldp+1224,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_46));
    bufp->fullBit(oldp+1225,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_47));
    bufp->fullBit(oldp+1226,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_48));
    bufp->fullBit(oldp+1227,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_49));
    bufp->fullBit(oldp+1228,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_50));
    bufp->fullBit(oldp+1229,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_51));
    bufp->fullBit(oldp+1230,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_52));
    bufp->fullBit(oldp+1231,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_53));
    bufp->fullBit(oldp+1232,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_54));
    bufp->fullBit(oldp+1233,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_55));
    bufp->fullBit(oldp+1234,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_56));
    bufp->fullBit(oldp+1235,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_57));
    bufp->fullBit(oldp+1236,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_58));
    bufp->fullBit(oldp+1237,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_59));
    bufp->fullBit(oldp+1238,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_60));
    bufp->fullBit(oldp+1239,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_61));
    bufp->fullBit(oldp+1240,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_62));
    bufp->fullBit(oldp+1241,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_1_63));
    bufp->fullBit(oldp+1242,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_0));
    bufp->fullBit(oldp+1243,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_1));
    bufp->fullBit(oldp+1244,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_2));
    bufp->fullBit(oldp+1245,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_3));
    bufp->fullBit(oldp+1246,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_4));
    bufp->fullBit(oldp+1247,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_5));
    bufp->fullBit(oldp+1248,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_6));
    bufp->fullBit(oldp+1249,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_7));
    bufp->fullBit(oldp+1250,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_8));
    bufp->fullBit(oldp+1251,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_9));
    bufp->fullBit(oldp+1252,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_10));
    bufp->fullBit(oldp+1253,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_11));
    bufp->fullBit(oldp+1254,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_12));
    bufp->fullBit(oldp+1255,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_13));
    bufp->fullBit(oldp+1256,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_14));
    bufp->fullBit(oldp+1257,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_15));
    bufp->fullBit(oldp+1258,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_16));
    bufp->fullBit(oldp+1259,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_17));
    bufp->fullBit(oldp+1260,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_18));
    bufp->fullBit(oldp+1261,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_19));
    bufp->fullBit(oldp+1262,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_20));
    bufp->fullBit(oldp+1263,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_21));
    bufp->fullBit(oldp+1264,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_22));
    bufp->fullBit(oldp+1265,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_23));
    bufp->fullBit(oldp+1266,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_24));
    bufp->fullBit(oldp+1267,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_25));
    bufp->fullBit(oldp+1268,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_26));
    bufp->fullBit(oldp+1269,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_27));
    bufp->fullBit(oldp+1270,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_28));
    bufp->fullBit(oldp+1271,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_29));
    bufp->fullBit(oldp+1272,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_30));
    bufp->fullBit(oldp+1273,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_31));
    bufp->fullBit(oldp+1274,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_32));
    bufp->fullBit(oldp+1275,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_33));
    bufp->fullBit(oldp+1276,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_34));
    bufp->fullBit(oldp+1277,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_35));
    bufp->fullBit(oldp+1278,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_36));
    bufp->fullBit(oldp+1279,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_37));
    bufp->fullBit(oldp+1280,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_38));
    bufp->fullBit(oldp+1281,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_39));
    bufp->fullBit(oldp+1282,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_40));
    bufp->fullBit(oldp+1283,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_41));
    bufp->fullBit(oldp+1284,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_42));
    bufp->fullBit(oldp+1285,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_43));
    bufp->fullBit(oldp+1286,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_44));
    bufp->fullBit(oldp+1287,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_45));
    bufp->fullBit(oldp+1288,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_46));
    bufp->fullBit(oldp+1289,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_47));
    bufp->fullBit(oldp+1290,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_48));
    bufp->fullBit(oldp+1291,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_49));
    bufp->fullBit(oldp+1292,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_50));
    bufp->fullBit(oldp+1293,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_51));
    bufp->fullBit(oldp+1294,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_52));
    bufp->fullBit(oldp+1295,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_53));
    bufp->fullBit(oldp+1296,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_54));
    bufp->fullBit(oldp+1297,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_55));
    bufp->fullBit(oldp+1298,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_56));
    bufp->fullBit(oldp+1299,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_57));
    bufp->fullBit(oldp+1300,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_58));
    bufp->fullBit(oldp+1301,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_59));
    bufp->fullBit(oldp+1302,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_60));
    bufp->fullBit(oldp+1303,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_61));
    bufp->fullBit(oldp+1304,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_62));
    bufp->fullBit(oldp+1305,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_2_63));
    bufp->fullBit(oldp+1306,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_0));
    bufp->fullBit(oldp+1307,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_1));
    bufp->fullBit(oldp+1308,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_2));
    bufp->fullBit(oldp+1309,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_3));
    bufp->fullBit(oldp+1310,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_4));
    bufp->fullBit(oldp+1311,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_5));
    bufp->fullBit(oldp+1312,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_6));
    bufp->fullBit(oldp+1313,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_7));
    bufp->fullBit(oldp+1314,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_8));
    bufp->fullBit(oldp+1315,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_9));
    bufp->fullBit(oldp+1316,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_10));
    bufp->fullBit(oldp+1317,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_11));
    bufp->fullBit(oldp+1318,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_12));
    bufp->fullBit(oldp+1319,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_13));
    bufp->fullBit(oldp+1320,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_14));
    bufp->fullBit(oldp+1321,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_15));
    bufp->fullBit(oldp+1322,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_16));
    bufp->fullBit(oldp+1323,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_17));
    bufp->fullBit(oldp+1324,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_18));
    bufp->fullBit(oldp+1325,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_19));
    bufp->fullBit(oldp+1326,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_20));
    bufp->fullBit(oldp+1327,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_21));
    bufp->fullBit(oldp+1328,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_22));
    bufp->fullBit(oldp+1329,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_23));
    bufp->fullBit(oldp+1330,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_24));
    bufp->fullBit(oldp+1331,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_25));
    bufp->fullBit(oldp+1332,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_26));
    bufp->fullBit(oldp+1333,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_27));
    bufp->fullBit(oldp+1334,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_28));
    bufp->fullBit(oldp+1335,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_29));
    bufp->fullBit(oldp+1336,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_30));
    bufp->fullBit(oldp+1337,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_31));
    bufp->fullBit(oldp+1338,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_32));
    bufp->fullBit(oldp+1339,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_33));
    bufp->fullBit(oldp+1340,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_34));
    bufp->fullBit(oldp+1341,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_35));
    bufp->fullBit(oldp+1342,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_36));
    bufp->fullBit(oldp+1343,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_37));
    bufp->fullBit(oldp+1344,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_38));
    bufp->fullBit(oldp+1345,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_39));
    bufp->fullBit(oldp+1346,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_40));
    bufp->fullBit(oldp+1347,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_41));
    bufp->fullBit(oldp+1348,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_42));
    bufp->fullBit(oldp+1349,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_43));
    bufp->fullBit(oldp+1350,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_44));
    bufp->fullBit(oldp+1351,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_45));
    bufp->fullBit(oldp+1352,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_46));
    bufp->fullBit(oldp+1353,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_47));
    bufp->fullBit(oldp+1354,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_48));
    bufp->fullBit(oldp+1355,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_49));
    bufp->fullBit(oldp+1356,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_50));
    bufp->fullBit(oldp+1357,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_51));
    bufp->fullBit(oldp+1358,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_52));
    bufp->fullBit(oldp+1359,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_53));
    bufp->fullBit(oldp+1360,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_54));
    bufp->fullBit(oldp+1361,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_55));
    bufp->fullBit(oldp+1362,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_56));
    bufp->fullBit(oldp+1363,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_57));
    bufp->fullBit(oldp+1364,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_58));
    bufp->fullBit(oldp+1365,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_59));
    bufp->fullBit(oldp+1366,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_60));
    bufp->fullBit(oldp+1367,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_61));
    bufp->fullBit(oldp+1368,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_62));
    bufp->fullBit(oldp+1369,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__valid_array_3_63));
    bufp->fullIData(oldp+1370,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_reg),21);
    bufp->fullCData(oldp+1371,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__index_reg),6);
    bufp->fullCData(oldp+1372,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__offset_reg),5);
    bufp->fullIData(oldp+1373,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_tag_reg),21);
    bufp->fullCData(oldp+1374,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_index_reg),6);
    bufp->fullCData(oldp+1375,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_offset_reg),5);
    bufp->fullIData(oldp+1376,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lk_pc_reg),32);
    bufp->fullIData(oldp+1377,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_0),21);
    bufp->fullIData(oldp+1378,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_1),21);
    bufp->fullIData(oldp+1379,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_2),21);
    bufp->fullIData(oldp+1380,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_tags_reg_3),21);
    bufp->fullIData(oldp+1381,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_0),32);
    bufp->fullIData(oldp+1382,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_1),32);
    bufp->fullIData(oldp+1383,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_2),32);
    bufp->fullIData(oldp+1384,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rd_words_reg_3),32);
    bufp->fullIData(oldp+1385,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__line_base),32);
    bufp->fullIData(oldp+1386,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_pc_reg),32);
    bufp->fullBit(oldp+1387,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__miss_cacheable_reg));
    bufp->fullIData(oldp+1388,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_inst_reg),32);
    bufp->fullIData(oldp+1389,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__resp_pc_reg),32);
    bufp->fullCData(oldp+1390,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__victim_way),2);
    bufp->fullCData(oldp+1391,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__refill_cnt),3);
    bufp->fullCData(oldp+1392,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state),3);
    bufp->fullBit(oldp+1393,((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__state))));
    bufp->fullSData(oldp+1394,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lookup_word_addr),9);
    bufp->fullBit(oldp+1395,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp));
    bufp->fullBit(oldp+1396,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit0));
    bufp->fullBit(oldp+1397,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_0));
    bufp->fullBit(oldp+1398,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit1));
    bufp->fullBit(oldp+1399,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_1));
    bufp->fullBit(oldp+1400,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit2));
    bufp->fullBit(oldp+1401,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__casez_tmp_2));
    bufp->fullBit(oldp+1402,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit3));
    bufp->fullBit(oldp+1403,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__hit));
    bufp->fullCData(oldp+1404,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__rand_way),2);
    bufp->fullIData(oldp+1405,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_en_d0)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT__Memory
                                [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_0_ext__DOT___R0_addr_d0]
                                 : 0U)),32);
    bufp->fullSData(oldp+1406,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT___GEN_13),9);
    bufp->fullIData(oldp+1407,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_en_d0)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT__Memory
                                [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_1_ext__DOT___R0_addr_d0]
                                 : 0U)),32);
    bufp->fullIData(oldp+1408,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_en_d0)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT__Memory
                                [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_2_ext__DOT___R0_addr_d0]
                                 : 0U)),32);
    bufp->fullIData(oldp+1409,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_en_d0)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT__Memory
                                [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__data_array_3_ext__DOT___R0_addr_d0]
                                 : 0U)),32);
    bufp->fullBit(oldp+1410,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_0));
    bufp->fullBit(oldp+1411,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_1));
    bufp->fullBit(oldp+1412,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_2));
    bufp->fullBit(oldp+1413,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_3));
    bufp->fullBit(oldp+1414,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_4));
    bufp->fullBit(oldp+1415,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_5));
    bufp->fullBit(oldp+1416,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_6));
    bufp->fullBit(oldp+1417,(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__lfsr_prng__DOT__state_7));
    bufp->fullIData(oldp+1418,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_en_d0)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT__Memory
                                [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_0_ext__DOT___R0_addr_d0]
                                 : 0U)),21);
    bufp->fullIData(oldp+1419,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_en_d0)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT__Memory
                                [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_1_ext__DOT___R0_addr_d0]
                                 : 0U)),21);
    bufp->fullIData(oldp+1420,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_en_d0)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT__Memory
                                [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_2_ext__DOT___R0_addr_d0]
                                 : 0U)),21);
    bufp->fullIData(oldp+1421,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_en_d0)
                                 ? vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT__Memory
                                [vlSelfRef.top__DOT__npc_cpu__DOT__icache1__DOT__tag_array_3_ext__DOT___R0_addr_d0]
                                 : 0U)),21);
    bufp->fullBit(oldp+1422,(vlSelfRef.top__DOT__npc_cpu__DOT___idu_io_in_ready));
    bufp->fullBit(oldp+1423,(((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__io_flush_0)) 
                              & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___icache1_io_fetch_resp_valid))));
    bufp->fullCData(oldp+1424,((0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1425,((0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1426,(((0U == (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                 >> 0xfU)))
                                 ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp)),32);
    bufp->fullIData(oldp+1427,(((0U == (0x1fU & (vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst 
                                                 >> 0x14U)))
                                 ? 0U : vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0)),32);
    bufp->fullIData(oldp+1428,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__imm_i),32);
    bufp->fullBit(oldp+1429,((0x17U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+1430,((0x37U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+1431,((0x13U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+1432,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_load));
    bufp->fullBit(oldp+1433,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srai));
    bufp->fullBit(oldp+1434,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_srli));
    bufp->fullBit(oldp+1435,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_slli));
    bufp->fullBit(oldp+1436,((0x33U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+1437,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_branch));
    bufp->fullBit(oldp+1438,(vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__is_store));
    bufp->fullBit(oldp+1439,((0x73U == (0x7fU & vlSelfRef.top__DOT__npc_cpu__DOT__idu__DOT__inst))));
    bufp->fullBit(oldp+1440,(vlSelfRef.top__DOT__npc_cpu__DOT___ifu2_io_in_ready));
    bufp->fullBit(oldp+1441,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__out_valid));
    bufp->fullBit(oldp+1442,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__req_valid));
    bufp->fullIData(oldp+1443,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_next_pc_reg),32);
    bufp->fullBit(oldp+1444,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__wait_pred));
    bufp->fullBit(oldp+1445,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__pred_valid));
    bufp->fullBit(oldp+1446,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu1__DOT__redirect_valid));
    bufp->fullBit(oldp+1447,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__waiting));
    bufp->fullIData(oldp+1448,(vlSelfRef.top__DOT__npc_cpu__DOT__ifu2__DOT__wait_pc_reg),32);
    bufp->fullBit(oldp+1449,((0U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state))));
    bufp->fullBit(oldp+1450,(((0U != (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state)) 
                              & ((1U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))
                                  ? ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent)) 
                                     & (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent))
                                  : (2U == (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state))))));
    bufp->fullBit(oldp+1451,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rd_en));
    bufp->fullCData(oldp+1452,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__load_tag),6);
    bufp->fullIData(oldp+1453,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1454,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_wen));
    bufp->fullSData(oldp+1455,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_waddr),12);
    bufp->fullIData(oldp+1456,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1457,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrw));
    bufp->fullBit(oldp+1458,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_csrrs));
    bufp->fullBit(oldp+1459,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_load));
    bufp->fullBit(oldp+1460,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_store));
    bufp->fullBit(oldp+1461,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lb));
    bufp->fullBit(oldp+1462,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lbu));
    bufp->fullBit(oldp+1463,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lh));
    bufp->fullBit(oldp+1464,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_lhu));
    bufp->fullBit(oldp+1465,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jalr));
    bufp->fullBit(oldp+1466,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_jal));
    bufp->fullIData(oldp+1467,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__rs2_data),32);
    bufp->fullBit(oldp+1468,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sw));
    bufp->fullBit(oldp+1469,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sb));
    bufp->fullBit(oldp+1470,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__is_sh));
    bufp->fullCData(oldp+1471,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__state),2);
    bufp->fullBit(oldp+1472,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__req_sent));
    bufp->fullBit(oldp+1473,(vlSelfRef.top__DOT__npc_cpu__DOT__mem1__DOT__out_sent));
    bufp->fullBit(oldp+1474,((1U & (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__state)))));
    bufp->fullBit(oldp+1475,(vlSelfRef.top__DOT__npc_cpu__DOT___mem2_io_out_valid));
    bufp->fullIData(oldp+1476,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__pc),32);
    bufp->fullIData(oldp+1477,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__inst),32);
    bufp->fullIData(oldp+1478,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__addr),32);
    bufp->fullIData(oldp+1479,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__mem_data),32);
    bufp->fullBit(oldp+1480,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_store));
    bufp->fullBit(oldp+1481,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jalr));
    bufp->fullBit(oldp+1482,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_jal));
    bufp->fullIData(oldp+1483,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1484,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_wen));
    bufp->fullSData(oldp+1485,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_waddr),12);
    bufp->fullIData(oldp+1486,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1487,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrw));
    bufp->fullBit(oldp+1488,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_csrrs));
    bufp->fullCData(oldp+1489,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__state),2);
    bufp->fullBit(oldp+1490,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lb));
    bufp->fullBit(oldp+1491,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lbu));
    bufp->fullBit(oldp+1492,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lh));
    bufp->fullBit(oldp+1493,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__is_lhu));
    bufp->fullCData(oldp+1494,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__casez_tmp),8);
    bufp->fullSData(oldp+1495,(vlSelfRef.top__DOT__npc_cpu__DOT__mem2__DOT__halfData),16);
    bufp->fullCData(oldp+1496,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_addr),5);
    bufp->fullIData(oldp+1497,(vlSelfRef.top__DOT__npc_cpu__DOT___wb_io_rd_data),32);
    bufp->fullBit(oldp+1498,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__rd_en));
    bufp->fullIData(oldp+1499,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__regs_0),32);
    bufp->fullIData(oldp+1500,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp),32);
    bufp->fullIData(oldp+1501,(vlSelfRef.top__DOT__npc_cpu__DOT__regfile__DOT__casez_tmp_0),32);
    bufp->fullIData(oldp+1502,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__addr),32);
    bufp->fullIData(oldp+1503,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__mem_data),32);
    bufp->fullBit(oldp+1504,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_load));
    bufp->fullBit(oldp+1505,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_store));
    bufp->fullBit(oldp+1506,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jalr));
    bufp->fullBit(oldp+1507,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_jal));
    bufp->fullIData(oldp+1508,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__csr_rdata),32);
    bufp->fullBit(oldp+1509,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrw));
    bufp->fullBit(oldp+1510,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__is_csrrs));
    bufp->fullCData(oldp+1511,(vlSelfRef.top__DOT__npc_cpu__DOT__wb__DOT__dbgFollowCnt),5);
    bufp->fullBit(oldp+1512,(vlSelfRef.clock));
    bufp->fullBit(oldp+1513,(vlSelfRef.reset));
    bufp->fullIData(oldp+1514,(vlSelfRef.io_pc),32);
    bufp->fullIData(oldp+1515,(vlSelfRef.io_inst),32);
    bufp->fullIData(oldp+1516,(vlSelfRef.io_commit_addr),32);
    bufp->fullBit(oldp+1517,(vlSelfRef.io_halt_ret));
    bufp->fullBit(oldp+1518,(vlSelfRef.io_non_inst));
    bufp->fullBit(oldp+1519,(vlSelfRef.io_interrupt));
    bufp->fullBit(oldp+1520,(vlSelfRef.io_master_awready));
    bufp->fullBit(oldp+1521,(vlSelfRef.io_master_awvalid));
    bufp->fullIData(oldp+1522,(vlSelfRef.io_master_awaddr),32);
    bufp->fullCData(oldp+1523,(vlSelfRef.io_master_awid),4);
    bufp->fullCData(oldp+1524,(vlSelfRef.io_master_awlen),8);
    bufp->fullCData(oldp+1525,(vlSelfRef.io_master_awsize),3);
    bufp->fullCData(oldp+1526,(vlSelfRef.io_master_awburst),2);
    bufp->fullBit(oldp+1527,(vlSelfRef.io_master_wready));
    bufp->fullBit(oldp+1528,(vlSelfRef.io_master_wvalid));
    bufp->fullIData(oldp+1529,(vlSelfRef.io_master_wdata),32);
    bufp->fullCData(oldp+1530,(vlSelfRef.io_master_wstrb),4);
    bufp->fullBit(oldp+1531,(vlSelfRef.io_master_wlast));
    bufp->fullBit(oldp+1532,(vlSelfRef.io_master_bready));
    bufp->fullBit(oldp+1533,(vlSelfRef.io_master_bvalid));
    bufp->fullCData(oldp+1534,(vlSelfRef.io_master_bresp),2);
    bufp->fullCData(oldp+1535,(vlSelfRef.io_master_bid),4);
    bufp->fullBit(oldp+1536,(vlSelfRef.io_master_arready));
    bufp->fullBit(oldp+1537,(vlSelfRef.io_master_arvalid));
    bufp->fullIData(oldp+1538,(vlSelfRef.io_master_araddr),32);
    bufp->fullCData(oldp+1539,(vlSelfRef.io_master_arid),4);
    bufp->fullCData(oldp+1540,(vlSelfRef.io_master_arlen),8);
    bufp->fullCData(oldp+1541,(vlSelfRef.io_master_arsize),3);
    bufp->fullCData(oldp+1542,(vlSelfRef.io_master_arburst),2);
    bufp->fullBit(oldp+1543,(vlSelfRef.io_master_rready));
    bufp->fullBit(oldp+1544,(vlSelfRef.io_master_rvalid));
    bufp->fullCData(oldp+1545,(vlSelfRef.io_master_rresp),2);
    bufp->fullIData(oldp+1546,(vlSelfRef.io_master_rdata),32);
    bufp->fullBit(oldp+1547,(vlSelfRef.io_master_rlast));
    bufp->fullCData(oldp+1548,(vlSelfRef.io_master_rid),4);
    bufp->fullBit(oldp+1549,(vlSelfRef.io_slave_awready));
    bufp->fullBit(oldp+1550,(vlSelfRef.io_slave_awvalid));
    bufp->fullIData(oldp+1551,(vlSelfRef.io_slave_awaddr),32);
    bufp->fullCData(oldp+1552,(vlSelfRef.io_slave_awid),4);
    bufp->fullCData(oldp+1553,(vlSelfRef.io_slave_awlen),8);
    bufp->fullCData(oldp+1554,(vlSelfRef.io_slave_awsize),3);
    bufp->fullCData(oldp+1555,(vlSelfRef.io_slave_awburst),2);
    bufp->fullBit(oldp+1556,(vlSelfRef.io_slave_wready));
    bufp->fullBit(oldp+1557,(vlSelfRef.io_slave_wvalid));
    bufp->fullIData(oldp+1558,(vlSelfRef.io_slave_wdata),32);
    bufp->fullCData(oldp+1559,(vlSelfRef.io_slave_wstrb),4);
    bufp->fullBit(oldp+1560,(vlSelfRef.io_slave_wlast));
    bufp->fullBit(oldp+1561,(vlSelfRef.io_slave_bready));
    bufp->fullBit(oldp+1562,(vlSelfRef.io_slave_bvalid));
    bufp->fullCData(oldp+1563,(vlSelfRef.io_slave_bresp),2);
    bufp->fullCData(oldp+1564,(vlSelfRef.io_slave_bid),4);
    bufp->fullBit(oldp+1565,(vlSelfRef.io_slave_arready));
    bufp->fullBit(oldp+1566,(vlSelfRef.io_slave_arvalid));
    bufp->fullIData(oldp+1567,(vlSelfRef.io_slave_araddr),32);
    bufp->fullCData(oldp+1568,(vlSelfRef.io_slave_arid),4);
    bufp->fullCData(oldp+1569,(vlSelfRef.io_slave_arlen),8);
    bufp->fullCData(oldp+1570,(vlSelfRef.io_slave_arsize),3);
    bufp->fullCData(oldp+1571,(vlSelfRef.io_slave_arburst),2);
    bufp->fullBit(oldp+1572,(vlSelfRef.io_slave_rready));
    bufp->fullBit(oldp+1573,(vlSelfRef.io_slave_rvalid));
    bufp->fullCData(oldp+1574,(vlSelfRef.io_slave_rresp),2);
    bufp->fullIData(oldp+1575,(vlSelfRef.io_slave_rdata),32);
    bufp->fullBit(oldp+1576,(vlSelfRef.io_slave_rlast));
    bufp->fullCData(oldp+1577,(vlSelfRef.io_slave_rid),4);
    bufp->fullBit(oldp+1578,(vlSelfRef.io_halt));
    bufp->fullIData(oldp+1579,(vlSelfRef.io_gpr_0),32);
    bufp->fullIData(oldp+1580,(vlSelfRef.io_gpr_1),32);
    bufp->fullIData(oldp+1581,(vlSelfRef.io_gpr_2),32);
    bufp->fullIData(oldp+1582,(vlSelfRef.io_gpr_3),32);
    bufp->fullIData(oldp+1583,(vlSelfRef.io_gpr_4),32);
    bufp->fullIData(oldp+1584,(vlSelfRef.io_gpr_5),32);
    bufp->fullIData(oldp+1585,(vlSelfRef.io_gpr_6),32);
    bufp->fullIData(oldp+1586,(vlSelfRef.io_gpr_7),32);
    bufp->fullIData(oldp+1587,(vlSelfRef.io_gpr_8),32);
    bufp->fullIData(oldp+1588,(vlSelfRef.io_gpr_9),32);
    bufp->fullIData(oldp+1589,(vlSelfRef.io_gpr_10),32);
    bufp->fullIData(oldp+1590,(vlSelfRef.io_gpr_11),32);
    bufp->fullIData(oldp+1591,(vlSelfRef.io_gpr_12),32);
    bufp->fullIData(oldp+1592,(vlSelfRef.io_gpr_13),32);
    bufp->fullIData(oldp+1593,(vlSelfRef.io_gpr_14),32);
    bufp->fullIData(oldp+1594,(vlSelfRef.io_gpr_15),32);
    bufp->fullIData(oldp+1595,(vlSelfRef.io_gpr_16),32);
    bufp->fullIData(oldp+1596,(vlSelfRef.io_gpr_17),32);
    bufp->fullIData(oldp+1597,(vlSelfRef.io_gpr_18),32);
    bufp->fullIData(oldp+1598,(vlSelfRef.io_gpr_19),32);
    bufp->fullIData(oldp+1599,(vlSelfRef.io_gpr_20),32);
    bufp->fullIData(oldp+1600,(vlSelfRef.io_gpr_21),32);
    bufp->fullIData(oldp+1601,(vlSelfRef.io_gpr_22),32);
    bufp->fullIData(oldp+1602,(vlSelfRef.io_gpr_23),32);
    bufp->fullIData(oldp+1603,(vlSelfRef.io_gpr_24),32);
    bufp->fullIData(oldp+1604,(vlSelfRef.io_gpr_25),32);
    bufp->fullIData(oldp+1605,(vlSelfRef.io_gpr_26),32);
    bufp->fullIData(oldp+1606,(vlSelfRef.io_gpr_27),32);
    bufp->fullIData(oldp+1607,(vlSelfRef.io_gpr_28),32);
    bufp->fullIData(oldp+1608,(vlSelfRef.io_gpr_29),32);
    bufp->fullIData(oldp+1609,(vlSelfRef.io_gpr_30),32);
    bufp->fullIData(oldp+1610,(vlSelfRef.io_gpr_31),32);
    bufp->fullBit(oldp+1611,(vlSelfRef.io_difftest_valid));
    bufp->fullBit(oldp+1612,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_0) 
                              & (IData)(vlSelfRef.io_master_awready))));
    bufp->fullBit(oldp+1613,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                              & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                                  ? (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                                  : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                                     & (IData)(vlSelfRef.io_master_arready))))));
    bufp->fullIData(oldp+1614,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT___GEN_7)
                                 ? 0U : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_clint)
                                          ? ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state)
                                              ? ((0x200bff8U 
                                                  == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                                  ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_low
                                                  : 
                                                 ((0x200bffcU 
                                                   == vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__addr_reg)
                                                   ? vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__mtime_high
                                                   : 0U))
                                              : 0U)
                                          : ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__using_ifu)
                                              ? 0U : vlSelfRef.io_master_rdata)))),32);
    bufp->fullBit(oldp+1615,(((IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_mem_master_io_master_arvalid) 
                              & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT____VdfgRegularize_h24e09026_0_5) 
                                 & ((IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_arbiter__DOT__memClintRead)
                                     ? (~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT__axi_clint_slave__DOT__state))
                                     : ((~ (IData)(vlSelfRef.top__DOT__npc_cpu__DOT___axi_ifu_master_io_master_arvalid)) 
                                        & (IData)(vlSelfRef.io_master_arready)))))));
}
