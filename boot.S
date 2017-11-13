	section .text
	global _start
	
_start:
	
	extern main
	call main
	
	;; Multiboot headers :

	align 4
	dd 0x1BADB002
	dd 0
	dd -0x1BADB002
