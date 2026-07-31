// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

Vtop___024unit__03a__03ascoreboard::Vtop___024unit__03a__03ascoreboard(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_in, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_act) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mbx_in = mbx_in;
    this->__PVT__mbx_act = mbx_act;
    this->__PVT__log = VL_NEW(Vtop___024unit__03a__03alogger, vlSymsp, "logs/scoreboard.log"s);
}

VlCoroutine Vtop___024unit__03a__03ascoreboard::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__mbx_in, "scoreboard.sv", 21)->__VnoInFunc_get(vlSymsp, this->__PVT__trx_in);
        co_await VL_NULL_CHECK(this->__PVT__mbx_act, "scoreboard.sv", 22)->__VnoInFunc_get(vlSymsp, this->__PVT__trx_out);
        this->__VnoInFunc_predict(vlSymsp);
        this->__VnoInFunc_compare(vlSymsp);
    }
    co_return;
}

void Vtop___024unit__03a__03ascoreboard::__VnoInFunc_predict(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::__VnoInFunc_predict\n"); );
    // Body
    CData/*0:0*/ __Vlvbound_hf1aca15a__0;
    __Vlvbound_hf1aca15a__0 = 0;
    IData/*31:0*/ unnamedblk4__DOT__i;
    this->__PVT__expected_queue.clear();
    this->__PVT__expected_queue.push_back(0U);
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 0x0aU)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 9U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 8U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 7U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 6U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 5U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 4U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 3U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 2U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 1U)));
    this->__PVT__expected_queue.push_back((1U & VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 36)
                                           ->__PVT__id));
    this->__PVT__expected_queue.push_back(VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 38)
                                          ->__PVT__rtr);
    this->__PVT__expected_queue.push_back(VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 39)
                                          ->__PVT__ide);
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 42)
                                                 ->__PVT__dlc 
                                                 >> 3U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 42)
                                                 ->__PVT__dlc 
                                                 >> 2U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 42)
                                                 ->__PVT__dlc 
                                                 >> 1U)));
    this->__PVT__expected_queue.push_back((1U & VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 42)
                                           ->__PVT__dlc));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3fU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3eU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3dU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3cU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3bU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3aU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x39U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x38U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x37U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x36U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x35U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x34U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x33U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x32U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x31U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x30U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2fU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2eU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2dU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2cU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2bU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2aU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x29U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x28U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x27U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x26U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x25U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x24U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x23U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x22U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x21U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x20U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1fU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1eU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1dU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1cU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1bU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1aU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x19U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x18U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x17U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x16U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x15U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x14U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x13U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x12U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x11U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x10U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x0fU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x0eU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x0dU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x0cU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x0bU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x0aU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 9U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 8U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 7U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 6U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 5U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 4U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 3U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 2U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 1U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(VL_NULL_CHECK(this->__PVT__trx_in, "scoreboard.sv", 45)
                                                        ->__PVT__data)));
    this->__VnoInFunc_crc_predict(vlSymsp);
    this->__PVT__expected_vector[0U] = 0U;
    this->__PVT__expected_vector[1U] = 0U;
    this->__PVT__expected_vector[2U] = 0U;
    this->__PVT__expected_vector[3U] = 0U;
    unnamedblk4__DOT__i = 0U;
    unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000006eU, unnamedblk4__DOT__i)) {
        __Vlvbound_hf1aca15a__0 = this->__PVT__expected_queue.at(unnamedblk4__DOT__i);
        if (VL_LIKELY(((0x6dU >= (0x0000007fU & ((IData)(0x6dU) 
                                                 - unnamedblk4__DOT__i)))))) {
            this->__PVT__expected_vector[(3U & (((IData)(0x6dU) 
                                                 - unnamedblk4__DOT__i) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(0x6dU) 
                                           - unnamedblk4__DOT__i)))) 
                    & this->__PVT__expected_vector[
                    (3U & (((IData)(0x6dU) - unnamedblk4__DOT__i) 
                           >> 5U))]) | ((IData)(__Vlvbound_hf1aca15a__0) 
                                        << (0x0000001fU 
                                            & ((IData)(0x6dU) 
                                               - unnamedblk4__DOT__i))));
        }
        unnamedblk4__DOT__i = ((IData)(1U) + unnamedblk4__DOT__i);
    }
}

