void strfus(char *str1, char *str2, char *output)
{
    
    while (*str1 != '\0')
    {
	*output++ = *str1++;
    }

    while (*str2 != '\0')
    {
	*output++ = *str2++;
    }

    *output++ = '\0';
}

int strcmp(char *str1, char *str2, int len)
{
    int nefs = 1;
    int count = 0;

    while (count < len)
    {
	if (str1[count] != str2[count])
	{
	    nefs = 0;
	}

	count++;
    }

    return nefs;
}

void strpart(char *str, int start, int end, char *output)
{
    int s = start-1;
    int count = 0;

    while (s < end)
    {
	output[count] = str[s];
	s++;
	count++;
    }
}

void strqsm(char *str, int word, char *output)
{
    int count = 0;

    int w = word-1;
    int count2 = 0;

    while (count < w)
    {
	*str++;
	if (*str == ' ')
	{
	    count++;
	}
    }

    while (count < w+1)
    {

	*str++;
	output[count2] = *str;

	count2++;
	if (*str == ' ')
	{
	    count++;
	}
    }

    output[count2-1] = '\0';
}

int toint(char str[]) {
    int ch;
    int n;

    ch = 0;
    n = 0;

    while (str[ch] != '\0')
    {
	n = n * 10 + str[ch] - '0';
	ch++;
    }

    return n;
}

int numbers(char str[]) {
    int ch;
    int ch2;
    int n;
    char newstr[100];

    ch = 0;
    ch2 = 0;
    n = 0;

    while (str[ch] != '\0')
    {
	if (str[ch] == '0' || str[ch] == '1' || str[ch] == '2' || str[ch] == '3' || str[ch] == '4' || str[ch] == '5' || str[ch] == '6' ||
	    str[ch] == '7' || str[ch] == '8' || str[ch] == '9')
	{
	    newstr[ch2] = str[ch];
	    ch2++;
	    ch++;
	}
	else{
	    ch++;
	}
	
    }

    return toint(newstr);
}
