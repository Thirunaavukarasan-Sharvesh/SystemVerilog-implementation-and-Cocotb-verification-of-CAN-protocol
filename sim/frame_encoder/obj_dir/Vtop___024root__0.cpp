// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "top.sv", 
                                             26);
        vlSelfRef.top__DOT__clk = (1U & (~ (IData)(vlSelfRef.top__DOT__clk)));
    }
    co_return;
}

void Vtop___024root____VbeforeTrig_hd2d18ee6__0(Vtop___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtop___024unit__03a__03aenvironment> top__DOT__env;
    IData/*31:0*/ top__DOT__unnamedblk1_1__DOT____Vrepeat0;
    top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->TOP__top__DOT__vif.rst_n = 0U;
    top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, top__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtop___024root____VbeforeTrig_hd2d18ee6__0(vlSelf, 
                                                   "@(posedge top.clk)");
        co_await vlSelfRef.__VtrigSched_hd2d18ee6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge top.clk)", 
                                                             "top.sv", 
                                                             116);
        top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 
            (top__DOT__unnamedblk1_1__DOT____Vrepeat0 
             - (IData)(1U));
    }
    vlSymsp->TOP__top__DOT__vif.rst_n = 1U;
    top__DOT__env = VL_NEW(Vtop___024unit__03a__03aenvironment, vlSymsp, (&vlSymsp->TOP__top__DOT__vif), (&vlSymsp->TOP__top__DOT__vif), (&vlSymsp->TOP__top__DOT__vif));
    co_await VL_NULL_CHECK(top__DOT__env, "top.sv", 119)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000002dc6c0ULL, 
                                         nullptr, "top.sv", 
                                         124);
    VL_FINISH_MT("top.sv", 125, "");
    co_return;
}

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in)) 
                                        << 6U));
    vlSelfRef.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__4_Vtrigm_valid)) 
                                        << 5U));
    vlSelfRef.__VvifTrigger_h65dc3471__4_Vtrigm_valid = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__3_Vtrigm_frame)) 
                                        << 4U));
    vlSelfRef.__VvifTrigger_h65dc3471__3_Vtrigm_frame = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__2_Vtrigm_frame_done)) 
                                        << 3U));
    vlSelfRef.__VvifTrigger_h65dc3471__2_Vtrigm_frame_done = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__1_Vtrigm_tx_ready)) 
                                        << 2U));
    vlSelfRef.__VvifTrigger_h65dc3471__1_Vtrigm_tx_ready = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__0_Vtrigm_clk)) 
                                        << 1U));
    vlSelfRef.__VvifTrigger_h65dc3471__0_Vtrigm_clk = 0U;
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in)) 
                                        << 5U));
    vlSelfRef.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__4_Vtrigm_valid)) 
                                        << 4U));
    vlSelfRef.__VvifTrigger_h65dc3471__4_Vtrigm_valid = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__3_Vtrigm_frame)) 
                                        << 3U));
    vlSelfRef.__VvifTrigger_h65dc3471__3_Vtrigm_frame = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__2_Vtrigm_frame_done)) 
                                        << 2U));
    vlSelfRef.__VvifTrigger_h65dc3471__2_Vtrigm_frame_done = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__1_Vtrigm_tx_ready)) 
                                        << 1U));
    vlSelfRef.__VvifTrigger_h65dc3471__1_Vtrigm_tx_ready = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VvifTrigger_h65dc3471__0_Vtrigm_clk)));
    vlSelfRef.__VvifTrigger_h65dc3471__0_Vtrigm_clk = 0U;
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,8, 
                                                 ((VL_EXTEND_II(4,1, vlSelfRef.__VdynSched.evaluate()) 
                                                   << 4U) 
                                                  | (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__top__DOT__vif.clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__vif__clk__0))) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSymsp->TOP__top__DOT__vif.rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__vif__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.top__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0 
        = vlSelfRef.top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__vif__rst_n__0 
        = vlSymsp->TOP__top__DOT__vif.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__vif__clk__0 
        = vlSymsp->TOP__top__DOT__vif.clk;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    ([&]() {
            vlSelfRef.__VvifTrigger_h65dc3471__0_Vtrigm_clk = 1U;
        }(), vlSymsp->TOP__top__DOT__vif.clk) = vlSelfRef.top__DOT__clk;
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__top__DOT__raw_idx;
    __Vdly__top__DOT__raw_idx = 0;
    // Body
    __Vdly__top__DOT__raw_idx = vlSelfRef.top__DOT__raw_idx;
    VL_WRITEF_NX("%0t  state=%0#  ready=%0b  valid=%0b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,2,(IData)(vlSelfRef.top__DOT__dut__DOT__state),
                 1,vlSymsp->TOP__top__DOT__vif.tx_ready,
                 1,(IData)(vlSymsp->TOP__top__DOT__vif.valid));
    if (vlSelfRef.top__DOT____Vcellout__dut__valid_out) {
        vlSelfRef.top__DOT__next_frame[0U] = ((vlSelfRef.top__DOT__raw_frame[0U] 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top__DOT____Vcellout__dut__bit_out));
        vlSelfRef.top__DOT__next_frame[1U] = ((vlSelfRef.top__DOT__raw_frame[0U] 
                                               >> 0x0000001fU) 
                                              | (vlSelfRef.top__DOT__raw_frame[1U] 
                                                 << 1U));
        vlSelfRef.top__DOT__next_frame[2U] = ((vlSelfRef.top__DOT__raw_frame[1U] 
                                               >> 0x0000001fU) 
                                              | (vlSelfRef.top__DOT__raw_frame[2U] 
                                                 << 1U));
        vlSelfRef.top__DOT__next_frame[3U] = ((vlSelfRef.top__DOT__raw_frame[2U] 
                                               >> 0x0000001fU) 
                                              | (0x00003ffeU 
                                                 & (vlSelfRef.top__DOT__raw_frame[3U] 
                                                    << 1U)));
        vlSelfRef.top__DOT__raw_frame[0U] = vlSelfRef.top__DOT__next_frame[0U];
        vlSelfRef.top__DOT__raw_frame[1U] = vlSelfRef.top__DOT__next_frame[1U];
        vlSelfRef.top__DOT__raw_frame[2U] = vlSelfRef.top__DOT__next_frame[2U];
        vlSelfRef.top__DOT__raw_frame[3U] = vlSelfRef.top__DOT__next_frame[3U];
        if (VL_UNLIKELY(((0x0000006dU == vlSelfRef.top__DOT__raw_idx)))) {
            VL_WRITEF_NX("--------------------------------\nTOP DUT\nID   = %03x\n",0,
                         11,(0x000007ffU & (vlSelfRef.top__DOT__next_frame[3U] 
                                            >> 2U)));
            __Vdly__top__DOT__raw_idx = 0U;
            VL_WRITEF_NX("RTR  = %0b\nIDE  = %0b\nDLC  = %0#\nDATA = %016x\nCRC  = %04x\n",0,
                         1,(1U & (vlSelfRef.top__DOT__next_frame[3U] 
                                  >> 1U)),1,(1U & vlSelfRef.top__DOT__next_frame[3U]),
                         4,(vlSelfRef.top__DOT__next_frame[2U] 
                            >> 0x0000001cU),64,(((QData)((IData)(vlSelfRef.top__DOT__next_frame[2U])) 
                                                 << 0x00000024U) 
                                                | (((QData)((IData)(vlSelfRef.top__DOT__next_frame[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(vlSelfRef.top__DOT__next_frame[0U])) 
                                                      >> 0x0000001cU))),
                         15,(0x00007fffU & (vlSelfRef.top__DOT__next_frame[0U] 
                                            >> 0x0000000dU)));
        } else {
            __Vdly__top__DOT__raw_idx = ((IData)(1U) 
                                         + vlSelfRef.top__DOT__raw_idx);
        }
    }
    vlSelfRef.top__DOT__raw_idx = __Vdly__top__DOT__raw_idx;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__top__DOT__out_mon__DOT__bit_index 
        = vlSelfRef.top__DOT__out_mon__DOT__bit_index;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__top__DOT__vif.__Vdly__frame_done = 0U;
    if (vlSelfRef.top__DOT____Vcellout__dut__valid_out) {
        vlSelfRef.top__DOT__out_mon__DOT__next_vector[0U] 
            = ((vlSelfRef.top__DOT__out_mon__DOT__bit_vector[0U] 
                << 1U) | (IData)(vlSelfRef.top__DOT____Vcellout__dut__bit_out));
        vlSelfRef.top__DOT__out_mon__DOT__next_vector[1U] 
            = ((vlSelfRef.top__DOT__out_mon__DOT__bit_vector[0U] 
                >> 0x0000001fU) | (vlSelfRef.top__DOT__out_mon__DOT__bit_vector[1U] 
                                   << 1U));
        vlSelfRef.top__DOT__out_mon__DOT__next_vector[2U] 
            = ((vlSelfRef.top__DOT__out_mon__DOT__bit_vector[1U] 
                >> 0x0000001fU) | (vlSelfRef.top__DOT__out_mon__DOT__bit_vector[2U] 
                                   << 1U));
        vlSelfRef.top__DOT__out_mon__DOT__next_vector[3U] 
            = ((vlSelfRef.top__DOT__out_mon__DOT__bit_vector[2U] 
                >> 0x0000001fU) | (0x00003ffeU & (vlSelfRef.top__DOT__out_mon__DOT__bit_vector[3U] 
                                                  << 1U)));
        vlSelfRef.top__DOT__out_mon__DOT__bit_vector[0U] 
            = vlSelfRef.top__DOT__out_mon__DOT__next_vector[0U];
        vlSelfRef.top__DOT__out_mon__DOT__bit_vector[1U] 
            = vlSelfRef.top__DOT__out_mon__DOT__next_vector[1U];
        vlSelfRef.top__DOT__out_mon__DOT__bit_vector[2U] 
            = vlSelfRef.top__DOT__out_mon__DOT__next_vector[2U];
        vlSelfRef.top__DOT__out_mon__DOT__bit_vector[3U] 
            = vlSelfRef.top__DOT__out_mon__DOT__next_vector[3U];
        if ((0x0000006dU == vlSelfRef.top__DOT__out_mon__DOT__bit_index)) {
            vlSelfRef.__Vdly__top__DOT__out_mon__DOT__bit_index = 0U;
            vlSymsp->TOP__top__DOT__vif.__Vdly__frame[0U] 
                = vlSelfRef.top__DOT__out_mon__DOT__next_vector[0U];
            vlSymsp->TOP__top__DOT__vif.__Vdly__frame[1U] 
                = vlSelfRef.top__DOT__out_mon__DOT__next_vector[1U];
            vlSymsp->TOP__top__DOT__vif.__Vdly__frame[2U] 
                = vlSelfRef.top__DOT__out_mon__DOT__next_vector[2U];
            vlSymsp->TOP__top__DOT__vif.__Vdly__frame[3U] 
                = vlSelfRef.top__DOT__out_mon__DOT__next_vector[3U];
            vlSymsp->TOP__top__DOT__vif.__Vdly__frame_done = 1U;
        } else {
            vlSelfRef.__Vdly__top__DOT__out_mon__DOT__bit_index 
                = ((IData)(1U) + vlSelfRef.top__DOT__out_mon__DOT__bit_index);
        }
    }
    vlSelfRef.top__DOT__out_mon__DOT__bit_index = vlSelfRef.__Vdly__top__DOT__out_mon__DOT__bit_index;
}

extern const VlUnpacked<CData/*6:0*/, 1024> Vtop__ConstPool__TABLE_h78e34059_0;

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vdly__top__DOT__dut__DOT__counter_b;
    __Vdly__top__DOT__dut__DOT__counter_b = 0;
    CData/*1:0*/ __Vdly__top__DOT__dut__DOT__x1__DOT__state;
    __Vdly__top__DOT__dut__DOT__x1__DOT__state = 0;
    // Body
    __Vdly__top__DOT__dut__DOT__x1__DOT__state = vlSelfRef.top__DOT__dut__DOT__x1__DOT__state;
    __Vdly__top__DOT__dut__DOT__counter_b = vlSelfRef.top__DOT__dut__DOT__counter_b;
    __Vtableidx2 = (((IData)(vlSelfRef.top__DOT__dut__DOT__counter_b) 
                     << 3U) | (((IData)(vlSelfRef.top__DOT__dut__DOT__state) 
                                << 1U) | (IData)(vlSymsp->TOP__top__DOT__vif.rst_n)));
    __Vdly__top__DOT__dut__DOT__counter_b = Vtop__ConstPool__TABLE_h78e34059_0
        [__Vtableidx2];
    if (vlSymsp->TOP__top__DOT__vif.rst_n) {
        vlSelfRef.top__DOT__dut__DOT__crc_valid_rsp = 0U;
        if ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__state))) {
            vlSelfRef.top__DOT__dut__DOT__crc_valid_rsp = 0U;
            if (vlSelfRef.top__DOT__dut__DOT__crc_init_sig) {
                __Vdly__top__DOT__dut__DOT__x1__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__state))) {
            if (vlSelfRef.top__DOT__dut__DOT__crc_cap_sig) {
                vlSelfRef.top__DOT__dut__DOT__crc_value 
                    = vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int;
                vlSelfRef.top__DOT__dut__DOT__crc_valid_rsp = 1U;
                __Vdly__top__DOT__dut__DOT__x1__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.top__DOT__dut__DOT__x1__DOT__state))) {
            vlSelfRef.top__DOT__dut__DOT__crc_valid_rsp = 0U;
            __Vdly__top__DOT__dut__DOT__x1__DOT__state = 0U;
        } else {
            __Vdly__top__DOT__dut__DOT__x1__DOT__state = 0U;
        }
        vlSelfRef.top__DOT__dut__DOT__x1__DOT__state 
            = __Vdly__top__DOT__dut__DOT__x1__DOT__state;
        if (((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__state)) 
             & (IData)(vlSymsp->TOP__top__DOT__vif.valid))) {
            vlSelfRef.top__DOT__dut__DOT__frame_reg[0U] 
                = vlSymsp->TOP__top__DOT__vif.frame_in[0U];
            vlSelfRef.top__DOT__dut__DOT__frame_reg[1U] 
                = vlSymsp->TOP__top__DOT__vif.frame_in[1U];
            vlSelfRef.top__DOT__dut__DOT__frame_reg[2U] 
                = vlSymsp->TOP__top__DOT__vif.frame_in[2U];
            vlSelfRef.top__DOT____Vcellout__dut__tx_ready = 0U;
        } else if (((3U == (IData)(vlSelfRef.top__DOT__dut__DOT__state)) 
                    & (0x0cU == (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))) {
            vlSelfRef.top__DOT____Vcellout__dut__tx_ready = 1U;
        }
        vlSelfRef.top__DOT__dut__DOT__counter_b = __Vdly__top__DOT__dut__DOT__counter_b;
        if (vlSelfRef.top__DOT__dut__DOT__crc_init_sig) {
            vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int = 0U;
        } else if (vlSelfRef.top__DOT__dut__DOT__dvalid) {
            vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int 
                = vlSelfRef.top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc;
        }
    } else {
        __Vdly__top__DOT__dut__DOT__x1__DOT__state = 0U;
        vlSelfRef.top__DOT__dut__DOT__crc_value = 0U;
        vlSelfRef.top__DOT__dut__DOT__crc_valid_rsp = 0U;
        vlSelfRef.top__DOT__dut__DOT__x1__DOT__state 
            = __Vdly__top__DOT__dut__DOT__x1__DOT__state;
        vlSelfRef.top__DOT__dut__DOT__frame_reg[0U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__frame_reg[1U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__frame_reg[2U] = 0U;
        vlSelfRef.top__DOT____Vcellout__dut__tx_ready = 1U;
        vlSelfRef.top__DOT__dut__DOT__counter_b = __Vdly__top__DOT__dut__DOT__counter_b;
        vlSelfRef.top__DOT__dut__DOT__x1__DOT__lfsr_out_int = 0U;
    }
    ([&]() {
            vlSelfRef.__VvifTrigger_h65dc3471__1_Vtrigm_tx_ready = 1U;
        }(), vlSymsp->TOP__top__DOT__vif.tx_ready) 
        = vlSelfRef.top__DOT____Vcellout__dut__tx_ready;
    vlSelfRef.top__DOT__dut__DOT__state = ((IData)(vlSymsp->TOP__top__DOT__vif.rst_n)
                                            ? (IData)(vlSelfRef.top__DOT__dut__DOT__next_state)
                                            : 0U);
    vlSelfRef.top__DOT__dut__DOT__dvalid = 0U;
    vlSelfRef.top__DOT____Vcellout__dut__valid_out = 0U;
    vlSelfRef.top__DOT__dut__DOT__crc_cap_sig = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            vlSelfRef.top__DOT__dut__DOT__dvalid = 1U;
            if ((0x51U == (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b))) {
                vlSelfRef.top__DOT__dut__DOT__crc_cap_sig = 1U;
            }
        }
    }
    vlSelfRef.top__DOT____Vcellout__dut__bit_out = 1U;
    if ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        vlSelfRef.top__DOT____Vcellout__dut__valid_out = 1U;
        vlSelfRef.top__DOT____Vcellout__dut__bit_out 
            = ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__state)) 
               || ((0x0eU >= (0x0000000fU & ((IData)(0x0eU) 
                                             - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))) 
                   && (1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__crc_value) 
                             >> (0x0000000fU & ((IData)(0x0eU) 
                                                - (IData)(vlSelfRef.top__DOT__dut__DOT__counter_b)))))));
    } else if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
        vlSelfRef.top__DOT____Vcellout__dut__valid_out = 1U;
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

extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_hc67e56fa_0;

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__dut__DOT__crc_init_sig = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__state))) {
            vlSelfRef.top__DOT__dut__DOT__crc_init_sig = 0U;
        } else if (vlSymsp->TOP__top__DOT__vif.valid) {
            vlSelfRef.top__DOT__dut__DOT__crc_init_sig = 1U;
        }
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP__top__DOT__vif.valid) 
                     << 9U) | (((IData)(vlSelfRef.top__DOT__dut__DOT__counter_b) 
                                << 2U) | (IData)(vlSelfRef.top__DOT__dut__DOT__state)));
    vlSelfRef.top__DOT__dut__DOT__next_state = Vtop__ConstPool__TABLE_hc67e56fa_0
        [__Vtableidx1];
}

void Vtop_frame_if___nba_sequent__TOP__top__DOT__vif__0(Vtop_frame_if* vlSelf);
void Vtop_frame_if___nba_sequent__TOP__top__DOT__vif__1(Vtop_frame_if* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vtop_frame_if___nba_sequent__TOP__top__DOT__vif__0((&vlSymsp->TOP__top__DOT__vif));
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop_frame_if___nba_sequent__TOP__top__DOT__vif__1((&vlSymsp->TOP__top__DOT__vif));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if (((0x000000000000003fULL & vlSelfRef.__VnbaTriggered[1U]) 
         | (3ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___timing_ready(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_ready\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd2d18ee6__0.ready("@(posedge top.clk)");
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd2d18ee6__0.moveToResumeQueue(
                                                          "@(posedge top.clk)");
    vlSelfRef.__VtrigSched_hd2d18ee6__0.resume("@(posedge top.clk)");
    vlSelfRef.__VdynSched.resume();
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
    Vtop___024root___timing_ready(vlSelf);
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtop___024root___timing_resume(vlSelf);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__inact(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__inact\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("top.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("top.sv", 3, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("top.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("top.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("top.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtop___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtop___024root____VbeforeTrig_hd2d18ee6__0(Vtop___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____VbeforeTrig_hd2d18ee6__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.top__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0 
        = vlSelfRef.top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd2d18ee6__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
