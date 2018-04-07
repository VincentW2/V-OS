	.intel_syntax noprefix
		
	.global _start
	.global inp

	.extern main
	

	.section .text

	.align 4
	
	.long 0x1badb002
	.long 0x00000000
	.long -0x1badb002


	mov esp, 0xdeadbeef
	mov ebp, esp

	sub esp, 0x100
	call _start
	
_start:

	
	call main

inp:
	mov edx, dword ptr [(esp+4)]
	in al, dx
	ret
