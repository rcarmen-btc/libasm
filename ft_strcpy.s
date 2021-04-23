; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global _ft_strcpy

section .text

	_ft_strcpy:
		jmp while_cond
		mov rcx, rdi

	while_cond:
		cmp BYTE [rsi], 0
		jne while_body
		inc rsi
		mov rsi, 0
		mov rax, rcx
		ret
	
	while_body:
		cld
		movsb
		jmp while_cond
