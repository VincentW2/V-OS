void main(void) //function loaded first by boot.S

{
    ktab("BOOTING......", '0');
    free_vram();
    nextpage();
    
    ktab("BOOTED!\n", 0x03);
    ktab("V-OS, v1.0 BETA\n", 0x03);
    ktab("Do ""info"" for information on the Operating System!\n\n", 0x03);

    while(1)
    {
	shell();
    }
}
