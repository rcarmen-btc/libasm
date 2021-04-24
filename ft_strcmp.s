; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global ft_strcmp

section .text

	ft_strcmp:
		jmp while_cond

	while_cond:
		mov cl, BYTE [rdi]
		mov dl, BYTE [rsi]
		cmp cl, dl
		je
		sub cl dl
	

