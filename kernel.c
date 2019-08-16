void main(void) //function loaded first by boot.S

{
    vprint("BOOTING......", '0');
    free_vram();
    nextpage();
    
    vprint("Welcome to V-OS v3 \n", 0x07);
    vprint("To see avalible commands, type in 'help'");

    while(1)
    {
	engshell();
    }
}
