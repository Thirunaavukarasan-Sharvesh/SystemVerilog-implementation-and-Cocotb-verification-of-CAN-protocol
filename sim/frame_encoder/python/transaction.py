import vsc
import json
from hex_convert import write_hex

"""
    rand bit [10:0] id;
    rand bit        rtr;
    rand bit        ide;
    rand bit [3:0]  dlc;
    rand bit [63:0] data;

    bit [14:0] crc;
    bit sof;
    bit crc_delim;
    bit [11:0] trailer;
"""
@vsc.randobj
class Transaction:
    def __init__(self):

        self.id = vsc.rand_bit_t(11)
        self.rtr = vsc.rand_bit_t()
        self.ide = vsc.rand_bit_t()
        self.dlc = vsc.rand_bit_t(4)
        self.data = vsc.rand_bit_t(64)
    
    @vsc.constraint
    def protocol_constraints(self):
        self.dlc <= 8
        #with vsc.if_then(self.rtr == 1):
        #    self.dlc == 0
        with vsc.if_then(self.dlc == 0):
            self.data == 0
    
trx = Transaction()
all_transactions = []
for i in range(100):
    trx.randomize()
    trx_dict = {
    "id": int(trx.id),
    "rtr": int(trx.rtr),
    "ide": int(trx.ide),
    "dlc": int(trx.dlc),
    "data": int(trx.data)
    }
    all_transactions.append(trx_dict)
with open("transaction.json", "w") as f:
    json.dump(all_transactions, f, indent=4)
write_hex(all_transactions)