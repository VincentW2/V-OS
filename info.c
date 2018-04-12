void info()
{
    
    int video_ram = 0xB8000;
    int fvm = 0xAB111234;
    int n = 1;
    int m = 1;
    int info_on = 1;
    char input;
    while (info_on){

	*(int*)video_ram++ = fvm+=n;
	
	if (video_ram > 0xBFFFF)
	{
	    video_ram = 0xB8200;
	    n++;
	}
    }
}
