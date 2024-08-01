section .data
msg db 'Hello, Holberton', 0xa
len equ $ - msg

section .text
global _start

_start:
; write the message to stdout
mov rax, 1          ; sys_write
mov rdi, 1          ; file descriptor (stdout)
mov rsi, msg        ; address of the message
mov rdx, len        ; length of the message
syscall

; exit the program
mov rax, 60         ; sys_exit
xor rdi, rdi        ; status 0
syscall
