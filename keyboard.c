unsigned char in(unsigned short port)
{
  unsigned char ret;
  asm volatile ( "in %[ret], %[port]" : [ret] "=a"(ret) : [port] "Nd"(port) );
  return ret;
}
void out(unsigned short port, unsigned char val)
{

    asm volatile ( "out %[port], %[val]" : : [val] "a" (val), [port] "Nd" (port) );
}
