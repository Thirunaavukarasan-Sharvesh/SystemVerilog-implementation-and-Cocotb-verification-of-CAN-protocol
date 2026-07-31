// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_FRAME_IF_H_
#define VERILATED_VTOP_FRAME_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_frame_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ rst_n;
    CData/*0:0*/ valid;
    CData/*0:0*/ tx_ready;
    CData/*0:0*/ frame_done;
    CData/*0:0*/ __Vdly__frame_done;
    VlWide<3>/*80:0*/ frame_in;
    VlWide<4>/*109:0*/ frame;
    VlWide<4>/*109:0*/ __Vdly__frame;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_frame_if();
    ~Vtop_frame_if();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_frame_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_frame_if* obj);

#endif  // guard
