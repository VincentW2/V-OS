void Alsd()
{
    int fvm = 0xCB411234;
    int video_ram_tmp = 0xB8000;
    while (video_ram_tmp < 0xBFFFF){


	*(int*)video_ram_tmp = fvm;
	video_ram_tmp++;
	fvm++;
        
    }
}

void lsd()
{
    int video_ram = 0xB8000;
    int fvm = 0xAB111234;
    int n = 1;
    while (1){

	*(int*)video_ram++ = fvm += n;


	*(int*)0xB84FC = 0xDDEEAABB;
	*(int*)0xBCA1E = 0xCAFEB002;
	
	if (video_ram > 0xBFFFF)
	{
	    video_ram = 0xB8200;
	    n++;
	}
    }
}
