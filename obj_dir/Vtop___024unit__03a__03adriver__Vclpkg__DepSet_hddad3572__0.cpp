// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03adriver::__VnoInFunc_drvdata\n"); );
    // Init
    VL_KEEP_THIS;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlClassRef<Vtop___024unit__03a__03atransaction> drvTrx;
    VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 15)->valid = 0U;
    vlSymsp->TOP.__VvifTrigger_h65dc2cc6__0 = 1U;
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    VL_ASSIGN_W(81,VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 16)
                ->frame_in, __Vtemp_1);
    while (1U) {
        co_await VL_NULL_CHECK(this->__PVT__mbx, "sim/frame_encoder/driver.sv", 18)->__VnoInFunc_get(vlSymsp, drvTrx);
        CData/*0:0*/ __VdynTrigger_h8686ef17__0;
        __VdynTrigger_h8686ef17__0 = 0;
        __VdynTrigger_h8686ef17__0 = 0U;
        CData/*0:0*/ __Vtrigprevexpr_h8068e649__0;
        __Vtrigprevexpr_h8068e649__0 = 0;
        __Vtrigprevexpr_h8068e649__0 = VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 19)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h8686ef17__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::driver.vif.clk)", 
                                                         "sim/frame_encoder/driver.sv", 
                                                         19);
            __VdynTrigger_h8686ef17__0 = (VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 19)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h8068e649__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8686ef17__0);
            __Vtrigprevexpr_h8068e649__0 = VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 19)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::driver.vif.clk)", 
                                                     "sim/frame_encoder/driver.sv", 
                                                     19);
        VL_NULL_CHECK(this->__PVT__log, "sim/frame_encoder/driver.sv", 21)->__VnoInFunc_separator(vlSymsp, 
                                                                                std::string{"Driving Transaction"});
        VL_NULL_CHECK(this->__PVT__log, "sim/frame_encoder/driver.sv", 22)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("ID   = %03x",
                                                                                11,
                                                                                VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 22)
                                                                                ->__PVT__id) );
        VL_NULL_CHECK(this->__PVT__log, "sim/frame_encoder/driver.sv", 23)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("DLC  = %0#",
                                                                                4,
                                                                                VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 23)
                                                                                ->__PVT__dlc) );
        VL_NULL_CHECK(this->__PVT__log, "sim/frame_encoder/driver.sv", 24)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("DATA = %016x",
                                                                                64,
                                                                                VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 24)
                                                                                ->__PVT__data) );
        VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 25)->frame_in[2U] 
            = ((0x3fU & VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 25)
                ->frame_in[2U]) | (0x1ffffU & ((IData)(VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 25)
                                                       ->__PVT__id) 
                                               << 6U)));
        vlSymsp->TOP.__VvifTrigger_h65dc2cc6__0 = 1U;
        VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 26)->frame_in[2U] 
            = ((0x1ffdfU & VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 26)
                ->frame_in[2U]) | (0x1ffffU & ((IData)(VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 26)
                                                       ->__PVT__rtr) 
                                               << 5U)));
        VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 27)->frame_in[2U] 
            = ((0x1ffefU & VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 27)
                ->frame_in[2U]) | (0x1ffffU & ((IData)(VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 27)
                                                       ->__PVT__ide) 
                                               << 4U)));
        VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 28)->frame_in[2U] 
            = ((0x1fff0U & VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 28)
                ->frame_in[2U]) | (0x1ffffU & VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 28)
                                   ->__PVT__dlc));
        VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 29)->frame_in[0U] 
            = (IData)(VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 29)
                      ->__PVT__data);
        VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 29)->frame_in[1U] 
            = (IData)((VL_NULL_CHECK(drvTrx, "sim/frame_encoder/driver.sv", 29)
                       ->__PVT__data >> 0x20U));
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hccf890f6__0;
        __Vintraval_hccf890f6__0 = 0;
        __Vintraval_hccf890f6__0 = 1U;
        this->__VnoInFunc_drvdata____Vfork_1__1(vlSymsp, __Vintraval_hccf890f6__0);
        CData/*0:0*/ __VdynTrigger_h8686ef17__1;
        __VdynTrigger_h8686ef17__1 = 0;
        __VdynTrigger_h8686ef17__1 = 0U;
        CData/*0:0*/ __Vtrigprevexpr_h8068e649__1;
        __Vtrigprevexpr_h8068e649__1 = 0;
        __Vtrigprevexpr_h8068e649__1 = VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 33)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h8686ef17__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::driver.vif.clk)", 
                                                         "sim/frame_encoder/driver.sv", 
                                                         33);
            __VdynTrigger_h8686ef17__1 = (VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 33)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h8068e649__1)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8686ef17__1);
            __Vtrigprevexpr_h8068e649__1 = VL_NULL_CHECK(this->__PVT__vif, "sim/frame_encoder/driver.sv", 33)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::driver.vif.clk)", 
                                                     "sim/frame_encoder/driver.sv", 
                                                     33);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hccf98c5e__0;
        __Vintraval_hccf98c5e__0 = 0;
        __Vintraval_hccf98c5e__0 = 0U;
        this->__VnoInFunc_drvdata____Vfork_2__1(vlSymsp, __Vintraval_hccf98c5e__0);
    }
}
