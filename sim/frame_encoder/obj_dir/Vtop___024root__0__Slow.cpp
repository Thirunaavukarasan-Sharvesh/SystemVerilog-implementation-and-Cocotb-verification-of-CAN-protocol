// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);
void Vtop___024root___timing_ready(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0 
        = vlSelfRef.top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__vif__rst_n__0 
        = vlSymsp->TOP__top__DOT__vif.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__vif__clk__0 
        = vlSymsp->TOP__top__DOT__vif.clk;
    Vtop___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__out_mon__DOT__bit_index = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("top.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_hc67e56fa_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__dut__DOT__dvalid = 0U;
    vlSelfRef.top__DOT____Vcellout__dut__valid_out = 0U;
    vlSelfRef.top__DOT__dut__DOT__crc_cap_sig = 0U;
    vlSelfRef.top__DOT__dut__DOT__crc_init_sig = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            vlSelfRef.top__DOT__dut__DOT__dvalid = 1U;
            if ((0x51U == (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b))) {
                vlSelfRef.top__DOT__dut__DOT__crc_cap_sig = 1U;
            }
            vlSelfRef.top__DOT__dut__DOT__crc_init_sig = 0U;
        } else if (vlSymsp->TOP__top__DOT__vif.valid) {
            vlSelfRef.top__DOT__dut__DOT__crc_init_sig = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        vlSelfRef.top__DOT____Vcellout__dut__valid_out = 1U;
    } else if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        vlSelfRef.top__DOT____Vcellout__dut__valid_out = 1U;
    }
    ([&]() {
            vlSelfRef.__VvifTrigger_h65dc3471__0_Vtrigm_clk = 1U;
        }(), vlSymsp->TOP__top__DOT__vif.clk) = vlSelfRef.top__DOT__clk;
    ([&]() {
            vlSelfRef.__VvifTrigger_h65dc3471__1_Vtrigm_tx_ready = 1U;
        }(), vlSymsp->TOP__top__DOT__vif.tx_ready) 
        = vlSelfRef.top__DOT____Vcellout__dut__tx_ready;
    __Vtableidx1 = (((IData)(vlSymsp->TOP__top__DOT__vif.valid) 
                     << 9U) | (((IData)(vlSelfRef.top__DOT__dut__DOT__counter_b) 
                                << 2U) | (IData)(vlSelfRef.top__DOT__dut__DOT__state)));
    vlSelfRef.top__DOT__dut__DOT__next_state = Vtop__ConstPool__TABLE_hc67e56fa_0
        [__Vtableidx1];
    vlSelfRef.top__DOT____Vcellout__dut__bit_out = 1U;
    if ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        vlSelfRef.top__DOT____Vcellout__dut__bit_out 
            = ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__state)) 
               || ((0x0eU >= (0x0000000fU & ((IData)(0x0eU) 
                                             - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))) 
                   && (1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__crc_value) 
                             >> (0x0000000fU & ((IData)(0x0eU) 
                                                - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))))));
    } else if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b))) {
            vlSelfRef.top__DOT____Vcellout__dut__bit_out = 0U;
        } else if (((1U <= (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)) 
                    & (0x0bU >= (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))) {
            vlSelfRef.top__DOT____Vcellout__dut__bit_out 
                = (1U & (vlSelfRef.top__DOT__dut__DOT__frame_reg
                         [(((IData)(0x00000046U) + 
                            (0x0000000fU & ((IData)(0x0bU) 
                                            - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))) 
                           >> 5U)] >> (0x0000001fU 
                                       & ((IData)(0x00000046U) 
                                          + (0x0000000fU 
                                             & ((IData)(0x0bU) 
                                                - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))))));
        } else if ((0x0cU == (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b))) {
            vlSelfRef.top__DOT____Vcellout__dut__bit_out 
                = (1U & (vlSelfRef.top__DOT__dut__DOT__frame_reg[2U] 
                         >> 5U));
        } else if ((0x0dU == (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b))) {
            vlSelfRef.top__DOT____Vcellout__dut__bit_out 
                = (1U & (vlSelfRef.top__DOT__dut__DOT__frame_reg[2U] 
                         >> 4U));
        } else if (((0x0eU <= (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)) 
                    & (0x11U >= (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))) {
            vlSelfRef.top__DOT____Vcellout__dut__bit_out 
                = (1U & (vlSelfRef.top__DOT__dut__DOT__frame_reg
                         [(((IData)(0x00000040U) + 
                            (3U & ((IData)(1U) - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))) 
                           >> 5U)] >> (0x0000001fU 
                                       & ((IData)(0x00000040U) 
                                          + (3U & ((IData)(1U) 
                                                   - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))))));
        } else if (((0x12U <= (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)) 
                    & (0x51U >= (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))) {
            vlSelfRef.top__DOT____Vcellout__dut__bit_out 
                = (1U & (vlSelfRef.top__DOT__dut__DOT__frame_reg
                         [(1U & (((IData)(0x11U) - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)) 
                                 >> 5U))] >> (0x0000001fU 
                                              & ((IData)(0x11U) 
                                                 - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))));
        }
    }
    vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback 
        = ((IData)(vlSelfRef.top__DOT____Vcellout__dut__bit_out) 
           ^ ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
              >> 0x0000000eU));
    vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = (((((8U & ((0x003ffff8U & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                     >> 0x0000000aU)) 
                     ^ ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                        << 3U))) | (7U & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                          >> 0x0000000aU))) 
             << 0x0000000bU) | (((8U & ((0x03fffff8U 
                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                            >> 6U)) 
                                        ^ ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                                           << 3U))) 
                                 | ((4U & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                           >> 6U)) 
                                    | (3U & (((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                              >> 6U) 
                                             ^ (- (IData)((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))))))) 
                                << 7U)) | ((((0x0000000cU 
                                              & ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                 >> 2U)) 
                                             | (3U 
                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                    >> 2U) 
                                                   ^ 
                                                   (- (IData)((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback)))))) 
                                            << 3U) 
                                           | ((6U & 
                                               ((IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                << 1U)) 
                                              | (IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))));
}

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: Internal 'ico' trigger - virtual interface member: frame_if.clk\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: Internal 'ico' trigger - virtual interface member: frame_if.tx_ready\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: Internal 'ico' trigger - virtual interface member: frame_if.frame_done\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: Internal 'ico' trigger - virtual interface member: frame_if.frame\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: Internal 'ico' trigger - virtual interface member: frame_if.valid\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: Internal 'ico' trigger - virtual interface member: frame_if.frame_in\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge top.vif.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge top.vif.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdynSched.evaluate())\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - virtual interface member: frame_if.clk\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'act' trigger - virtual interface member: frame_if.tx_ready\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: Internal 'act' trigger - virtual interface member: frame_if.frame_done\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: Internal 'act' trigger - virtual interface member: frame_if.frame\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: Internal 'act' trigger - virtual interface member: frame_if.valid\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: Internal 'act' trigger - virtual interface member: frame_if.frame_in\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17741742976451700217ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->top__DOT__next_frame, __VscopeHash, 10617927535170891925ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->top__DOT__raw_frame, __VscopeHash, 13016715208046055868ull);
    vlSelf->top__DOT__raw_idx = 0;
    vlSelf->top__DOT____Vcellout__dut__tx_ready = 0;
    vlSelf->top__DOT____Vcellout__dut__valid_out = 0;
    vlSelf->top__DOT____Vcellout__dut__bit_out = 0;
    vlSelf->top__DOT__dut__DOT__dvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17402922634668643962ull);
    vlSelf->top__DOT__dut__DOT__crc_init_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15054968403744928386ull);
    vlSelf->top__DOT__dut__DOT__crc_cap_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12493566693606770062ull);
    vlSelf->top__DOT__dut__DOT__crc_valid_rsp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12591395875542157649ull);
    vlSelf->top__DOT__dut__DOT__crc_value = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9311925001272234883ull);
    vlSelf->top__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12768607827301581674ull);
    vlSelf->top__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15882688349580773888ull);
    vlSelf->top__DOT__dut__DOT__counter_b = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18352200829806082090ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->top__DOT__dut__DOT__frame_reg, __VscopeHash, 17057624430633868903ull);
    vlSelf->top__DOT__dut__DOT__x1__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15428207635976807439ull);
    vlSelf->top__DOT__dut__DOT__x1__DOT__lfsr_out_int = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15232234705951042657ull);
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8368289019571605572ull);
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16542520988625079003ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->top__DOT__out_mon__DOT__bit_vector, __VscopeHash, 15117910970525848566ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->top__DOT__out_mon__DOT__next_vector, __VscopeHash, 10046616005534629291ull);
    vlSelf->__VnbaEventTrigger = 0;
    vlSelf->__Vdly__top__DOT__out_mon__DOT__bit_index = 0;
    vlSelf->__VvifTrigger_h65dc3471__0_Vtrigm_clk = 0;
    vlSelf->__VvifTrigger_h65dc3471__1_Vtrigm_tx_ready = 0;
    vlSelf->__VvifTrigger_h65dc3471__2_Vtrigm_frame_done = 0;
    vlSelf->__VvifTrigger_h65dc3471__3_Vtrigm_frame = 0;
    vlSelf->__VvifTrigger_h65dc3471__4_Vtrigm_valid = 0;
    vlSelf->__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__vif__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__vif__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
