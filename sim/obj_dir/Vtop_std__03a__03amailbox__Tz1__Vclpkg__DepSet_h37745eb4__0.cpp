// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

void Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_num(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

void Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_put(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_put\n"); );
    // Init
    IData/*31:0*/ __Vfunc_num__0__Vfuncout;
    __Vfunc_num__0__Vfuncout = 0;
    // Body
    {
        if (((0U == this->__PVT__m_bound) | VL_LTS_III(32, 
                                                       ([&]() {
                            this->__VnoInFunc_num(vlSymsp, __Vfunc_num__0__Vfuncout);
                        }(), __Vfunc_num__0__Vfuncout), this->__PVT__m_bound))) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel1;
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel1: ;
    }
}

void Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_get(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_get\n"); );
    // Init
    IData/*31:0*/ __Vfunc_num__1__Vfuncout;
    __Vfunc_num__1__Vfuncout = 0;
    // Body
    {
        if (VL_LTS_III(32, 0U, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__1__Vfuncout);
                    }(), __Vfunc_num__1__Vfuncout))) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel2;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel2: ;
    }
}

void Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek(Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek\n"); );
    // Init
    IData/*31:0*/ __Vfunc_num__2__Vfuncout;
    __Vfunc_num__2__Vfuncout = 0;
    // Body
    {
        if (VL_LTS_III(32, 0U, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__2__Vfuncout);
                    }(), __Vfunc_num__2__Vfuncout))) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel3;
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel3: ;
    }
}

Vtop_std__03a__03amailbox__Tz1::~Vtop_std__03a__03amailbox__Tz1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop_std__03a__03amailbox__Tz1>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop_std__03a__03amailbox__Tz1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtop_std__03a__03amailbox__Tz1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_std__03a__03amailbox__Tz1::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return out;
}
