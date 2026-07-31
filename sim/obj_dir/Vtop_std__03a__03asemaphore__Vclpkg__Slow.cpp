// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_std__03a__03asemaphore__Vclpkg.h"

void Vtop_std__03a__03asemaphore__Vclpkg___ctor_var_reset(Vtop_std__03a__03asemaphore__Vclpkg* vlSelf);

Vtop_std__03a__03asemaphore__Vclpkg::Vtop_std__03a__03asemaphore__Vclpkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_std__03a__03asemaphore__Vclpkg___ctor_var_reset(this);
}

void Vtop_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_std__03a__03asemaphore__Vclpkg::~Vtop_std__03a__03asemaphore__Vclpkg() {
}
