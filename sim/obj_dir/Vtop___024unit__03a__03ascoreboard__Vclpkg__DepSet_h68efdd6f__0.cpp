// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"
#include "Vtop___024unit__03a__03ascoreboard__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"

void Vtop___024unit__03a__03ascoreboard::__VnoInFunc_compare(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::__VnoInFunc_compare\n"); );
    // Body
    CData/*0:0*/ pass;
    pass = 0;
    pass = 1U;
    if (((1U & (this->__PVT__expected_vector[3U] >> 0xdU)) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 85)
         ->__PVT__sof)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 87)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("SOF Mismatch Expected=%0b Actual=%0b",
                                                                                1,
                                                                                (1U 
                                                                                & (this->__PVT__expected_vector[3U] 
                                                                                >> 0xdU)),
                                                                                1,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 87)
                                                                                ->__PVT__sof) );
    }
    if (((0x7ffU & (this->__PVT__expected_vector[3U] 
                    >> 2U)) != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 90)
         ->__PVT__id)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 92)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("ID Mismatch Expected=%03x Actual=%03x",
                                                                                11,
                                                                                (0x7ffU 
                                                                                & (this->__PVT__expected_vector[3U] 
                                                                                >> 2U)),
                                                                                11,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 92)
                                                                                ->__PVT__id) );
    }
    if (((1U & (this->__PVT__expected_vector[3U] >> 1U)) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 95)
         ->__PVT__rtr)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 97)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("RTR Mismatch Expected=%0b Actual=%0b",
                                                                                1,
                                                                                (1U 
                                                                                & (this->__PVT__expected_vector[3U] 
                                                                                >> 1U)),
                                                                                1,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 97)
                                                                                ->__PVT__rtr) );
    }
    if (((1U & this->__PVT__expected_vector[3U]) != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 100)
         ->__PVT__ide)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 102)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("IDE Mismatch Expected=%0b Actual=%0b",
                                                                                1,
                                                                                (1U 
                                                                                & this->__PVT__expected_vector[3U]),
                                                                                1,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 102)
                                                                                ->__PVT__ide) );
    }
    if (((this->__PVT__expected_vector[2U] >> 0x1cU) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 105)
         ->__PVT__dlc)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 107)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("DLC Mismatch Expected=%0# Actual=%0#",
                                                                                4,
                                                                                (this->__PVT__expected_vector[2U] 
                                                                                >> 0x1cU),
                                                                                4,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 107)
                                                                                ->__PVT__dlc) );
    }
    if (((((QData)((IData)(this->__PVT__expected_vector[2U])) 
           << 0x24U) | (((QData)((IData)(this->__PVT__expected_vector[1U])) 
                         << 4U) | ((QData)((IData)(
                                                   this->__PVT__expected_vector[0U])) 
                                   >> 0x1cU))) != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 110)
         ->__PVT__data)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 112)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("DATA Mismatch Expected=%016x Actual=%016x",
                                                                                64,
                                                                                (((QData)((IData)(
                                                                                this->__PVT__expected_vector[2U])) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                this->__PVT__expected_vector[1U])) 
                                                                                << 4U) 
                                                                                | ((QData)((IData)(
                                                                                this->__PVT__expected_vector[0U])) 
                                                                                >> 0x1cU))),
                                                                                64,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 112)
                                                                                ->__PVT__data) );
    }
    if (((0x7fffU & (this->__PVT__expected_vector[0U] 
                     >> 0xdU)) != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 115)
         ->__PVT__crc)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 117)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("CRC mismatch Expected=%04x Actual=%04x",
                                                                                15,
                                                                                (0x7fffU 
                                                                                & (this->__PVT__expected_vector[0U] 
                                                                                >> 0xdU)),
                                                                                15,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 117)
                                                                                ->__PVT__crc) );
    }
    if (((1U & (this->__PVT__expected_vector[0U] >> 0xcU)) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 120)
         ->__PVT__crc_delim)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 122)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("CRC Delimiter Mismatch Expected=%0b Actual=%0b",
                                                                                1,
                                                                                (1U 
                                                                                & (this->__PVT__expected_vector[0U] 
                                                                                >> 0xcU)),
                                                                                1,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 122)
                                                                                ->__PVT__crc_delim) );
    }
    if (((0xfffU & this->__PVT__expected_vector[0U]) 
         != VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 125)
         ->__PVT__trailer)) {
        pass = 0U;
        VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 127)->__VnoInFunc_error(vlSymsp, VL_SFORMATF_NX("Trailer Mismatch Expected=%0b Actual=%0b",
                                                                                12,
                                                                                (0xfffU 
                                                                                & this->__PVT__expected_vector[0U]),
                                                                                12,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 127)
                                                                                ->__PVT__trailer) );
    }
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 131)->__VnoInFunc_separator(vlSymsp, 
                                                                                std::string{"Scoreboard"});
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 132)->__VnoInFunc_info(vlSymsp, 
                                                                                std::string{"EXPECTED"});
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 133)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("ID=%03x",
                                                                                11,
                                                                                (0x7ffU 
                                                                                & (this->__PVT__expected_vector[3U] 
                                                                                >> 2U))) );
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 134)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("DLC=%0#",
                                                                                4,
                                                                                (this->__PVT__expected_vector[2U] 
                                                                                >> 0x1cU)) );
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 135)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("CRC=%04x",
                                                                                15,
                                                                                (0x7fffU 
                                                                                & (this->__PVT__expected_vector[0U] 
                                                                                >> 0xdU))) );
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 136)->__VnoInFunc_info(vlSymsp, 
                                                                                std::string{"ACTUAL"});
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 137)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("ID=%03x",
                                                                                11,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 137)
                                                                                ->__PVT__id) );
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 138)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("DLC=%0#",
                                                                                4,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 138)
                                                                                ->__PVT__dlc) );
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 139)->__VnoInFunc_info(vlSymsp, VL_SFORMATF_NX("CRC=%04x",
                                                                                15,
                                                                                VL_NULL_CHECK(this->__PVT__trx_out, "frame_encoder/scoreboard.sv", 139)
                                                                                ->__PVT__crc) );
    VL_NULL_CHECK(this->__PVT__log, "frame_encoder/scoreboard.sv", 140)->__VnoInFunc_log(vlSymsp, 
                                                                                std::string{"FRAME PASS"});
}
