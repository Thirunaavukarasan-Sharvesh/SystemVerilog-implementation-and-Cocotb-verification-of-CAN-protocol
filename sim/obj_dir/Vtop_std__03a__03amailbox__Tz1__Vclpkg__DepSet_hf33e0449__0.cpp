// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

Vtop_std__03a__03amailbox__Tz1::Vtop_std__03a__03amailbox__Tz1(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_bound = bound;
}

VlCoroutine Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_put(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if ((0U != this->__PVT__m_bound)) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_hfb402997__0;
            __VdynTrigger_hfb402997__0 = 0;
            __VdynTrigger_hfb402997__0 = 0U;
            CData/*0:0*/ __Vtrigcurrexpr_h09401811__0;
            __Vtrigcurrexpr_h09401811__0 = 0;
            while ((1U & (~ (IData)(__VdynTrigger_hfb402997__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "/usr/share/verilator/include/verilated_std.sv", 
                                                             44);
                __Vtrigcurrexpr_h09401811__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_hfb402997__0 = __Vtrigcurrexpr_h09401811__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfb402997__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         44);
        }
    }
    this->__PVT__m_queue.push_back(message);
}

VlCoroutine Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_get(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_h678e62b6__0;
        __VdynTrigger_h678e62b6__0 = 0;
        __VdynTrigger_h678e62b6__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h5d6154f2__0;
        __Vtrigcurrexpr_h5d6154f2__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h678e62b6__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         59);
            __Vtrigcurrexpr_h5d6154f2__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_h678e62b6__0 = __Vtrigcurrexpr_h5d6154f2__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h678e62b6__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/usr/share/verilator/include/verilated_std.sv", 
                                                     59);
    }
    message = this->__PVT__m_queue.pop_front();
}

VlCoroutine Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_h678e62b6__1;
        __VdynTrigger_h678e62b6__1 = 0;
        __VdynTrigger_h678e62b6__1 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h5d6154f2__1;
        __Vtrigcurrexpr_h5d6154f2__1 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h678e62b6__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         74);
            __Vtrigcurrexpr_h5d6154f2__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_h678e62b6__1 = __Vtrigcurrexpr_h5d6154f2__1;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h678e62b6__1);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/usr/share/verilator/include/verilated_std.sv", 
                                                     74);
    }
    message = this->__PVT__m_queue.at(0U);
}

void Vtop_std__03a__03amailbox__Tz1::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_bound = 0;
    }
