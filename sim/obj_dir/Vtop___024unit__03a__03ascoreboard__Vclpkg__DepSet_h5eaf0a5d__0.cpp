// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03ascoreboard__Vclpkg.h"

void Vtop___024unit__03a__03ascoreboard::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__expected_queue.atDefault() = 0;
    VL_ZERO_W(110, __PVT__expected_vector);
    __Vlvbound_h6d836285__0 = VL_RAND_RESET_I(1);
}
