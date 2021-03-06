; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global ft_write

extern __errno_location

section .text

	ft_write:
		mov rax, 1
		syscall
		cmp rax, 0
		jl err
		ret

	err:
		neg		rax
		mov		rdi, rax
		call	__errno_location  wrt ..plt
		mov		[rax], rdi
		mov		rax, -1
		ret		
