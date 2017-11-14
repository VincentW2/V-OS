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


unsigned char tawshin()
{

    unsigned char yod;
    do {

	yod = in(0x64);

    } while ((yod & 0x01) == 0);


    yod = in(0x60); //on stock l'input via le port 0x60

    return yod;
    //Lit l'input du clavier
}


unsigned char sayen(){

    char het = 0;
    while (1)
    {
	het = in(0x60); //on prend l'input du clavier
	if (het > 0){
	    return het;
	    het = 0;
	    break; //on attend un nouvel input
	}
    }
}
