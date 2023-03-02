#include "main.h"

/**
 *leet - encodes string
 *@str: string given to encoded
 *Return: encoded string
 */

char *leet(char *str)
{
	int i = 0;

	for(; str[i] != '\0';i++)
	{
		if(str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		
	}
	return (str);
}
	
