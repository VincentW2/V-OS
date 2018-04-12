unsigned char tawshin()
{

    unsigned char yod;
    do {
	yod = inp(0x64);

    } while ((yod & 0x01) == 0);


    yod = inp(0x60); //store the input via port 0x60

    return yod;
    //Read the input of the keyboard
}


unsigned char sayen(){ //also reads keyboard input, but everything is paused until something is grasped

    char het = 0;
    while (1)
    {
	het = inp(0x60); //we take the input of the keyboard
	if (het > 0){
	    return het;
	    het = 0;
	    break; //we are waiting for a new input
	}
    }
}
