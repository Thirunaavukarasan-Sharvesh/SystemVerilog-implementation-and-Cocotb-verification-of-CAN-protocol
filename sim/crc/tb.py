import cocotb
from cocotb.triggers import RisingEdge, ReadOnly, NextTimeStep
from cocotb.clock import Clock
from crc.monitor import Monitor
from crc.scoreboard import ScoreBaord
from crc.driver import Driver
from crc.stimulus import Stimulus
from itertools import islice
import os

file = os.path.dirname(__file__)
folder = os.path.join(file,"logs")
os.makedirs(folder,exist_ok=True)
log_file = open(os.path.join(folder,"crc_logs.log"),"a",buffering=1)
log_file.write("")

async def reset_dut(dut):
    #log_file.write("Rest\n")
    dut.rst_n.value      = 0
    dut.data_in.value    = 0
    dut.data_valid.value = 0
    dut.crc_init.value   = 0
    dut.crc_cap.value    = 0

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    dut.rst_n.value = 1

    await RisingEdge(dut.clk)

@cocotb.test()
async def crc_basic_test(dut):

    cocotb.start_soon(Clock(dut.clk,10,unit="ns").start())
    sb = ScoreBaord(log_file)
    moni = Monitor(dut)
    drv = Driver(dut)
    stim = Stimulus()

    moni.trx_sc(sb.sepration)
    cocotb.start_soon(moni.monitor())

    await reset_dut(dut)
    sb.clear()

    init_seq = [

        {
            "rst_n"      : 1,
            "data_valid" : 0,
            "data_in"    : 0,
            "crc_init"   : 1,
            "crc_cap"    : 0
        },

        {
            "rst_n"      : 1,
            "data_valid" : 0,
            "data_in"    : 0,
            "crc_init"   : 0,
            "crc_cap"    : 0
        }
    ]
    #log_file.write("\nInitial Sequnce\n")
    await drv.drive(init_seq)
    #log_file.write("Done\n\n")

    """pattern1 = stim.all_zeros_data_in()
    pattern2 = stim.all_ones_data_in()
    pattern3 = stim.alternating_bits_data_in_h_valid()
    pattern4 = stim.alternating_bits_data_in_l_valid()
    pattern5 = stim.alternating_bits_data_in_h_l_valid()
    pattern6 = stim.walking_1(8)
    pattern7 = stim.walking_0(8)
    pattern8 = stim.step_up_1(8)
    pattern9 = stim.step_down_1(8)
    pattern10 = stim.checker_board(8)
    pattern11 = stim.random_pattern_val()
    pattern12 = stim.random_pattern_en()
    pattern13 = stim.random_pattern_rst()"""

    patterns = [
        ("all_zeros_data_in", stim.all_zeros_data_in()),
        ("all_ones_data_in", stim.all_ones_data_in()),
        ("alternating_bits_data_in_h_valid", stim.alternating_bits_data_in_h_valid()),
        ("alternating_bits_data_in_l_valid", stim.alternating_bits_data_in_l_valid()),
        ("alternating_bits_data_in_h_l_valid", stim.alternating_bits_data_in_h_l_valid()),
        ("walking_1", stim.walking_1(8)),
        ("walking_0", stim.walking_0(8)),
        ("step_up_1", stim.step_up_1(8)),
        ("step_down_1", stim.step_down_1(8)),
        ("checker_board", stim.checker_board(8)),
        ("random_pattern_val", stim.random_pattern_val()),
        ("random_pattern_en", stim.random_pattern_en()),
        ("random_pattern_rst", stim.random_pattern_rst())
    ]

    async def run_pat(name,pattern,cycle=16):
        limited_pattern = islice(pattern, cycle)
        log_file.write(f"Executing {name}\n")
        await drv.drive(limited_pattern)
        await RisingEdge(dut.clk)    #why 2 clk wait
        await RisingEdge(dut.clk)
        log_file.write("Finished")
        sb.result(name)
        await reset_dut(dut)
        sb.clear()
    
    for name,pat in patterns:
        await run_pat(name,pat)
    
    cap_seq = [

        {
            "rst_n"      : 1,
            "data_valid" : 0,
            "data_in"    : 0,
            "crc_init"   : 0,
            "crc_cap"    : 1
        },

        {
            "rst_n"      : 1,
            "data_valid" : 0,
            "data_in"    : 0,
            "crc_init"   : 0,
            "crc_cap"    : 0
        }
    ]

    await drv.drive(cap_seq)

    for _ in range(5):

        await RisingEdge(dut.clk)


    assert sb.error_count == 0, \
        f"TEST FAILED with {sb.error_count} mismatches"

    cocotb.log.info("TEST PASSED")