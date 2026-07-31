import random
"""
 input logic rst_n,

    input logic data_in,

    input logic data_valid, // input data valid signal from top module 
    input logic crc_init, // initialize crc
    input logic crc_cap, //
"""

class Stimulus:
    def all_zeros_data_in(self):
        while(True):
            yield {"rst_n": 1, "data_valid": 1, "data_in": 0, "crc_init": 0, "crc_cap": 0}
    
    def all_ones_data_in(self):
        while(True):
            yield {"rst_n": 1, "data_valid": 1, "data_in": 1, "crc_init": 0, "crc_cap": 0}
    
    def alternating_bits_data_in_h_valid(self):
        bit = 0
        while(True):
            bit ^=1
            yield {"rst_n": 1, "data_valid": 1, "data_in": bit, "crc_init": 0, "crc_cap": 0}

    def alternating_bits_data_in_l_valid(self):
        bit = 0
        while(True):
            bit ^=1
            yield {"rst_n": 1, "data_valid": 0, "data_in": bit, "crc_init": 0, "crc_cap": 0}

    def alternating_bits_data_in_h_l_valid(self):
        bit = 0
        while(True):
            x= bit
            bit ^=1
            yield {"rst_n": 1, "data_valid": x, "data_in": bit, "crc_init": 0, "crc_cap": 0}
    
    def walking_1(self,width):
        while True:
            for i in range(width):
                word = 1<<i
                # 0 0 0 1
                for bit in reversed(range(width)):
                    yield {"rst_n": 1, "data_valid": 1, "data_in": (word >> bit) & 1, "crc_init": 0, "crc_cap": 0}

    def walking_0(self,width):
        while True:
            for i in range(width):
                # 1 1 1 0 -> 1 1 0 1 -> 1 0 1 1 -> 0 1 1 1
                word = ~(1 << i) & ((1 << width)-1)
                for bit in reversed(range(width)):
                    yield {"rst_n": 1, "data_valid": 1, "data_in": (word >> bit) & 1, "crc_init": 0, "crc_cap": 0}

    def step_up_1(self,width):
        while True:
            for i in range(width):
                # 0 0 0 1 -> 0 0 1 1 -> 0 1 1 1 -> 1 1 1 1
                #   1            3          7            15 
                #   2-1         4 -1       8 -1         16-1
                word = (1 << (i+1))-1
                for bit in reversed(range(width)):
                    yield {"rst_n": 1, "data_valid": 1, "data_in": (word >> bit) & 1, "crc_init": 0, "crc_cap": 0}

    def step_down_1(self,width):
        while True:
            for i in range(width):
                # 1 1 1 0 -> 1 1 0 0 -> 1 0 0 0 -> 0 0 0 0
                #   14         12     8           0
                #   15-1        13-1   9-1         1-1
                word = ((1 << width)-1) ^ ((1 << (i+1)) -1)
                for bit in reversed(range(width)):
                    yield {"rst_n": 1, "data_valid": 1, "data_in": (word >> bit) & 1, "crc_init": 0, "crc_cap": 0}
    
    def checker_board(self,width):
            # 1010 -> 0101 -> 1010 
            # 101   010     101
            # 000 0000 0000 0000 -> 101 0101 0101 0101 -> 010 1010 1010 1010
            mask = (1 << width)-1
            x=0
            for pos in range(width):
                bit = width -1 - pos
                if pos % 2 == 0:
                    x |= (1<<bit) & mask
                    # pos 0 - bit = 4 - x= 10000 
                    # pos 1 - bit = 3 - x = 10000
                    # pos 2 - bit = 2 - x = 10100
                    # pos 3 - bit = 1 - x = 10100 
            y = x ^ mask
            while True:
                for word in [x,y]:
                    for bit in reversed(range(width)):
                        yield {"rst_n": 1, "data_valid": 1, "data_in": (word >> bit) & 1, "crc_init": 0, "crc_cap": 0}
    
    def random_pattern_val(self):
        while True:
            yield {"rst_n": 1, "data_valid": 1, "data_in": random.randint(0, 1), "crc_init": 0, "crc_cap": 0}
    
    def random_pattern_en(self):
        while True:
            yield {"rst_n": 1, "data_valid": random.randint(0, 1), "data_in": random.randint(0, 1), "crc_init": 0, "crc_cap": 0}
    
    def random_pattern_rst(self):
            while True:
                yield {"rst_n": random.randint(0, 1), "data_valid": 1, "data_in": random.randint(0, 1), "crc_init": 0, "crc_cap": 0}   