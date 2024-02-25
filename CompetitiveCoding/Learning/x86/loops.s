global _start

section .text
_start:
    mov rax, 2
    mov rcx, 5
myloop:
    imul rax, rax
    loop myloop