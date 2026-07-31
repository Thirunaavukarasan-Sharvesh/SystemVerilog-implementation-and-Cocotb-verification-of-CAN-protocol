// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vframe_enc_tb.h for the primary calling header

#ifndef VERILATED_VFRAME_ENC_TB___024ROOT_H_
#define VERILATED_VFRAME_ENC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vframe_enc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vframe_enc_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ frame_enc_tb__DOT__clk;
    CData/*0:0*/ frame_enc_tb__DOT__rst_n;
    CData/*0:0*/ frame_enc_tb__DOT__valid;
    CData/*0:0*/ frame_enc_tb__DOT__bit_out;
    CData/*0:0*/ frame_enc_tb__DOT__valid_out;
    CData/*0:0*/ frame_enc_tb__DOT__tx_ready;
    CData/*0:0*/ frame_enc_tb__DOT__dut__DOT__dvalid;
    CData/*0:0*/ frame_enc_tb__DOT__dut__DOT__crc_init_sig;
    CData/*0:0*/ frame_enc_tb__DOT__dut__DOT__crc_cap_sig;
    CData/*0:0*/ frame_enc_tb__DOT__dut__DOT__crc_valid_rsp;
    CData/*1:0*/ frame_enc_tb__DOT__dut__DOT__state;
    CData/*1:0*/ frame_enc_tb__DOT__dut__DOT__next_state;
    CData/*6:0*/ frame_enc_tb__DOT__dut__DOT__counter_b;
    CData/*1:0*/ frame_enc_tb__DOT__dut__DOT__x1__DOT__state;
    CData/*0:0*/ frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback;
    CData/*6:0*/ __Vdly__frame_enc_tb__DOT__dut__DOT__counter_b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__frame_enc_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__frame_enc_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__frame_enc_tb__DOT__tx_ready__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*14:0*/ frame_enc_tb__DOT__dut__DOT__crc_value;
    SData/*14:0*/ frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int;
    SData/*14:0*/ frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__next_crc;
    IData/*31:0*/ frame_enc_tb__DOT__fd;
    IData/*31:0*/ frame_enc_tb__DOT__bit_cnt;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<3>/*80:0*/ frame_enc_tb__DOT__frame_in;
    VlWide<3>/*80:0*/ frame_enc_tb__DOT__dut__DOT__frame_reg;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0723a778__0;
    VlTriggerScheduler __VtrigSched_hb73594cb__0;

    // INTERNAL VARIABLES
    Vframe_enc_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vframe_enc_tb___024root(Vframe_enc_tb__Syms* symsp, const char* namep);
    ~Vframe_enc_tb___024root();
    VL_UNCOPYABLE(Vframe_enc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
