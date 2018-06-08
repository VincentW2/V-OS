
int lta = 0;
char sta[100] = "";

void login()
{
    char loun = 0xF;
    char command[100];
    char output[100];
   
    command[lta] = logman();
    
    switch(command[lta])
    {
    case 0x01 : vprint("ESC", loun); sta[lta] = 'ESC'; lta++; break;
    case 0x10 : vprint("q", loun); sta[lta] = 'q'; lta++; break;
    case 0x11 : vprint("w", loun); sta[lta] = 'w'; lta++; break;
    case 0x12 : vprint("e", loun); sta[lta] = 'e'; lta++; break;
    case 0x13 : vprint("r", loun); sta[lta] = 'r'; lta++; break;
    case 0x14 : vprint("t", loun); sta[lta] = 't'; lta++; break;
    case 0x15 : vprint("y", loun); sta[lta] = 'y'; lta++; break;
    case 0x16 : vprint("u", loun); sta[lta] = 'u'; lta++; break;
    case 0x17 : vprint("i", loun); sta[lta] = 'i'; lta++; break;
    case 0x18 : vprint("o", loun); sta[lta] = 'o'; lta++; break;
    case 0x19 : vprint("p", loun); sta[lta] = 'p'; lta++; break;
    case 0x1E : vprint("a", loun); sta[lta] = 'a'; lta++; break;
    case 0x1F : vprint("s", loun); sta[lta] = 's'; lta++; break;
    case 0x20 : vprint("d", loun); sta[lta] = 'd'; lta++; break;
    case 0x21 : vprint("f", loun); sta[lta] = 'f'; lta++; break;
    case 0x22 : vprint("g", loun); sta[lta] = 'g'; lta++; break;
    case 0x23 : vprint("h", loun); sta[lta] = 'h'; lta++; break;
    case 0x24 : vprint("j", loun); sta[lta] = 'j'; lta++; break;
    case 0x25 : vprint("k", loun); sta[lta] = 'k'; lta++; break;
    case 0x26 : vprint("l", loun); sta[lta] = 'l'; lta++; break;
    case 0x2C : vprint("z", loun); sta[lta] = 'z'; lta++; break;
    case 0x2D : vprint("x", loun); sta[lta] = 'x'; lta++; break;
    case 0x2E : vprint("c", loun); sta[lta] = 'c'; lta++; break;
    case 0x2F : vprint("v", loun); sta[lta] = 'v'; lta++; break;
    case 0x30 : vprint("b", loun); sta[lta] = 'b'; lta++; break;
    case 0x31 : vprint("n", loun); sta[lta] = 'n'; lta++; break;
    case 0x32 : vprint("m", loun); sta[lta] = 'm'; lta++; break;
    case 0x39 : vprint(" ", loun); sta[lta] = ' '; lta++; break;

    case 0x02 : vprint("1", loun); sta[lta] = '1'; lta++; break;
    case 0x03 : vprint("2", loun); sta[lta] = '2'; lta++; break;
    case 0x04 : vprint("3", loun); sta[lta] = '3'; lta++; break;
    case 0x05 : vprint("4", loun); sta[lta] = '4'; lta++; break;
    case 0x06 : vprint("5", loun); sta[lta] = '5'; lta++; break;
    case 0x07 : vprint("6", loun); sta[lta] = '6'; lta++; break;
    case 0x08 : vprint("7", loun); sta[lta] = '7'; lta++; break;
    case 0x09 : vprint("8", loun); sta[lta] = '8'; lta++; break;
    case 0x0A : vprint("9", loun); sta[lta] = '9'; lta++; break;
    case 0x0B : vprint("0", loun); sta[lta] = '0'; lta++; break;
    case 0x0C : vprint("-", loun); sta[lta] = '-'; lta++; break;
    case 0x0D : vprint("+", loun); sta[lta] = '+'; lta++; break;
    case 0x0E : vprint("Backspace", loun); sta[lta] = "Backspace"; lta++; break;
    case 0x0F : vprint("Tab", loun); sta[lta] = "Tab"; lta++; break;
    case 0x1D : vprint("LCtrl", loun); sta[lta] = "LCtrl"; lta++; break;
    case 0x2A : vprint("LShift", loun); sta[lta] = "LShift"; lta++; break;
    case 0x36 : vprint("RShift", loun); sta[lta] = "RShift"; lta++; break;
    case 0x38 : vprint("LAlt", loun); sta[lta] = "LAlt"; lta++; break;
    case 0x37 : vprint("Keypad *", loun); sta[lta] = "Keypad *"; lta++; break;

    case 0x1A : vprint("[", loun); sta[lta] = '['; lta++; break;
    case 0x1B : vprint("]", loun); sta[lta] = ']'; lta++; break;
    case 0x27 : vprint(";", loun); sta[lta] = ';'; lta++; break;
    case 0x28 : vprint("'", loun); sta[lta] = "'"; lta++; break;
    case 0x29 : vprint("`", loun); sta[lta] = '`'; lta++; break;
    case 0x33 : vprint(",", loun); sta[lta] = ','; lta++; break;
    case 0x34 : vprint(".", loun); sta[lta] = '.'; lta++; break;
    case 0x35 : vprint("/", loun); sta[lta] = '/'; lta++; break;
    
    case 0x1C:

	vprint("\n", 0x07);
	vprint("root>", 0x12);
	int n = 0;

	if (strcmp(sta, "mov eax,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(sta, 3, val);
	    src = tohex(val);
	    __asm__("mov eax, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EAX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (strcmp(sta, "mov ebx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(sta, 3, val);
	    src = tohex(val);
	    __asm__("mov ebx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EBX register\n", 0x05);
	    vprint("root >", 0x09);
	}


	if (strcmp(sta, "mov ecx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(sta, 3, val);
	    src = tohex(val);
	    __asm__("mov ecx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to ECX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (strcmp(sta, "mov edx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(sta, 3, val);
	    src = tohex(val);
	    __asm__("mov edx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EDX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (strcmp(sta, "mov [", 5))
	{
	    char val[100];
	    char val2[100];
	    
	    unsigned int dest;
	    unsigned int src;
	    
	    strqsm(sta, 2, val);
	    dest = tohex(val);

	    strqsm(sta, 3, val2);
	    src = tohex(val2);
	    
	    __asm__("mov [%[dest]], %[src]" : : [dest]"r"(dest), [src]"r"(src));
	}

	if (strcmp(sta, "vram", 4))
	{
	    char val[100];
	    char val2[100];
	    
	    int src;
	    int dest;

	    strqsm(sta, 2, val);
	    dest = tohex(val);

	    strqsm(sta, 3, val2);
	    src = tohex(val2);

	    int vram_address = 0xB8000;
	    vram_address += dest;

	    __asm__("mov [%[vram_address]], %[src]" : : [vram_address]"r"(vram_address), [src]"r"(src));
	}

	if (strcmp(sta, "jmp", 3))
	{
	    char val[100];
	    int src;
	    strqsm(sta, 2, val);
	    src = tohex(val);

	    __asm__("jmp %[src]" : : [src]"r"(src));
      


	    vprint("jumped to ", 0x05);
	    vprint(val, 0x05);
	    vprint("root >", 0x09);
	    
	}

	if (strcmp(sta, "exec", 4))
	  {
	    unsigned int code;
	    unsigned int val;
	    strqsm(sta, 2, val);
	    code = tohex(val);
	    __asm__("push %[code]" : : [code]"r"(code));
	    __asm__("push 0x90909090");
	    __asm__("jmp [esp]");
	  }

	if (strcmp(sta, "lsd", 4))
	{
	    lsd();
	}

	if(strcmp(sta, "clear", 5))
	{
	    free_vram();
	}
	  
	
	if (strcmp(sta, "info"))
	{
	    info();
	}

	if (strcmp(sta, "help"))
	{
		help();
	}
		    
	if (strcmp(sta, "changelog"))
	{
		changelog();
	}

	while (n < 100)
	{
	    sta[n] = 0;
	    n++;
	}

	lta = 0;	
	break;

    }
 
}
