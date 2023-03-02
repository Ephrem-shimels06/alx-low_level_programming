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

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				stores[s[i] - 97] : storec[s[i] - 65];
		}
	}
	return (s);
}

