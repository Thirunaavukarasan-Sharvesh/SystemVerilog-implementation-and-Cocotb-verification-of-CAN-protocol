// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

Vtop___024unit__03a__03alogger::Vtop___024unit__03a__03alogger(Vtop__Syms* __restrict vlSymsp, std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__fd = VL_FOPEN_NN(filename, "w"s);
    ;
    if (VL_UNLIKELY(((0U == this->__PVT__fd)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: logger.sv:7: Assertion failed in %N$unit.logger.new: %@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(filename));
        VL_STOP_MT("logger.sv", 7, "", false);
    }
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_log(Vtop__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_log\n"); );
    // Body
    VL_FWRITEF_NX(this->__PVT__fd,"%0t : %@\n",0,64,
                  VL_TIME_UNITED_Q(1000),-9,-1,&(msg));
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_separator(Vtop__Syms* __restrict vlSymsp, std::string title) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_separator\n"); );
    // Body
    VL_FWRITEF_NX(this->__PVT__fd,"-----------------------------------------\n",0);
    if (VL_UNLIKELY(((""s != title)))) {
        VL_FWRITEF_NX(this->__PVT__fd,"%@\n",0,-1,&(title));
    }
    VL_FWRITEF_NX(this->__PVT__fd,"========================================\n",0);
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_info(Vtop__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_info\n"); );
    // Body
    VL_FWRITEF_NX(this->__PVT__fd,"[INFO ] %0t : %@\n",0,
                  64,VL_TIME_UNITED_Q(1000),-9,-1,&(msg));
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_warn(Vtop__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_warn\n"); );
    // Body
    VL_FWRITEF_NX(this->__PVT__fd,"[WARN ] %0t : %@\n",0,
                  64,VL_TIME_UNITED_Q(1000),-9,-1,&(msg));
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_error(Vtop__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_error\n"); );
    // Body
    VL_FWRITEF_NX(this->__PVT__fd,"[ERROR] %0t : %@\n",0,
                  64,VL_TIME_UNITED_Q(1000),-9,-1,&(msg));
}

void Vtop___024unit__03a__03alogger::__VnoInFunc_close(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::__VnoInFunc_close\n"); );
    // Body
    VL_FCLOSE_I(this->__PVT__fd); }

void Vtop___024unit__03a__03alogger::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__fd = 0;
}

std::string Vtop___024unit__03a__03alogger::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03alogger::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::to_string_middle\n"); );
    // Body
    std::string out;
    out += "fd:" + VL_TO_STRING(__PVT__fd);
    return (out);
}
