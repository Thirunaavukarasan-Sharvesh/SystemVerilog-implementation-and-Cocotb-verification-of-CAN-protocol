// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_STD_H_
#define VERILATED_VTOP_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_std(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_std();
    VL_UNCOPYABLE(Vtop_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
