// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"

Vtop___024unit__03a__03adriver::Vtop___024unit__03a__03adriver(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03adriver::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__mbx = mbx;
    this->__PVT__vif = vif;
    this->__PVT__log = VL_NEW(Vtop___024unit__03a__03alogger, vlSymsp, 
                              std::string{"logs/driver.log"});
}
