from cocotb.triggers import RisingEdge

class Driver:

    def __init__(self,dut):
        self.dut = dut
    #"rst_n": 1, "data_valid": 1, "data_in": 0, "crc_init": 0, "crc_cap": 0
    async def drive (self,stimulus):
        for trx in stimulus:
            self.dut.rst_n.value = trx["rst_n"]
            self.dut.data_valid.value=trx["data_valid"]            
            self.dut.data_in.value=trx["data_in"]
            self.dut.crc_init.value=trx["crc_init"]
            self.dut.crc_cap.value=trx["crc_cap"]
            await RisingEdge(self.dut.clk)
