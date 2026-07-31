// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_frame_if___nba_sequent__TOP__top__DOT__vif__0(Vtop_frame_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_frame_if___nba_sequent__TOP__top__DOT__vif__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__frame_done = vlSelfRef.frame_done;
    vlSelfRef.__Vdly__frame[0U] = vlSelfRef.frame[0U];
    vlSelfRef.__Vdly__frame[1U] = vlSelfRef.frame[1U];
    vlSelfRef.__Vdly__frame[2U] = vlSelfRef.frame[2U];
    vlSelfRef.__Vdly__frame[3U] = vlSelfRef.frame[3U];
}

void Vtop_frame_if___nba_sequent__TOP__top__DOT__vif__1(Vtop_frame_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_frame_if___nba_sequent__TOP__top__DOT__vif__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h65dc3471__2_Vtrigm_frame_done = 1U;
        }(), vlSelfRef.frame_done) = vlSelfRef.__Vdly__frame_done;
    VL_ASSIGN_W(110, ([&]() {
                vlSymsp->TOP.__VvifTrigger_h65dc3471__3_Vtrigm_frame = 1U;
            }(), vlSelfRef.frame), vlSelfRef.__Vdly__frame);
}

std::string VL_TO_STRING(const Vtop_frame_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_frame_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
