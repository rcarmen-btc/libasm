; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global ft_strcpy

section .text

	ft_strcpy:
		mov rax, rdi
		jmp while_cond

	while_cond:
		cmp BYTE [rsi], 0
		jne while_body
		movsb
		ret
	
	while_body:
		cld
		movsb
		jmp while_cond
