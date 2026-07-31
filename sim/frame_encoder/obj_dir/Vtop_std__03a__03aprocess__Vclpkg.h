// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTOP_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop_std__03a__03aprocess;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_std__03a__03aprocess__Vclpkg();
    ~Vtop_std__03a__03aprocess__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vtop__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtop_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vtop__Syms* __restrict vlSymsp, VlClassRef<Vtop_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vtop__Syms;

class Vtop_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new Vtop_std__03a__03aprocess(*this); }
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
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:197:21

template<> template<>
inline bool VlClassRef<Vtop_std__03a__03aprocess>::operator==(const VlClassRef<Vtop_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vtop_std__03a__03aprocess>::operator!=(const VlClassRef<Vtop_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vtop_std__03a__03aprocess>::operator<(const VlClassRef<Vtop_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
