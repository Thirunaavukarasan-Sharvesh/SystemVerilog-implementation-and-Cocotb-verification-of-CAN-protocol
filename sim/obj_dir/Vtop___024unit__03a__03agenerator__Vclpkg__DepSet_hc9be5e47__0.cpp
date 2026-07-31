// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03agenerator::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    VlClassRef<Vtop___024unit__03a__03atransaction> unnamedblk1__DOT__trx;
    while (1U) {
        unnamedblk1__DOT__trx = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
        co_await VL_NULL_CHECK(this->__PVT__mbx, "frame_encoder/generator.sv", 13)->__VnoInFunc_put(vlSymsp, unnamedblk1__DOT__trx);
    }
}