void Vtop___024unit__03a__03ascoreboard::__VnoInFunc_crc_predict(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::__VnoInFunc_crc_predict\n"); );
    // Body
    IData/*31:0*/ unnamedblk5__DOT__i;
    SData/*14:0*/ crc;
    CData/*0:0*/ feedback;
    feedback = 0U;
    crc = 0U;
    unnamedblk5__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk5__DOT__i, this->__PVT__expected_queue.size())) {
        feedback = (1U & (this->__PVT__expected_queue.at(unnamedblk5__DOT__i) 
                          ^ ((IData)(crc) >> 0x0eU)));
        crc = ((0x00007ffeU & ((IData)(crc) << 1U)) 
               | (IData)(feedback));
        crc = ((0x3fffU & (IData)(crc)) | ((IData)(
                                                   (((IData)(crc) 
                                                     >> 0x0000000eU) 
                                                    ^ (IData)(feedback))) 
                                           << 0x0000000eU));
        crc = ((0x7bffU & (IData)(crc)) | (0x00000400U 
                                           & ((0xfffffc00U 
                                               & (IData)(crc)) 
                                              ^ ((IData)(feedback) 
                                                 << 0x0000000aU))));
        crc = ((0x7effU & (IData)(crc)) | (0x00000100U 
                                           & ((0xffffff00U 
                                               & (IData)(crc)) 
                                              ^ ((IData)(feedback) 
                                                 << 8U))));
        crc = ((0x7f7fU & (IData)(crc)) | (0x00000080U 
                                           & ((0xffffff80U 
                                               & (IData)(crc)) 
                                              ^ ((IData)(feedback) 
                                                 << 7U))));
        crc = ((0x7fefU & (IData)(crc)) | (0x00000010U 
                                           & ((0xfffffff0U 
                                               & (IData)(crc)) 
                                              ^ ((IData)(feedback) 
                                                 << 4U))));
        crc = ((0x7ff7U & (IData)(crc)) | (8U & ((0xfffffff8U 
                                                  & (IData)(crc)) 
                                                 ^ 
                                                 ((IData)(feedback) 
                                                  << 3U))));
        unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
    }
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0x0eU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0x0dU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0x0cU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0x0bU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0x0aU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 9U)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 8U)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 7U)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 6U)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 5U)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 4U)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 3U)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 2U)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 1U)));
    this->__PVT__expected_queue.push_back((1U & (IData)(crc)));
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
    this->__PVT__expected_queue.push_back(1U);
}

