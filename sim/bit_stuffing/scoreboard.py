import os

class scoreboard:
    def __init__(self,log_file):
        self.log_file = log_file
        self.act_queue = [] # queue to store the value coz of delay in dut to produce outputs
        self.cycle =0
        self.cnt =0
        self.fail = 0

        self.pred_cnt = 0
        self.pred_prev = None

        self.pretty_stream = []
        self.actual_stream = []
        self.exp_op = []
        self.input_queue =[]

# to get ip from the monitor class then take only the req for sb
    def separation(self,trx): 

        if(trx["valid_in"] == 1 and trx["ready_out"] == 1 and trx["bit_in"] != "x"):
            self.input_queue.append(trx["bit_in"])
            #self.prediction(trx["bit_in"])
        
        if (trx["valid_out"] == 1 and trx["bit_out"] != "x"):
            if not self.input_queue:
                self.log_file.write(
                    f"[CYCLE {self.cycle}] Stuffed/output-only cycle. "
                    f"ACT={trx['bit_out']}\n")

                self.act_queue.append(trx["bit_out"])
                self.actual_stream.append(str(trx["bit_out"]))
                return
            
            delay = self.input_queue.pop(0)
            self.prediction(delay)
            self.act_queue.append(trx["bit_out"])
            self.actual_stream.append(str(trx["bit_out"]))

        self.check_queues()
        self.cycle +=1


    def prediction(self,bit):
        
        self.exp_op.append(bit)
        self.pretty_stream.append(str(bit))

        if(bit== self.pred_prev):
            self.pred_cnt +=1
        else:
            self.pred_cnt = 1
        self.pred_prev = bit

        if self.pred_cnt ==5:
            stuff_bit = 1-self.pred_prev
            self.exp_op.append(stuff_bit)
            self.pretty_stream.append(f"[{stuff_bit}]")
            self.pred_prev = stuff_bit
            self.pred_cnt = 1

        self.check_queues()


    def check_queues(self):
        while (self.exp_op and self.act_queue):
            exp = self.exp_op.pop(0)
            act = self.act_queue.pop(0)
            self.compare(exp,act)


    def clear(self):
        self.exp_op.clear()
        self.act_queue.clear()
        self.pretty_stream.clear()
        self.cycle =0
        self.cnt =0
        self.fail = 0
        self.pred_cnt = 0
        self.pred_prev = None
        self.actual_stream.clear()
        self.input_queue.clear()


    def compare(self, exp_op, act_op):
        self.cnt +=1
        passed = (exp_op == act_op)

        self.log_file.write(
                f"[CMP {self.cnt}] "
                f"EXP={exp_op} ACT={act_op} "
                f"{'PASS' if exp_op == act_op else 'FAIL'}\n")
        #if not passed:
        #    self.log_file.write(
        #        f"[CMP {self.cnt}] "
        #        f"EXP={exp_op} ACT={act_op} FAIL\n"
        #    )
        if not passed:
            self.fail +=1

        self.log_file.flush()
    

    def summary(self, test_name):

        status = "PASS" if self.fail == 0 else "FAIL"

        self.log_file.write("\n")
        self.log_file.write("=" * 60 + "\n")
        self.log_file.write(f"TEST      : {test_name}\n")
        self.log_file.write(f"ACTUAL STREAM:\n"f"{' '.join(self.actual_stream)}\n\n")        
        self.log_file.write(f"EXPECTED STREAM:\n{' '.join(self.pretty_stream)}\n\n")
        self.log_file.write(f"COMPARES  : {self.cnt}\n")
        self.log_file.write(f"FAILURES  : {self.fail}\n")
        self.log_file.write(f"STATUS    : {status}\n")
        self.log_file.write("=" * 60 + "\n\n")
        self.log_file.flush()
        
