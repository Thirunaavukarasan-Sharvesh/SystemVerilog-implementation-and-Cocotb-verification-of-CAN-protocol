import cocotb
from cocotb.clock import Clock 
from cocotb.triggers import Timer, RisingEdge, FallingEdge, ReadOnly, NextTimeStep
from cocotb_bus.monitors import BusMonitor
from cocotb_coverage.coverage import CoverPoint, CoverCross, coverage_db
import random   
import os
from monitor import BitTimingMonitor

@cocotb.test()
async def tb_bit_timing_and_sync(dut): 
    cocotb.start_soon(Clock(dut.sys_clk, 10, unit="ns").start())
    dut.rst_n.value =0
    cocotb.log.info("Applying reset")   
    await Timer(5, unit="ns")
    cocotb.log.info("Reset is applied")
    dut.rst_n.value =1
    cocotb.log.info("De-asserting reset")
    await RisingEdge(dut.sys_clk)
    cocotb.log.info("Resest and de-asserted is completed")

    dut.en.value = 1
    await RisingEdge(dut.sys_clk)

    dut.bus_lvl.value = 0

    monitor = BitTimingMonitor(dut)
    await monitor.run(50)



    

