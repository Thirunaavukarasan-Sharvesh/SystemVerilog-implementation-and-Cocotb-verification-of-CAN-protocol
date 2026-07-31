// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"
#include "Vtop___024unit__03a__03amonitor__Vclpkg.h"

Vtop___024unit__03a__03amonitor::Vtop___024unit__03a__03amonitor(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif_in, Vtop_frame_if* vif_out, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_in, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__vif_in = vif_in;
    this->__PVT__vif_out = vif_out;
    this->__PVT__mbx_in = mbx_in;
    this->__PVT__mbx_out = mbx_out;
    this->__PVT__log = VL_NEW(Vtop___024unit__03a__03alogger, vlSymsp, 
                              std::string{"logs/monitor.log"});
}
