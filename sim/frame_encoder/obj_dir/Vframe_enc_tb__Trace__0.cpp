// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vframe_enc_tb__Syms.h"


void Vframe_enc_tb___024root__trace_chg_0_sub_0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vframe_enc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_chg_0\n"); );
    // Body
    Vframe_enc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vframe_enc_tb___024root*>(voidSelf);
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vframe_enc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vframe_enc_tb___024root__trace_chg_0_sub_0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_chg_0_sub_0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.frame_enc_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.frame_enc_tb__DOT__valid));
        bufp->chgWData(oldp+2,(vlSelfRef.frame_enc_tb__DOT__frame_in),81);
        bufp->chgIData(oldp+5,(vlSelfRef.frame_enc_tb__DOT__fd),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+6,(vlSelfRef.frame_enc_tb__DOT__tx_ready));
        bufp->chgBit(oldp+7,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_valid_rsp));
        bufp->chgSData(oldp+8,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_value),15);
        bufp->chgWData(oldp+9,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg),81);
        bufp->chgCData(oldp+12,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__state),2);
        bufp->chgSData(oldp+13,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int),15);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+14,(vlSelfRef.frame_enc_tb__DOT__bit_out));
        bufp->chgBit(oldp+15,(vlSelfRef.frame_enc_tb__DOT__valid_out));
        bufp->chgBit(oldp+16,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__dvalid));
        bufp->chgBit(oldp+17,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_cap_sig));
        bufp->chgCData(oldp+18,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state),2);
        bufp->chgCData(oldp+19,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b),7);
        bufp->chgBit(oldp+20,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback));
    }
    bufp->chgBit(oldp+21,(vlSelfRef.frame_enc_tb__DOT__clk));
    bufp->chgIData(oldp+22,(vlSelfRef.frame_enc_tb__DOT__bit_cnt),32);
    bufp->chgBit(oldp+23,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_init_sig));
    bufp->chgCData(oldp+24,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__next_state),2);
    bufp->chgSData(oldp+25,((((((8U & ((0x003ffff8U 
                                        & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                           >> 0x0000000aU)) 
                                       ^ ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                                          << 3U))) 
                                | (7U & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                         >> 0x0000000aU))) 
                               << 0x0000000bU) | ((
                                                   (8U 
                                                    & ((0x03fffff8U 
                                                        & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                           >> 6U)) 
                                                       ^ 
                                                       ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                                                        << 3U))) 
                                                   | ((4U 
                                                       & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                          >> 6U)) 
                                                      | (3U 
                                                         & (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                             >> 6U) 
                                                            ^ 
                                                            (- (IData)((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))))))) 
                                                  << 7U)) 
                             | ((((0x0000000cU & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                  >> 2U)) 
                                  | (3U & (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                            >> 2U) 
                                           ^ (- (IData)((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback)))))) 
                                 << 3U) | ((6U & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))))),15);
}

void Vframe_enc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_cleanup\n"); );
    // Body
    Vframe_enc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vframe_enc_tb___024root*>(voidSelf);
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
