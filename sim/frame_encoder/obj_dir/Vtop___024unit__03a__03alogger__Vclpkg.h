// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03ALOGGER__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03ALOGGER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03alogger__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024unit__03a__03alogger__Vclpkg();
    ~Vtop___024unit__03a__03alogger__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop___024unit__03a__03alogger__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03alogger : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__fd;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::logger"; }
    VlClass* clone() const { return new Vtop___024unit__03a__03alogger(*this); }
    void __VnoInFunc_close(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_error(Vtop__Syms* __restrict vlSymsp, std::string msg);
    void __VnoInFunc_info(Vtop__Syms* __restrict vlSymsp, std::string msg);
    void __VnoInFunc_log(Vtop__Syms* __restrict vlSymsp, std::string msg);
    void __VnoInFunc_separator(Vtop__Syms* __restrict vlSymsp, std::string title);
    void __VnoInFunc_warn(Vtop__Syms* __restrict vlSymsp, std::string msg);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03alogger(Vtop__Syms* __restrict vlSymsp, std::string filename);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03alogger() {}
};


#endif  // guard
