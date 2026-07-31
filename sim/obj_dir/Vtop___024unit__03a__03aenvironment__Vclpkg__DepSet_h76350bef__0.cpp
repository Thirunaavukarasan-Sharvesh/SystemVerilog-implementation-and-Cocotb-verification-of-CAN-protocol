// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"
#include "Vtop___024unit__03a__03aenvironment__Vclpkg.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtop___024unit__03a__03amonitor__Vclpkg.h"
#include "Vtop___024unit__03a__03ascoreboard__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

Vtop___024unit__03a__03aenvironment::Vtop___024unit__03a__03aenvironment(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* drv_vif, Vtop_frame_if* in_vif, Vtop_frame_if* out_vif) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aenvironment::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__drv_vif = drv_vif;
    this->__PVT__in_vif = in_vif;
    this->__PVT__out_vif = out_vif;
    this->__PVT__gen_drv_mbx = VL_NEW(Vtop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__mon_in_mbx = VL_NEW(Vtop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__mon_out_mbx = VL_NEW(Vtop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__gen = VL_NEW(Vtop___024unit__03a__03agenerator, vlSymsp, this->__PVT__gen_drv_mbx);
    this->__PVT__drv = VL_NEW(Vtop___024unit__03a__03adriver, vlSymsp, drv_vif, this->__PVT__gen_drv_mbx);
    this->__PVT__mon = VL_NEW(Vtop___024unit__03a__03amonitor, vlSymsp, in_vif, out_vif, this->__PVT__mon_in_mbx, this->__PVT__mon_out_mbx);
    this->__PVT__sb = VL_NEW(Vtop___024unit__03a__03ascoreboard, vlSymsp, this->__PVT__mon_in_mbx, this->__PVT__mon_out_mbx);
}
