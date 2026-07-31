// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03ascoreboard__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"

void Vtop___024unit__03a__03ascoreboard::__VnoInFunc_predict(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::__VnoInFunc_predict\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    this->__PVT__expected_queue.clear();
    this->__PVT__expected_queue.push_back(0U);
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 0xaU)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 9U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 8U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 7U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 6U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 5U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 4U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 3U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 2U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                                 ->__PVT__id 
                                                 >> 1U)));
    this->__PVT__expected_queue.push_back((1U & VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 36)
                                           ->__PVT__id));
    unnamedblk1__DOT__i = 0xffffffffU;
    this->__PVT__expected_queue.push_back(VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 38)
                                          ->__PVT__rtr);
    this->__PVT__expected_queue.push_back(VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 39)
                                          ->__PVT__ide);
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 42)
                                                 ->__PVT__dlc 
                                                 >> 3U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 42)
                                                 ->__PVT__dlc 
                                                 >> 2U)));
    this->__PVT__expected_queue.push_back((1U & (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 42)
                                                 ->__PVT__dlc 
                                                 >> 1U)));
    this->__PVT__expected_queue.push_back((1U & VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 42)
                                           ->__PVT__dlc));
    unnamedblk2__DOT__i = 0xffffffffU;
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3fU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3eU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3dU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3cU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3bU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x3aU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x39U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x38U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x37U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x36U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x35U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x34U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x33U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x32U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x31U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x30U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2fU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2eU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2dU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2cU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2bU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x2aU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x29U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x28U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x27U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x26U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x25U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x24U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x23U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x22U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x21U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x20U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1fU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1eU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1dU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1cU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1bU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x1aU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x19U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x18U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x17U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x16U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x15U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x14U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x13U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x12U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x11U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0x10U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0xfU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0xeU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0xdU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0xcU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0xbU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 0xaU))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 9U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 8U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 7U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 6U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 5U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 4U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 3U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 2U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(
                                                        (VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                         ->__PVT__data 
                                                         >> 1U))));
    this->__PVT__expected_queue.push_back((1U & (IData)(VL_NULL_CHECK(this->__PVT__trx_in, "frame_encoder/scoreboard.sv", 45)
                                                        ->__PVT__data)));
    unnamedblk3__DOT__i = 0xffffffffU;
    this->__VnoInFunc_crc_predict(vlSymsp);
    this->__PVT__expected_vector[0U] = 0U;
    this->__PVT__expected_vector[1U] = 0U;
    this->__PVT__expected_vector[2U] = 0U;
    this->__PVT__expected_vector[3U] = 0U;
    unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x6eU, unnamedblk4__DOT__i)) {
        this->__Vlvbound_h6d836285__0 = this->__PVT__expected_queue.at(unnamedblk4__DOT__i);
        if (VL_LIKELY((0x6dU >= (0x7fU & ((IData)(0x6dU) 
                                          - unnamedblk4__DOT__i))))) {
            this->__PVT__expected_vector[(3U & (((IData)(0x6dU) 
                                                 - unnamedblk4__DOT__i) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x6dU) 
                                                 - unnamedblk4__DOT__i)))) 
                    & this->__PVT__expected_vector[
                    (3U & (((IData)(0x6dU) - unnamedblk4__DOT__i) 
                           >> 5U))]) | ((IData)(this->__Vlvbound_h6d836285__0) 
                                        << (0x1fU & 
                                            ((IData)(0x6dU) 
                                             - unnamedblk4__DOT__i))));
        }
        unnamedblk4__DOT__i = ((IData)(1U) + unnamedblk4__DOT__i);
    }
}
