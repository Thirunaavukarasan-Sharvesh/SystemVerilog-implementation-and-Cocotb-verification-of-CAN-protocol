// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03amonitor__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03amonitor::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(2U, nullptr);
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp, __Vfork_1__sync);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "frame_encoder/monitor.sv", 
                                  83);
}

VL_INLINE_OPT VlCoroutine Vtop___024unit__03a__03amonitor::__VnoInFunc_run____Vfork_1__1(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::__VnoInFunc_run____Vfork_1__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    co_await this->__VnoInFunc_monitor_output(vlSymsp);
    __Vfork_1__sync.done("frame_encoder/monitor.sv", 
                         85);
}

VL_INLINE_OPT VlCoroutine Vtop___024unit__03a__03amonitor::__VnoInFunc_run____Vfork_1__0(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::__VnoInFunc_run____Vfork_1__0\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    co_await this->__VnoInFunc_monitor_input(vlSymsp);
    __Vfork_1__sync.done("frame_encoder/monitor.sv", 
                         84);
}

Vtop___024unit__03a__03amonitor::~Vtop___024unit__03a__03amonitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03amonitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03amonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03amonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx_in:" + VL_TO_STRING(__PVT__mbx_in);
    out += ", mbx_out:" + VL_TO_STRING(__PVT__mbx_out);
    out += ", vif_in:" + VL_TO_STRING(__PVT__vif_in);
    out += ", vif_out:" + VL_TO_STRING(__PVT__vif_out);
    out += ", log:" + VL_TO_STRING(__PVT__log);
    out += ", bit_queue:" + VL_TO_STRING(__PVT__bit_queue);
    out += ", bit_vector:" + VL_TO_STRING_W(4, __PVT__bit_vector);
    out += ", __Vlvbound_h8e5762a9__0:" + VL_TO_STRING(__Vlvbound_h8e5762a9__0);
    return out;
}
