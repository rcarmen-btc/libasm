; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global ft_strdup

extern __errno_location
extern malloc
extern free
extern ft_strlen
extern ft_strcpy

section .text
	ft_strdup:
		call	ft_strlen  wrt ..plt
		inc		rax
		push	rdi
		mov		rdi, rax
		call	malloc  wrt ..plt
		cmp		rax, 0
		je		err
		mov		rdi, rax
		pop		rsi
		call	ft_strcpy  wrt ..plt
		ret

	err:
		mov		rdi, rax
		call	__errno_location  wrt ..plt 
		mov		rax, rdi
		mov		rax, -1
		ret
