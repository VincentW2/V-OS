void main(void) //function loaded first by boot.S

{
    vprint("BOOTING......", '0');
    free_vram();
    nextpage();
    
    vprint("BOOTED!\n", 0x03);
    vprint("V-OS, v1.2 BETA\n", 0x03);
    vprint("Do ""help"" for list of commands\n", 0x03);

    while(1)
    {
	shell();
    }
}