void Vtop___024unit__03a__03ascoreboard::__VnoInFunc_compare(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::__VnoInFunc_compare\n"); );
    // Body
    if (((1U & (this->__PVT__expected_vector[3U] >> 0x0000000dU)) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 85)
         ->__PVT__sof)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 87)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("SOF Mismatch Expected=%0b Actual=%0b",0,
                                                                                1,
                                                                                (1U 
                                                                                & (this->__PVT__expected_vector[3U] 
                                                                                >> 0x0000000dU)),
                                                                                1,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 87)
                                                                                ->__PVT__sof) );
    }
    if (((0x000007ffU & (this->__PVT__expected_vector[3U] 
                         >> 2U)) != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 90)
         ->__PVT__id)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 92)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("ID Mismatch Expected=%03x Actual=%03x",0,
                                                                                11,
                                                                                (0x000007ffU 
                                                                                & (this->__PVT__expected_vector[3U] 
                                                                                >> 2U)),
                                                                                11,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 92)
                                                                                ->__PVT__id) );
    }
    if (((1U & (this->__PVT__expected_vector[3U] >> 1U)) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 95)
         ->__PVT__rtr)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 97)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("RTR Mismatch Expected=%0b Actual=%0b",0,
                                                                                1,
                                                                                (1U 
                                                                                & (this->__PVT__expected_vector[3U] 
                                                                                >> 1U)),
                                                                                1,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 97)
                                                                                ->__PVT__rtr) );
    }
    if (((1U & this->__PVT__expected_vector[3U]) != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 100)
         ->__PVT__ide)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 102)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("IDE Mismatch Expected=%0b Actual=%0b",0,
                                                                                1,
                                                                                (1U 
                                                                                & this->__PVT__expected_vector[3U]),
                                                                                1,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 102)
                                                                                ->__PVT__ide) );
    }
    if (((this->__PVT__expected_vector[2U] >> 0x0000001cU) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 105)
         ->__PVT__dlc)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 107)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("DLC Mismatch Expected=%0# Actual=%0#",0,
                                                                                4,
                                                                                (this->__PVT__expected_vector[2U] 
                                                                                >> 0x0000001cU),
                                                                                4,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 107)
                                                                                ->__PVT__dlc) );
    }
    if (((((QData)((IData)(this->__PVT__expected_vector[2U])) 
           << 0x00000024U) | (((QData)((IData)(this->__PVT__expected_vector[1U])) 
                               << 4U) | ((QData)((IData)(this->__PVT__expected_vector[0U])) 
                                         >> 0x0000001cU))) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 110)
         ->__PVT__data)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 112)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("DATA Mismatch Expected=%016x Actual=%016x",0,
                                                                                64,
                                                                                (((QData)((IData)(this->__PVT__expected_vector[2U])) 
                                                                                << 0x00000024U) 
                                                                                | (((QData)((IData)(this->__PVT__expected_vector[1U])) 
                                                                                << 4U) 
                                                                                | ((QData)((IData)(this->__PVT__expected_vector[0U])) 
                                                                                >> 0x0000001cU))),
                                                                                64,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 112)
                                                                                ->__PVT__data) );
    }
    if (((0x00007fffU & (this->__PVT__expected_vector[0U] 
                         >> 0x0000000dU)) != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 115)
         ->__PVT__crc)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 117)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("CRC mismatch Expected=%04x Actual=%04x",0,
                                                                                15,
                                                                                (0x00007fffU 
                                                                                & (this->__PVT__expected_vector[0U] 
                                                                                >> 0x0000000dU)),
                                                                                15,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 117)
                                                                                ->__PVT__crc) );
    }
    if (((1U & (this->__PVT__expected_vector[0U] >> 0x0000000cU)) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 120)
         ->__PVT__crc_delim)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 122)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("CRC Delimiter Mismatch Expected=%0b Actual=%0b",0,
                                                                                1,
                                                                                (1U 
                                                                                & (this->__PVT__expected_vector[0U] 
                                                                                >> 0x0000000cU)),
                                                                                1,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 122)
                                                                                ->__PVT__crc_delim) );
    }
    if (((0x00000fffU & this->__PVT__expected_vector[0U]) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 125)
         ->__PVT__trailer)) {
        VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 127)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_N_NX("Trailer Mismatch Expected=%0b Actual=%0b",0,
                                                                                12,
                                                                                (0x00000fffU 
                                                                                & this->__PVT__expected_vector[0U]),
                                                                                12,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 127)
                                                                                ->__PVT__trailer) );
    }
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 131)->__VnoInFunc_separator(vlSymsp, "Scoreboard"s);
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 132)->__VnoInFunc_info(vlSymsp, "EXPECTED"s);
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 133)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("ID=%03x",0,
                                                                                11,
                                                                                (0x000007ffU 
                                                                                & (this->__PVT__expected_vector[3U] 
                                                                                >> 2U))) );
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 134)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("DLC=%0#",0,
                                                                                4,
                                                                                (this->__PVT__expected_vector[2U] 
                                                                                >> 0x0000001cU)) );
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 135)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("CRC=%04x",0,
                                                                                15,
                                                                                (0x00007fffU 
                                                                                & (this->__PVT__expected_vector[0U] 
                                                                                >> 0x0000000dU))) );
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 136)->__VnoInFunc_info(vlSymsp, "ACTUAL"s);
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 137)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("ID=%03x",0,
                                                                                11,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 137)
                                                                                ->__PVT__id) );
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 138)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("DLC=%0#",0,
                                                                                4,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 138)
                                                                                ->__PVT__dlc) );
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 139)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_N_NX("CRC=%04x",0,
                                                                                15,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "scoreboard.sv", 139)
                                                                                ->__PVT__crc) );
    VL_NULL_CHECK(this->__PVT__log, "scoreboard.sv", 140)->__VnoInFunc_log(vlSymsp, "FRAME PASS"s);
}

void Vtop___024unit__03a__03ascoreboard::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__expected_queue.atDefault() = 0;
    VL_ZERO_W(110, __PVT__expected_vector);
}

std::string Vtop___024unit__03a__03ascoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03ascoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx_in:" + VL_TO_STRING(__PVT__mbx_in);
    out += ", mbx_act:" + VL_TO_STRING(__PVT__mbx_act);
    out += ", trx_in:" + VL_TO_STRING(__PVT__trx_in);
    out += ", trx_out:" + VL_TO_STRING(__PVT__trx_out);
    out += ", log:" + VL_TO_STRING(__PVT__log);
    out += ", expected_queue:" + VL_TO_STRING(__PVT__expected_queue);
    out += ", expected_vector:" + VL_TO_STRING_W(4, __PVT__expected_vector);
    return (out);
}
