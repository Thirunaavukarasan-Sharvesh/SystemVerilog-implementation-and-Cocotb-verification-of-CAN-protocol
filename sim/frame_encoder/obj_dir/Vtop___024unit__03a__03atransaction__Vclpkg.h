// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03atransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024unit__03a__03atransaction__Vclpkg();
    ~Vtop___024unit__03a__03atransaction__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop___024unit__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03atransaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__rtr;
    CData/*0:0*/ __PVT__ide;
    CData/*3:0*/ __PVT__dlc;
    CData/*0:0*/ __PVT__sof;
    CData/*0:0*/ __PVT__crc_delim;
    SData/*10:0*/ __PVT__id;
    SData/*14:0*/ __PVT__crc;
    SData/*11:0*/ __PVT__trailer;
    QData/*63:0*/ __PVT__data;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::transaction"; }
    VlClass* clone() const { return new Vtop___024unit__03a__03atransaction(*this); }
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03atransaction(Vtop__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03atransaction() {}
};


#endif  // guard
