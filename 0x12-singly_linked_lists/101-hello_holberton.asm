section .data
    ; Define the message to be printed
    greeting db "Hello, Holberton", 10, 0  ; '\n' is added to the end of the message

section .text
    global _start

_start:
    ; Call printf to print the greeting message
    mov   eax, 4       ; System call for write
    mov   ebx, 1       ; File descriptor for stdout
    mov   ecx, greeting  ; Address of the greeting message
    mov   edx, 16      ; Number of bytes to write
    int   0x80        ; Call kernel

    ; Exit the program with a status code of 0
    xor   eax, eax
    mov   ebx, eax
    int   0x80
