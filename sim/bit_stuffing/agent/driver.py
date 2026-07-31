from cocotb.triggers import RisingEdge

class Driver:
    def __init__(self,dut):
        self.dut = dut

    async def drive(self,stimulus):
        for i in stimulus:
            self.dut.rst_n.value = i["rst_n"]
            self.dut.valid_in.value = i["valid_in"]
            if (self.dut.valid_in.value == 1 and self.dut.ready_out.value == 1):
                self.dut.bit_in.value = i["bit_in"]
            await RisingEdge(self.dut.clk)
           