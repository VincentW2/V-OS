void main(void) //fonction chargée en premier par boot.S
{
    free_vram();
    nextpage();
    
    ktab("BOOTED!\n", 0x03);
    ktab("Aferfer OS, v0.2\n\n\n", 0x03);


   

    while(1)
    {
	shell();
    }
}
