// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_frame_if___ctor_var_reset(Vtop_frame_if* vlSelf);

Vtop_frame_if::Vtop_frame_if() = default;
Vtop_frame_if::~Vtop_frame_if() = default;

void Vtop_frame_if::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_frame_if___ctor_var_reset(this);
}

void Vtop_frame_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_frame_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
