// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VTOP_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit__03a__03atransaction;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_std__03a__03amailbox__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_std__03a__03amailbox__Tz1__Vclpkg();
    ~Vtop_std__03a__03amailbox__Tz1__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop_std__03a__03amailbox__Tz1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vtop___024unit__03a__03atransaction>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz1"; }
    VlClass* clone() const { return new Vtop_std__03a__03amailbox__Tz1(*this); }
    VlCoroutine __VnoInFunc_get(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message);
    void __VnoInFunc_num(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message);
    VlCoroutine __VnoInFunc_put(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> message);
    void __VnoInFunc_try_get(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop_std__03a__03amailbox__Tz1(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop_std__03a__03amailbox__Tz1() {}
};


#endif  // guard
