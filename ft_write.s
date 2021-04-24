; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global ft_write

section .text

	ft_write:
		mov rax, 1
		syscall
		cmp rax, rdx
		jne error
		ret
	
	error:
		mov rax, -1
		ret