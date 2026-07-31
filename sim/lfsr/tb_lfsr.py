import cocotb
from cocotb_bus.monitors import BusMonitor
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge, ReadOnly,  NextTimeStep
from tb_logger import get_tb_logger
#from cocotb_coverage.coverage import CoverPoint, CoverCross, coverage_db
import random
#import os
#import logging
#from sim.Monitor_logs import MonitorLogs
from scoreboard_lfsr import scoreboard_lfsr
from monitor_lfsr import Monitor_lfsr_Logs
from stimulus_patterns import stimulusPatterns
from LFSRDriver import LFSRDriver


async def run_patterns(name,pattern,cycles,driver,sb,dut):
    logger = get_tb_logger()
    logger.info(f"SEQ: {name} started")
    await driver.driver(0,0,0)  # Apply reset
    await RisingEdge(dut.clk)  # Wait for the next clock edge to ensure the DUT processes the reset
    await driver.driver(1,0,0)  # De-assert reset, keep enable low
    await RisingEdge(dut.clk)  # Wait for the next clock edge to ensure the DUT processes the de-asserted reset
    sb.reset_stats() # to reset the scoreboard's error and check counters before starting a new sequence of patterns
    sb.reset() # to reset the scoreboard before starting a new sequence of patterns
    sb.reset_stats() # to reset the scoreboard's error and check counters before starting a new sequence of patterns
    for i in range(cycles):
        #await RisingEdge(dut.clk)  # Wait for the next clock edge to ensure the DUT processes the inputs
        rst,en,data = next(pattern)
        await driver.driver(rst,en,data)
        await RisingEdge(dut.clk)  # Wait for the next clock edge to ensure the DUT processes the inputs
        await ReadOnly()  # Ensure we are in the read-only phase of the simulation
        #sb.step(int(dut.data_in.value),int(dut.lfsr_out.value),int(dut.rst_n.value),int(dut.en.value))
        await NextTimeStep()  # Move to the next time step to allow the scoreboard to process the current values)
    logger.info(f"SEQ: {name} ended")
    sb.report()
"""
@cocotb.test()
async def lfsr(dut):
    sim = stimulusPatterns()
    cocotb.start_soon(Clock(dut.clk,10,unit="ns").start())
    dut.rst_n.value = 0
    dut.en.value = 0
    dut.data_in.value = 0
    await RisingEdge(dut.clk) 

    dut.rst_n.value = 1
    dut.en.value = 1
    pat = sim.random_pattern_en()
    for i in range(30):
        rst,en,data = next(pat)
        dut.data_in.value = data
        await RisingEdge(dut.clk)
        cocotb.log.info("this is cocotb: %d", int(dut.lfsr_out.value))
sb = scoreboard_lfsr(15,0)
sim = stimulusPatterns()
pat = sim.random_pattern_en()

for i in range(30):
    rst,en,data = next(pat)
    val = sb.predict(data)
    print("Thsi si sb predict : %d",val)
    sb.state = val"""
@cocotb.test()
async def lfsr(dut):
    cocotb.start_soon(Clock(dut.clk,10,unit="ns").start())
    sb = scoreboard_lfsr(width=15,seed=0)
    monitor = Monitor_lfsr_Logs(dut)
    monitor.add_callback(sb.step)
    cocotb.start_soon(monitor.run())

    stim = stimulusPatterns()
    dvr = LFSRDriver(dut)
    logger = get_tb_logger()

    # reset through the drivers 
    await dvr.driver(0,0,0)
    await RisingEdge(dut.clk)
    await dvr.driver(1,1,0)
    #sb.reset()
    await RisingEdge(dut.clk)

    cycles = 100
    logger.info("Starting the test using stimulus patterns")
    

    await run_patterns("all_zeros",stim.all_zeros(),cycles,dvr,sb,dut)
    await run_patterns("all_ones",stim.all_ones(),cycles,dvr,sb,dut)
    await run_patterns("alternating_bits",stim.alternating_bits(),cycles,dvr,sb,dut)
    await run_patterns("walking_1",stim.walking_1(15),cycles,dvr,sb,dut)
    await run_patterns("walking_0",stim.walking_0(15),cycles,dvr,sb,dut)
    await run_patterns("random_val",stim.random_pattern_val(),cycles,dvr,sb,dut)
    await run_patterns("random_en",stim.random_pattern_en(),cycles,dvr,sb,dut)
    await run_patterns("random_rst",stim.random_pattern_rst(),cycles,dvr,sb,dut)

    #sb.report()
    logger.info("Test completed successfully")
    



    # cocotb.log.info("Starting random manual testing for 5000 cycles")
    # cocotb.log.info("Applying reset")
    # dut.rst_n.value = 0   
    # dut.en.value = 0
    # dut.data_in.value = 0

    # await RisingEdge(dut.clk)
    # dut.data_in.value = 1
    # await RisingEdge(dut.clk)

    # cocotb.log.info("Reset is applied")
    # cocotb.log.info(dut.lfsr_out.value)

    # dut.rst_n.value =1
    # cocotb.log.info("De-asserting reset")
    # await RisingEdge(dut.clk)
    # cocotb.log.info("Resest and de-asserted is completed")
    
    # dut.en.value = 1
    # cocotb.log.info("Enabling the module")
    # for i in range(5000):
    #     dut.data_in.value = random.randint(0, 1)  # Randomly toggle data_in
    #     await RisingEdge(dut.clk)
    #     await ReadOnly()  # Ensure we are in the read-only phase of the simulation
    #     #await RisingEdge(dut.clk)  # Wait for the next clock cycle to ensure values are updated
    #     sb.step(int(dut.data_in.value),int(dut.lfsr_out.value),int(dut.rst_n.value),int(dut.en.value))
    #     await NextTimeStep()  # Move to the next time step to allow the scoreboard to process the current values
    # sb.report()
