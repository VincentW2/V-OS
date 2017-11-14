#define SCREEN_LINES 25
#define LINE_SIZE 80

char *video_ram = (char*)0xB8000;

int screen_count = SCREEN_LINES;
int line_count = LINE_SIZE;

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
	    video_ram += line_count*2 +1; //s'il y a retour à la ligne on avance de sorte à compter tous les emplacements qu'on a laissé vides
	    line_count = LINE_SIZE;
	    screen_count--;
	}

	*katba++; //dans tous les cas, on avance dans la chaîne de caractères
	line_count--; //(compteur de lettres par ligne)

	if (screen_count == 0) {
	    //si l'écran est saturé de texte, on l'efface
	    free_vram();
	    
	    video_ram = 0xB8000;
	    
	    screen_count = SCREEN_LINES;

	}

	if (line_count < 0) {
	    line_count = LINE_SIZE;
	}
    }
}

void backline (void)
{

    video_ram += line_count*2+1;
    line_count = LINE_SIZE;
    screen_count--;
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

void nextpage()
{
    int c = 0;
    while (c < SCREEN_LINES)
    {
	ktab("\n", 0);
	c++;
    }
}
