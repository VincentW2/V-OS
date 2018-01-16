	.intel_syntax noprefix
	
	.section .text
	.global _start
	
_start:
	mov ebp, esp
	push ebp
	
	.extern main
	call main


	.align 4
	.long 0x1BADB002
	.long 0
	.long -0x1BADB002
	.long 0xAFE3FE30
	.long 0xC0000000
	.long 0x41414171
