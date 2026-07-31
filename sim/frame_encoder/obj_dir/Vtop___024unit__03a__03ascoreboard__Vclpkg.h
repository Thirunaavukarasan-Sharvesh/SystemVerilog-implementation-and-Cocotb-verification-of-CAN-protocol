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

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03ascoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024unit__03a__03ascoreboard__Vclpkg();
    ~Vtop___024unit__03a__03ascoreboard__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop___024unit__03a__03ascoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03ascoreboard : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<4>/*109:0*/ __PVT__expected_vector;
    VlQueue<CData/*0:0*/> __PVT__expected_queue;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx_in;
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> __PVT__mbx_act;
    VlClassRef<Vtop___024unit__03a__03atransaction> __PVT__trx_in;
    VlClassRef<Vtop___024unit__03a__03atransaction> __PVT__trx_out;
    VlClassRef<Vtop___024unit__03a__03alogger> __PVT__log;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::scoreboard"; }
    VlClass* clone() const { return new Vtop___024unit__03a__03ascoreboard(*this); }
    void __VnoInFunc_compare(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_crc_predict(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_predict(Vtop__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03ascoreboard(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_in, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx_act);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03ascoreboard() {}
};


#endif  // guard
