// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03ascoreboard__Vclpkg.h"

void Vtop___024unit__03a__03ascoreboard::__VnoInFunc_crc_predict(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::__VnoInFunc_crc_predict\n"); );
    // Body
    IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    SData/*14:0*/ crc;
    crc = 0;
    CData/*0:0*/ feedback;
    feedback = 0;
    crc = 0U;
    unnamedblk5__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk5__DOT__i, this->__PVT__expected_queue.size())) {
        feedback = (1U & (this->__PVT__expected_queue.at(unnamedblk5__DOT__i) 
                          ^ ((IData)(crc) >> 0xeU)));
        crc = ((0x7ffeU & ((IData)(crc) << 1U)) | (IData)(feedback));
        crc = ((0x3fffU & (IData)(crc)) | ((IData)(
                                                   (((IData)(crc) 
                                                     >> 0xeU) 
                                                    ^ (IData)(feedback))) 
                                           << 0xeU));
        crc = ((0x7bffU & (IData)(crc)) | (0x400U & 
                                           ((0xfffffc00U 
                                             & (IData)(crc)) 
                                            ^ ((IData)(feedback) 
                                               << 0xaU))));
        crc = ((0x7effU & (IData)(crc)) | (0x100U & 
                                           ((0xffffff00U 
                                             & (IData)(crc)) 
                                            ^ ((IData)(feedback) 
                                               << 8U))));
        crc = ((0x7f7fU & (IData)(crc)) | (0x80U & 
                                           ((0xffffff80U 
                                             & (IData)(crc)) 
                                            ^ ((IData)(feedback) 
                                               << 7U))));
        crc = ((0x7fefU & (IData)(crc)) | (0x10U & 
                                           ((0xfffffff0U 
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
                                                 >> 0xeU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0xdU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0xcU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0xbU)));
    this->__PVT__expected_queue.push_back((1U & ((IData)(crc) 
                                                 >> 0xaU)));
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
    unnamedblk6__DOT__i = 0xffffffffU;
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

Vtop___024unit__03a__03ascoreboard::~Vtop___024unit__03a__03ascoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03ascoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03ascoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
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
    out += ", __Vlvbound_h6d836285__0:" + VL_TO_STRING(__Vlvbound_h6d836285__0);
    return out;
}
