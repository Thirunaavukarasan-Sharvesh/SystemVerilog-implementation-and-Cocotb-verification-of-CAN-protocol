// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgWData(oldp+0,(vlSelfRef.top__DOT__next_frame),110);
        bufp->chgWData(oldp+4,(vlSelfRef.top__DOT__raw_frame),110);
        bufp->chgIData(oldp+8,(vlSelfRef.top__DOT__raw_idx),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+9,(vlSelfRef.top__DOT__out_mon__DOT__bit_vector),110);
        bufp->chgWData(oldp+13,(vlSelfRef.top__DOT__out_mon__DOT__next_vector),110);
        bufp->chgWData(oldp+17,(vlSymsp->TOP__top__DOT__vif.frame),110);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__top__DOT__vif.frame_done));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT____Vcellout__dut__bit_out));
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT____Vcellout__dut__valid_out));
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT____Vcellout__dut__tx_ready));
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__dut__DOT__dvalid));
        bufp->chgBit(oldp+26,(vlSelfRef.top__DOT__dut__DOT__crc_cap_sig));
        bufp->chgBit(oldp+27,(vlSelfRef.top__DOT__dut__DOT__crc_valid_rsp));
        bufp->chgSData(oldp+28,(vlSelfRef.top__DOT__dut__DOT__crc_value),15);
        bufp->chgCData(oldp+29,(vlSelfRef.top__DOT__dut__DOT__state),2);
        bufp->chgCData(oldp+30,(vlSelfRef.top__DOT__dut__DOT__counter_b),7);
        bufp->chgWData(oldp+31,(vlSelfRef.top__DOT__dut__DOT__frame_reg),81);
        bufp->chgCData(oldp+34,(vlSelfRef.top__DOT__dut__DOT__x1__DOT__state),2);
        bufp->chgSData(oldp+35,(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int),15);
        bufp->chgBit(oldp+36,(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback));
        bufp->chgSData(oldp+37,((((((8U & ((0x003ffff8U 
                                            & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                               >> 0x0000000aU)) 
                                           ^ ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                                              << 3U))) 
                                    | (7U & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                             >> 0x0000000aU))) 
                                   << 0x0000000bU) 
                                  | (((8U & ((0x03fffff8U 
                                              & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                 >> 6U)) 
                                             ^ ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                                                << 3U))) 
                                      | ((4U & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                >> 6U)) 
                                         | (3U & (((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                   >> 6U) 
                                                  ^ 
                                                  (- (IData)((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))))))) 
                                     << 7U)) | ((((0x0000000cU 
                                                   & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                      >> 2U)) 
                                                  | (3U 
                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                         >> 2U) 
                                                        ^ 
                                                        (- (IData)((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback)))))) 
                                                 << 3U) 
                                                | ((6U 
                                                    & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))))),15);
        bufp->chgBit(oldp+38,(vlSymsp->TOP__top__DOT__vif.tx_ready));
    }
    bufp->chgBit(oldp+39,(vlSelfRef.top__DOT__clk));
    bufp->chgBit(oldp+40,(vlSymsp->TOP__top__DOT__vif.rst_n));
    bufp->chgBit(oldp+41,(vlSelfRef.top__DOT__dut__DOT__crc_init_sig));
    bufp->chgCData(oldp+42,(vlSelfRef.top__DOT__dut__DOT__next_state),2);
    bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__out_mon__DOT__bit_index),32);
    bufp->chgBit(oldp+44,(vlSymsp->TOP__top__DOT__vif.clk));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
