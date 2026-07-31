// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"

Vtop___024unit__03a__03alogger::Vtop___024unit__03a__03alogger(Vtop__Syms* __restrict vlSymsp, std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(filename)
                                  , std::string{"w"});
    ;
    if (VL_UNLIKELY((0U == this->__PVT__fd))) {
        VL_WRITEF("[%0t] %%Fatal: logger.sv:7: Assertion failed in %N$unit.logger.new: %@\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  -1,&(filename));
        VL_STOP_MT("sim/frame_encoder/logger.sv", 7, "");
    }
}

void Vtop___024unit__03a__03alogger::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03alogger::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__fd = 0;
}
