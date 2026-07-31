from cocotb.triggers import RisingEdge, ReadOnly, NextTimeStep, FallingEdge
import logging
import cocotb

class LFSRDriver:
    def __init__(self,dut):
        self.dut = dut
        self.logger = logging.getLogger("LFSRDriver")   

    def safe_int(self, signal):
        try:
            return int(signal.value)
        except ValueError:
            return None   # or "X"

    async def driver(self,rst_n,en,data_in):
        await FallingEdge(self.dut.clk)
        self.logger.debug(f"rst: {rst_n}, en: {en}, data_in: {data_in}")
        self.dut.rst_n.value = rst_n
        self.dut.en.value = en
        self.dut.data_in.value = data_in
        cocotb.log.info(
    f"DRV clk | rst={self.safe_int(self.dut.rst_n)} en={self.safe_int(self.dut.en)} din={self.safe_int(self.dut.data_in)}"
)
        # await RisingEdge(self.dut.clk)
        # await ReadOnly()  # Ensure we are in the read-only phase of the simulation
        # await NextTimeStep()  # Move to the next time step to allow the DUT to process the current values