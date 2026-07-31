// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vframe_enc_tb.h for the primary calling header

#include "Vframe_enc_tb__pch.h"

void Vframe_enc_tb___024unit___ctor_var_reset(Vframe_enc_tb___024unit* vlSelf);

Vframe_enc_tb___024unit::Vframe_enc_tb___024unit() = default;
Vframe_enc_tb___024unit::~Vframe_enc_tb___024unit() = default;

void Vframe_enc_tb___024unit::ctor(Vframe_enc_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vframe_enc_tb___024unit___ctor_var_reset(this);
}

void Vframe_enc_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vframe_enc_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
