#include "main.h"

/**
 * cap_string - changes every word in a string to capital
 * @str: string
 * Retrun: str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	int indicator = 0;
	char sep[] = ",;.!?()\n\t\"";

	for(; ;str[i] != '\0'; i++)
	{
		if(str[0] > 96 && str[0] < 123)
			indicator = 1;
		for(c = 0; sep[j] != '\0'; j++)
		{
			if(sep[j] == str[i])
				indicator = 1;
		}
		if (indicator)
		{
			if(str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				indicator = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				indicator = 0;
			
			else if (str[i] > 47 && str[i] < 58)
				indicator = 0;
		}
	}
	return (str);
}

