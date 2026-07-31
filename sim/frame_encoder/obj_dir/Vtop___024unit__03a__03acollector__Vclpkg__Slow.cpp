// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024unit__03a__03acollector__Vclpkg___ctor_var_reset(Vtop___024unit__03a__03acollector__Vclpkg* vlSelf);

Vtop___024unit__03a__03acollector__Vclpkg::Vtop___024unit__03a__03acollector__Vclpkg() = default;
Vtop___024unit__03a__03acollector__Vclpkg::~Vtop___024unit__03a__03acollector__Vclpkg() = default;

void Vtop___024unit__03a__03acollector__Vclpkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop___024unit__03a__03acollector__Vclpkg___ctor_var_reset(this);
}

void Vtop___024unit__03a__03acollector__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop___024unit__03a__03acollector__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
