void main(void) //fonction chargée en premier par boot.S
{
    akteb("\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x99\x52\x53\x89\xe1\xb0\x0b\xcd\x80\n", 0x07);

    ktab("gerga3 >", 0x09);
    
    int sh = 1;

    while(sh){
	shell(0x07);
    }
    
}



