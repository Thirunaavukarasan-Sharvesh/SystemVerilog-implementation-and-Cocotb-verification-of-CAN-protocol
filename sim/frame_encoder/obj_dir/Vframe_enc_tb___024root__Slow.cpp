// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vframe_enc_tb.h for the primary calling header

#include "Vframe_enc_tb__pch.h"

void Vframe_enc_tb___024root___ctor_var_reset(Vframe_enc_tb___024root* vlSelf);

Vframe_enc_tb___024root::Vframe_enc_tb___024root(Vframe_enc_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vframe_enc_tb___024root___ctor_var_reset(this);
}

void Vframe_enc_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vframe_enc_tb___024root::~Vframe_enc_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
