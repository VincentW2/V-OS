#define SCREEN_LINES 25
#define LINE_SIZE 80

char *video_ram = (char*)0xB8000;

int screen_count = SCREEN_LINES;
int line_count = LINE_SIZE;

void ktab(char *katba, char loun)
{

    while (*katba != 0){
	if (*katba != '\n') {
	    *video_ram = *katba; //we put the letter ascii in the associated location
	}

	*video_ram++;

	*video_ram = loun; //we put the value of the color in the associated slot

	if (*katba != '\n') {
	    *video_ram++; // we re-advance in the memory, the current location being reserved for the color
	}

	if (*katba == '\n') {
	    video_ram += line_count*2 +1; //if there is a line break, we go ahead to count all the empty slots
	    line_count = LINE_SIZE;
	    screen_count--;
	}

	*katba++; //in any case, we advance in the string of characters
	line_count--; //(letter counter per line)

	if (screen_count == 0) {
	    //if the screen is saturated with text, we erase it
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
    //to return to the line manually, same code as above
}

void akteb(char *katba, char loun)
{


    while (*katba != 0){
	*video_ram = *katba;

	*video_ram++;
	*katba++;

	*video_ram = loun;
	*video_ram++;
	//Same as ktab but we do not care about line breaks

    }
}

void nextpage()
{
    int l = 0;
    while (l < SCREEN_LINES)
    {
	ktab("\n", 0);
	l++;
    }
}
