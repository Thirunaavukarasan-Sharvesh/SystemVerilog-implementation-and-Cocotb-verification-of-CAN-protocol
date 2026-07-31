import logging

def get_tb_logger():
    logger = logging.getLogger("TB")
    if not logger.handlers:
        logger.setLevel(logging.INFO)

        fh = logging.FileHandler("scoreboard.log", mode="w")

        formatter = logging.Formatter("%(asctime)s - %(message)s")

        fh.setFormatter(formatter)
        logger.addHandler(fh)

        logger.propagate = False

    return logger