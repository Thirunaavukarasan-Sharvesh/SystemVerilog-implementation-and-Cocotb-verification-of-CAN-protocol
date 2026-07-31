// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"
#include "Vtop___024unit__03a__03amonitor__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03amonitor::__VnoInFunc_monitor_input(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::__VnoInFunc_monitor_input\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    VlClassRef<Vtop___024unit__03a__03atransaction> monTrx_in;
    while (1U) {
        CData/*0:0*/ __VdynTrigger_h9231d9ac__0;
        __VdynTrigger_h9231d9ac__0 = 0;
        __VdynTrigger_h9231d9ac__0 = 0U;
        CData/*0:0*/ __Vtrigprevexpr_h744dcab6__0;
        __Vtrigprevexpr_h744dcab6__0 = 0;
        __Vtrigprevexpr_h744dcab6__0 = VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 24)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h9231d9ac__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::monitor.vif_in.clk)", 
                                                         "frame_encoder/monitor.sv", 
                                                         24);
            __VdynTrigger_h9231d9ac__0 = (VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 24)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h744dcab6__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9231d9ac__0);
            __Vtrigprevexpr_h744dcab6__0 = VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 24)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::monitor.vif_in.clk)", 
                                                     "frame_encoder/monitor.sv", 
                                                     24);
        if (VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 25)
            ->valid) {
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 26)->__VnoInFunc_separator(vlSymsp, 
                                                                                std::string{"Input Monitor"});
            monTrx_in = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
            VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 28)->__PVT__id 
                = (0x7ffU & (VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 28)
                             ->frame_in[2U] >> 6U));
            VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 29)->__PVT__rtr 
                = (1U & (VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 29)
                         ->frame_in[2U] >> 5U));
            VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 30)->__PVT__ide 
                = (1U & (VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 30)
                         ->frame_in[2U] >> 4U));
            VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 31)->__PVT__dlc 
                = (0xfU & VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 31)
                   ->frame_in[2U]);
            VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 32)->__PVT__data 
                = (((QData)((IData)(VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 32)
                                    ->frame_in[1U])) 
                    << 0x20U) | (QData)((IData)(VL_NULL_CHECK(this->__PVT__vif_in, "frame_encoder/monitor.sv", 32)
                                                ->frame_in[0U])));
            co_await VL_NULL_CHECK(this->__PVT__mbx_in, "frame_encoder/monitor.sv", 33)->__VnoInFunc_put(vlSymsp, monTrx_in);
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 34)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("Captured ID=%03x",
                                                                                11,
                                                                                VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 34)
                                                                                ->__PVT__id) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 35)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("Captured RTR=%0b",
                                                                                1,
                                                                                VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 35)
                                                                                ->__PVT__rtr) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 36)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("Captured IDE=%0b",
                                                                                1,
                                                                                VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 36)
                                                                                ->__PVT__ide) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 37)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("DLC=%0#",
                                                                                4,
                                                                                VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 37)
                                                                                ->__PVT__dlc) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 38)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("DATA=%016x",
                                                                                64,
                                                                                VL_NULL_CHECK(monTrx_in, "frame_encoder/monitor.sv", 38)
                                                                                ->__PVT__data) );
        }
    }
}

