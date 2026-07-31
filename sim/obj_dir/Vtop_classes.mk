# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_h321bb679__0 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_frame_if__DepSet_h446dd704__0 \
	Vtop___024unit__03a__03atransaction__Vclpkg__DepSet_hb62340fc__0 \
	Vtop___024unit__03a__03atransaction__Vclpkg__DepSet_hfa6f221f__0 \
	Vtop___024unit__03a__03alogger__Vclpkg__DepSet_h4355721c__0 \
	Vtop___024unit__03a__03alogger__Vclpkg__DepSet_ha7d950ff__0 \
	Vtop___024unit__03a__03agenerator__Vclpkg__DepSet_h8ef66f7d__0 \
	Vtop___024unit__03a__03agenerator__Vclpkg__DepSet_hc9be5e47__0 \
	Vtop___024unit__03a__03agenerator__Vclpkg__DepSet_he23c33a0__0 \
	Vtop___024unit__03a__03adriver__Vclpkg__DepSet_hf3af4003__0 \
	Vtop___024unit__03a__03adriver__Vclpkg__DepSet_h233a61bc__0 \
	Vtop___024unit__03a__03adriver__Vclpkg__DepSet_hddad3572__0 \
	Vtop___024unit__03a__03adriver__Vclpkg__DepSet_h36e322ee__0 \
	Vtop___024unit__03a__03amonitor__Vclpkg__DepSet_h8ba43777__0 \
	Vtop___024unit__03a__03amonitor__Vclpkg__DepSet_h46b19aed__0 \
	Vtop___024unit__03a__03amonitor__Vclpkg__DepSet_h8e730139__0 \
	Vtop___024unit__03a__03amonitor__Vclpkg__DepSet_he2bf61e4__0 \
	Vtop___024unit__03a__03ascoreboard__Vclpkg__DepSet_h3b404e5b__0 \
	Vtop___024unit__03a__03ascoreboard__Vclpkg__DepSet_h5eaf0a5d__0 \
	Vtop___024unit__03a__03ascoreboard__Vclpkg__DepSet_h68efdd6f__0 \
	Vtop___024unit__03a__03ascoreboard__Vclpkg__DepSet_h91e358c0__0 \
	Vtop___024unit__03a__03ascoreboard__Vclpkg__DepSet_h065d708f__0 \
	Vtop___024unit__03a__03ascoreboard__Vclpkg__DepSet_h45203c24__0 \
	Vtop___024unit__03a__03aenvironment__Vclpkg__DepSet_h76350bef__0 \
	Vtop___024unit__03a__03aenvironment__Vclpkg__DepSet_h2d8d6a40__0 \
	Vtop___024unit__03a__03aenvironment__Vclpkg__DepSet_h7d619e08__0 \
	Vtop___024unit__03a__03aenvironment__Vclpkg__DepSet_h850138ab__0 \
	Vtop___024unit__03a__03aenvironment__Vclpkg__DepSet_hc6cb9421__0 \
	Vtop___024unit__03a__03aenvironment__Vclpkg__DepSet_hc14ce265__0 \
	Vtop___024unit__03a__03aenvironment__Vclpkg__DepSet_h7670e901__0 \
	Vtop_std__03a__03asemaphore__Vclpkg__DepSet_h610f6cf4__0 \
	Vtop_std__03a__03asemaphore__Vclpkg__DepSet_hc9833617__0 \
	Vtop_std__03a__03aprocess__Vclpkg__DepSet_he9976e0c__0 \
	Vtop_std__03a__03aprocess__Vclpkg__DepSet_h411b34ef__0 \
	Vtop_std__03a__03amailbox__Tz1__Vclpkg__DepSet_hf33e0449__0 \
	Vtop_std__03a__03amailbox__Tz1__Vclpkg__DepSet_h37745eb4__0 \
	Vtop__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop___024unit__Slow \
	Vtop___024unit__DepSet_hff17caec__0__Slow \
	Vtop_std__Slow \
	Vtop_std__DepSet_h0be1253a__0__Slow \
	Vtop_frame_if__Slow \
	Vtop_frame_if__DepSet_h446dd704__0__Slow \
	Vtop___024unit__03a__03atransaction__Vclpkg__Slow \
	Vtop___024unit__03a__03atransaction__Vclpkg__DepSet_hfa6f221f__0__Slow \
	Vtop___024unit__03a__03alogger__Vclpkg__Slow \
	Vtop___024unit__03a__03alogger__Vclpkg__DepSet_ha7d950ff__0__Slow \
	Vtop___024unit__03a__03agenerator__Vclpkg__Slow \
	Vtop___024unit__03a__03agenerator__Vclpkg__DepSet_he23c33a0__0__Slow \
	Vtop___024unit__03a__03adriver__Vclpkg__Slow \
	Vtop___024unit__03a__03adriver__Vclpkg__DepSet_h36e322ee__0__Slow \
	Vtop___024unit__03a__03amonitor__Vclpkg__Slow \
	Vtop___024unit__03a__03amonitor__Vclpkg__DepSet_he2bf61e4__0__Slow \
	Vtop___024unit__03a__03ascoreboard__Vclpkg__Slow \
	Vtop___024unit__03a__03ascoreboard__Vclpkg__DepSet_h91e358c0__0__Slow \
	Vtop___024unit__03a__03aenvironment__Vclpkg__Slow \
	Vtop___024unit__03a__03aenvironment__Vclpkg__DepSet_h850138ab__0__Slow \
	Vtop_std__03a__03asemaphore__Vclpkg__Slow \
	Vtop_std__03a__03asemaphore__Vclpkg__DepSet_hc9833617__0__Slow \
	Vtop_std__03a__03aprocess__Vclpkg__Slow \
	Vtop_std__03a__03aprocess__Vclpkg__DepSet_h411b34ef__0__Slow \
	Vtop_std__03a__03amailbox__Tz1__Vclpkg__Slow \
	Vtop_std__03a__03amailbox__Tz1__Vclpkg__DepSet_h37745eb4__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__0__Slow \
	Vtop__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
