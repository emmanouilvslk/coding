#!/usr/bin/python3

import sys
from pwn import *

# Ensure there is at least one command line argument provided (the shellcode)
if len(sys.argv) < 2:
    print("Usage: {} <shellcode_in_hex>".format(sys.argv[0]))
    sys.exit(1)

context(os="linux", arch="i386", log_level="error")

# Convert the hex string passed as the first command-line argument back to bytes
shellcode_bytes = bytes.fromhex(sys.argv[1])

# Execute the shellcode
run_shellcode(shellcode_bytes).interactive()
