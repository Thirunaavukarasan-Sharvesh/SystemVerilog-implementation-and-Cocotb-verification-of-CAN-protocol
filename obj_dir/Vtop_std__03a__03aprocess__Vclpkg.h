// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTOP_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop_std__03a__03aprocess;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_std__03a__03aprocess__Vclpkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vtop_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vtop__Syms;

class Vtop_std__03a__03aprocess : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;
    VlCoroutine __VnoInFunc_await(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vtop__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vtop__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop_std__03a__03aprocess(Vtop__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop_std__03a__03aprocess();
};

std::string VL_TO_STRING(const VlClassRef<Vtop_std__03a__03aprocess>& obj);

#endif  // guard
