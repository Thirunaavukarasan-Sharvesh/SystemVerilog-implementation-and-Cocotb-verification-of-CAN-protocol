// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit;
class Vtop___024unit__03a__03adriver__Vclpkg;
class Vtop___024unit__03a__03aenvironment;
class Vtop___024unit__03a__03aenvironment__Vclpkg;
class Vtop___024unit__03a__03agenerator__Vclpkg;
class Vtop___024unit__03a__03alogger__Vclpkg;
class Vtop___024unit__03a__03amonitor__Vclpkg;
class Vtop___024unit__03a__03ascoreboard__Vclpkg;
class Vtop___024unit__03a__03atransaction__Vclpkg;
class Vtop_frame_if;
class Vtop_std;
class Vtop_std__03a__03amailbox__Tz1__Vclpkg;
class Vtop_std__03a__03aprocess__Vclpkg;
class Vtop_std__03a__03asemaphore__Vclpkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;
    Vtop_std* __PVT__std;
    Vtop_frame_if* __PVT__top__DOT__vif;
    Vtop___024unit__03a__03atransaction__Vclpkg* __024unit__03a__03atransaction__Vclpkg;
    Vtop___024unit__03a__03alogger__Vclpkg* __024unit__03a__03alogger__Vclpkg;
    Vtop___024unit__03a__03agenerator__Vclpkg* __024unit__03a__03agenerator__Vclpkg;
    Vtop___024unit__03a__03adriver__Vclpkg* __024unit__03a__03adriver__Vclpkg;
    Vtop___024unit__03a__03amonitor__Vclpkg* __024unit__03a__03amonitor__Vclpkg;
    Vtop___024unit__03a__03ascoreboard__Vclpkg* __024unit__03a__03ascoreboard__Vclpkg;
    Vtop___024unit__03a__03aenvironment__Vclpkg* __024unit__03a__03aenvironment__Vclpkg;
    Vtop_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtop_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vtop_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top__DOT__clk;
    CData/*0:0*/ top__DOT____Vcellout__dut__valid_out;
    CData/*0:0*/ top__DOT____Vcellout__dut__bit_out;
    CData/*0:0*/ top__DOT__dut__DOT__dvalid;
    CData/*0:0*/ top__DOT__dut__DOT__crc_init_sig;
    CData/*0:0*/ top__DOT__dut__DOT__crc_cap_sig;
    CData/*0:0*/ top__DOT__dut__DOT__crc_valid_rsp;
    CData/*1:0*/ top__DOT__dut__DOT__state;
    CData/*1:0*/ top__DOT__dut__DOT__next_state;
    CData/*6:0*/ top__DOT__dut__DOT__counter_b;
    CData/*1:0*/ top__DOT__dut__DOT__x1__DOT__state;
    CData/*0:0*/ top__DOT__dut__DOT__x1__DOT__uut__DOT__feedback;
    CData/*0:0*/ __VnbaEventTrigger;
    CData/*0:0*/ __VvifTrigger_h65dc2cc6__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__vif__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*14:0*/ top__DOT__dut__DOT__crc_value;
    SData/*14:0*/ top__DOT__dut__DOT__x1__DOT__lfsr_out_int;
    SData/*14:0*/ top__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7d386f83__0;
    VlDynamicTriggerScheduler __VdynSched;
    VlEvent __VnbaEvent;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
