void lsd()
{
    int fvm = 0xCB411234;
    int video_ram_tmp = 0xB8000;
    while (video_ram_tmp < 0xBFFFF){


	*(int*)video_ram_tmp = fvm;
	video_ram_tmp++;
	fvm++;

    }
}
