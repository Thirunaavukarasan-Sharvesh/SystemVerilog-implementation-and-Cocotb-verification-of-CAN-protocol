// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"

Vtop___024unit__03a__03agenerator::~Vtop___024unit__03a__03agenerator() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03agenerator>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03agenerator::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03agenerator::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx:" + VL_TO_STRING(__PVT__mbx);
    return out;
}
