void main(void) //function loaded first by boot.S

{
    vprint("BOOTING......", '0');
    free_vram();
    nextpage();
    
    vprint("Welcome to V-OS v2.0 RC1\n", 0x04);
    vprint("Type in """"help"""" for list of commands");

    while(1)
    {
	shell();
    }
}
