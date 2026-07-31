// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_std___ctor_var_reset(Vtop_std* vlSelf);

Vtop_std::Vtop_std() = default;
Vtop_std::~Vtop_std() = default;

void Vtop_std::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_std___ctor_var_reset(this);
}

void Vtop_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
