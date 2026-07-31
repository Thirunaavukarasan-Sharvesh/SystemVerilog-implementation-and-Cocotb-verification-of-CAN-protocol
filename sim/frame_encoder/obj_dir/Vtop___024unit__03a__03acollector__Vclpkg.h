// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03ACOLLECTOR__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03ACOLLECTOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit__03a__03alogger;
class Vtop___024unit__03a__03atransaction;
class Vtop_std__03a__03amailbox__Tz1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03acollector__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024unit__03a__03acollector__Vclpkg();
    ~Vtop___024unit__03a__03acollector__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop___024unit__03a__03acollector__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03acollector : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx;
    Vtop_frame_if* __PVT__vif;
    VlClassRef<Vtop___024unit__03a__03alogger> __PVT__log;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::collector"; }
    VlClass* clone() const { return new Vtop___024unit__03a__03acollector(*this); }
    VlCoroutine __VnoInFunc_run(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03acollector(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03acollector() {}
};


#endif  // guard
