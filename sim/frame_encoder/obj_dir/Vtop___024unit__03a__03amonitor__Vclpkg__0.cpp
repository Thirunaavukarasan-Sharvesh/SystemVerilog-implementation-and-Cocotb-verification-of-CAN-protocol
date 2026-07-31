// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

Vtop___024unit__03a__03amonitor::Vtop___024unit__03a__03amonitor(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif_in, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif_in = vif_in;
    this->__PVT__mbx_in = mbx_in;
    this->__PVT__log = VL_NEW(Vtop___024unit__03a__03alogger, vlSymsp, "logs/monitor.log"s);
}

VlCoroutine Vtop___024unit__03a__03amonitor::__VnoInFunc_monitor_input(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::__VnoInFunc_monitor_input\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h52eb991e__0;
    __Vtrigprevexpr_h52eb991e__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtop___024unit__03a__03atransaction> monTrx_in;
    while (true) {
        CData/*0:0*/ __VdynTrigger_h71136d5c__0;
        __VdynTrigger_h71136d5c__0 = 0;
        __VdynTrigger_h71136d5c__0 = 0U;
        __Vtrigprevexpr_h52eb991e__0 = VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 27)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h71136d5c__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::monitor.vif_in.clk)", 
                                                         "monitor.sv", 
                                                         27);
            __VdynTrigger_h71136d5c__0 = (VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 27)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h52eb991e__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h71136d5c__0);
            __Vtrigprevexpr_h52eb991e__0 = VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 27)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::monitor.vif_in.clk)", 
                                                     "monitor.sv", 
                                                     27);
        if (VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 28)
            ->valid) {
            VL_NULL_CHECK(this->__PVT__log, "monitor.sv", 29)->__VnoInFunc_separator(vlSymsp, "Input Monitor"s);
            monTrx_in = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
            VL_NULL_CHECK(monTrx_in, "monitor.sv", 31)->__PVT__id 
                = (0x000007ffU & (VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 31)
                                  ->frame_in[2U] >> 6U));
            VL_NULL_CHECK(monTrx_in, "monitor.sv", 32)->__PVT__rtr 
                = (1U & (VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 32)
                         ->frame_in[2U] >> 5U));
            VL_NULL_CHECK(monTrx_in, "monitor.sv", 33)->__PVT__ide 
                = (1U & (VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 33)
                         ->frame_in[2U] >> 4U));
            VL_NULL_CHECK(monTrx_in, "monitor.sv", 34)->__PVT__dlc 
                = (0x0000000fU & VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 34)
                   ->frame_in[2U]);
            VL_NULL_CHECK(monTrx_in, "monitor.sv", 35)->__PVT__data 
                = (((QData)((IData)(VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 35)
                                    ->frame_in[1U])) 
                    << 0x00000020U) | (QData)((IData)(VL_NULL_CHECK(this->__PVT__vif_in, "monitor.sv", 35)
                                                      ->frame_in[0U])));
            co_await VL_NULL_CHECK(this->__PVT__mbx_in, "monitor.sv", 36)->__VnoInFunc_put(vlSymsp, monTrx_in);
            VL_NULL_CHECK(this->__PVT__log, "monitor.sv", 37)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("Captured ID=%03x",0,
                                                                                11,
                                                                                VL_NULL_CHECK(monTrx_in, "monitor.sv", 37)
                                                                                ->__PVT__id) );
            VL_NULL_CHECK(this->__PVT__log, "monitor.sv", 38)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("Captured RTR=%0b",0,
                                                                                1,
                                                                                VL_NULL_CHECK(monTrx_in, "monitor.sv", 38)
                                                                                ->__PVT__rtr) );
            VL_NULL_CHECK(this->__PVT__log, "monitor.sv", 39)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("Captured IDE=%0b",0,
                                                                                1,
                                                                                VL_NULL_CHECK(monTrx_in, "monitor.sv", 39)
                                                                                ->__PVT__ide) );
            VL_NULL_CHECK(this->__PVT__log, "monitor.sv", 40)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("DLC=%0#",0,
                                                                                4,
                                                                                VL_NULL_CHECK(monTrx_in, "monitor.sv", 40)
                                                                                ->__PVT__dlc) );
            VL_NULL_CHECK(this->__PVT__log, "monitor.sv", 41)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("DATA=%016x",0,
                                                                                64,
                                                                                VL_NULL_CHECK(monTrx_in, "monitor.sv", 41)
                                                                                ->__PVT__data) );
        }
    }
    co_return;
}

void Vtop___024unit__03a__03amonitor::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif_in = nullptr;
}

std::string Vtop___024unit__03a__03amonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03amonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx_in:" + VL_TO_STRING(__PVT__mbx_in);
    out += ", vif_in:" + VL_TO_STRING(__PVT__vif_in);
    out += ", log:" + VL_TO_STRING(__PVT__log);
    return (out);
}
