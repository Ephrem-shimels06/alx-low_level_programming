#include "main.h"

/**
 * rot13 - encodes a sentence
 * @str: given string
 * Return: string
 */

char *rot13(char *str)
{
	int i;
	char storec[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char stores[] = "nopqrstuvwxyzabcdefghijklm";
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPRSTUVWQYZ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; letters[j] != '\0'; j++)
		{
			if ( str[i] == letters[j] && s[i] - 65 > 25)
			{
				s[i] =  stores[s[i] - 97];
			}
			s[i] = storec[s[i] - 65];
		}
	}
	return (s);

}

