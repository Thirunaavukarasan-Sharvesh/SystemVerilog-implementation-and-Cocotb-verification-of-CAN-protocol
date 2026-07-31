// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vframe_enc_tb.h for the primary calling header

#include "Vframe_enc_tb__pch.h"

void Vframe_enc_tb___024root___timing_ready(Vframe_enc_tb___024root* vlSelf);

VL_ATTR_COLD void Vframe_enc_tb___024root___eval_static(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_static\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__clk__0 
        = vlSelfRef.frame_enc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__rst_n__0 
        = vlSelfRef.frame_enc_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__frame_enc_tb__DOT__tx_ready__0 
        = vlSelfRef.frame_enc_tb__DOT__tx_ready;
    Vframe_enc_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vframe_enc_tb___024root___eval_final__TOP(Vframe_enc_tb___024root* vlSelf);

VL_ATTR_COLD void Vframe_enc_tb___024root___eval_final(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_final\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vframe_enc_tb___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void Vframe_enc_tb___024root___eval_final__TOP(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_final__TOP\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("--------------------------------\nTOTAL BITS = %0d\n--------------------------------\n",0,
                 32,vlSelfRef.frame_enc_tb__DOT__bit_cnt);
    VL_FCLOSE_I(vlSelfRef.frame_enc_tb__DOT__fd); }

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframe_enc_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vframe_enc_tb___024root___eval_phase__stl(Vframe_enc_tb___024root* vlSelf);

VL_ATTR_COLD void Vframe_enc_tb___024root___eval_settle(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_settle\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vframe_enc_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("test.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vframe_enc_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vframe_enc_tb___024root___eval_triggers_vec__stl(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_triggers_vec__stl\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vframe_enc_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframe_enc_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vframe_enc_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vframe_enc_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vframe_enc_tb___024root___stl_sequent__TOP__0(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___stl_sequent__TOP__0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__dvalid = 0U;
    vlSelfRef.frame_enc_tb__DOT__valid_out = 0U;
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_cap_sig = 0U;
    vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_init_sig = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state))) {
            vlSelfRef.frame_enc_tb__DOT__dut__DOT__dvalid = 1U;
            if ((0x51U == (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b))) {
                vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_cap_sig = 1U;
            }
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

VL_ATTR_COLD void Vframe_enc_tb___024root____Vm_traceActivitySetAll(Vframe_enc_tb___024root* vlSelf);

VL_ATTR_COLD void Vframe_enc_tb___024root___eval_stl(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_stl\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vframe_enc_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vframe_enc_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vframe_enc_tb___024root___eval_phase__stl(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___eval_phase__stl\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vframe_enc_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vframe_enc_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vframe_enc_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vframe_enc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vframe_enc_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframe_enc_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vframe_enc_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge frame_enc_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge frame_enc_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( frame_enc_tb.tx_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vframe_enc_tb___024root____Vm_traceActivitySetAll(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root____Vm_traceActivitySetAll\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vframe_enc_tb___024root___ctor_var_reset(Vframe_enc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root___ctor_var_reset\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->frame_enc_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11459711434246041549ull);
    vlSelf->frame_enc_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11257960445605201543ull);
    vlSelf->frame_enc_tb__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15717883416035250139ull);
    vlSelf->frame_enc_tb__DOT__bit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10392686323937388737ull);
    vlSelf->frame_enc_tb__DOT__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1550579168187702857ull);
    vlSelf->frame_enc_tb__DOT__tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5072507937462079261ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->frame_enc_tb__DOT__frame_in, __VscopeHash, 4899162197786043432ull);
    vlSelf->frame_enc_tb__DOT__fd = 0;
    vlSelf->frame_enc_tb__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3791403226744131045ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__dvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15718960479942666285ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__crc_init_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4931675758608062901ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__crc_cap_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1588020886515616273ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__crc_valid_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8514188381682083347ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__crc_value = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 664886117333248806ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11662760157860522133ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5770038910493138029ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__counter_b = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4046605947836266355ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->frame_enc_tb__DOT__dut__DOT__frame_reg, __VscopeHash, 17266173496786543719ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__x1__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16256905272590002217ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 12392532852861779133ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6766128114272514867ull);
    vlSelf->frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6246719560714161926ull);
    vlSelf->__Vdly__frame_enc_tb__DOT__dut__DOT__counter_b = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__frame_enc_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__frame_enc_tb__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__frame_enc_tb__DOT__tx_ready__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
