// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03AENVIRONMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit__03a__03adriver;
class Vtop___024unit__03a__03agenerator;
class Vtop___024unit__03a__03amonitor;
class Vtop___024unit__03a__03ascoreboard;
class Vtop_std__03a__03amailbox__Tz1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03aenvironment__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024unit__03a__03aenvironment__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit__03a__03aenvironment__Vclpkg();
    VL_UNCOPYABLE(Vtop___024unit__03a__03aenvironment__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03aenvironment : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vtop_frame_if* __PVT__drv_vif;
    Vtop_frame_if* __PVT__in_vif;
    Vtop_frame_if* __PVT__out_vif;
    VlClassRef<Vtop___024unit__03a__03agenerator> __PVT__gen;
    VlClassRef<Vtop___024unit__03a__03adriver> __PVT__drv;
    VlClassRef<Vtop___024unit__03a__03amonitor> __PVT__mon;
    VlClassRef<Vtop___024unit__03a__03ascoreboard> __PVT__sb;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__gen_drv_mbx;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mon_in_mbx;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mon_out_mbx;
    VlCoroutine __VnoInFunc_run(Vtop__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__2(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__3(Vtop__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03aenvironment(Vtop__Syms* __restrict vlSymsp, Vtop_frame_if* drv_vif, Vtop_frame_if* in_vif, Vtop_frame_if* out_vif);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03aenvironment();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03aenvironment>& obj);

#endif  // guard
