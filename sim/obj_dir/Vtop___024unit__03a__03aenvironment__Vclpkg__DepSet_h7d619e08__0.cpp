// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"
#include "Vtop___024unit__03a__03aenvironment__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    co_await VL_NULL_CHECK(this->__PVT__drv, "frame_encoder/environment.sv", 70)->__VnoInFunc_drvdata(vlSymsp);
    __Vfork_1__sync.done("frame_encoder/environment.sv", 
                         70);
}
