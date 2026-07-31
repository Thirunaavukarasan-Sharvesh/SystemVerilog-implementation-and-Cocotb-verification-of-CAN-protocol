// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03AMONITOR__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03AMONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit__03a__03alogger;
class Vtop___024unit__03a__03atransaction;
class Vtop_std__03a__03amailbox__Tz1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03amonitor__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024unit__03a__03amonitor__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit__03a__03amonitor__Vclpkg();
    VL_UNCOPYABLE(Vtop___024unit__03a__03amonitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03amonitor : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vlvbound_h8e5762a9__0;
    VlWide<4>/*109:0*/ __PVT__bit_vector;
    Vtop_frame_if* __PVT__vif_in;
    Vtop_frame_if* __PVT__vif_out;
    VlQueue<CData/*0:0*/> __PVT__bit_queue;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx_in;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx_out;
    VlClassRef<Vtop___024unit__03a__03alogger> __PVT__log;
    VlCoroutine __VnoInFunc_monitor_input(Vtop__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_monitor_output(Vtop__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run(Vtop__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03amonitor(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif_in, Vtop_frame_if* vif_out, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_in, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_out);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03amonitor();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03amonitor>& obj);

#endif  // guard
