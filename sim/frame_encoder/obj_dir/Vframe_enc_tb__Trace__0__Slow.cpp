// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vframe_enc_tb__Syms.h"


VL_ATTR_COLD void Vframe_enc_tb___024root__trace_init_sub__TOP__can_pkg__0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_init_sub__TOP__0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_init_sub__TOP__0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("can_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vframe_enc_tb___024root__trace_init_sub__TOP__can_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("frame_enc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"bit_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"tx_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"frame_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBus(c+5,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+22,0,"bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+2,0,"frame_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+21,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"bit_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"tx_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"dvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"crc_init_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"crc_cap_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"crc_valid_rsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"crc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+18,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"counter_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+9,0,"frame_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->pushPrefix("x1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"crc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"crc_cap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"crc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+7,0,"crc_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"RUN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+13,0,"lfsr_out_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"lfsr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+20,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"next_crc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_init_sub__TOP__can_pkg__0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_init_sub__TOP__can_pkg__0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+29,0,"FRAME_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+30,0,"SOF_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+31,0,"ID_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+32,0,"ID_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+33,0,"RTR_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+34,0,"IDE_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+35,0,"DLC_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+36,0,"DLC_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"DATA_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"DATA_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+39,0,"CRC_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"CRC_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+41,0,"CRC_DELIM_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"TRAILER_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"TRAILER_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_init_top(Vframe_enc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_init_top\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vframe_enc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vframe_enc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vframe_enc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vframe_enc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_register(Vframe_enc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_register\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vframe_enc_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vframe_enc_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vframe_enc_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vframe_enc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_const_0_sub_0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_const_0\n"); );
    // Body
    Vframe_enc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vframe_enc_tb___024root*>(voidSelf);
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vframe_enc_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_const_0_sub_0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_const_0_sub_0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+26,(0U),2);
    bufp->fullCData(oldp+27,(1U),2);
    bufp->fullCData(oldp+28,(2U),2);
    bufp->fullIData(oldp+29,(0x0000006eU),32);
    bufp->fullIData(oldp+30,(0x0000006dU),32);
    bufp->fullIData(oldp+31,(0x0000006cU),32);
    bufp->fullIData(oldp+32,(0x00000062U),32);
    bufp->fullIData(oldp+33,(0x00000061U),32);
    bufp->fullIData(oldp+34,(0x00000060U),32);
    bufp->fullIData(oldp+35,(0x0000005fU),32);
    bufp->fullIData(oldp+36,(0x0000005cU),32);
    bufp->fullIData(oldp+37,(0x0000005bU),32);
    bufp->fullIData(oldp+38,(0x0000001cU),32);
    bufp->fullIData(oldp+39,(0x0000001bU),32);
    bufp->fullIData(oldp+40,(0x0000000dU),32);
    bufp->fullIData(oldp+41,(0x0000000cU),32);
    bufp->fullIData(oldp+42,(0x0000000bU),32);
    bufp->fullIData(oldp+43,(0U),32);
}

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_full_0_sub_0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_full_0\n"); );
    // Body
    Vframe_enc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vframe_enc_tb___024root*>(voidSelf);
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vframe_enc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vframe_enc_tb___024root__trace_full_0_sub_0(Vframe_enc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframe_enc_tb___024root__trace_full_0_sub_0\n"); );
    Vframe_enc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.frame_enc_tb__DOT__rst_n));
    bufp->fullBit(oldp+1,(vlSelfRef.frame_enc_tb__DOT__valid));
    bufp->fullWData(oldp+2,(vlSelfRef.frame_enc_tb__DOT__frame_in),81);
    bufp->fullIData(oldp+5,(vlSelfRef.frame_enc_tb__DOT__fd),32);
    bufp->fullBit(oldp+6,(vlSelfRef.frame_enc_tb__DOT__tx_ready));
    bufp->fullBit(oldp+7,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_valid_rsp));
    bufp->fullSData(oldp+8,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_value),15);
    bufp->fullWData(oldp+9,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__frame_reg),81);
    bufp->fullCData(oldp+12,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__state),2);
    bufp->fullSData(oldp+13,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int),15);
    bufp->fullBit(oldp+14,(vlSelfRef.frame_enc_tb__DOT__bit_out));
    bufp->fullBit(oldp+15,(vlSelfRef.frame_enc_tb__DOT__valid_out));
    bufp->fullBit(oldp+16,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__dvalid));
    bufp->fullBit(oldp+17,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_cap_sig));
    bufp->fullCData(oldp+18,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__state),2);
    bufp->fullCData(oldp+19,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__counter_b),7);
    bufp->fullBit(oldp+20,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback));
    bufp->fullBit(oldp+21,(vlSelfRef.frame_enc_tb__DOT__clk));
    bufp->fullIData(oldp+22,(vlSelfRef.frame_enc_tb__DOT__bit_cnt),32);
    bufp->fullBit(oldp+23,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__crc_init_sig));
    bufp->fullCData(oldp+24,(vlSelfRef.frame_enc_tb__DOT__dut__DOT__next_state),2);
    bufp->fullSData(oldp+25,((((((8U & ((0x003ffff8U 
                                         & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                            >> 0x0000000aU)) 
                                        ^ ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                                           << 3U))) 
                                 | (7U & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                          >> 0x0000000aU))) 
                                << 0x0000000bU) | (
                                                   ((8U 
                                                     & ((0x03fffff8U 
                                                         & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                            >> 6U)) 
                                                        ^ 
                                                        ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback) 
                                                         << 3U))) 
                                                    | ((4U 
                                                        & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                           >> 6U)) 
                                                       | (3U 
                                                          & (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                              >> 6U) 
                                                             ^ 
                                                             (- (IData)((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))))))) 
                                                   << 7U)) 
                              | ((((0x0000000cU & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                   >> 2U)) 
                                   | (3U & (((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                             >> 2U) 
                                            ^ (- (IData)((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback)))))) 
                                  << 3U) | ((6U & ((IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__lfsr_out_int) 
                                                   << 1U)) 
                                            | (IData)(vlSelfRef.frame_enc_tb__DOT__dut__DOT__x1__DOT__uut__DOT__feedback))))),15);
}
