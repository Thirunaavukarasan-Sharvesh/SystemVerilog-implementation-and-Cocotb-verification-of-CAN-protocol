import os

class ScoreBaord:
    def __init__(self,log_file):
        self.exp_queue =[]
        self.cnt =0
        self.cycle =0
        self.error_count = 0
        self.exp_crc_out =0
        self.exp_crc_valid = 0
        self.exp_lfsr_en = 0
        self.exp_lfsr_out = 0

        self.log_file = log_file

    def lfsr_model(self,data_in, curr_state):
        # swap then xor with the input data
        lfsr = curr_state
        fb = int(data_in) ^ ((lfsr >> 14) &1 )
        next_state = (lfsr <<1) | fb
        if fb:
            next_state ^= (1 << 14)
            next_state ^= (1 << 10)
            next_state ^= (1 << 8)
            next_state ^= (1 << 7)
            next_state ^= (1 << 4)
            next_state ^= (1 << 3)
        lfsr = next_state & 0x7FFF
        return lfsr
    
    def clear(self):
        self.exp_queue =[]
        self.cnt =0
        self.cycle =0
        self.error_count = 0

        self.exp_crc_out =0
        self.exp_crc_valid = 0
        self.exp_lfsr_en = 0
        self.exp_lfsr_out = 0
    
    def expected_res(self,inputs):
            
            rst_n = inputs["rst_n"]
            data_in= inputs["data_in"]
            data_valid = inputs["data_valid"]
            crc_init =inputs["crc_init"]
            crc_cap =  inputs["crc_cap"] 

            # reset is released means need to check with the previous valpue of the output so need some kind of stack or buffer or array to hold the prev 
            if (rst_n == 0):
                self.exp_crc_out   = 0
                self.exp_crc_valid = 0
                self.exp_lfsr_out  = 0
                self.exp_lfsr_en   = 0

            else :
                self.exp_lfsr_en   = 0
                self.exp_crc_valid = 0

                if crc_init:
                    self.exp_lfsr_out = 0
                    self.exp_crc_out = 0
                    self.exp_crc_valid = 0

                if data_valid:
                    self.exp_lfsr_en = 1
                    self.exp_lfsr_out = self.lfsr_model(data_in, self.exp_lfsr_out)

                if crc_cap == 1:
                    self.exp_crc_out = self.exp_lfsr_out
                    self.exp_crc_valid = 1
                
            expected = {
                        "crc_out" : self.exp_crc_out,
                        "crc_valid" : self.exp_crc_valid,
                        "lfsr_out" : self.exp_lfsr_out
            }
            return expected



    def sepration(self,trx):
        inputs = {
                   "rst_n" :      trx["rst_n"],
                    "data_in" :   trx["data_in"],
                    "data_valid" :trx["data_valid"],
                    "crc_init" :  trx["crc_init"],
                    "crc_cap" :   trx["crc_cap"] 
        }
        output = {
                "crc_out" : trx["crc_out"],
                "crc_valid": trx["crc_valid"],
                "lfsr_out" : trx["lfsr_out"]
        }

        if (trx["data_valid"] == 0 and trx["crc_cap"] == 0):
            return
        
        expected=self.expected_res(inputs)
        self.log_file.write(
            f"\n[CYCLE {self.cycle}]\n"
            f"IN : DV={inputs['data_valid']} "
            f"DIN={inputs['data_in']} "
            f"INIT={inputs['crc_init']} "
            f"CAP={inputs['crc_cap']}\n"
            f"EXP: LFSR={expected['lfsr_out']:015b} "
            f"CRC={expected['crc_out']:015b} "
            f"VALID={expected['crc_valid']}\n"
            f"ACT: LFSR={int(output['lfsr_out']):015b} "
            f"CRC={int(output['crc_out']):015b} "
            f"VALID={int(output['crc_valid'])}\n"
        )
        self.log_file.flush()
        
        self.exp_queue.append(expected)
        self.cycle +=1

        if len(self.exp_queue) >1:
            exp = self.exp_queue.pop(0)
            self.compare(exp,output)


    def result(self,name):
        self.log_file.write(f"The Result for {name}: \n")
        self.log_file.write(f"\t\tTotal TC: {self.cnt}")
        self.log_file.write(f"\t\tPass TC: {self.cnt - self.error_count}")
        self.log_file.write(f"\t\tFailed TC: {self.error_count}\n\n")

    def compare(self,expected,actual):
        crc_out = actual["crc_out"]
        crc_valid = actual["crc_valid"]
        lfsr_out= actual["lfsr_out"]

        if "x" in [crc_out, crc_valid, lfsr_out]:
            self.log_file.write("skipped due to X values\n")
            self.log_file.flush()   
            return
        self.cnt+=1
        exp_crc_out   = expected ["crc_out"]
        exp_crc_valid  = expected["crc_valid"]
        exp_lfsr_out = expected["lfsr_out"]

        try:

            assert int(crc_out) == exp_crc_out, \
                f"CRC OUT mismatch | EXP={exp_crc_out:015b} ACT={int(crc_out):015b}"

            assert int(crc_valid) == exp_crc_valid, \
                f"CRC VALID mismatch | EXP={exp_crc_valid} ACT={int(crc_valid)}"

            assert int(lfsr_out) == exp_lfsr_out, \
                f"LFSR mismatch | EXP={exp_lfsr_out:015b} ACT={int(lfsr_out):015b}"

        except AssertionError as e:

            self.error_count += 1
            self.log_file.write(
                    f"\n[FAIL @ CYCLE {self.cycle}]\n"
                    f"{str(e)}\n"
                )
            self.log_file.flush()

        else:
            self.log_file.write(
                    f"[PASS @ CYCLE {self.cycle}] "
                    f"TOTAL={self.cnt} "
                    f"FAIL={self.error_count}\n"
                )
            self.log_file.flush()



