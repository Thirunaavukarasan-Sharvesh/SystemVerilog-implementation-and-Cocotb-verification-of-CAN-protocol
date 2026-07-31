// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata____Vfork_2__1(Vtop__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hccf98c5e__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata____Vfork_2__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__1;
    __VdynTrigger_h72c70d24__1 = 0;
    __VdynTrigger_h72c70d24__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "sim/frame_encoder/driver.sv", 
                                                     34);
        __VdynTrigger_h72c70d24__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "sim/frame_encoder/driver.sv", 
                                                     34);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "sim/frame_encoder/driver.sv", 
                                                 34);
    VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 34)->valid 
        = __Vintraval_hccf98c5e__0;
    vlSymsp->TOP.__VvifTrigger_h65dc2cc6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata____Vfork_1__1(Vtop__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hccf890f6__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata____Vfork_1__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__0;
    __VdynTrigger_h72c70d24__0 = 0;
    __VdynTrigger_h72c70d24__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "sim/frame_encoder/driver.sv", 
                                                     31);
        __VdynTrigger_h72c70d24__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "sim/frame_encoder/driver.sv", 
                                                     31);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "sim/frame_encoder/driver.sv", 
                                                 31);
    VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 31)->valid 
        = __Vintraval_hccf890f6__0;
    vlSymsp->TOP.__VvifTrigger_h65dc2cc6__0 = 1U;
}

void Vtop___024unit__03a__03adriver::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__vif = nullptr;
    }
