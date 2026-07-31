// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03ADRIVER__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03ADRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit__03a__03alogger;
class Vtop___024unit__03a__03atransaction;
class Vtop_std__03a__03amailbox__Tz1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03adriver__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024unit__03a__03adriver__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit__03a__03adriver__Vclpkg();
    VL_UNCOPYABLE(Vtop___024unit__03a__03adriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03adriver : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vtop_frame_if* __PVT__vif;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx;
    VlClassRef<Vtop___024unit__03a__03alogger> __PVT__log;
    VlCoroutine __VnoInFunc_drvdata(Vtop__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_drvdata____Vfork_1__1(Vtop__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hccf890f6__0);
    VlCoroutine __VnoInFunc_drvdata____Vfork_2__1(Vtop__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hccf98c5e__0);
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03adriver(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* vif, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03adriver();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03adriver>& obj);

#endif  // guard
