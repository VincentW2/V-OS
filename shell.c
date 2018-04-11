
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
    case 0x1E : ktab("q", loun); str[ltr] = 'q'; ltr++; break;
    case 0x30 : ktab("b", loun); str[ltr] = 'b'; ltr++; break;
    case 0x2E : ktab("c", loun); str[ltr] = 'c'; ltr++; break;
    case 0x20 : ktab("d", loun); str[ltr] = 'd'; ltr++; break;
    case 0x12 : ktab("e", loun); str[ltr] = 'e'; ltr++; break;
    case 0x21 : ktab("f", loun); str[ltr] = 'f'; ltr++; break;
    case 0x22 : ktab("g", loun); str[ltr] = 'f'; ltr++; break;
    case 0x23 : ktab("h", loun); str[ltr] = 'h'; ltr++; break;
    case 0x17 : ktab("i", loun); str[ltr] = 'i'; ltr++; break;
    case 0x24 : ktab("j", loun); str[ltr] = 'j'; ltr++; break;
    case 0x25 : ktab("k", loun); str[ltr] = 'k'; ltr++; break;
    case 0x26 : ktab("l", loun); str[ltr] = 'l'; ltr++; break;
    case 0x27 : ktab("m", loun); str[ltr] = 'm'; ltr++; break;
    case 0x31 : ktab("n", loun); str[ltr] = 'n'; ltr++; break;
    case 0x18 : ktab("o", loun); str[ltr] = 'o'; ltr++; break;
    case 0x19 : ktab("p", loun); str[ltr] = 'p'; ltr++; break;
    case 0x10 : ktab("a", loun); str[ltr] = 'a'; ltr++; break;
    case 0x13 : ktab("r", loun); str[ltr] = 'r'; ltr++; break;
    case 0x1F : ktab("s", loun); str[ltr] = 's'; ltr++; break;
    case 0x14 : ktab("t", loun); str[ltr] = 't'; ltr++; break;
    case 0x16 : ktab("u", loun); str[ltr] = 'u'; ltr++; break;
    case 0x2F : ktab("v", loun); str[ltr] = 'v'; ltr++; break;
    case 0x11 : ktab("z", loun); str[ltr] = 'z'; ltr++; break;
    case 0x2D : ktab("x", loun); str[ltr] = 'x'; ltr++; break;
    case 0x15 : ktab("y", loun); str[ltr] = 'y'; ltr++; break;
    case 0x2C : ktab("w", loun); str[ltr] = 'w'; ltr++; break;
    case 0x39 : ktab(" ", loun); str[ltr] = ' '; ltr++; break;

    case 0x02 : ktab("1", loun); str[ltr] = '1'; ltr++; break;
    case 0x03 : ktab("2", loun); str[ltr] = '2'; ltr++; break;
    case 0x04 : ktab("3", loun); str[ltr] = '3'; ltr++; break;
    case 0x05 : ktab("4", loun); str[ltr] = '4'; ltr++; break;
    case 0x06 : ktab("5", loun); str[ltr] = '5'; ltr++; break;
    case 0x07 : ktab("6", loun); str[ltr] = '6'; ltr++; break;
    case 0x08 : ktab("7", loun); str[ltr] = '7'; ltr++; break;
    case 0x09 : ktab("8", loun); str[ltr] = '8'; ltr++; break;
    case 0x0A : ktab("9", loun); str[ltr] = '9'; ltr++; break;
    case 0x0B : ktab("0", loun); str[ltr] = '0'; ltr++; break;
    case 0x32 : ktab(",", loun); str[ltr] = ','; ltr++; break;
	
    case 0x3B : ktab("[", loun); str[ltr] = '['; ltr++; break;
    case 0x44 : ktab("]", loun); str[ltr] = ']'; ltr++; break;
	

       
    case 0x1C:

	ktab("\n", 0x07);
	ktab("gerga3 >", 0x09);
	int n = 0;

	if (strcmp(str, "mov eax,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(str, 3, val);
	    src = tohex(val);
	    __asm__("mov eax, %[src]" : : [src]"r"(src));
	    ktab("moved ", 0x05);
	    ktab(val, 0x05);
	    ktab(" to EAX register\n", 0x05);
	    ktab("gerga3 >", 0x09);
	}

	if (strcmp(str, "mov ebx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(str, 3, val);
	    src = tohex(val);
	    __asm__("mov ebx, %[src]" : : [src]"r"(src));
	    ktab("moved ", 0x05);
	    ktab(val, 0x05);
	    ktab(" to EBX register\n", 0x05);
	    ktab("gerga3 >", 0x09);
	}


	if (strcmp(str, "mov ecx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(str, 3, val);
	    src = tohex(val);
	    __asm__("mov ecx, %[src]" : : [src]"r"(src));
	    ktab("moved ", 0x05);
	    ktab(val, 0x05);
	    ktab(" to ECX register\n", 0x05);
	    ktab("gerga3 >", 0x09);
	}

	if (strcmp(str, "mov edx,", 8))
	{
	    char val[100];
	    unsigned int src;
	    strqsm(str, 3, val);
	    src = tohex(val);
	    __asm__("mov edx, %[src]" : : [src]"r"(src));
	    ktab("moved ", 0x05);
	    ktab(val, 0x05);
	    ktab(" to EDX register\n", 0x05);
	    ktab("gerga3 >", 0x09);
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
      


	    ktab("jumped to ", 0x05);
	    ktab(val, 0x05);
	    ktab("gerga3 >", 0x09);
	    
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
	  
	
	if(strcmp(str, "info", 5))
	{
	    ktab("BOOTED!\n");
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
