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

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03amonitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024unit__03a__03amonitor__Vclpkg();
    ~Vtop___024unit__03a__03amonitor__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop___024unit__03a__03amonitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03amonitor : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx_in;
    Vtop_frame_if* __PVT__vif_in;
    VlClassRef<Vtop___024unit__03a__03alogger> __PVT__log;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::monitor"; }
    VlClass* clone() const { return new Vtop___024unit__03a__03amonitor(*this); }
    VlCoroutine __VnoInFunc_monitor_input(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03amonitor(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif_in, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_in);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03amonitor() {}
};


#endif  // guard
