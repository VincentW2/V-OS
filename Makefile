CC = gcc 
CCFLAGS = -c -w -masm=intel
ASM = nasm
LD = ld
LDARCH = elf_i386
LAZM = functions.o shell.o keyboard.o

pyralaph.elf : $(LAZM) kernel.o linker.ld boot.elf
	$(LD) -m $(LDARCH) -T linker.ld kernel.o boot.elf $(LAZM) -o pyralaph.elf
keyboard.o : keyboard.c
	$(CC) -c -w keyboard.c
%.o : %.c
	mv keyboard.c kb.tmp
	$(CC) $(CCFLAGS) $<
	mv kb.tmp keyboard.c

boot.elf : boot.S
	$(ASM) -f elf32 boot.S -o boot.elf
clean:
	rm *.o *.elf
