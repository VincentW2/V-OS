void main(void) //function loaded first by boot.S

{
    vprint("BOOTING......", '0');
    free_vram();
    nextpage();
    
    vprint("V-OS, v1.4 BETA\n", 0x04);
    vprint("Do 'help' for list of commands\n");

    while(1)
    {
	shell();
    }
}
