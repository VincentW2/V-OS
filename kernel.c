void main(void) //fonction chargée en premier par boot.S
{
    free_all_vram();
    ktab(" BOOTED!\n", 0x03);
    ktab("Aferfer OS, v0.2\n\n\n", 0x03);
   
    ktab("gerga3 >", 0x09);
    
    int sh = 1;
 

     while(sh == 1){
	 shell(0xF);
     }
    
}



