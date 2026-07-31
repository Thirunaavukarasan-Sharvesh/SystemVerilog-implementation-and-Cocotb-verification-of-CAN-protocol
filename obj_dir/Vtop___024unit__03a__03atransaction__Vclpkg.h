// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03atransaction__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024unit__03a__03atransaction__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit__03a__03atransaction__Vclpkg();
    VL_UNCOPYABLE(Vtop___024unit__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03atransaction : public VlClass {
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
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03atransaction(Vtop__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03atransaction();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03atransaction>& obj);

#endif  // guard
