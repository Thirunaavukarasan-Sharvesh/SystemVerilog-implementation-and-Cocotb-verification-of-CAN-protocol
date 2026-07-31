import cocotb
from cocotb.triggers import RisingEdge, NextTimeStep
from cocotb.clock import Clock
import os
from .scoreboard import Scoreboard
from .monitor import Monitor
from .driver import Driver
from .stimulus import Stimulus
from .coverage import Coverage
from itertools import islice

file = os.path.dirname(__file__)
folder = os.path.join(file,"logs")
os.makedirs(folder,exist_ok=True)
log_file = open(os.path.join(folder,"destuff.log"),"w")

async def prints(dut,name=None,i=False):
    log_file.write(f"\tSTATE: {name}\n")
    log_file.write(f"Rest       : {dut.rst_n.value}\n")
    log_file.write(f"valid_out  : {dut.valid_out.value}\n")
    if i:
        log_file.write(f"Input bit  : {dut.bit_in.value}\n")
    log_file.write(f"bit_out    : {dut.bit_out.value}\n")
    log_file.write(f"prev bit   : {dut.prev.value}\n")
    cnt = dut.cnt.value
    log_file.write(f"count      : {int(cnt) if cnt.is_resolvable else cnt}\n")
    log_file.write(f"Stuff_Error: {dut.stuff_error.value}\n\n")
    log_file.flush()

async def reset_dut(dut):
    dut.rst_n.value = 0
    dut.bit_in.value = 0
    dut.valid_in.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

@cocotb.test()
async def destuffing_test(dut):
    cocotb.start_soon(Clock(dut.clk,10,unit="ns").start())
    sb = Scoreboard(log_file)
    moni = Monitor(dut)
    drv = Driver(dut)
    stim = Stimulus()
    cv = Coverage(log_file)

    moni.dy_trx_sc(sb.separator)
    moni.dy_trx_sc(cv.sample)
    cocotb.start_soon(moni.monitor())

    patterns =[
        ("All 0's", stim.all_zeros()),
        ("All 1's", stim.all_ones()),
        ("Alternating 0's and 1's", stim.alternating_bits()),
        ("Walking 1's", stim.walking_1(64)),
        ("Walking 0's", stim.walking_0(64)),
        ("Step up 1's", stim.step_up_1(10)),
        ("Step down 1's", stim.step_down_1(10)),
        ("Checkerboard", stim.checkerboard(8)),
        ("Random bit", stim.random_bit()),
        ("Random Valid", stim.random_valid_in(  )),
        ("Random Reset", stim.random_rst())
    ]

    async def run_test(test_name, pattern, cycles=200):
        limit= islice(pattern, cycles)
        log_file.write(f"Running Test: {test_name}\n")
        await drv.drive(limit)
        await RisingEdge(dut.clk)
        await RisingEdge(dut.clk)
        log_file.write(f"Completed Test: {test_name}\n\n")
        sb.summary(test_name)
        assert sb.fail == 0, f"{test_name} failed with {sb.fail} mismatches"
        await reset_dut(dut)
        sb.clear()
    
    for name,pat in patterns:
        await run_test(name,pat)
    #name,pat = patterns[9]
    #await run_test(name,pat)
    cv.summary("Final Report")