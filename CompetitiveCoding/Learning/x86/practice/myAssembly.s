global start

section .data
	message db 0xA,"Welcome to arithmetic instructions", 0xA,0xA
	length equ $-message

section .text
_start
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, length
	syscall

	

	mov rax, 60
	mov rdi, 0
	syscall