global _start

section .data:
	name db "Hello World"
	len equ $-name

section .text:


  _start:
	mov eax, 4
	mov ebx, 1
	mov ecx, name
	mov edx, len
	int 0x80
	
	;exit
	mov eax, 1
  mov ebx, 0
  int 0x80
