CC = gcc
CCFLAGS = -c -w --std=gnu89
ASM = nasm
LD = ld
LDARCH = elf_i386
LAZM = functions.o keyboard.o


pyralaph.elf : $(LAZM) kernel.o linker.ld boot.elf
	$(LD) -m $(LDARCH) -T linker.ld kernel.o boot.elf $(LAZM) -o pyralaph.elf #kernel fel bedia
%.o : %.c
	$(CC) $(CCFLAGS) $<
boot.elf : boot.S
	$(ASM) -f elf32 boot.S -o boot.elf
clean:
	rm *.o *.elf
