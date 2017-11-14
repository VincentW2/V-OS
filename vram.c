void free_vram()
{

    int video_ram_tmp = 0xB8000; //adresse de la vram
    while (video_ram_tmp < 0xB8500) {
	*(unsigned char*)video_ram_tmp = 0x00; //insère des 0 dans le début de la VRAM, pour masquer le message du BIOS
	video_ram_tmp++;
    }
}

void free_all_vram()
{
    int video_ram_tmp = 0xB8000;
    while (video_ram_tmp < 0xBFFFF) {
	*(unsigned char*)video_ram_tmp = 0x00;
	video_ram_tmp++;
    }
	//la même que plus haut, mais pour l'intégralité de la vram
}

