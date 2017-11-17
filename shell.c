int ltr = 0;
char str[100] = "";

int strcmp(char *str1, char *str2, int len)
{
    int nefs = 1;
    int count = 0;

    while (count < len)
    {
        if (str1[count] != str2[count])
	{
	    nefs = 0;
	}

	count++;
    }
   
    return nefs;
}

void shell()
{
    char loun = 0xF;
    char command[100];
   
   
    command[ltr] = tawshin();
    
    switch(command[ltr])
    {
    case 0x1E : ktab("Q", loun); str[ltr] = 'Q'; ltr++; break;
    case 0x30 : ktab("B", loun); str[ltr] = 'B'; ltr++; break;
    case 0x2E : ktab("C", loun); str[ltr] = 'C'; ltr++; break;
    case 0x20 : ktab("D", loun); str[ltr] = 'D'; ltr++; break;
    case 0x12 : ktab("E", loun); str[ltr] = 'E'; ltr++; break;
    case 0x21 : ktab("F", loun); str[ltr] = 'F'; ltr++; break;
    case 0x22 : ktab("G", loun); str[ltr] = 'G'; ltr++; break;
    case 0x23 : ktab("H", loun); str[ltr] = 'H'; ltr++; break;
    case 0x17 : ktab("I", loun); str[ltr] = 'I'; ltr++; break;
    case 0x24 : ktab("J", loun); str[ltr] = 'J'; ltr++; break;
    case 0x25 : ktab("K", loun); str[ltr] = 'K'; ltr++; break;
    case 0x26 : ktab("L", loun); str[ltr] = 'L'; ltr++; break;
    case 0x27 : ktab("M", loun); str[ltr] = 'M'; ltr++; break;
    case 0x31 : ktab("N", loun); str[ltr] = 'N'; ltr++; break;
    case 0x18 : ktab("O", loun); str[ltr] = 'O'; ltr++; break;
    case 0x19 : ktab("P", loun); str[ltr] = 'P'; ltr++; break;
    case 0x10 : ktab("A", loun); str[ltr] = 'A'; ltr++; break;
    case 0x13 : ktab("R", loun); str[ltr] = 'R'; ltr++; break;
    case 0x1F : ktab("S", loun); str[ltr] = 'S'; ltr++; break;
    case 0x14 : ktab("T", loun); str[ltr] = 'T'; ltr++; break;
    case 0x16 : ktab("U", loun); str[ltr] = 'U'; ltr++; break;
    case 0x2F : ktab("V", loun); str[ltr] = 'V'; ltr++; break;
    case 0x11 : ktab("Z", loun); str[ltr] = 'Z'; ltr++; break;
    case 0x2D : ktab("X", loun); str[ltr] = 'X'; ltr++; break;
    case 0x15 : ktab("Y", loun); str[ltr] = 'Y'; ltr++; break;
    case 0x2C : ktab("W", loun); str[ltr] = 'W'; ltr++; break;
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
	
	

	
    case 0x1C:

	ktab("\n", 0x07);
	ktab("gerga3 >", 0x09);
	int n = 0;

	if (strcmp(str, "MOV EAX,", 8))
	{
	    char val[0];
	    val[0] = str[9];
	    __asm__("mov eax, %[val]" : : [val]"r"(val));
	    ktab("\nINSTRUCTION EXECUTED : MOV EAX, ", 0x05);
	    ktab(str[ltr], 0x05);
	    ktab("\n", 0x05);
	}

	if (strcmp(str, "JMP", 3))
	{
	    char val[0];
	    val[0] = str[5];
	    __asm__("jmp %[val]" : : [val]"r"(val));
	    
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
