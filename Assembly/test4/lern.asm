;nasm 2.13.02
section .text
    global _start

    _start:

    mov edx,7
    mov ecx, name
    mov ebx,1
    mov eax,4
    int 0x80

    mov [name], dword 'Saga'
    mov edx,7
    mov ecx,name
    mov ebx,1
    mov eax,4
    int 0x80
    
    mov eax,1
    int 0x80

section .data
    name db 'Suhas  '
