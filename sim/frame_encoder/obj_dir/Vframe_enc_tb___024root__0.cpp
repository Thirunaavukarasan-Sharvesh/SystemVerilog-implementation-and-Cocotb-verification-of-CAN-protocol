// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vframe_enc_tb.h for the primary calling header

#include "Vframe_enc_tb__pch.h"

VlCoroutine Vframe_enc_tb___024root___eval_initial__TOP__Vtiming__0(Vframe_enc_tb___024root* vlSelf);
VlCoroutine Vframe_enc_tb___024root___eval_initial__TOP__Vtiming__1(Vframe_enc_tb___024root* vlSelf);

void Vframe_enc_tb___024root___eval_initial(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_initial\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vframe_enc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vframe_enc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vframe_enc_tb___024root____VbeforeTrig_h0723a778__0(Vframe_enc_tb___024root* vlSelf, const char* __VeventDescription);
void Vframe_enc_tb___024root____VbeforeTrig_hb73594cb__0(Vframe_enc_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vframe_enc_tb___024root___eval_initial__TOP__Vtiming__0(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ frame_enc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    frame_enc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.frame_enc_tb__DOT__clk = 0U;
    vlSelfRef.frame_enc_tb__DOT__rst_n = 0U;
    vlSelfRef.frame_enc_tb__DOT__valid = 0U;
    vlSelfRef.frame_enc_tb__DOT__bit_cnt = 0U;
    vlSelfRef.frame_enc_tb__DOT__fd = VL_FOPEN_NN("frame_encoder.log"s
                                                  , "w"s);
    ;
    frame_enc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, frame_enc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vframe_enc_tb___024root____VbeforeTrig_h0723a778__0(vlSelf, 
                                                            "@(posedge frame_enc_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_h0723a778__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge frame_enc_tb.clk)", 
                                                             "test.sv", 
                                                             40);
        frame_enc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (frame_enc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.frame_enc_tb__DOT__rst_n = 1U;
    while ((1U & (~ (IData)(vlSelfRef.frame_enc_tb__DOT__tx_ready)))) {
        Vframe_enc_tb___024root____VbeforeTrig_hb73594cb__0(vlSelf, 
                                                            "@( frame_enc_tb.tx_ready)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hb73594cb__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( frame_enc_tb.tx_ready)", 
                                                             "test.sv", 
                                                             43);
    }
    vlSelfRef.frame_enc_tb__DOT__frame_in[0U] = 0x67986adfU;
    vlSelfRef.frame_enc_tb__DOT__frame_in[1U] = 0xbc047f5cU;
    vlSelfRef.frame_enc_tb__DOT__frame_in[2U] = 0x0001f1c8U;
    VL_WRITEF_NX("Driving Frame\nID   = %03x\nRTR  = %0b\nIDE  = %0b\nDLC  = %0#\nDATA = %016x\n",0,
                 11,(0x000007ffU & (vlSelfRef.frame_enc_tb__DOT__frame_in[2U] 
                                    >> 6U)),1,(1U & 
                                               (vlSelfRef.frame_enc_tb__DOT__frame_in[2U] 
                                                >> 5U)),
                 1,(1U & (vlSelfRef.frame_enc_tb__DOT__frame_in[2U] 
                          >> 4U)),4,(0x0000000fU & vlSelfRef.frame_enc_tb__DOT__frame_in[2U]),
                 64,(((QData)((IData)(vlSelfRef.frame_enc_tb__DOT__frame_in[1U])) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.frame_enc_tb__DOT__frame_in[0U]))));
    vlSelfRef.frame_enc_tb__DOT__valid = 1U;
    Vframe_enc_tb___024root____VbeforeTrig_h0723a778__0(vlSelf, 
                                                        "@(posedge frame_enc_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0723a778__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge frame_enc_tb.clk)", 
                                                         "test.sv", 
                                                         59);
    vlSelfRef.frame_enc_tb__DOT__valid = 0U;
    while ((1U & (~ (IData)(vlSelfRef.frame_enc_tb__DOT__tx_ready)))) {
        Vframe_enc_tb___024root____VbeforeTrig_hb73594cb__0(vlSelf, 
                                                            "@( frame_enc_tb.tx_ready)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hb73594cb__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( frame_enc_tb.tx_ready)", 
                                                             "test.sv", 
                                                             62);
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "test.sv", 
                                         64);
    VL_FINISH_MT("test.sv", 66, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vframe_enc_tb___024root___eval_initial__TOP__Vtiming__1(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "test.sv", 
                                             29);
        vlSelfRef.frame_enc_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.frame_enc_tb__DOT__clk)));
    }
    co_return;
}

