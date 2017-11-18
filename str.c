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
