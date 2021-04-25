; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global ft_read

extern __errno_location

section .text

	ft_read:
		mov rax, 0
		syscall
		cmp rax, 0
		jl error
		ret

	error:
		neg		rax
		mov		rdi, rax
		call	__errno_location  wrt ..plt
		mov		[rax], rdi
		mov		rax, -1
		ret