void Vframe_enc_tb___024root___eval_triggers_vec__act(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_triggers_vec__act\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.frame_enc_tb__DOT__tx_ready) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__tx_ready__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.frame_enc_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.frame_enc_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__clk__0 
        = vlSelfRef.frame_enc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__rst_n__0 
        = vlSelfRef.frame_enc_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__tx_ready__0 
        = vlSelfRef.frame_enc_tb__DOT__tx_ready;
}

bool Vframe_enc_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*1:0*/, 1024> Vframe_enc_tb__ConstPool__TABLE_hc67e56fa_0;

void Vframe_enc_tb___024root___act_comb__TOP__0(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___act_comb__TOP__0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_init_sig = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state))) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_init_sig = 0U;
        } else if (vlSelfRef.frame_enc_tb__DOT__valid) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_init_sig = 1U;
        }
    }
    __Vtableidx1 = (((IData)(vlSelfRef.frame_enc_tb__DOT__valid) 
                     << 9U) | (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b) 
                                << 2U) | (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state)));
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__next_state 
        = Vframe_enc_tb__ConstPool__TABLE_hc67e56fa_0
        [__Vtableidx1];
}

void Vframe_enc_tb___024root___eval_act(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_act\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vframe_enc_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*6:0*/, 1024> Vframe_enc_tb__ConstPool__TABLE_h78e34059_0;

void Vframe_enc_tb___024root___nba_sequent__TOP__0(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___nba_sequent__TOP__0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state;
    __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state = 0;
    // Body
    __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state 
        = vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__state;
    vlSelfRef.__Vdly__frame_enc_tb__DOT__dut__DOT__counter_b 
        = vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b;
    __Vtableidx2 = (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b) 
                     << 3U) | (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state) 
                                << 1U) | (IData)(vlSelfRef.frame_enc_tb__DOT__rst_n)));
    vlSelfRef.__Vdly__frame_enc_tb__DOT__dut__DOT__counter_b 
        = Vframe_enc_tb__ConstPool__TABLE_h78e34059_0
        [__Vtableidx2];
    if (vlSelfRef.frame_enc_tb__DOT__rst_n) {
        vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_valid_rsp = 0U;
        if ((0U == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__state))) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_valid_rsp = 0U;
            if (vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_init_sig) {
                __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__state))) {
            if (vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_cap_sig) {
                vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_value 
                    = vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int;
                vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_valid_rsp = 1U;
                __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__state))) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_valid_rsp = 0U;
            __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state = 0U;
        } else {
            __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state = 0U;
        }
        if (((0U == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state)) 
             & (IData)(vlSelfRef.frame_enc_tb__DOT__valid))) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg[0U] 
                = vlSelfRef.frame_enc_tb__DOT__frame_in[0U];
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg[1U] 
                = vlSelfRef.frame_enc_tb__DOT__frame_in[1U];
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg[2U] 
                = vlSelfRef.frame_enc_tb__DOT__frame_in[2U];
            vlSelfRef.frame_enc_tb__DOT__tx_ready = 0U;
        } else if (((3U == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state)) 
                    & (0x0cU == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))) {
            vlSelfRef.frame_enc_tb__DOT__tx_ready = 1U;
        }
        if (vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_init_sig) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int = 0U;
        } else if (vlSelfRef.frame_enc_tb__DOT__dut__DOT__dvalid) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int 
                = vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc;
        }
    } else {
        __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state = 0U;
        vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_value = 0U;
        vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_valid_rsp = 0U;
        vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg[0U] = 0U;
        vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg[1U] = 0U;
        vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg[2U] = 0U;
        vlSelfRef.frame_enc_tb__DOT__tx_ready = 1U;
        vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int = 0U;
    }
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__state 
        = __Vdly__frame_enc_tb__DOT__dut__DOT__x1__DOT__state;
}

