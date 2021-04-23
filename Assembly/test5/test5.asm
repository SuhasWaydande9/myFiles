section .data
	num db 10
	i db 0
	lo db "loop in asm : \n "
	len equ $ - lo

section .text
	global _start

	_start:
	mov eax, 4
	mov ebx, 1
	mov ecx, lo
	mov edx, len
	int 0x80

	lable:
	mov eax, 4
	mov ebx, 1
	mov ecx, i
	add ecx, 1
	add ecx, '0'
	mov edx, 1
	int 0x80

	mov eax, num
	cmp eax, i
	jne lable
	int 0x80

	mov eax, 1
	mov ebx, 0
	int 0x80
