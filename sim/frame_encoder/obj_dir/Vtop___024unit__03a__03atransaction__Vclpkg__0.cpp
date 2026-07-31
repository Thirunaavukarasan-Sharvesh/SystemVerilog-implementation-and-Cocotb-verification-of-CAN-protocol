// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

Vtop___024unit__03a__03atransaction::Vtop___024unit__03a__03atransaction(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtop___024unit__03a__03atransaction::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
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

std::string Vtop___024unit__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03atransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "id:" + VL_TO_STRING(__PVT__id);
    out += ", rtr:" + VL_TO_STRING(__PVT__rtr);
    out += ", ide:" + VL_TO_STRING(__PVT__ide);
    out += ", dlc:" + VL_TO_STRING(__PVT__dlc);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    out += ", crc:" + VL_TO_STRING(__PVT__crc);
    out += ", sof:" + VL_TO_STRING(__PVT__sof);
    out += ", crc_delim:" + VL_TO_STRING(__PVT__crc_delim);
    out += ", trailer:" + VL_TO_STRING(__PVT__trailer);
    return (out);
}
