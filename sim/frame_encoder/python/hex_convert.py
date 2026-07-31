def write_hex(transaction):
    with open("transaction.hex","w") as f:
        for trx in transaction:
            # Id - 0 to 10
            # RTR - 11
            # IDE - 12
            # DLC - 13 to 16
            # Data - 17 to 80
            packet =(
                (trx["data"] << 17) |
                (trx["dlc"] << 13)  |
                (trx["ide"] << 12)  |
                (trx["rtr"] << 11)  |
                (trx["id"])
            )
            # Bits:  0001 0010 0011 0100 ...
            # Hex:    1    2    3    4
            # so 81/4 = 20.25 
            f.write(f"{packet:021X}\n")