#include "main.h"

/**
 * rot13 - encodes a sentence
 * @str: given string
 * Return: string
 */

char *rot13(char *str)
{
	int i;
	int j;
	char storec[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char stores[] = "nopqrstuvwxyzabcdefghijklm";
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPRSTUVWQYZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; letters[j] != '\0'; j++)
		{
			if ( str[i] == letters[j] && str[i] - 65 > 25)
			{
				str[i] =  stores[str[i] - 97];
			}
			/*str[i] = storec[str[i] - 65];*/
		}
	}
	return (str);

}

