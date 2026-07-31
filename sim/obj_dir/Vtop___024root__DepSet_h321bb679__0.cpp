// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"
#include "Vtop___024unit__03a__03aenvironment__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    VlClassRef<Vtop___024unit__03a__03aenvironment> top__DOT__env;
    // Body
    vlSymsp->TOP__top__DOT__vif.rst_n = 0U;
    co_await vlSelf->__VtrigSched_h7d386f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top.clk)", 
                                                       "frame_encoder/top.sv", 
                                                       58);
    co_await vlSelf->__VtrigSched_h7d386f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top.clk)", 
                                                       "frame_encoder/top.sv", 
                                                       58);
    co_await vlSelf->__VtrigSched_h7d386f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top.clk)", 
                                                       "frame_encoder/top.sv", 
                                                       58);
    co_await vlSelf->__VtrigSched_h7d386f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top.clk)", 
                                                       "frame_encoder/top.sv", 
                                                       58);
    co_await vlSelf->__VtrigSched_h7d386f83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top.clk)", 
                                                       "frame_encoder/top.sv", 
                                                       58);
    vlSymsp->TOP__top__DOT__vif.rst_n = 1U;
    top__DOT__env = VL_NEW(Vtop___024unit__03a__03aenvironment, vlSymsp, (&vlSymsp->TOP__top__DOT__vif), (&vlSymsp->TOP__top__DOT__vif), (&vlSymsp->TOP__top__DOT__vif));
    co_await VL_NULL_CHECK(top__DOT__env, "frame_encoder/top.sv", 80)->__VnoInFunc_run(vlSymsp);
}