void Vframe_enc_tb___024root___nba_sequent__TOP__1(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___nba_sequent__TOP__1\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.frame_enc_tb__DOT__valid_out))) {
        VL_FWRITEF_NX(vlSelfRef.frame_enc_tb__DOT__fd,"%03d  state=%0# counter=%02# bit=%0b\n",0,
                      32,vlSelfRef.frame_enc_tb__DOT__bit_cnt,
                      2,(IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state),
                      7,vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b,
                      1,(IData)(vlSelfRef.frame_enc_tb__DOT__bit_out));
        vlSelfRef.frame_enc_tb__DOT__bit_cnt = ((IData)(1U) 
                                                + vlSelfRef.frame_enc_tb__DOT__bit_cnt);
    }
}

void Vframe_enc_tb___024root___nba_sequent__TOP__2(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___nba_sequent__TOP__2\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b 
        = vlSelfRef.__Vdly__frame_enc_tb__DOT__dut__DOT__counter_b;
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__state = 
        ((IData)(vlSelfRef.frame_enc_tb__DOT__rst_n)
          ? (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__next_state)
          : 0U);
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__dvalid = 0U;
    vlSelfRef.frame_enc_tb__DOT__valid_out = 0U;
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_cap_sig = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state))) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__dvalid = 1U;
            if ((0x51U == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b))) {
                vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_cap_sig = 1U;
            }
        }
    }
    vlSelfRef.frame_enc_tb__DOT__bit_out = 1U;
    if ((2U & (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state))) {
        vlSelfRef.frame_enc_tb__DOT__valid_out = 1U;
        vlSelfRef.frame_enc_tb__DOT__bit_out = ((1U 
                                                 & (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state)) 
                                                || ((0x0eU 
                                                     >= 
                                                     (0x0000000fU 
                                                      & ((IData)(0x0eU) 
                                                         - (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_value) 
                                                           >> 
                                                           (0x0000000fU 
                                                            & ((IData)(0x0eU) 
                                                               - (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))))));
    } else if ((1U & (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state))) {
        vlSelfRef.frame_enc_tb__DOT__valid_out = 1U;
        if ((0U == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b))) {
            vlSelfRef.frame_enc_tb__DOT__bit_out = 0U;
        } else if (((1U <= (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)) 
                    & (0x0bU >= (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))) {
            vlSelfRef.frame_enc_tb__DOT__bit_out = 
                (1U & (vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg
                       [(((IData)(0x00000046U) + (0x0000000fU 
                                                  & ((IData)(0x0bU) 
                                                     - (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))) 
                         >> 5U)] >> (0x0000001fU & 
                                     ((IData)(0x00000046U) 
                                      + (0x0000000fU 
                                         & ((IData)(0x0bU) 
                                            - (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))))));
        } else if ((0x0cU == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b))) {
            vlSelfRef.frame_enc_tb__DOT__bit_out = 
                (1U & (vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg[2U] 
                       >> 5U));
        } else if ((0x0dU == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b))) {
            vlSelfRef.frame_enc_tb__DOT__bit_out = 
                (1U & (vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg[2U] 
                       >> 4U));
        } else if (((0x0eU <= (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)) 
                    & (0x11U >= (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))) {
            vlSelfRef.frame_enc_tb__DOT__bit_out = 
                (1U & (vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg
                       [(((IData)(0x00000040U) + (3U 
                                                  & ((IData)(1U) 
                                                     - (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))) 
                         >> 5U)] >> (0x0000001fU & 
                                     ((IData)(0x00000040U) 
                                      + (3U & ((IData)(1U) 
                                               - (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))))));
        } else if (((0x12U <= (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)) 
                    & (0x51U >= (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))) {
            vlSelfRef.frame_enc_tb__DOT__bit_out = 
                (1U & (vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg
                       [(1U & (((IData)(0x11U) - (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)) 
                               >> 5U))] >> (0x0000001fU 
                                            & ((IData)(0x11U) 
                                               - (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b)))));
        }
    }
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback 
        = ((IData)(vlSelfRef.frame_enc_tb__DOT__bit_out) 
           ^ ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
              >> 0x0000000eU));
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = (((((8U & ((0x003ffff8U & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                     >> 0x0000000aU)) 
                     ^ ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                        << 3U))) | (7U & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                          >> 0x0000000aU))) 
             << 0x0000000bU) | (((8U & ((0x03fffff8U 
                                         & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                            >> 6U)) 
                                        ^ ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                                           << 3U))) 
                                 | ((4U & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                           >> 6U)) 
                                    | (3U & (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                              >> 6U) 
                                             ^ (- (IData)((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))))))) 
                                << 7U)) | ((((0x0000000cU 
                                              & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                 >> 2U)) 
                                             | (3U 
                                                & (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                    >> 2U) 
                                                   ^ 
                                                   (- (IData)((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback)))))) 
                                            << 3U) 
                                           | ((6U & 
                                               ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                << 1U)) 
                                              | (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))));
}

