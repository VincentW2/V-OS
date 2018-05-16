
int ltr = 0;
char str[100] = "";

void shell()
{
    char loun = 0xF;
    char command[100];

    char output[100];
   
    command[ltr] = tawshin();
    
    switch(command[ltr])
    {
    case 0x01 : vprint("ESC", loun); str[ltr] = 'ESC'; ltr++; break;
    case 0x10 : vprint("q", loun); str[ltr] = 'q'; ltr++; break;
    case 0x11 : vprint("w", loun); str[ltr] = 'w'; ltr++; break;
    case 0x12 : vprint("e", loun); str[ltr] = 'e'; ltr++; break;
    case 0x13 : vprint("r", loun); str[ltr] = 'r'; ltr++; break;
    case 0x14 : vprint("t", loun); str[ltr] = 't'; ltr++; break;
    case 0x15 : vprint("y", loun); str[ltr] = 'y'; ltr++; break;
    case 0x16 : vprint("u", loun); str[ltr] = 'u'; ltr++; break;
    case 0x17 : vprint("i", loun); str[ltr] = 'i'; ltr++; break;
    case 0x18 : vprint("o", loun); str[ltr] = 'o'; ltr++; break;
    case 0x19 : vprint("p", loun); str[ltr] = 'p'; ltr++; break;
    case 0x1E : vprint("a", loun); str[ltr] = 'a'; ltr++; break;
    case 0x1F : vprint("s", loun); str[ltr] = 's'; ltr++; break;
    case 0x20 : vprint("d", loun); str[ltr] = 'd'; ltr++; break;
    case 0x21 : vprint("f", loun); str[ltr] = 'f'; ltr++; break;
    case 0x22 : vprint("g", loun); str[ltr] = 'g'; ltr++; break;
    case 0x23 : vprint("h", loun); str[ltr] = 'h'; ltr++; break;
    case 0x24 : vprint("j", loun); str[ltr] = 'j'; ltr++; break;
    case 0x25 : vprint("k", loun); str[ltr] = 'k'; ltr++; break;
    case 0x26 : vprint("l", loun); str[ltr] = 'l'; ltr++; break;
    case 0x2C : vprint("z", loun); str[ltr] = 'z'; ltr++; break;
    case 0x2D : vprint("x", loun); str[ltr] = 'x'; ltr++; break;
    case 0x2E : vprint("c", loun); str[ltr] = 'c'; ltr++; break;
    case 0x2F : vprint("v", loun); str[ltr] = 'v'; ltr++; break;
    case 0x30 : vprint("b", loun); str[ltr] = 'b'; ltr++; break;
    case 0x31 : vprint("n", loun); str[ltr] = 'n'; ltr++; break;
    case 0x32 : vprint("m", loun); str[ltr] = 'm'; ltr++; break;
    case 0x39 : vprint(" ", loun); str[ltr] = ' '; ltr++; break;

    case 0x02 : vprint("1", loun); str[ltr] = '1'; ltr++; break;
    case 0x03 : vprint("2", loun); str[ltr] = '2'; ltr++; break;
    case 0x04 : vprint("3", loun); str[ltr] = '3'; ltr++; break;
    case 0x05 : vprint("4", loun); str[ltr] = '4'; ltr++; break;
    case 0x06 : vprint("5", loun); str[ltr] = '5'; ltr++; break;
    case 0x07 : vprint("6", loun); str[ltr] = '6'; ltr++; break;
    case 0x08 : vprint("7", loun); str[ltr] = '7'; ltr++; break;
    case 0x09 : vprint("8", loun); str[ltr] = '8'; ltr++; break;
    case 0x0A : vprint("9", loun); str[ltr] = '9'; ltr++; break;
    case 0x0B : vprint("0", loun); str[ltr] = '0'; ltr++; break;
    case 0x0C : vprint("-", loun); str[ltr] = '-'; ltr++; break;
    case 0x0D : vprint("+", loun); str[ltr] = '+'; ltr++; break;
    case 0x0E : vprint("Backspace", loun); str[ltr] = "Backspace"; ltr++; break;
    case 0x0F : vprint("Tab", loun); str[ltr] = "Tab"; ltr++; break;
    case 0x1D : vprint("LCtrl", loun); str[ltr] = "LCtrl"; ltr++; break;
    case 0x2A : vprint("LShift", loun); str[ltr] = "LShift"; ltr++; break;
    case 0x36 : vprint("RShift", loun); str[ltr] = "RShift"; ltr++; break;
    case 0x38 : vprint("LAlt", loun); str[ltr] = "LAlt"; ltr++; break;
    case 0x37 : vprint("Keypad *", loun); str[ltr] = "Keypad *"; ltr++; break;

    case 0x1A : vprint("[", loun); str[ltr] = '['; ltr++; break;
    case 0x1B : vprint("]", loun); str[ltr] = ']'; ltr++; break;
    case 0x27 : vprint(";", loun); str[ltr] = ';'; ltr++; break;
    case 0x28 : vprint("'", loun); str[ltr] = "'"; ltr++; break;
    case 0x29 : vprint("`", loun); str[ltr] = '`'; ltr++; break;
    case 0x33 : vprint(",", loun); str[ltr] = ','; ltr++; break;
    case 0x34 : vprint(".", loun); str[ltr] = '.'; ltr++; break;
    case 0x35 : vprint("/", loun); str[ltr] = '/'; ltr++; break;
    
    case 0x1C:

	vprint("\n", 0x07);
	vprint("root >", 0x09);
	int n = 0;

	if (strcmp(str, "mov eax,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(str, 3, val);
	    src = tohex(val);
	    __asm__("mov eax, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EAX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (strcmp(str, "mov ebx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(str, 3, val);
	    src = tohex(val);
	    __asm__("mov ebx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EBX register\n", 0x05);
	    vprint("root >", 0x09);
	}


	if (strcmp(str, "mov ecx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(str, 3, val);
	    src = tohex(val);
	    __asm__("mov ecx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to ECX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (strcmp(str, "mov edx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(str, 3, val);
	    src = tohex(val);
	    __asm__("mov edx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EDX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (strcmp(str, "mov [", 5))
	{
	    char val[100];
	    char val2[100];
	    
	    unsigned int dest;
	    unsigned int src;
	    
	    strqsm(str, 2, val);
	    dest = tohex(val);

	    strqsm(str, 3, val2);
	    src = tohex(val2);
	    
	    __asm__("mov [%[dest]], %[src]" : : [dest]"r"(dest), [src]"r"(src));
	}

	if (strcmp(str, "vram", 4))
	{
	    char val[100];
	    char val2[100];
	    
	    int src;
	    int dest;

	    strqsm(str, 2, val);
	    dest = tohex(val);

	    strqsm(str, 3, val2);
	    src = tohex(val2);

	    int vram_address = 0xB8000;
	    vram_address += dest;

	    __asm__("mov [%[vram_address]], %[src]" : : [vram_address]"r"(vram_address), [src]"r"(src));
	}

	if (strcmp(str, "jmp", 3))
	{
	    char val[100];
	    int src;
	    strqsm(str, 2, val);
	    src = tohex(val);

	    __asm__("jmp %[src]" : : [src]"r"(src));
      


	    vprint("jumped to ", 0x05);
	    vprint(val, 0x05);
	    vprint("root >", 0x09);
	    
	}

	if (strcmp(str, "exec", 4))
	  {
	    unsigned int code;
	    unsigned int val;
	    strqsm(str, 2, val);
	    code = tohex(val);
	    __asm__("push %[code]" : : [code]"r"(code));
	    __asm__("push 0x90909090");
	    __asm__("jmp [esp]");
	  }

	if (strcmp(str, "lsd", 4))
	{
	    lsd();
	}

	if(strcmp(str, "clear", 5))
	{
	    free_vram();
	}
	  
	
	if (strcmp(str, "info"))
	{
	    info();
	}

	if (strcmp(str, "help"))
	{
		help();
	}
		    
	if (strcmp(str, "changelog"))
	{
		changelog();
	}

	while (n < 100)
	{
	    str[n] = 0;
	    n++;
	}

	ltr = 0;	
	break;

    }
 
}
