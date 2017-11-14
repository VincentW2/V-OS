#define LINE_SIZE 80
#define SCREEN_LINES 25

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

char *video_ram = (char*)0xB8000; 


int hsb_tani = SCREEN_LINES;
int hsb = LINE_SIZE;

void ktab(char *katba, char loun)
{
    
    while (*katba != 0){
	if (*katba != '\n') {
	    *video_ram = *katba; //on met la lettre ascii dans l'emplacement associé
        }

	*video_ram++;
		
     	*video_ram = loun; //on met la valeur de la couleur dans l'emplacement associé

	if (*katba != '\n') {
	    *video_ram++; // on réavance dans la mémoire, l'emplacement alors actuel étant réservé à la couleur
	}
	
	if (*katba == '\n') {
	    video_ram += hsb*2+1; //s'il y a retour à la ligne on avance de sorte à compter tous les emplacements qu'on a laissé vides
	    hsb = LINE_SIZE;
	    hsb_tani--;
	}
	
	*katba++; //dans tous les cas, on avance dans la chaîne de caractères
	hsb--; //(compteur de lettres par ligne)

	if (hsb_tani == 0) {
	    //si l'écran est saturé de texte, on l'efface
	    free_all_vram();

	    video_ram = 0xB8000;

	    hsb_tani = SCREEN_LINES;

	}

	if (hsb < 0) {
	    hsb = LINE_SIZE;
	}
    }
}

void backline (void)
{
    
    video_ram += hsb*2 +1;
    hsb = LINE_SIZE;
    //pour revenir à la ligne manuellement, même code que plus haut
}

void akteb(char *katba, char loun)
{
    

    while (*katba != 0){
	*video_ram = *katba;

        *video_ram++;
	*katba++;

	*video_ram = loun;
	*video_ram++;
		//Même chose que la fonction ktab mais on ne se soucie pas des retours à la ligne

    }
}

unsigned char tawshin()
{
    
    unsigned char yod;
    do {
       
        yod = in(0x64);
	
     } while ((yod & 0x01) == 0);


    yod = in(0x60); //on stock l'input via le port 0x60

    return yod;
  //Lit l'input du clavier
}


unsigned char sayen(){
    
    char het = 0;
    while (1)
    {
	het = in(0x60); //on prend l'input du clavier
        if (het > 0){
	    return het;
	    het = 0;
	    break; //on attend un nouvel input
	}
    }
}


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