void Vframe_enc_tb___024root___eval_nba(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_nba\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vframe_enc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vframe_enc_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vframe_enc_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vframe_enc_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vframe_enc_tb___024root___timing_ready(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___timing_ready\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0723a778__0.ready("@(posedge frame_enc_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb73594cb__0.ready("@( frame_enc_tb.tx_ready)");
    }
}

void Vframe_enc_tb___024root___timing_resume(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___timing_resume\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h0723a778__0.moveToResumeQueue(
                                                          "@(posedge frame_enc_tb.clk)");
    vlSelfRef.__VtrigSched_hb73594cb__0.moveToResumeQueue(
                                                          "@( frame_enc_tb.tx_ready)");
    vlSelfRef.__VtrigSched_h0723a778__0.resume("@(posedge frame_enc_tb.clk)");
    vlSelfRef.__VtrigSched_hb73594cb__0.resume("@( frame_enc_tb.tx_ready)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vframe_enc_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframe_enc_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vframe_enc_tb___024root___eval_phase__act(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_phase__act\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vframe_enc_tb___024root___eval_triggers_vec__act(vlSelf);
    Vframe_enc_tb___024root___timing_ready(vlSelf);
    Vframe_enc_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vframe_enc_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vframe_enc_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vframe_enc_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vframe_enc_tb___024root___timing_resume(vlSelf);
        Vframe_enc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vframe_enc_tb___024root___eval_phase__inact(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_phase__inact\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("test.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vframe_enc_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vframe_enc_tb___024root___eval_phase__nba(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_phase__nba\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vframe_enc_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vframe_enc_tb___024root___eval_nba(vlSelf);
        Vframe_enc_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vframe_enc_tb___024root___eval(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vframe_enc_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("test.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("test.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vframe_enc_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("test.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vframe_enc_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vframe_enc_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vframe_enc_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vframe_enc_tb___024root____VbeforeTrig_h0723a778__0(Vframe_enc_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root____VbeforeTrig_h0723a778__0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.frame_enc_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__clk__0 
        = vlSelfRef.frame_enc_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0723a778__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0723a778__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vframe_enc_tb___024root____VbeforeTrig_hb73594cb__0(Vframe_enc_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root____VbeforeTrig_hb73594cb__0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.frame_enc_tb__DOT__tx_ready) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__tx_ready__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__tx_ready__0 
        = vlSelfRef.frame_enc_tb__DOT__tx_ready;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb73594cb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb73594cb__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vframe_enc_tb___024root___eval_debug_assertions(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_debug_assertions\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
