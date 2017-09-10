	bits 32
	section .text
	global _start

_start:
	
	mov esp, stack_space
	jmp semkath
	align 8

	
	flags equ 0x00
	checksum equ - (0x1BADB002 + flags)
	magicnumber equ 0x1BADB002
	
	dd magicnumber
	dd flags
	dd checksum
	;; لاسحركم اذا غنيت

	
semkath:
	extern kermit
	call kermit
	cli
	hlt
	
	section .bss
	rest 870

	
stack_space:


