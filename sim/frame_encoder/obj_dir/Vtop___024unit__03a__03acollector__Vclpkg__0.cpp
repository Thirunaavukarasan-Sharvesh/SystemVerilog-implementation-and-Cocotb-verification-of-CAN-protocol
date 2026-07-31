// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

Vtop___024unit__03a__03acollector::Vtop___024unit__03a__03acollector(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03acollector::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif = vif;
    this->__PVT__mbx = mbx;
    this->__PVT__log = VL_NEW(Vtop___024unit__03a__03alogger, vlSymsp, "logs/output_monitor.log"s);
}

VlCoroutine Vtop___024unit__03a__03acollector::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03acollector::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0e4ee019__0;
    __Vtrigprevexpr_h0e4ee019__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtop___024unit__03a__03atransaction> trx;
    while (true) {
        CData/*0:0*/ __VdynTrigger_h3830a685__0;
        __VdynTrigger_h3830a685__0 = 0;
        __VdynTrigger_h3830a685__0 = 0U;
        __Vtrigprevexpr_h0e4ee019__0 = VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 19)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3830a685__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::collector.vif.clk)", 
                                                         "collector.sv", 
                                                         19);
            __VdynTrigger_h3830a685__0 = (VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 19)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h0e4ee019__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3830a685__0);
            __Vtrigprevexpr_h0e4ee019__0 = VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 19)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::collector.vif.clk)", 
                                                     "collector.sv", 
                                                     19);
        if (VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 20)
            ->frame_done) {
            trx = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
            VL_NULL_CHECK(trx, "collector.sv", 24)->__PVT__sof 
                = (1U & (VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 24)
                         ->frame[3U] >> 0x0000000dU));
            VL_NULL_CHECK(trx, "collector.sv", 25)->__PVT__id 
                = (0x000007ffU & (VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 25)
                                  ->frame[3U] >> 2U));
            VL_NULL_CHECK(trx, "collector.sv", 26)->__PVT__rtr 
                = (1U & (VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 26)
                         ->frame[3U] >> 1U));
            VL_NULL_CHECK(trx, "collector.sv", 27)->__PVT__ide 
                = (1U & VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 27)
                   ->frame[3U]);
            VL_NULL_CHECK(trx, "collector.sv", 28)->__PVT__dlc 
                = (VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 28)
                   ->frame[2U] >> 0x0000001cU);
            VL_NULL_CHECK(trx, "collector.sv", 29)->__PVT__data 
                = (((QData)((IData)(VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 29)
                                    ->frame[2U])) << 0x00000024U) 
                   | (((QData)((IData)(VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 29)
                                       ->frame[1U])) 
                       << 4U) | ((QData)((IData)(VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 29)
                                                 ->frame[0U])) 
                                 >> 0x0000001cU)));
            VL_NULL_CHECK(trx, "collector.sv", 30)->__PVT__crc 
                = (0x00007fffU & (VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 30)
                                  ->frame[0U] >> 0x0000000dU));
            VL_NULL_CHECK(trx, "collector.sv", 31)->__PVT__crc_delim 
                = (1U & (VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 31)
                         ->frame[0U] >> 0x0000000cU));
            VL_NULL_CHECK(trx, "collector.sv", 32)->__PVT__trailer 
                = (0x00000fffU & VL_NULL_CHECK(this->__PVT__vif, "collector.sv", 32)
                   ->frame[0U]);
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 34)->__VnoInFunc_separator(vlSymsp, "Output Monitor"s);
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 36)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("SOF=%0b",0,
                                                                                1,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 36)
                                                                                ->__PVT__sof) );
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 37)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("ID=%03x",0,
                                                                                11,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 37)
                                                                                ->__PVT__id) );
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 38)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("RTR=%0b",0,
                                                                                1,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 38)
                                                                                ->__PVT__rtr) );
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 39)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("IDE=%0b",0,
                                                                                1,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 39)
                                                                                ->__PVT__ide) );
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 40)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("DLC=%0#",0,
                                                                                4,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 40)
                                                                                ->__PVT__dlc) );
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 41)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("DATA=%016x",0,
                                                                                64,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 41)
                                                                                ->__PVT__data) );
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 42)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("CRC=%04x",0,
                                                                                15,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 42)
                                                                                ->__PVT__crc) );
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 43)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("CRC_DELIM=%0b",0,
                                                                                1,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 43)
                                                                                ->__PVT__crc_delim) );
            VL_NULL_CHECK(this->__PVT__log, "collector.sv", 44)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("TRAILER=%012b",0,
                                                                                12,
                                                                                VL_NULL_CHECK(trx, "collector.sv", 44)
                                                                                ->__PVT__trailer) );
            co_await VL_NULL_CHECK(this->__PVT__mbx, "collector.sv", 46)->__VnoInFunc_put(vlSymsp, trx);
        }
    }
    co_return;
}

void Vtop___024unit__03a__03acollector::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03acollector::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

std::string Vtop___024unit__03a__03acollector::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03acollector::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03acollector::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03acollector::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx:" + VL_TO_STRING(__PVT__mbx);
    out += ", vif:" + VL_TO_STRING(__PVT__vif);
    out += ", log:" + VL_TO_STRING(__PVT__log);
    return (out);
}
