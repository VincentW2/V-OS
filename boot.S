	section .text
	global _start
	
_start:
	
	extern main
	call main
	xor ecx, ecx
	mov edx, 0xB8000

loop:
	mov dword [edx], ecx
	inc edx
	inc ecx
	jmp loop
	
	;; Multiboot headers :

	align 4
	dd 0x1BADB002
	dd 0
	dd -0x1BADB002
