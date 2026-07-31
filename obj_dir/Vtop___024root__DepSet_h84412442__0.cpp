// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__vif__rst_n__0 
        = vlSymsp->TOP__top__DOT__vif.rst_n;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0 
        = vlSelf->top__DOT__clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__VvifTrigger_h65dc2cc6__0));
    vlSelf->__VvifTrigger_h65dc2cc6__0 = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h08cdad60_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__dut__DOT__crc_init_sig = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
            vlSelf->top__DOT__dut__DOT__crc_init_sig = 0U;
        } else if (vlSymsp->TOP__top__DOT__vif.valid) {
            vlSelf->top__DOT__dut__DOT__crc_init_sig = 1U;
        }
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP__top__DOT__vif.valid) 
                     << 9U) | (((IData)(vlSelf->top__DOT__dut__DOT__counter_b) 
                                << 2U) | (IData)(vlSelf->top__DOT__dut__DOT__state)));
    vlSelf->top__DOT__dut__DOT__next_state = Vtop__ConstPool__TABLE_h08cdad60_0
        [__Vtableidx1];
    vlSelf->top__DOT____Vcellout__dut__bit_out = 1U;
    if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
        vlSelf->top__DOT____Vcellout__dut__bit_out 
            = ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state)) 
               || ((0xeU >= (0xfU & ((IData)(0xeU) 
                                     - (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))) 
                   && (1U & ((IData)(vlSelf->top__DOT__dut__DOT__crc_value) 
                             >> (0xfU & ((IData)(0xeU) 
                                         - (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))))));
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
        if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__counter_b))) {
            vlSelf->top__DOT____Vcellout__dut__bit_out = 0U;
        } else if (((1U <= (IData)(vlSelf->top__DOT__dut__DOT__counter_b)) 
                    & (0xbU >= (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))) {
            vlSelf->top__DOT____Vcellout__dut__bit_out 
                = ((0x50U >= ((IData)(0x46U) + (0xfU 
                                                & ((IData)(0xbU) 
                                                   - (IData)(vlSelf->top__DOT__dut__DOT__counter_b))))) 
                   && (1U & (vlSymsp->TOP__top__DOT__vif.frame_in[
                             (((IData)(0x46U) + (0xfU 
                                                 & ((IData)(0xbU) 
                                                    - (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x46U) 
                                                   + 
                                                   (0xfU 
                                                    & ((IData)(0xbU) 
                                                       - (IData)(vlSelf->top__DOT__dut__DOT__counter_b))))))));
        } else if ((0xcU == (IData)(vlSelf->top__DOT__dut__DOT__counter_b))) {
            vlSelf->top__DOT____Vcellout__dut__bit_out 
                = (1U & (vlSymsp->TOP__top__DOT__vif.frame_in[2U] 
                         >> 5U));
        } else if ((0xdU == (IData)(vlSelf->top__DOT__dut__DOT__counter_b))) {
            vlSelf->top__DOT____Vcellout__dut__bit_out 
                = (1U & (vlSymsp->TOP__top__DOT__vif.frame_in[2U] 
                         >> 4U));
        } else if (((0xeU <= (IData)(vlSelf->top__DOT__dut__DOT__counter_b)) 
                    & (0x11U >= (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))) {
            vlSelf->top__DOT____Vcellout__dut__bit_out 
                = ((0x50U >= ((IData)(0x40U) + (3U 
                                                & ((IData)(1U) 
                                                   - (IData)(vlSelf->top__DOT__dut__DOT__counter_b))))) 
                   && (1U & (vlSymsp->TOP__top__DOT__vif.frame_in[
                             (((IData)(0x40U) + (3U 
                                                 & ((IData)(1U) 
                                                    - (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))) 
                              >> 5U)] >> (0x1fU & ((IData)(0x40U) 
                                                   + 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       - (IData)(vlSelf->top__DOT__dut__DOT__counter_b))))))));
        } else if (((0x12U <= (IData)(vlSelf->top__DOT__dut__DOT__counter_b)) 
                    & (0x51U >= (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))) {
            vlSelf->top__DOT____Vcellout__dut__bit_out 
                = (1U & (vlSymsp->TOP__top__DOT__vif.frame_in[
                         (1U & (((IData)(0x11U) - (IData)(vlSelf->top__DOT__dut__DOT__counter_b)) 
                                >> 5U))] >> (0x1fU 
                                             & ((IData)(0x11U) 
                                                - (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))));
        }
    }
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback 
        = ((IData)(vlSelf->top__DOT____Vcellout__dut__bit_out) 
           ^ ((IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
              >> 0xeU));
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = ((0x7ffeU & ((IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                       << 1U)) | (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback));
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = ((0x3fffU & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
           | ((IData)((((IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc) 
                        >> 0xeU) ^ (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))) 
              << 0xeU));
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = ((0x7bffU & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
           | (0x400U & ((0xfffffc00U & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
                        ^ ((IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                           << 0xaU))));
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = ((0x7effU & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
           | (0x100U & ((0xffffff00U & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
                        ^ ((IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                           << 8U))));
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = ((0x7f7fU & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
           | (0x80U & ((0xffffff80U & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
                       ^ ((IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                          << 7U))));
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = ((0x7fefU & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
           | (0x10U & ((0xfffffff0U & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
                       ^ ((IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                          << 4U))));
    vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc 
        = ((0x7ff7U & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc)) 
                    ^ ((IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                       << 3U))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__VvifTrigger_h65dc2cc6__0));
    vlSelf->__VvifTrigger_h65dc2cc6__0 = 0U;
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSymsp->TOP__top__DOT__vif.rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__vif__rst_n__0)) 
                                     | ((IData)(vlSelf->top__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdynSched.evaluate());
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__vif__rst_n__0 
        = vlSymsp->TOP__top__DOT__vif.rst_n;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clk__0 
        = vlSelf->top__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
    vlSelf->__VdynSched.doPostUpdates();
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__top__DOT__vif.clk = vlSelf->top__DOT__clk;
    vlSelf->__VvifTrigger_h65dc2cc6__0 = 1U;
}

extern const VlUnpacked<CData/*6:0*/, 1024> Vtop__ConstPool__TABLE_hd79d329b_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdly__top__DOT__dut__DOT__x1__DOT__state;
    __Vdly__top__DOT__dut__DOT__x1__DOT__state = 0;
    // Body
    __Vdly__top__DOT__dut__DOT__x1__DOT__state = vlSelf->top__DOT__dut__DOT__x1__DOT__state;
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__dut__DOT__counter_b) 
                     << 3U) | (((IData)(vlSelf->top__DOT__dut__DOT__state) 
                                << 1U) | (IData)(vlSymsp->TOP__top__DOT__vif.rst_n)));
    vlSelf->top__DOT__dut__DOT__counter_b = Vtop__ConstPool__TABLE_hd79d329b_0
        [__Vtableidx2];
    if (vlSymsp->TOP__top__DOT__vif.rst_n) {
        vlSelf->top__DOT__dut__DOT__crc_valid_rsp = 0U;
        if ((0U == (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__state))) {
            vlSelf->top__DOT__dut__DOT__crc_valid_rsp = 0U;
            if (vlSelf->top__DOT__dut__DOT__crc_init_sig) {
                __Vdly__top__DOT__dut__DOT__x1__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__state))) {
            if (vlSelf->top__DOT__dut__DOT__crc_cap_sig) {
                vlSelf->top__DOT__dut__DOT__crc_value 
                    = vlSelf->top__DOT__dut__DOT__x1__DOT__lfsr_out_int;
                vlSelf->top__DOT__dut__DOT__crc_valid_rsp = 1U;
                __Vdly__top__DOT__dut__DOT__x1__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__dut__DOT__x1__DOT__state))) {
            vlSelf->top__DOT__dut__DOT__crc_valid_rsp = 0U;
            __Vdly__top__DOT__dut__DOT__x1__DOT__state = 0U;
        } else {
            __Vdly__top__DOT__dut__DOT__x1__DOT__state = 0U;
        }
        vlSelf->top__DOT__dut__DOT__state = vlSelf->top__DOT__dut__DOT__next_state;
        if (vlSelf->top__DOT__dut__DOT__crc_init_sig) {
            vlSelf->top__DOT__dut__DOT__x1__DOT__lfsr_out_int = 0U;
        } else if (vlSelf->top__DOT__dut__DOT__dvalid) {
            vlSelf->top__DOT__dut__DOT__x1__DOT__lfsr_out_int 
                = vlSelf->top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc;
        }
    } else {
        __Vdly__top__DOT__dut__DOT__x1__DOT__state = 0U;
        vlSelf->top__DOT__dut__DOT__crc_value = 0U;
        vlSelf->top__DOT__dut__DOT__crc_valid_rsp = 0U;
        vlSelf->top__DOT__dut__DOT__state = 0U;
        vlSelf->top__DOT__dut__DOT__x1__DOT__lfsr_out_int = 0U;
    }
    vlSelf->top__DOT__dut__DOT__x1__DOT__state = __Vdly__top__DOT__dut__DOT__x1__DOT__state;
    vlSelf->top__DOT__dut__DOT__dvalid = 0U;
    vlSelf->top__DOT____Vcellout__dut__valid_out = 0U;
    if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
        vlSelf->top__DOT____Vcellout__dut__valid_out = 1U;
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
        vlSelf->top__DOT____Vcellout__dut__valid_out = 1U;
    }
    vlSelf->top__DOT__dut__DOT__crc_cap_sig = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
            vlSelf->top__DOT__dut__DOT__dvalid = 1U;
            if ((0x51U == (IData)(vlSelf->top__DOT__dut__DOT__counter_b))) {
                vlSelf->top__DOT__dut__DOT__crc_cap_sig = 1U;
            }
        }
    }
}
