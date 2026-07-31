// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

Vtop___024unit__03a__03aenvironment::Vtop___024unit__03a__03aenvironment(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* drv_vif, Vtop_frame_if* in_vif, Vtop_frame_if* out_vif) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__drv_vif = drv_vif;
    this->__PVT__in_vif = in_vif;
    this->__PVT__out_vif = out_vif;
    this->__PVT__gen_drv_mbx = VL_NEW(Vtop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__mon_in_mbx = VL_NEW(Vtop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__mon_out_mbx = VL_NEW(Vtop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__gen = VL_NEW(Vtop___024unit__03a__03agenerator, vlSymsp, this->__PVT__gen_drv_mbx);
    this->__PVT__drv = VL_NEW(Vtop___024unit__03a__03adriver, vlSymsp, drv_vif, this->__PVT__gen_drv_mbx);
    this->__PVT__mon = VL_NEW(Vtop___024unit__03a__03amonitor, vlSymsp, in_vif, this->__PVT__mon_in_mbx);
    this->__PVT__col = VL_NEW(Vtop___024unit__03a__03acollector, vlSymsp, out_vif, this->__PVT__mon_out_mbx);
    this->__PVT__sb = VL_NEW(Vtop___024unit__03a__03ascoreboard, vlSymsp, this->__PVT__mon_in_mbx, this->__PVT__mon_out_mbx);
}

VlCoroutine Vtop___024unit__03a__03aenvironment::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(5U, nullptr);
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__2(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__3(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__4(vlSymsp, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "environment.sv", 
                                  37);
    co_return;
}

VlCoroutine Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__4(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__4\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__sb, "environment.sv", 42)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("environment.sv", 42);
    co_return;
}

VlCoroutine Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__3\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__col, "environment.sv", 41)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("environment.sv", 41);
    co_return;
}

VlCoroutine Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__2\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__mon, "environment.sv", 40)->__VnoInFunc_monitor_input(vlSymsp);
    __Vfork_1__sync.done("environment.sv", 40);
    co_return;
}

VlCoroutine Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__drv, "environment.sv", 39)->__VnoInFunc_drvdata(vlSymsp);
    __Vfork_1__sync.done("environment.sv", 39);
    co_return;
}

VlCoroutine Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__gen, "environment.sv", 38)->__VnoInFunc_run(vlSymsp);
    __Vfork_1__sync.done("environment.sv", 38);
    co_return;
}

void Vtop___024unit__03a__03aenvironment::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__drv_vif = nullptr;
    __PVT__in_vif = nullptr;
    __PVT__out_vif = nullptr;
}

std::string Vtop___024unit__03a__03aenvironment::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03aenvironment::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::to_string_middle\n"); );
    // Body
    std::string out;
    out += "gen:" + VL_TO_STRING(__PVT__gen);
    out += ", drv:" + VL_TO_STRING(__PVT__drv);
    out += ", mon:" + VL_TO_STRING(__PVT__mon);
    out += ", col:" + VL_TO_STRING(__PVT__col);
    out += ", sb:" + VL_TO_STRING(__PVT__sb);
    out += ", gen_drv_mbx:" + VL_TO_STRING(__PVT__gen_drv_mbx);
    out += ", mon_in_mbx:" + VL_TO_STRING(__PVT__mon_in_mbx);
    out += ", mon_out_mbx:" + VL_TO_STRING(__PVT__mon_out_mbx);
    out += ", drv_vif:" + VL_TO_STRING(__PVT__drv_vif);
    out += ", in_vif:" + VL_TO_STRING(__PVT__in_vif);
    out += ", out_vif:" + VL_TO_STRING(__PVT__out_vif);
    return (out);
}
