unsigned char inb(unsigned short port)
{
  unsigned char ret;
  asm volatile ( "inb %1, %0" : "=a"(ret) : "Nd"(port) );
  return ret;
}
void outb(unsigned short port, unsigned char val)
{
  asm volatile ( "outb %0, %1" : : "a"(val), "Nd"(port) );
}


void Koph()
{
  char yod;
  yod = tawshin();
  switch(yod)
  {
  case 0x1E : ktab("Q", '0'); break;
  case 0x30 : ktab("B", '0'); break;
  case 0x2E : ktab("C", '0'); break;
  case 0x20 : ktab("D", '0'); break;
  case 0x12 : ktab("E", '0'); break;
  case 0x21 : ktab("F", '0'); break;
  case 0x22 : ktab("G", '0'); break;
  case 0x23 : ktab("H", '0'); break;
  case 0x17 : ktab("I", '0'); break;
  case 0x24 : ktab("J", '0'); break;
  case 0x25 : ktab("K", '0'); break;
  case 0x26 : ktab("L", '0'); break;
  case 0x32 : ktab("M", '0'); break;
  case 0x31 : ktab("N", '0'); break;
  case 0x18 : ktab("O", '0'); break;
  case 0x19 : ktab("P", '0'); break;
  case 0x10 : ktab("A", '0'); break;
  case 0x13 : ktab("R", '0'); break;
  case 0x1F : ktab("S", '0'); break;
  case 0x14 : ktab("T", '0'); break;
  case 0x16 : ktab("U", '0'); break;
  case 0x2F : ktab("V", '0'); break;
  case 0x11 : ktab("Z", '0'); break;
  case 0x2D : ktab("X", '0'); break;
  case 0x15 : ktab("Y", '0'); break;
  case 0x2C : ktab("W", '0'); break;
  case 0x39 : ktab(" ", '0'); break;
			  
  }
}
