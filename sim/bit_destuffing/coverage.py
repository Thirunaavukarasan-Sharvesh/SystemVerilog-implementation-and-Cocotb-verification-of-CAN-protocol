class Coverage:

    def __init__(self, log_file):
        self.log_file = log_file

        self.five_ones = 0
        self.five_zeros = 0

        self.stuff_error = 0
        self.stuff_discard = 0

        self.bit_0 = 0
        self.bit_1 = 0

        self.reset_seen = 0

        self.prev_bit = None
        self.cnt = 0
        self.expect_stuff = False

    def sample(self, trx):

        if trx["rst_n"] == 0:
            self.reset_seen += 1
            self.prev_bit = None
            self.cnt = 0
            self.expect_stuff = False
            return

        if not trx["valid_in"]:
            return

        bit = trx["bit_in"]

        if bit == "x":
            return

        # Bit coverage
        if bit == 0:
            self.bit_0 += 1
        else:
            self.bit_1 += 1

        # Waiting for stuffed bit
        if self.expect_stuff:

            if bit != self.prev_bit:
                self.stuff_discard += 1

            self.expect_stuff = False
            self.prev_bit = None
            self.cnt = 0

            return

        # Run-length tracking
        if bit == self.prev_bit:
            self.cnt += 1
        else:
            self.cnt = 1

        self.prev_bit = bit

        if self.cnt == 5:

            if bit == 1:
                self.five_ones += 1
            else:
                self.five_zeros += 1

            self.expect_stuff = True

        # DUT stuff error coverage
        if trx["stuff_error"] == 1:
            self.stuff_error += 1

    def summary(self,Test_name):

        self.log_file.write("\n")
        self.log_file.write("=" * 60 + "\n")
        self.log_file.write("COVERAGE SUMMARY\n")
        self.log_file.write("=" * 60 + "\n")
        self.log_file.write(f"Test Name:      {Test_name}\n")
        self.log_file.write(f"RESET SEEN      : {self.reset_seen}\n")
        self.log_file.write(f"BIT 0           : {self.bit_0}\n")
        self.log_file.write(f"BIT 1           : {self.bit_1}\n")
        self.log_file.write(f"FIVE ONES       : {self.five_ones}\n")
        self.log_file.write(f"FIVE ZEROS      : {self.five_zeros}\n")
        self.log_file.write(f"STUFF DISCARD   : {self.stuff_discard}\n" )
        self.log_file.write(f"STUFF_ERROR     : {self.stuff_error}\n")
        self.log_file.write("=" * 60 + "\n\n")
        self.log_file.flush()