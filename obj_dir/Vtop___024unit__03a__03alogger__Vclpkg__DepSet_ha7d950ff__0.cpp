// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"

void Vtop___024unit__03a__03alogger::__VnoInFunc_log(Vtop__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_log\n"); );
    // Body
    VL_FWRITEF(this->__PVT__fd,"%0t : %@\n",64,VL_TIME_UNITED_Q(1000),
               -9,-1,&(msg));
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_separator(Vtop__Syms* __restrict vlSymsp, std::string title) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_separator\n"); );
    // Body
    VL_FWRITEF(this->__PVT__fd,"-----------------------------------------\n");
    if (VL_UNLIKELY((std::string{""} != title))) {
        VL_FWRITEF(this->__PVT__fd,"%@\n",-1,&(title));
    }
    VL_FWRITEF(this->__PVT__fd,"========================================\n");
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_info(Vtop__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_info\n"); );
    // Body
    VL_FWRITEF(this->__PVT__fd,"[INFO ] %0t : %@\n",
               64,VL_TIME_UNITED_Q(1000),-9,-1,&(msg));
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_warn(Vtop__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_warn\n"); );
    // Body
    VL_FWRITEF(this->__PVT__fd,"[WARN ] %0t : %@\n",
               64,VL_TIME_UNITED_Q(1000),-9,-1,&(msg));
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_error(Vtop__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_error\n"); );
    // Body
    VL_FWRITEF(this->__PVT__fd,"[ERROR] %0t : %@\n",
               64,VL_TIME_UNITED_Q(1000),-9,-1,&(msg));
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_close(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_close\n"); );
    // Body
    VL_FCLOSE_I(this->__PVT__fd); }

Vtop___024unit__03a__03alogger::~Vtop___024unit__03a__03alogger() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03alogger>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03alogger::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03alogger::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::to_string_middle\n"); );
    // Body
    std::string out;
    out += "fd:" + VL_TO_STRING(__PVT__fd);
    return out;
}
