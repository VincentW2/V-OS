	bits 32
	section .text
	global _start

_start:
	
	jmp main_load 		; main_load va appeler la fonction principale
	align 32
	
	flags equ 0x00
	checksum equ - (0x1BADB002 + flags)
	magicnumber equ 0x1BADB002

	;; Multiboot headers
	
	dd magicnumber
	dd flags
	dd checksum
	
main_load:

	extern main
	call main
