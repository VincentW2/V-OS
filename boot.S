	bits 32
	section .text
	global _start

_start:
	
	mov esp, stack_space
	jmp semkath 		; (semkath = la fonction qui va appeler la fonction principale)
	align 8

	
	flags equ 0x00
	checksum equ - (0x1BADB002 + flags)
	magicnumber equ 0x1BADB002
	
	dd magicnumber
	dd flags
	dd checksum


	
semkath:
	;; kermit = fonction principale
	extern kermit
	call kermit
	cli
	hlt
	
	section .bss
	rest 870

	
stack_space:

	;; réservé au stack
