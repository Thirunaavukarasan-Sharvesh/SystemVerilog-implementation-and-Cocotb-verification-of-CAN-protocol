// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+0,(vlSymsp->TOP__top__DOT__vif.frame_in),81);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__top__DOT__vif.rst_n));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__top__DOT__vif.valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+5,(vlSelf->top__DOT____Vcellout__dut__valid_out));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__dut__DOT__dvalid));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__dut__DOT__crc_cap_sig));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__dut__DOT__crc_valid_rsp));
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__dut__DOT__crc_value),15);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__state),2);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__counter_b),7);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__x1__DOT__state),2);
        bufp->chgSData(oldp+13,(vlSelf->top__DOT__dut__DOT__x1__DOT__lfsr_out_int),15);
    }
    bufp->chgBit(oldp+14,(vlSelf->top__DOT__clk));
    bufp->chgBit(oldp+15,(vlSelf->top__DOT____Vcellout__dut__bit_out));
    bufp->chgBit(oldp+16,(vlSelf->top__DOT__dut__DOT__crc_init_sig));
    bufp->chgCData(oldp+17,(vlSelf->top__DOT__dut__DOT__next_state),2);
    bufp->chgBit(oldp+18,(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback));
    bufp->chgSData(oldp+19,(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc),15);
    bufp->chgBit(oldp+20,(vlSymsp->TOP__top__DOT__vif.clk));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
