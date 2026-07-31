// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

Vtop___024unit__03a__03agenerator::Vtop___024unit__03a__03agenerator(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__mbx = mbx;
}

VlCoroutine Vtop___024unit__03a__03agenerator::__VnoInFunc_run(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ fd;
    VlWide<3>/*80:0*/ packet;
    VlClassRef<Vtop___024unit__03a__03atransaction> trx;
    VL_ZERO_W(81, packet);
    fd = VL_FOPEN_NN("transaction.hex"s, "r"s);
    ;
    if (VL_UNLIKELY(((0U == fd)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: generator.sv:14: Assertion failed in %N$unit.generator.run: Cannot open/find transaction.hex file\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("generator.sv", 14, "", false);
    }
    while ((! (fd ? feof(VL_CVT_I_FP(fd)) : true))) {
        trx = VL_NEW(Vtop___024unit__03a__03atransaction, vlSymsp);
        (void)VL_FSCANF_INX(fd,"%x",0,81,&(packet)) ;
        VL_NULL_CHECK(trx, "generator.sv", 19)->__PVT__id 
            = (0x000007ffU & packet[0U]);
        VL_NULL_CHECK(trx, "generator.sv", 20)->__PVT__rtr 
            = (1U & (packet[0U] >> 0x0000000bU));
        VL_NULL_CHECK(trx, "generator.sv", 21)->__PVT__ide 
            = (1U & (packet[0U] >> 0x0000000cU));
        VL_NULL_CHECK(trx, "generator.sv", 22)->__PVT__dlc 
            = (0x0000000fU & (packet[0U] >> 0x0000000dU));
        VL_NULL_CHECK(trx, "generator.sv", 23)->__PVT__data 
            = (((QData)((IData)(packet[2U])) << 0x0000002fU) 
               | (((QData)((IData)(packet[1U])) << 0x0000000fU) 
                  | ((QData)((IData)(packet[0U])) >> 0x00000011U)));
        co_await VL_NULL_CHECK(this->__PVT__mbx, "generator.sv", 24)->__VnoInFunc_put(vlSymsp, trx);
    }
    VL_FCLOSE_I(fd); co_return;
}

void Vtop___024unit__03a__03agenerator::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string Vtop___024unit__03a__03agenerator::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03agenerator::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03agenerator::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mbx:" + VL_TO_STRING(__PVT__mbx);
    return (out);
}
