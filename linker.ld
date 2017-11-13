OUTPUT_FORMAT(elf32-i386)
ENTRY(_start)

SECTIONS
{
   .text : { *(.text) }
   .data : { *(.data) }
   .bss  : { *(.bss)  }
}
