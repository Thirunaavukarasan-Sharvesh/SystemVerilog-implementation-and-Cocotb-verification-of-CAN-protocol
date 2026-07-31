// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_std.h"
#include "Vtop_frame_if.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtop___024unit__03a__03alogger__Vclpkg.h"
#include "Vtop___024unit__03a__03amonitor__Vclpkg.h"
#include "Vtop___024unit__03a__03acollector__Vclpkg.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"
#include "Vtop___024unit__03a__03ascoreboard__Vclpkg.h"
#include "Vtop___024unit__03a__03aenvironment__Vclpkg.h"
#include "Vtop_std__03a__03asemaphore__Vclpkg.h"
#include "Vtop_std__03a__03aprocess__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit__03a__03acollector__Vclpkg TOP____024unit__03a__03acollector__Vclpkg;
    Vtop___024unit__03a__03adriver__Vclpkg TOP____024unit__03a__03adriver__Vclpkg;
    Vtop___024unit__03a__03aenvironment__Vclpkg TOP____024unit__03a__03aenvironment__Vclpkg;
    Vtop___024unit__03a__03agenerator__Vclpkg TOP____024unit__03a__03agenerator__Vclpkg;
    Vtop___024unit__03a__03alogger__Vclpkg TOP____024unit__03a__03alogger__Vclpkg;
    Vtop___024unit__03a__03amonitor__Vclpkg TOP____024unit__03a__03amonitor__Vclpkg;
    Vtop___024unit__03a__03ascoreboard__Vclpkg TOP____024unit__03a__03ascoreboard__Vclpkg;
    Vtop___024unit__03a__03atransaction__Vclpkg TOP____024unit__03a__03atransaction__Vclpkg;
    Vtop___024unit                 TOP____024unit;
    Vtop_std                       TOP__std;
    Vtop_frame_if                  TOP__top__DOT__vif;
    Vtop_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtop_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtop_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void fireEvent(VlEvent& event) {
        if (VL_LIKELY(!event.isTriggered())) {
            __Vm_triggeredEvents.push_back(&event);
        }
        event.fire();
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
};

#endif  // guard
