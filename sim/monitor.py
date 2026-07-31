import logging
from cocotb.triggers import  RisingEdge

class BitTimingMonitor:
    def __init__(self,dut, logfile ="Monitor.log"):
        self.dut = dut
        self.logger = logging.getLogger("BitTimingMonitor")
        self.logger.setLevel(logging.INFO)
        handler = logging.FileHandler(logfile,mode="w")
        formatter = logging.Formatter('%(asctime)s - %(message)s')
        handler.setFormatter(formatter)
        self.logger.addHandler(handler)

    async def run(self,cycles = 50):
        for i in range(cycles):
            await RisingEdge(self.dut.sys_clk)

            self.logger.info(
            f"Cycle {i} | "
            f"state={int(self.dut.seg_state.value)} "
            f"prop={int(self.dut.prop_tq.value)} "
            f"ph1={int(self.dut.phase1_tq.value)} "
            f"ph2={int(self.dut.phase2_tq.value)} "
            f"sample={int(self.dut.sample_pulse.value)} "
            f"bdy={int(self.dut.bit_bdy_pulse.value)}"
            )