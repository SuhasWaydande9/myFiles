global _start

section .bss
	name resb 5


section .data
	prompt db "Enter Number : "
	promlen equ $ - prompt
	reply db "Your Msg : "
	replen equ $ - reply

section .text
_start:
	mov eax, 4
	mov ebx, 1
	mov ecx, prompt
	mov edx, promlen
	int 0x80

	mov eax, 3
	mov ebx, 0
	mov ecx, name
	mov edx, 5
	int 0x80

	mov eax, 4
	mov ebx, 1
	mov ecx, reply
	mov edx, replen
	int 0x80

	mov eax, 4
	mov ebx, 1
	mov ecx, name
	mov edx, 5
	int 0x80

	mov eax, 1
	mov ebx, 0
	int 0x80