// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"

Vtop___024unit__03a__03adriver::~Vtop___024unit__03a__03adriver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03adriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03adriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03adriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx:" + VL_TO_STRING(__PVT__mbx);
    out += ", vif:" + VL_TO_STRING(__PVT__vif);
    out += ", log:" + VL_TO_STRING(__PVT__log);
    return out;
}
