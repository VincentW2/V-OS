CC = gcc
CCFLAGS = -c -w -masm=intel -m32 -fno-stack-protector
ASM = as --32
LDARCH = elf_i386
LAZM = vram.o shell.o keyboard.o print.o lsd.o str.o hex.o

ifri.iso : pyralaph.elf
	cp pyralaph.elf iso/boot/alaph.bin
	grub-mkrescue -o v-os.iso iso

pyralaph.elf : $(LAZM) kernel.o linker.ld boot.elf
	ld -m $(LDARCH) -T linker.ld kernel.o boot.elf $(LAZM) -o pyralaph.elf
%.o : %.c
	$(CC) $(CCFLAGS) $<
boot.elf : boot.S
	$(ASM)  boot.S -o boot.elf
clean: 
	rm *.o *.elf 
