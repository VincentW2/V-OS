#define FVM 0xAB913300
#define LINE_SIZE 80
#define SCREEN_LINES 25
void free_vram()
{
	int gimel = 0xB8000;
	while (gimel < 0xB8500) {
		*((unsigned char*)gimel) = 0x00;
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
}

volatile char *aleph = (volatile char*)0xB8500;
volatile char *alephim = (volatile char*)0xB8000;

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
			*aleph = *katba;
		}

		*aleph++;
		*aleph = loun;

		if (*katba != '\n') {
			*aleph++;
		}
		if (*katba == '\n') {
			aleph += hsb*2+1;
			hsb = LINE_SIZE;
			hsb_tani--;

		}
		*katba++;
		hsb--;

                if (hsb_tani == 0) {
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
	}
}

unsigned char tawshin()
{
  unsigned char yod;
  do {
    yod = inb(0x64);
  } while ((yod & 0x01) == 0);
  yod = inb(0x60);
  return yod;
}

unsigned char sayen(){
  char het = 0;
  while (1)
    {
      het = inb(0x60);
      if (het > 0){
	return het;
	het = 0;
	break;
      }
    }
}


void lsd()
{
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
