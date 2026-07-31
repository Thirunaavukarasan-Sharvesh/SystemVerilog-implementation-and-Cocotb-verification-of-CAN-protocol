// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h08cdad60_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__dut__DOT__dvalid = 0U;
    vlSelf->top__DOT__dut__DOT__crc_cap_sig = 0U;
    vlSelf->top__DOT__dut__DOT__crc_init_sig = 0U;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
            vlSelf->top__DOT__dut__DOT__dvalid = 1U;
            if ((0x51U == (IData)(vlSelf->top__DOT__dut__DOT__counter_b))) {
                vlSelf->top__DOT__dut__DOT__crc_cap_sig = 1U;
            }
            vlSelf->top__DOT__dut__DOT__crc_init_sig = 0U;
        } else if (vlSymsp->TOP__top__DOT__vif.valid) {
            vlSelf->top__DOT__dut__DOT__crc_init_sig = 1U;
        }
    }
    vlSymsp->TOP__top__DOT__vif.clk = vlSelf->top__DOT__clk;
    __Vtableidx1 = (((IData)(vlSymsp->TOP__top__DOT__vif.valid) 
                     << 9U) | (((IData)(vlSelf->top__DOT__dut__DOT__counter_b) 
                                << 2U) | (IData)(vlSelf->top__DOT__dut__DOT__state)));
    vlSelf->top__DOT__dut__DOT__next_state = Vtop__ConstPool__TABLE_h08cdad60_0
        [__Vtableidx1];
    vlSelf->top__DOT____Vcellout__dut__valid_out = 0U;
    vlSelf->top__DOT____Vcellout__dut__bit_out = 1U;
    if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
        vlSelf->top__DOT____Vcellout__dut__valid_out = 1U;
        vlSelf->top__DOT____Vcellout__dut__bit_out 
            = ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state)) 
               || ((0xeU >= (0xfU & ((IData)(0xeU) 
                                     - (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))) 
                   && (1U & ((IData)(vlSelf->top__DOT__dut__DOT__crc_value) 
                             >> (0xfU & ((IData)(0xeU) 
                                         - (IData)(vlSelf->top__DOT__dut__DOT__counter_b)))))));
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__state))) {
        vlSelf->top__DOT____Vcellout__dut__valid_out = 1U;
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
    vlSymsp->TOP__top__DOT__vif.valid_out = vlSelf->top__DOT____Vcellout__dut__valid_out;
    vlSymsp->TOP__top__DOT__vif.bit_out = vlSelf->top__DOT____Vcellout__dut__bit_out;
    vlSelf->__VvifTrigger_h65dc2cc6__0 = 1U;
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
