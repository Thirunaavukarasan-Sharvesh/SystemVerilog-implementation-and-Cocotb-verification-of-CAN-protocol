// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"
#include "Vtop___024unit__03a__03ascoreboard__Vclpkg.h"

Vtop___024unit__03a__03ascoreboard::Vtop___024unit__03a__03ascoreboard(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_in, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_act) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__mbx_in = mbx_in;
    this->__PVT__mbx_act = mbx_act;
    this->__PVT__log = VL_NEW(Vtop___024unit__03a__03alogger, vlSymsp, 
                              std::string{"logs/scoreboard.log"});
}
