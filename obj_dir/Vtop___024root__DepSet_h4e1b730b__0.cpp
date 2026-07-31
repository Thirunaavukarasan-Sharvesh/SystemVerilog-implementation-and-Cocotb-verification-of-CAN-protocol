// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vtop___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> top__DOT__mbx;
    VlClassRef<Vtop___024unit__03a__03agenerator> top__DOT__gen;
    // Body
    vlSymsp->TOP__top__DOT__vif.rst_n = 0U;
    vlSymsp->TOP__top__DOT__vif.valid = 0U;
    vlSelf->__VvifTrigger_h65dc2cc6__0 = 1U;
    vlSymsp->TOP__top__DOT__vif.frame_in[0U] = 0U;
    vlSymsp->TOP__top__DOT__vif.frame_in[1U] = 0U;
    vlSymsp->TOP__top__DOT__vif.frame_in[2U] = 0U;
    top__DOT__mbx = VL_NEW(Vtop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    top__DOT__gen = VL_NEW(Vtop___024unit__03a__03agenerator, vlSymsp, top__DOT__mbx);
    vlSelf->top__DOT__drv = VL_NEW(Vtop___024unit__03a__03adriver, vlSymsp, (&vlSymsp->TOP__top__DOT__vif), top__DOT__mbx);
    Vtop___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(vlSelf);
    co_await vlSelf->__VdlySched.delay(0x1e8480ULL, 
                                       nullptr, "sim/frame_encoder/top.sv", 
                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("sim/frame_encoder/top.sv", 41, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