VlCoroutine Vtop___024unit__03a__03amonitor::__VnoInFunc_monitor_output(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop___024unit__03a__03amonitor::__VnoInFunc_monitor_output\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vtop___024unit__03a__03atransaction> monTrx_out;
    while (1U) {
        CData/*0:0*/ __VdynTrigger_hafc1c2e6__0;
        __VdynTrigger_hafc1c2e6__0 = 0;
        __VdynTrigger_hafc1c2e6__0 = 0U;
        CData/*0:0*/ __Vtrigprevexpr_h95beba58__0;
        __Vtrigprevexpr_h95beba58__0 = 0;
        __Vtrigprevexpr_h95beba58__0 = VL_NULL_CHECK(this->__PVT__vif_out, "frame_encoder/monitor.sv", 46)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_hafc1c2e6__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::monitor.vif_out.clk)", 
                                                         "frame_encoder/monitor.sv", 
                                                         46);
            __VdynTrigger_hafc1c2e6__0 = (VL_NULL_CHECK(this->__PVT__vif_out, "frame_encoder/monitor.sv", 46)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h95beba58__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hafc1c2e6__0);
            __Vtrigprevexpr_h95beba58__0 = VL_NULL_CHECK(this->__PVT__vif_out, "frame_encoder/monitor.sv", 46)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::monitor.vif_out.clk)", 
                                                     "frame_encoder/monitor.sv", 
                                                     46);
        if (VL_NULL_CHECK(this->__PVT__vif_out, "frame_encoder/monitor.sv", 47)
            ->valid_out) {
            this->__PVT__bit_queue.push_back(VL_NULL_CHECK(this->__PVT__vif_out, "frame_encoder/monitor.sv", 48)
                                             ->bit_out);
        }
        if (VL_LTES_III(32, 0x6eU, this->__PVT__bit_queue.size())) {
            monTrx_out = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 52)->__VnoInFunc_separator(vlSymsp, 
                                                                                std::string{"Output Monitor"});
            this->__PVT__bit_vector[0U] = 0U;
            this->__PVT__bit_vector[1U] = 0U;
            this->__PVT__bit_vector[2U] = 0U;
            this->__PVT__bit_vector[3U] = 0U;
            unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 0x6eU, unnamedblk1__DOT__i)) {
                this->__Vlvbound_h8e5762a9__0 = this->__PVT__bit_queue.at(unnamedblk1__DOT__i);
                if (VL_LIKELY((0x6dU >= (0x7fU & ((IData)(0x6dU) 
                                                  - unnamedblk1__DOT__i))))) {
                    this->__PVT__bit_vector[(3U & (
                                                   ((IData)(0x6dU) 
                                                    - unnamedblk1__DOT__i) 
                                                   >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x6dU) 
                                                   - unnamedblk1__DOT__i)))) 
                            & this->__PVT__bit_vector[
                            (3U & (((IData)(0x6dU) 
                                    - unnamedblk1__DOT__i) 
                                   >> 5U))]) | ((IData)(this->__Vlvbound_h8e5762a9__0) 
                                                << 
                                                (0x1fU 
                                                 & ((IData)(0x6dU) 
                                                    - unnamedblk1__DOT__i))));
                }
                unnamedblk1__DOT__i = ((IData)(1U) 
                                       + unnamedblk1__DOT__i);
            }
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 57)->__PVT__sof 
                = (1U & (this->__PVT__bit_vector[3U] 
                         >> 0xdU));
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 58)->__PVT__id 
                = (0x7ffU & (this->__PVT__bit_vector[3U] 
                             >> 2U));
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 59)->__PVT__rtr 
                = (1U & (this->__PVT__bit_vector[3U] 
                         >> 1U));
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 60)->__PVT__ide 
                = (1U & this->__PVT__bit_vector[3U]);
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 61)->__PVT__dlc 
                = (this->__PVT__bit_vector[2U] >> 0x1cU);
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 62)->__PVT__data 
                = (((QData)((IData)(this->__PVT__bit_vector[2U])) 
                    << 0x24U) | (((QData)((IData)(this->__PVT__bit_vector[1U])) 
                                  << 4U) | ((QData)((IData)(
                                                            this->__PVT__bit_vector[0U])) 
                                            >> 0x1cU)));
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 63)->__PVT__crc 
                = (0x7fffU & (this->__PVT__bit_vector[0U] 
                              >> 0xdU));
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 64)->__PVT__crc_delim 
                = (1U & (this->__PVT__bit_vector[0U] 
                         >> 0xcU));
            VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 65)->__PVT__trailer 
                = (0xfffU & this->__PVT__bit_vector[0U]);
            this->__PVT__bit_queue.clear();
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 68)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("SOF=%0b",
                                                                                1,
                                                                                VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 68)
                                                                                ->__PVT__sof) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 69)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("ID=%03x",
                                                                                11,
                                                                                VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 69)
                                                                                ->__PVT__id) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 70)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("RTR=%0b",
                                                                                1,
                                                                                VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 70)
                                                                                ->__PVT__rtr) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 71)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("IDE=%0b",
                                                                                1,
                                                                                VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 71)
                                                                                ->__PVT__ide) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 72)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("DLC=%0#",
                                                                                4,
                                                                                VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 72)
                                                                                ->__PVT__dlc) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 73)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("DATA=%016x",
                                                                                64,
                                                                                VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 73)
                                                                                ->__PVT__data) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 74)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("CRC=%04x",
                                                                                15,
                                                                                VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 74)
                                                                                ->__PVT__crc) );
            VL_NULL_CHECK(this->__PVT__log, "frame_encoder/monitor.sv", 75)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("Trailer=%012b",
                                                                                12,
                                                                                VL_NULL_CHECK(monTrx_out, "frame_encoder/monitor.sv", 75)
                                                                                ->__PVT__trailer) );
            co_await VL_NULL_CHECK(this->__PVT__mbx_out, "frame_encoder/monitor.sv", 76)->__VnoInFunc_put(vlSymsp, monTrx_out);
        }
    }
}
