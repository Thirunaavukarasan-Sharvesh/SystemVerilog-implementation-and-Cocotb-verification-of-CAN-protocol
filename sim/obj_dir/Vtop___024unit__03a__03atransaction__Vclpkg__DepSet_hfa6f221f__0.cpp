// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"

void Vtop___024unit__03a__03atransaction::__VnoInFunc_randomize(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Body
    randomize__Vfuncrtn = 1U;
    this->__PVT__id = (0x7ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__rtr = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__ide = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__dlc = (0xfU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__data = VL_RANDOM_RNG_Q(__Vm_rng);
}

Vtop___024unit__03a__03atransaction::~Vtop___024unit__03a__03atransaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03atransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03atransaction::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
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
    return out;
}
