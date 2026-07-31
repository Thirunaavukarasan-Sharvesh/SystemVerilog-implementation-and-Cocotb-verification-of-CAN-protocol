// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vframe_enc_tb.h for the primary calling header

#ifndef VERILATED_VFRAME_ENC_TB___024UNIT_H_
#define VERILATED_VFRAME_ENC_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vframe_enc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vframe_enc_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    Vframe_enc_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vframe_enc_tb___024unit();
    ~Vframe_enc_tb___024unit();
    void ctor(Vframe_enc_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vframe_enc_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
