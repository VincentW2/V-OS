	int setupltr = 0;
	char setupstr[100] = "";

void setup(void)
{
    
    char loun = 0xF;
    char command[100];
    char output[100];
   
    command[setupltr] = tawshin();
    
    switch(command[setupltr])
    {
    case 0x01 : vprint("ESC", loun); setupstr[setupltr] = 'ESC'; setupltr++; break;
    case 0x10 : vprint("q", loun); setupstr[setupltr] = 'q'; setupltr++; break;
    case 0x11 : vprint("w", loun); setupstr[setupltr] = 'w'; setupltr++; break;
    case 0x12 : vprint("e", loun); setupstr[setupltr] = 'e'; setupltr++; break;
    case 0x13 : vprint("r", loun); setupstr[setupltr] = 'r'; setupltr++; break;
    case 0x14 : vprint("t", loun); setupstr[setupltr] = 't'; setupltr++; break;
    case 0x15 : vprint("y", loun); setupstr[setupltr] = 'y'; setupltr++; break;
    case 0x16 : vprint("u", loun); setupstr[setupltr] = 'u'; setupltr++; break;
    case 0x17 : vprint("i", loun); setupstr[setupltr] = 'i'; setupltr++; break;
    case 0x18 : vprint("o", loun); setupstr[setupltr] = 'o'; setupltr++; break;
    case 0x19 : vprint("p", loun); setupstr[setupltr] = 'p'; setupltr++; break;
    case 0x1E : vprint("a", loun); setupstr[setupltr] = 'a'; setupltr++; break;
    case 0x1F : vprint("s", loun); setupstr[setupltr] = 's'; setupltr++; break;
    case 0x20 : vprint("d", loun); setupstr[setupltr] = 'd'; setupltr++; break;
    case 0x21 : vprint("f", loun); setupstr[setupltr] = 'f'; setupltr++; break;
    case 0x22 : vprint("g", loun); setupstr[setupltr] = 'g'; setupltr++; break;
    case 0x23 : vprint("h", loun); setupstr[setupltr] = 'h'; setupltr++; break;
    case 0x24 : vprint("j", loun); setupstr[setupltr] = 'j'; setupltr++; break;
    case 0x25 : vprint("k", loun); setupstr[setupltr] = 'k'; setupltr++; break;
    case 0x26 : vprint("l", loun); setupstr[setupltr] = 'l'; setupltr++; break;
    case 0x2C : vprint("z", loun); setupstr[setupltr] = 'z'; setupltr++; break;
    case 0x2D : vprint("x", loun); setupstr[setupltr] = 'x'; setupltr++; break;
    case 0x2E : vprint("c", loun); setupstr[setupltr] = 'c'; setupltr++; break;
    case 0x2F : vprint("v", loun); setupstr[setupltr] = 'v'; setupltr++; break;
    case 0x30 : vprint("b", loun); setupstr[setupltr] = 'b'; setupltr++; break;
    case 0x31 : vprint("n", loun); setupstr[setupltr] = 'n'; setupltr++; break;
    case 0x32 : vprint("m", loun); setupstr[setupltr] = 'm'; setupltr++; break;
    case 0x39 : vprint(" ", loun); setupstr[setupltr] = ' '; setupltr++; break;

    case 0x02 : vprint("1", loun); setupstr[setupltr] = '1'; setupltr++; break;
    case 0x03 : vprint("2", loun); setupstr[setupltr] = '2'; setupltr++; break;
    case 0x04 : vprint("3", loun); setupstr[setupltr] = '3'; setupltr++; break;
    case 0x05 : vprint("4", loun); setupstr[setupltr] = '4'; setupltr++; break;
    case 0x06 : vprint("5", loun); setupstr[setupltr] = '5'; setupltr++; break;
    case 0x07 : vprint("6", loun); setupstr[setupltr] = '6'; setupltr++; break;
    case 0x08 : vprint("7", loun); setupstr[setupltr] = '7'; setupltr++; break;
    case 0x09 : vprint("8", loun); setupstr[setupltr] = '8'; setupltr++; break;
    case 0x0A : vprint("9", loun); setupstr[setupltr] = '9'; setupltr++; break;
    case 0x0B : vprint("0", loun); setupstr[setupltr] = '0'; setupltr++; break;
    case 0x0C : vprint("-", loun); setupstr[setupltr] = '-'; setupltr++; break;
    case 0x0D : vprint("+", loun); setupstr[setupltr] = '+'; setupltr++; break;
    case 0x0E : vprint("Backspace", loun); setupstr[setupltr] = "Backspace"; setupltr++; break;
    case 0x0F : vprint("Tab", loun); setupstr[setupltr] = "Tab"; setupltr++; break;
    case 0x1D : vprint("LCtrl", loun); setupstr[setupltr] = "LCtrl"; setupltr++; break;
    case 0x2A : vprint("LShift", loun); setupstr[setupltr] = "LShift"; setupltr++; break;
    case 0x36 : vprint("RShift", loun); setupstr[setupltr] = "RShift"; setupltr++; break;
    case 0x38 : vprint("LAlt", loun); setupstr[setupltr] = "LAlt"; setupltr++; break;
    case 0x37 : vprint("Keypad *", loun); setupstr[setupltr] = "Keypad *"; setupltr++; break;

    case 0x1A : vprint("[", loun); setupstr[setupltr] = '['; setupltr++; break;
    case 0x1B : vprint("]", loun); setupstr[setupltr] = ']'; setupltr++; break;
    case 0x27 : vprint(";", loun); setupstr[setupltr] = ';'; setupltr++; break;
    case 0x28 : vprint("'", loun); setupstr[setupltr] = "'"; setupltr++; break;
    case 0x29 : vprint("`", loun); setupstr[setupltr] = '`'; setupltr++; break;
    case 0x33 : vprint(",", loun); setupstr[setupltr] = ','; setupltr++; break;
    case 0x34 : vprint(".", loun); setupstr[setupltr] = '.'; setupltr++; break;
    case 0x35 : vprint("/", loun); setupstr[setupltr] = '/'; setupltr++; break;
    
    case 0x1C:

	vprint("\n", 0x07);
	vprint("SETUP>", 0x12);
	int n = 0;

	
	if (strcmp(setupstr, "vram", 4))
	{
	    char val[100];
	    char val2[100];
	    
	    int src;
	    int dest;

	    strqsm(setupstr, 2, val);
	    dest = tohex(val);

	    strqsm(setupstr, 3, val2);
	    src = tohex(val2);

	    int vram_address = 0xB8000;
	    vram_address += dest;

	    __asm__("mov [%[vram_address]], %[src]" : : [vram_address]"r"(vram_address), [src]"r"(src));
	}

	if (strcmp(setupstr, "jmp", 3))
	{
	    char val[100];
	    int src;
	    strqsm(setupstr, 2, val);
	    src = tohex(val);

	    __asm__("jmp %[src]" : : [src]"r"(src));
      


	    vprint("jumped to ", 0x05);
	    vprint(val, 0x05);
	    vprint("root >", 0x09);
	    
	}

	if (strcmp(setupstr, "exec", 4))
	  {
	    unsigned int code;
	    unsigned int val;
	    strqsm(setupstr, 2, val);
	    code = tohex(val);
	    __asm__("push %[code]" : : [code]"r"(code));
	    __asm__("push 0x90909090");
	    __asm__("jmp [esp]");
	  }

	
	if(strcmp(setupstr, "clear", 5))
	{
	    free_vram();
	}
	  
	
	if (strcmp(setupstr, "info"))
	{
	    info();
	}

	if (strcmp(setupstr, "help"))
	{
		langhelp();
	}
		    
	if (strcmp(setupstr, "english"))
	{
		free_vram();
		nextpage();
		vprint("Welcome to V-OS v2.0 English Mode!\n", 0x04);
		vprint("Type 'help' for list of commands");
		while(1)
		{	
		engshell();
		}
	}

	if (strcmp(setupstr, "latin"))
	{
		free_vram();
		nextpage();
		vprint("Gratus est V-OS Latina modus!\n", 0x04);
		vprint("Genus 'auxilium' quia album autem imperium");
		while(1)
		{
		latinshell();
		}
	}	

	while (n < 100)
	{
	    setupstr[n] = 0;
	    n++;
	}

	setupltr = 0;	
	break;

    }
 
}
