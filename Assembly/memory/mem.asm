section .data
	data db [fff4]
	len equ $ - data

section .text

	global _start

	_start:

	mov eax, 4
	mov ebx, 1
	mov ecx, data
	mov edx, len
	int 0x80
