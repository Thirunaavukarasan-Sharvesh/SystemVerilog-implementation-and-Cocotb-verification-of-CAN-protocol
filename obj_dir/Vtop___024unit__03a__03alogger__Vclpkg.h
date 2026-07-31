// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03ALOGGER__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03ALOGGER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03alogger__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024unit__03a__03alogger__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit__03a__03alogger__Vclpkg();
    VL_UNCOPYABLE(Vtop___024unit__03a__03alogger__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03alogger : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__fd;
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
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop___024unit__03a__03alogger();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03alogger>& obj);

#endif  // guard
