section .data
    msg1 db "this", 10
    len1 equ $-msg1

    msg2 db "is", 10
    len2 equ $-msg2

    msg3 db "Ghost", 10
    len3 equ $-msg3
    tempo:
        dq 1
        dq 0

section .text
    global _start

_start:



    mov rax, 1
    mov rdi, 1
    mov rsi, msg1
    mov rdx, len1
    syscall


    mov rax, 35
    mov rdi, tempo
    xor rsi, rsi
    syscall


    mov rax, 1
    mov rdi, 1
    mov rsi, msg2
    mov rdx, len2
    syscall


    mov rdi, 1
    mov rsi, msg3
    mov rdx, len3
    syscall


    mov rax, 35
    mov rdi, tempo
    xor rsi, rsi
    syscall
    


    mov rax, 60
    xor rdi, rdi
    syscall
