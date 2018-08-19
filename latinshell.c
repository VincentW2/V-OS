	int latinltr = 0;
	char latinstr[100] = "";

void latinshell(void)
{

    char loun = 0xF;
    char command[100];
    char output[100];
   
    command[latinltr] = logman();
    
    switch(command[latinltr])
    {
    case 0x01 : vprint("ESC", loun); latinstr[latinltr] = 'ESC'; latinltr++; break;
    case 0x10 : vprint("q", loun); latinstr[latinltr] = 'q'; latinltr++; break;
    case 0x11 : vprint("w", loun); latinstr[latinltr] = 'w'; latinltr++; break;
    case 0x12 : vprint("e", loun); latinstr[latinltr] = 'e'; latinltr++; break;
    case 0x13 : vprint("r", loun); latinstr[latinltr] = 'r'; latinltr++; break;
    case 0x14 : vprint("t", loun); latinstr[latinltr] = 't'; latinltr++; break;
    case 0x15 : vprint("y", loun); latinstr[latinltr] = 'y'; latinltr++; break;
    case 0x16 : vprint("u", loun); latinstr[latinltr] = 'u'; latinltr++; break;
    case 0x17 : vprint("i", loun); latinstr[latinltr] = 'i'; latinltr++; break;
    case 0x18 : vprint("o", loun); latinstr[latinltr] = 'o'; latinltr++; break;
    case 0x19 : vprint("p", loun); latinstr[latinltr] = 'p'; latinltr++; break;
    case 0x1E : vprint("a", loun); latinstr[latinltr] = 'a'; latinltr++; break;
    case 0x1F : vprint("s", loun); latinstr[latinltr] = 's'; latinltr++; break;
    case 0x20 : vprint("d", loun); latinstr[latinltr] = 'd'; latinltr++; break;
    case 0x21 : vprint("f", loun); latinstr[latinltr] = 'f'; latinltr++; break;
    case 0x22 : vprint("g", loun); latinstr[latinltr] = 'g'; latinltr++; break;
    case 0x23 : vprint("h", loun); latinstr[latinltr] = 'h'; latinltr++; break;
    case 0x24 : vprint("j", loun); latinstr[latinltr] = 'j'; latinltr++; break;
    case 0x25 : vprint("k", loun); latinstr[latinltr] = 'k'; latinltr++; break;
    case 0x26 : vprint("l", loun); latinstr[latinltr] = 'l'; latinltr++; break;
    case 0x2C : vprint("z", loun); latinstr[latinltr] = 'z'; latinltr++; break;
    case 0x2D : vprint("x", loun); latinstr[latinltr] = 'x'; latinltr++; break;
    case 0x2E : vprint("c", loun); latinstr[latinltr] = 'c'; latinltr++; break;
    case 0x2F : vprint("v", loun); latinstr[latinltr] = 'v'; latinltr++; break;
    case 0x30 : vprint("b", loun); latinstr[latinltr] = 'b'; latinltr++; break;
    case 0x31 : vprint("n", loun); latinstr[latinltr] = 'n'; latinltr++; break;
    case 0x32 : vprint("m", loun); latinstr[latinltr] = 'm'; latinltr++; break;
    case 0x39 : vprint(" ", loun); latinstr[latinltr] = ' '; latinltr++; break;

    case 0x02 : vprint("1", loun); latinstr[latinltr] = '1'; latinltr++; break;
    case 0x03 : vprint("2", loun); latinstr[latinltr] = '2'; latinltr++; break;
    case 0x04 : vprint("3", loun); latinstr[latinltr] = '3'; latinltr++; break;
    case 0x05 : vprint("4", loun); latinstr[latinltr] = '4'; latinltr++; break;
    case 0x06 : vprint("5", loun); latinstr[latinltr] = '5'; latinltr++; break;
    case 0x07 : vprint("6", loun); latinstr[latinltr] = '6'; latinltr++; break;
    case 0x08 : vprint("7", loun); latinstr[latinltr] = '7'; latinltr++; break;
    case 0x09 : vprint("8", loun); latinstr[latinltr] = '8'; latinltr++; break;
    case 0x0A : vprint("9", loun); latinstr[latinltr] = '9'; latinltr++; break;
    case 0x0B : vprint("0", loun); latinstr[latinltr] = '0'; latinltr++; break;
    case 0x0C : vprint("-", loun); latinstr[latinltr] = '-'; latinltr++; break;
    case 0x0D : vprint("+", loun); latinstr[latinltr] = '+'; latinltr++; break;
    case 0x0E : vprint("Backspace", loun); latinstr[latinltr] = "Backspace"; latinltr++; break;
    case 0x0F : vprint("Tab", loun); latinstr[latinltr] = "Tab"; latinltr++; break;
    case 0x1D : vprint("LCtrl", loun); latinstr[latinltr] = "LCtrl"; latinltr++; break;
    case 0x2A : vprint("LShift", loun); latinstr[latinltr] = "LShift"; latinltr++; break;
    case 0x36 : vprint("RShift", loun); latinstr[latinltr] = "RShift"; latinltr++; break;
    case 0x38 : vprint("LAlt", loun); latinstr[latinltr] = "LAlt"; latinltr++; break;
    case 0x37 : vprint("Keypad *", loun); latinstr[latinltr] = "Keypad *"; latinltr++; break;

    case 0x1A : vprint("[", loun); latinstr[latinltr] = '['; latinltr++; break;
    case 0x1B : vprint("]", loun); latinstr[latinltr] = ']'; latinltr++; break;
    case 0x27 : vprint(";", loun); latinstr[latinltr] = ';'; latinltr++; break;
    case 0x28 : vprint("'", loun); latinstr[latinltr] = "'"; latinltr++; break;
    case 0x29 : vprint("`", loun); latinstr[latinltr] = '`'; latinltr++; break;
    case 0x33 : vprint(",", loun); latinstr[latinltr] = ','; latinltr++; break;
    case 0x34 : vprint(".", loun); latinstr[latinltr] = '.'; latinltr++; break;
    case 0x35 : vprint("/", loun); latinstr[latinltr] = '/'; latinltr++; break;
    
    case 0x1C:

	vprint("\n", 0x07);
	vprint("Latin~$ ", 0x06);
	int n = 0;
	
	if (latinstrcmp(latinstr, "mov eax,", 8))
	{
	    char val[100];
	    unsigned int src;
	    latinstrqsm(latinstr, 3, val);
	    src = tohex(val);
	    __asm__("mov eax, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EAX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (latinstrcmp(latinstr, "mov ebx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    latinstrqsm(latinstr, 3, val);
	    src = tohex(val);
	    __asm__("mov ebx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EBX register\n", 0x05);
	    vprint("root >", 0x09);
	}


	if (latinstrcmp(latinstr, "mov ecx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    latinstrqsm(latinstr, 3, val);
	    src = tohex(val);
	    __asm__("mov ecx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to ECX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (latinstrcmp(latinstr, "mov edx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    latinstrqsm(latinstr, 3, val);
	    src = tohex(val);
	    __asm__("mov edx, %[src]" : : [src]"r"(src));
	    vprint("moved ", 0x05);
	    vprint(val, 0x05);
	    vprint(" to EDX register\n", 0x05);
	    vprint("root >", 0x09);
	}

	if (latinstrcmp(latinstr, "mov [", 5))
	{
	    char val[100];
	    char val2[100];
	    
	    unsigned int dest;
	    unsigned int src;
	    
	    latinstrqsm(latinstr, 2, val);
	    dest = tohex(val);

	    latinstrqsm(latinstr, 3, val2);
	    src = tohex(val2);
	    
	    __asm__("mov [%[dest]], %[src]" : : [dest]"r"(dest), [src]"r"(src));
	}

	if (latinstrcmp(latinstr, "vram", 4))
	{
	    char val[100];
	    char val2[100];
	    
	    int src;
	    int dest;

	    latinstrqsm(latinstr, 2, val);
	    dest = tohex(val);

	    latinstrqsm(latinstr, 3, val2);
	    src = tohex(val2);

	    int vram_address = 0xB8000;
	    vram_address += dest;

	    __asm__("mov [%[vram_address]], %[src]" : : [vram_address]"r"(vram_address), [src]"r"(src));
	}

	if (latinstrcmp(latinstr, "jmp", 3))
	{
	    char val[100];
	    int src;
	    latinstrqsm(latinstr, 2, val);
	    src = tohex(val);

	    __asm__("jmp %[src]" : : [src]"r"(src));
      


	    vprint("jumped to ", 0x05);
	    vprint(val, 0x05);
	    vprint("root >", 0x09);
	    
	}

	if (strcmp(latinstr, "reboot", 3))
	{
	    char val[100];
	    int src;
	    strqsm(latinstr, 2, val);
	    src = tohex(val);

	    __asm__("jmp %[src]" : : [src]"r"(src));
      


	    vprint("jumped to ", 0x05);
	    vprint(val, 0x05);
	    vprint("root >", 0x09);
	    
	}

	if (latinstrcmp(latinstr, "exec", 4))
	  {
	    unsigned int code;
	    unsigned int val;
	    latinstrqsm(latinstr, 2, val);
	    code = tohex(val);
	    __asm__("push %[code]" : : [code]"r"(code));
	    __asm__("push 0x90909090");
	    __asm__("jmp [esp]");
	  }

	if (latinstrcmp(latinstr, "lsd", 4))
	{
	    lsd();
	}

	if(latinstrcmp(latinstr, "clear", 5))
	{
	    free_vram();
	}
	  
	
	if (latinstrcmp(latinstr, "info"))
	{
	    info();
	}

	if (latinstrcmp(latinstr, "help"))
	{
		help();
	}
		    
	if (latinstrcmp(latinstr, "changelog"))
	{
		changelog();
	}

	while (n < 100)
	{
	    latinstr[n] = 0;
	    n++;
	}

	latinltr = 0;	
	break;

    }
 
}
