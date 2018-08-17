void main(void) //function loaded first by boot.S

{
    vprint("BOOTING......", '0');
    free_vram();
    nextpage();
    
    vprint("Welcome to V-OS v2.0 Setup\n", 0x04);
    vprint("Please Select Language\n");
    vprint("To see avalible Languages, type in 'help'");

    while(1)
    {
	setup();
    }
}
