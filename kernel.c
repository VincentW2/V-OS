void main(void) //function loaded first by boot.S

{
    ktab("BOOTING......", '0');
    free_vram();
    nextpage();
    
    ktab("BOOTED!\n", 0x03);
    ktab("V-OS, v0.3 BETA\n\n", 0x03);
    ktab("Changelog\n\n", 0x03);
    ktab("4/11/2018 - Added Info.c\n\n", 0x03);
   

    while(1)
    {
	shell();
    }
}
