#define FVM 0xAB913300
#define LINE_SIZE 80
#define SCREEN_LINES 25
void free_vram()
{
	int gimel = 0xB8000; //adresse de la vram
	while (gimel < 0xB8500) {
		*((unsigned char*)gimel) = 0x00; //insère des 0 dans le début de la VRAM, pour masquer le message du BIOS
		gimel++;
	}
}

void free_all_vram()
{
	int gimel = 0xB8000;
	while (gimel < 0xBFFFF) {
		*((unsigned char*)gimel) = 0x00;
		gimel++;
	}
	//la même que plus haut, mais pour l'intégralité de la vram
}

volatile char *aleph = (volatile char*)0xB8500;  //plusieurs octets après l'emplacement de la VRAM, pour laisser la place au msg du BIOS
volatile char *alephim = (volatile char*)0xB8000; //à partir de l'emplacement de la VRAM

int hsb_tani = SCREEN_LINES -8;
int hsb = LINE_SIZE;
int hsbari = 0;
void ktab(char *katba, char loun)
{
	extern volatile char *aleph;
	extern int hsb;
	extern int hsb_tani;
	while (*katba != 0){
		if (*katba != '\n') {
			*aleph = *katba; //on met la lettre ascii dans l'emplacement associé
		}

		*aleph++;
		*aleph = loun; //on met la valeur de la couleur dans l'emplacement adéquat
		if (*katba != '\n') {
			*aleph++; //et on avance dans la mémoire
		}
		if (*katba == '\n') {
			aleph += hsb*2+1; //s'il y a retour à la ligne on avance de sorte compter tous les emplacements qu'on a laissé vides
			hsb = LINE_SIZE;
			hsb_tani--;

		}
		*katba++; //dans tous les cas, on avance dans la chaîne de caractères
		hsb--;

                if (hsb_tani == 0) {
			//si l'écran est saturé de texte, on l'efface
                        aleph = 0xB8000;
                        free_all_vram();
			hsbari++;

			if (hsbari == 0){
			  hsb_tani = SCREEN_LINES -8;
			}
			if (hsbari > 0){
			  hsb_tani = SCREEN_LINES -4;
			}
                }

		if (hsb < 0) {
			hsb = LINE_SIZE;
		}
	}
}

void backline (void)
{
	extern int hsb;
	extern volatile char *aleph;

	aleph += hsb*2 +1;
	hsb = LINE_SIZE;
	//pour revenir à la ligne manuellement, même code que plus haut
}

void akteb(char *katba, char loun)
{
	extern volatile char *alephim;
	while (*katba != 0){
		*alephim = *katba;

		*alephim++;
	  *katba++;

		*alephim = loun;
	  *alephim++;
		//Même chose que la fonction ktab mais on ne se soucie pas des retours à la ligne
	}
}

unsigned char tawshin()
{
  unsigned char yod;
  do {
    yod = inb(0x64);
  } while ((yod & 0x01) == 0);
  yod = inb(0x60); //on stock l'input via le port 0x60
  return yod;
  //Lit l'input du clavier
}


unsigned char sayen(){
  char het = 0;
  while (1)
    {
      het = inb(0x60); //on prend l'input du clavier
      if (het > 0){
	return het;
	het = 0;
	break; //on attend un nouvel input
      }
    }
}


void lsd()
{
	//Ne sert à rien, juste pour mettre plein de lettres et de couleurs bizarres sur l'écran khkhkhkhkh
	int fvm = FVM;
	int gimel = 0xB8000;
	while (gimel < 0xB8800){
		*((int*)gimel) = fvm;
		gimel++;
		fvm++;
		if (gimel > 0xB8771) { 
			fvm = fvm + 0xcd;

		}
		if (gimel > 0xB8901) {
		  fvm = 0xaabbccdd;
		}
	}
}
