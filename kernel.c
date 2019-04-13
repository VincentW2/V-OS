void main(void) //function loaded first by boot.S

{
    vprint("BOOTING......", '0');
    free_vram();
    nextpage();
    
    vprint("Welcome to V-OS v2.1 Setup\n", 0x07);
    vprint("Please Select Language\n");
    vprint("To see avalible languages, type in 'help'");

    while(1)
    {
	engshell();
    }
}
