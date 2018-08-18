CC = gcc
CCFLAGS = -c -w -Iinclude -masm=intel -m32 -fno-stack-protector
ASM = as --32
LDARCH = elf_i386
LAZM = vram.o engshell.o latinshell.o keyboard.o print.o lsd.o str.o hex.o setup.o langhelp.o info.o help.o changelog.o

v-os.iso : v-os.elf
	cp v-os.elf iso/boot/v-os.bin
	grub-mkrescue -o V-OS.iso iso

v-os.elf : $(LAZM) kernel.o linker.ld boot.elf
	ld -m $(LDARCH) -T linker.ld kernel.o boot.elf $(LAZM) -o v-os.elf
%.o : %.c
	$(CC) $(CCFLAGS) $<
boot.elf : boot.S
	$(ASM)  boot.S -o boot.elf
run:
	qemu-system-x86_64 --cdrom V-OS.iso
clean: 
	rm *.o *.elf 
