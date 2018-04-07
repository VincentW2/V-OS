unsigned int tohex(char *str)
{
  unsigned int hex;
  while (*str != 0)
    {
      switch(*str)
	{
	default:
	  break;
	case 'A':
	case 'a':
	  hex = hex * 0x10 + 0xa;
	  break;

	case 'B':
	case 'b':
	  hex = hex * 0x10 + 0xb;
	  break;

	case 'C':
        case 'c':
	  hex = hex * 0x10 + 0xc;
          break;

	case 'D':
        case 'd':
	  hex = hex * 0x10 + 0xd;
          break;

	case 'E':
        case 'e':
	  hex = hex * 0x10 + 0xe;
          break;

	case 'F':
        case 'f':
	  hex = hex * 0x10 + 0xf;
          break;

	case '0' : hex = hex * 0x10 + 0x0; break;
        case '1' : hex = hex * 0x10 + 0x1; break;
        case '2' : hex = hex * 0x10 + 0x2; break;
        case '3' : hex = hex * 0x10 + 0x3; break;
        case '4' : hex = hex * 0x10 + 0x4; break;
        case '5' : hex = hex * 0x10 + 0x5; break;
        case '6' : hex = hex * 0x10 + 0x6; break;
        case '7' : hex = hex * 0x10 + 0x7; break;
        case '8' : hex = hex * 0x10 + 0x8; break;
        case '9' : hex = hex * 0x10 + 0x9; break;


	}
      *str++;
    }
  return hex;
}

