// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_FRAME_IF_H_
#define VERILATED_VTOP_FRAME_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_frame_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ rst_n;
    VL_IN8(clk,0,0);
    CData/*0:0*/ valid;
    VlWide<3>/*80:0*/ frame_in;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_frame_if(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_frame_if();
    VL_UNCOPYABLE(Vtop_frame_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_frame_if* obj);

#endif  // guard
