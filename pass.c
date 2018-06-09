void pass(void) //function loaded first by boot.S

{
    free_vram();
    vprint("____________________________", 0x11);
    vprint("Entered ROOT Account", 0x12);
    vprint("________________________",0x11);

    while(1)
    {
	shell();
    }
}
