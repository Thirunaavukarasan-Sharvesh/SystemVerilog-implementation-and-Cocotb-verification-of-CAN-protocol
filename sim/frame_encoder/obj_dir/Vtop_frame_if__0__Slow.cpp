// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_frame_if___ctor_var_reset(Vtop_frame_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_frame_if___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->frame_in, __VscopeHash, 1683672517695475471ull);
    vlSelf->tx_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1719547800165390182ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->frame, __VscopeHash, 4793244500811731426ull);
    vlSelf->frame_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047452146504048636ull);
    vlSelf->__Vdly__frame_done = 0;
    VL_ZERO_RESET_W(110, vlSelf->__Vdly__frame);
}
