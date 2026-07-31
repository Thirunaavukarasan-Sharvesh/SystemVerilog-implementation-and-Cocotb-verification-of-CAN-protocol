// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"

Vtop___024unit__03a__03atransaction::Vtop___024unit__03a__03atransaction(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
}

void Vtop___024unit__03a__03atransaction::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__id = 0;
    __PVT__rtr = 0;
    __PVT__ide = 0;
    __PVT__dlc = 0;
    __PVT__data = 0;
    __PVT__crc = 0;
    __PVT__sof = 0;
    __PVT__crc_delim = 0;
    __PVT__trailer = 0;
}
