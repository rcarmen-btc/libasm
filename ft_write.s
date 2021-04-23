; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global _ft_write

section .text

	_ft_write:
		mov rax, 0x02000001
		syscall
		mov rax, rdx
		ret