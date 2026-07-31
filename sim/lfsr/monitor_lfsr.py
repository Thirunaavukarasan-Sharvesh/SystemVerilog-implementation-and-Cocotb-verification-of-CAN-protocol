import logging
from cocotb.triggers import  RisingEdge, ReadOnly, NextTimeStep

class Monitor_lfsr_Logs:
   def __init__(self,dut,logfile = "Monitor_lfsr.log"):
        self.dut = dut
        self.callbacks = []
        self.logger = logging.getLogger("Monitor_lfsr_Logs")
        self.logger.setLevel(logging.INFO)
        self.logger.propagate = False

        if not self.logger.handlers:
            fh = logging.FileHandler(logfile)
            fh.formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')
            fh.setFormatter(fh.formatter)
            self.logger.addHandler(fh)
        
   def add_callback(self, callback):
        self.callbacks.append(callback)

   def safe_run(self,signal):
        try:
            return int(signal.value)
        except ValueError:
            return None
        
   async def run(self):
       cycle = 0
       while True:
            await RisingEdge(self.dut.clk)
            await ReadOnly()  # Ensure we are in the read-only phase of the simulation

            rst = self.safe_run(self.dut.rst_n)
            en  = self.safe_run(self.dut.en)
            din = self.safe_run(self.dut.data_in)
            out = self.safe_run(self.dut.lfsr_out)

            # ---- FILTER BAD CYCLES ----
            if None in (rst, en, din, out):
                continue

            if rst == 0:
                continue

            if en == 0:
                continue
            # ---------------------------

            trx = {
                "rst_n": rst,
                "en": en,
                "data_in": din,
                "lfsr_out": out
            }

            self.logger.info(f"MON Cycle {cycle} | {trx}")

            for cb in self.callbacks:
                cb(trx)

            cycle += 1
   """
   def safe_run(self,signal):
        try:
            return int(signal.value)
        except ValueError:
            return "X"

   async def run(self):
      cycle = 0
      while True:
          await RisingEdge(self.dut.clk)
        #   rst_n = int(self.dut.rst_n.value)
        #   en = int(self.dut.en.value)

        #   if not rst_n or not en:
        #       continue
          Trx = { "data_in": self.safe_run(self.dut.data_in),
                "lfsr_out": self.safe_run(self.dut.lfsr_out),
                "rst_n": self.safe_run(self.dut.rst_n),
                "en": self.safe_run(self.dut.en),
                }
      
          self.logger.info(f"Cycle {cycle} | {Trx}")
          for cb in self.callbacks:
                cb(Trx)

          cycle += 1"""

"""
   def safe_run(self, signal):
    try:
        return int(signal.value)
    except ValueError:
        return None


   async def run(self):

        cycle = 0

        while True:
            await RisingEdge(self.dut.clk)

            trx = {
                "data_in": self.safe_run(self.dut.data_in),
                "lfsr_out": self.safe_run(self.dut.lfsr_out),
                "rst_n": self.safe_run(self.dut.rst_n),
                "en": self.safe_run(self.dut.en),
            }

            self.logger.info(f"Cycle {cycle} | {trx}")

            if None not in trx.values():
                for cb in self.callbacks:
                    cb(trx)

            cycle += 1

            """
    