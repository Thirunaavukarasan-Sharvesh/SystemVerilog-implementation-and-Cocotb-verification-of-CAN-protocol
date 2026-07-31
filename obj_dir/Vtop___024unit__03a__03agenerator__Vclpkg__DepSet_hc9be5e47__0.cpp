// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtop___024unit__03a__03agenerator::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    IData/*31:0*/ fd;
    fd = 0;
    VlWide<3>/*80:0*/ packet;
    VL_ZERO_W(81, packet);
    VlClassRef<Vtop___024unit__03a__03atransaction> trx;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x74696f6eU;
    __Vtemp_1[2U] = 0x6e736163U;
    __Vtemp_1[3U] = 0x747261U;
    fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                     , std::string{"r"});
    ;
    if (VL_UNLIKELY((0U == fd))) {
        VL_WRITEF("[%0t] %%Fatal: generator.sv:14: Assertion failed in %N$unit.generator.run: Cannot open/find transaction.hex file\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("sim/frame_encoder/generator.sv", 14, "");
    }
    while ((! (fd ? feof(VL_CVT_I_FP(fd)) : true))) {
        trx = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
        (void)VL_FSCANF_IX(fd,"%x",81,&(packet)) ;
        VL_NULL_CHECK(trx, "sim/frame_encoder/generator.sv", 19)->__PVT__id 
            = (0x7ffU & packet[0U]);
        VL_NULL_CHECK(trx, "sim/frame_encoder/generator.sv", 20)->__PVT__rtr 
            = (1U & (packet[0U] >> 0xbU));
        VL_NULL_CHECK(trx, "sim/frame_encoder/generator.sv", 21)->__PVT__ide 
            = (1U & (packet[0U] >> 0xcU));
        VL_NULL_CHECK(trx, "sim/frame_encoder/generator.sv", 22)->__PVT__dlc 
            = (0xfU & (packet[0U] >> 0xdU));
        VL_NULL_CHECK(trx, "sim/frame_encoder/generator.sv", 23)->__PVT__data 
            = (((QData)((IData)(packet[2U])) << 0x2fU) 
               | (((QData)((IData)(packet[1U])) << 0xfU) 
                  | ((QData)((IData)(packet[0U])) >> 0x11U)));
        co_await VL_NULL_CHECK(this->__PVT__mbx, "sim/frame_encoder/generator.sv", 24)->__VnoInFunc_put(vlSymsp, trx);
    }
    VL_FCLOSE_I(fd); }
