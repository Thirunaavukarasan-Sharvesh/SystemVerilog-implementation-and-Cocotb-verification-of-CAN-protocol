// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

Vtop___024unit__03a__03adriver::Vtop___024unit__03a__03adriver(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mbx = mbx;
    this->__PVT__vif = vif;
    this->__PVT__log = VL_NEW(Vtop___024unit__03a__03alogger, vlSymsp, "logs/driver.log"s);
}

VlCoroutine Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h11309bc8__1;
    __Vtrigprevexpr_h11309bc8__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h11309bc8__0;
    __Vtrigprevexpr_h11309bc8__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtop___024unit__03a__03atransaction> drvTrx;
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h65dc3471__4_Vtrigm_valid = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 15)
     ->valid) = 0U;
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    VL_ASSIGN_W(81, ([&]() {
                vlSymsp->TOP.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 1U;
            }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 16)
                     ->frame_in), __Vtemp_1);
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__mbx, "driver.sv", 18)->__VnoInFunc_get(vlSymsp, drvTrx);
        if ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 19)
                   ->tx_ready))) {
            CData/*0:0*/ __VdynTrigger_hb9c67d92__0;
            __VdynTrigger_hb9c67d92__0 = 0;
            __VdynTrigger_hb9c67d92__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hb9c67d92__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] $unit::driver.vif.tx_ready)", 
                                                             "driver.sv", 
                                                             19);
                __VdynTrigger_hb9c67d92__0 = VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 19)
                    ->tx_ready;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb9c67d92__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] $unit::driver.vif.tx_ready)", 
                                                         "driver.sv", 
                                                         19);
        }
        CData/*0:0*/ __VdynTrigger_h333e6b32__0;
        __VdynTrigger_h333e6b32__0 = 0;
        __VdynTrigger_h333e6b32__0 = 0U;
        __Vtrigprevexpr_h11309bc8__0 = VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 20)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h333e6b32__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::driver.vif.clk)", 
                                                         "driver.sv", 
                                                         20);
            __VdynTrigger_h333e6b32__0 = (VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 20)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h11309bc8__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h333e6b32__0);
            __Vtrigprevexpr_h11309bc8__0 = VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 20)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::driver.vif.clk)", 
                                                     "driver.sv", 
                                                     20);
        VL_NULL_CHECK(this->__PVT__log, "driver.sv", 22)->__VnoInFunc_separator(vlSymsp, "Driving Transaction"s);
        VL_NULL_CHECK(this->__PVT__log, "driver.sv", 23)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("ID   = %03x",0,
                                                                                11,
                                                                                VL_NULL_CHECK(drvTrx, "driver.sv", 23)
                                                                                ->__PVT__id) );
        VL_NULL_CHECK(this->__PVT__log, "driver.sv", 24)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("DLC  = %0#",0,
                                                                                4,
                                                                                VL_NULL_CHECK(drvTrx, "driver.sv", 24)
                                                                                ->__PVT__dlc) );
        VL_NULL_CHECK(this->__PVT__log, "driver.sv", 25)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("DATA = %016x",0,
                                                                                64,
                                                                                VL_NULL_CHECK(drvTrx, "driver.sv", 25)
                                                                                ->__PVT__data) );
        VL_ASSIGNSEL_WI(81, 11, 0x00000046U, ([&]() {
                    vlSymsp->TOP.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 1U;
                }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 26)
                                              ->frame_in), VL_NULL_CHECK(drvTrx, "driver.sv", 26)
                        ->__PVT__id);
        VL_ASSIGNBIT_WI(0x00000045U, ([&]() {
                    vlSymsp->TOP.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 1U;
                }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 27)
                                      ->frame_in), VL_NULL_CHECK(drvTrx, "driver.sv", 27)
                        ->__PVT__rtr);
        VL_ASSIGNBIT_WI(0x00000044U, ([&]() {
                    vlSymsp->TOP.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 1U;
                }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 28)
                                      ->frame_in), VL_NULL_CHECK(drvTrx, "driver.sv", 28)
                        ->__PVT__ide);
        VL_ASSIGNSEL_WI(81, 4, 0x00000040U, ([&]() {
                    vlSymsp->TOP.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 1U;
                }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 29)
                                             ->frame_in), VL_NULL_CHECK(drvTrx, "driver.sv", 29)
                        ->__PVT__dlc);
        VL_ASSIGNSEL_WQ(81, 64, 0U, ([&]() {
                    vlSymsp->TOP.__VvifTrigger_h65dc3471__5_Vtrigm_frame_in = 1U;
                }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 30)
                                     ->frame_in), VL_NULL_CHECK(drvTrx, "driver.sv", 30)
                        ->__PVT__data);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hd37ae977__0;
        __Vintraval_hd37ae977__0 = 0;
        __Vintraval_hd37ae977__0 = 1U;
        this->__VnoInFunc_drvdata____Vfork_1__0(vlSymsp, __Vintraval_hd37ae977__0);
        CData/*0:0*/ __VdynTrigger_h333e6b32__1;
        __VdynTrigger_h333e6b32__1 = 0;
        __VdynTrigger_h333e6b32__1 = 0U;
        __Vtrigprevexpr_h11309bc8__1 = VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 34)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h333e6b32__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::driver.vif.clk)", 
                                                         "driver.sv", 
                                                         34);
            __VdynTrigger_h333e6b32__1 = (VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 34)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h11309bc8__1)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h333e6b32__1);
            __Vtrigprevexpr_h11309bc8__1 = VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 34)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::driver.vif.clk)", 
                                                     "driver.sv", 
                                                     34);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hd3b16502__0;
        __Vintraval_hd3b16502__0 = 0;
        __Vintraval_hd3b16502__0 = 0U;
        this->__VnoInFunc_drvdata____Vfork_2__0(vlSymsp, __Vintraval_hd3b16502__0);
    }
    co_return;
}

VlCoroutine Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata____Vfork_2__0(Vtop__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hd3b16502__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__1;
    __VdynTrigger_h24befa02__1 = 0;
    __VdynTrigger_h24befa02__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "driver.sv", 
                                                     35);
        __VdynTrigger_h24befa02__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "driver.sv", 
                                                     35);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "driver.sv", 
                                                 35);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h65dc3471__4_Vtrigm_valid = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 35)
     ->valid) = __Vintraval_hd3b16502__0;
    co_return;
}

VlCoroutine Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata____Vfork_1__0(Vtop__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hd37ae977__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__0;
    __VdynTrigger_h24befa02__0 = 0;
    __VdynTrigger_h24befa02__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "driver.sv", 
                                                     32);
        __VdynTrigger_h24befa02__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "driver.sv", 
                                                     32);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "driver.sv", 
                                                 32);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_h65dc3471__4_Vtrigm_valid = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "driver.sv", 32)
     ->valid) = __Vintraval_hd37ae977__0;
    co_return;
}

void Vtop___024unit__03a__03adriver::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

std::string Vtop___024unit__03a__03adriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03adriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03adriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03adriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx:" + VL_TO_STRING(__PVT__mbx);
    out += ", vif:" + VL_TO_STRING(__PVT__vif);
    out += ", log:" + VL_TO_STRING(__PVT__log);
    return (out);
}
