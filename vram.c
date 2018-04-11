void free_vram()
{
    int video_ram_tmp = 0xB8000;
    while (video_ram_tmp < 0xBFFFF) {
	*(unsigned char*)video_ram_tmp = 0x00; //inserts 0 in the vram 
	video_ram_tmp++;
    }
}

