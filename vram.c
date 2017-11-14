void free_vram()
{
    int video_ram_tmp = 0xB8000;
    while (video_ram_tmp < 0xBFFFF) {
	*(unsigned char*)video_ram_tmp = 0x00; //insère des 0 dans la vram
	video_ram_tmp++;
    }
}

