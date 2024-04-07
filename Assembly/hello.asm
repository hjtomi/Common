section .data
    hello db 'Hello, World!', 0

section .text
    global _start

_start:
    ; Write to stdout using Windows syscalls
    mov eax, 4           ; syscall number for sys_write
    mov ebx, 1           ; file descriptor: STDOUT
    mov ecx, hello       ; pointer to the message
    mov edx, 13          ; message length
    int 0x80             ; make syscall

    ; Exit using Windows syscalls
    mov eax, 1           ; syscall number for sys_exit
    xor ebx, ebx         ; exit code 0
    int 0x80             ; make syscall