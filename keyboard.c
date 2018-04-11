unsigned char tawshin()
{

    unsigned char yod;
    do {
	yod = inp(0x64);

    } while ((yod & 0x01) == 0);


    yod = inp(0x60); //store the input via port 0x60

    return yod;
    //Lit l'input du clavier
}


unsigned char sayen(){ //lit également l'input du clavier, mais tout est mis en pause jusqu'à ce que l'on saisisse quelque chose

    char het = 0;
    while (1)
    {
	het = inp(0x60); //on prend l'input du clavier
	if (het > 0){
	    return het;
	    het = 0;
	    break; //on attend un nouvel input
	}
    }
}
