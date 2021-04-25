; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global ft_strlen

section .text

	ft_strlen:
		xor rax, rax
		jmp while_cond

	while_cond:
		cmp BYTE [rdi + rax], 0
		jne while_body
		ret

	while_body:
		inc rax		
		jmp while_cond
	