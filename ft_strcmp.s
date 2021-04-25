; 1st arg -> RDI
; 2nd arg -> RSI
; 3rd arg -> RDX
; 4th arg -> R10
; 5th arg -> R8

global ft_strcmp

section .text

	ft_strcmp:
		xor 	rax, rax
		jmp		loop

	loop:
		mov		al, BYTE [rdi]
		mov		bl, BYTE [rsi]
		cmp		al, 0
		je		exit
		cmp		bl, 0
		je		exit
		cmp 	al, bl
		jne 	exit
		inc 	rdi
		inc 	rsi
		jmp 	loop

	exit:
		movzx	rax, al
		movzx	rbx, bl
		sub		rax, rbx
		ret		
