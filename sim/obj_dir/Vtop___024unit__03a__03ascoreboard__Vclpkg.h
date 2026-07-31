// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03ASCOREBOARD__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03ASCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit__03a__03alogger;
class Vtop___024unit__03a__03atransaction;
class Vtop_std__03a__03amailbox__Tz1;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03ascoreboard__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024unit__03a__03ascoreboard__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit__03a__03ascoreboard__Vclpkg();
    VL_UNCOPYABLE(Vtop___024unit__03a__03ascoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03ascoreboard : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vlvbound_h6d836285__0;
    VlWide<4>/*109:0*/ __PVT__expected_vector;
    VlQueue<CData/*0:0*/> __PVT__expected_queue;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx_in;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx_act;
    VlClassRef<Vtop___024unit__03a__03atransaction> __PVT__trx_in;
    VlClassRef<Vtop___024unit__03a__03atransaction> __PVT__trx_out;
    VlClassRef<Vtop___024unit__03a__03alogger> __PVT__log;
    void __VnoInFunc_compare(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_crc_predict(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_predict(Vtop__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03ascoreboard(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_in, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_act);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03ascoreboard();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03ascoreboard>& obj);

#endif  // guard
