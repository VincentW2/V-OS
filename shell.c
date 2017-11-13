void shell(char loun)
{
    
    char temp_command; //restera sous sa forme non-ascii
    char command[70];
    int ltr = 0;
    command[ltr] = tawshin();
    temp_command = command[ltr];
    char str[70];
    switch(command[ltr])
    {
    case 0x1E : ktab("Q", loun); str[ltr] = "Q"; ltr++; break;
    case 0x30 : ktab("B", loun); str[ltr] = "B"; ltr++; break;
    case 0x2E : ktab("C", loun); str[ltr] = "C"; ltr++; break;
    case 0x20 : ktab("D", loun); str[ltr] = "D"; ltr++; break;
    case 0x12 : ktab("E", loun); str[ltr] = "E"; ltr++; break;
    case 0x21 : ktab("F", loun); str[ltr] = "F"; ltr++; break;
    case 0x22 : ktab("G", loun); str[ltr] = "G"; ltr++; break;
    case 0x23 : ktab("H", loun); str[ltr] = "H"; ltr++; break;
    case 0x17 : ktab("I", loun); str[ltr] = "I"; ltr++; break;
    case 0x24 : ktab("J", loun); str[ltr] = "J"; ltr++; break;
    case 0x25 : ktab("K", loun); str[ltr] = "K"; ltr++; break;
    case 0x26 : ktab("L", loun); str[ltr] = "L"; ltr++; break;
    case 0x27 : ktab("M", loun); str[ltr] = "M"; ltr++; break;
    case 0x31 : ktab("N", loun); str[ltr] = "N"; ltr++; break;
    case 0x18 : ktab("O", loun); str[ltr] = "O"; ltr++; break;
    case 0x19 : ktab("P", loun); str[ltr] = "P"; ltr++; break;
    case 0x10 : ktab("A", loun); str[ltr] = "A"; ltr++; break;
    case 0x13 : ktab("R", loun); str[ltr] = "R"; ltr++; break;
    case 0x1F : ktab("S", loun); str[ltr] = "S"; ltr++; break;
    case 0x14 : ktab("T", loun); str[ltr] = "T"; ltr++; break;
    case 0x16 : ktab("U", loun); str[ltr] = "U"; ltr++; break;
    case 0x2F : ktab("V", loun); str[ltr] = "V"; ltr++; break;
    case 0x11 : ktab("Z", loun); str[ltr] = "Z"; ltr++; break;
    case 0x2D : ktab("X", loun); str[ltr] = "X"; ltr++; break;
    case 0x15 : ktab("Y", loun); str[ltr] = "Y"; ltr++; break;
    case 0x2C : ktab("W", loun); str[ltr] = "W"; ltr++; break;
    case 0x39 : ktab(" ", loun); str[ltr] = " "; ltr++; break;
    case 0x1C:
    
    
    
//	ktab(str[ltr], 0x07);
	ktab("\n", 0x07);
	ktab("gerga3 >", 0x09);
	
	break;

	
    }
 
}
