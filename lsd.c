void lsd()
{
    
    int video_ram = 0xAA000;
    int fvm = 0xAB111234;
    int n = 1;
    int m = 1;
    int lsd_on = 1;
    char input;
    while (lsd_on){

	*(int*)video_ram++ = fvm+=n;
	
	if (video_ram > 0xBFFFF)
	{
	    video_ram = 0xB8200;
	    n++;
	}
    }
}
