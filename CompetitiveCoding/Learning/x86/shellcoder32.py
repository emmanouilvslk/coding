#!/usr/bin/python3

import sys
from pwn import *

# Check if a file name was provided
if len(sys.argv) < 2:
    print("Usage: {} <executable_file>".format(sys.argv[0]))
    sys.exit(1)

context(os="linux", arch="i386", log_level="error")  # Change to 32-bit architecture

file = ELF(sys.argv[1])
shellcode = file.section(".text")
print(shellcode.hex())

# Check for NULL bytes in the shellcode
if 0 in shellcode:
    print(f"{len(shellcode)} bytes - Found NULL byte")
else:
    print(f"{len(shellcode)} bytes - No NULL bytes")
