// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03aenvironment__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03aenvironment::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(4U, nullptr);
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__2(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__3(vlSymsp, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "frame_encoder/environment.sv", 
                                  66);
}

Vtop___024unit__03a__03aenvironment::~Vtop___024unit__03a__03aenvironment() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03aenvironment>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03aenvironment::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03aenvironment::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::to_string_middle\n"); );
    // Body
    std::string out;
    out += "gen:" + VL_TO_STRING(__PVT__gen);
    out += ", drv:" + VL_TO_STRING(__PVT__drv);
    out += ", mon:" + VL_TO_STRING(__PVT__mon);
    out += ", sb:" + VL_TO_STRING(__PVT__sb);
    out += ", gen_drv_mbx:" + VL_TO_STRING(__PVT__gen_drv_mbx);
    out += ", mon_in_mbx:" + VL_TO_STRING(__PVT__mon_in_mbx);
    out += ", mon_out_mbx:" + VL_TO_STRING(__PVT__mon_out_mbx);
    out += ", drv_vif:" + VL_TO_STRING(__PVT__drv_vif);
    out += ", in_vif:" + VL_TO_STRING(__PVT__in_vif);
    out += ", out_vif:" + VL_TO_STRING(__PVT__out_vif);
    return out;
}
