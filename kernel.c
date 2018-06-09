void main(void) //function loaded first by boot.S

{
    vprint("BOOTING......", '0');
    free_vram();
    nextpage();
    
    vprint("____________________________", 0x11);
    vprint("PRESS ENTER FOR LOGIN SCREEN", 0x12);
    vprint("________________________",0x11);

    while(1)
    {
	login();
    }
}
