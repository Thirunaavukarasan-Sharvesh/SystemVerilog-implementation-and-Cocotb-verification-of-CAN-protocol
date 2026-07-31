// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_std.h"

void Vtop_std___ctor_var_reset(Vtop_std* vlSelf);

Vtop_std::Vtop_std(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_std___ctor_var_reset(this);
}

void Vtop_std::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_std::~Vtop_std() {
}
