// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03ascoreboard__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03ascoreboard::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    while (1U) {
        co_await VL_NULL_CHECK(this->__PVT__mbx_in, "frame_encoder/scoreboard.sv", 21)->__VnoInFunc_get(vlSymsp, this->__PVT__trx_in);
        co_await VL_NULL_CHECK(this->__PVT__mbx_act, "frame_encoder/scoreboard.sv", 22)->__VnoInFunc_get(vlSymsp, this->__PVT__trx_out);
        this->__VnoInFunc_predict(vlSymsp);
        this->__VnoInFunc_compare(vlSymsp);
    }
}
