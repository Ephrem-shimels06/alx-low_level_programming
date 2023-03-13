#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer points to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i;
	int j;

	con = malloc(strlen(s1) + strlen(s2));
	if (s2 == NULL)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			con[i] = s1[i];
		}	
	}
	else if (s1 == NULL)
	{
		for (j = 0; j < strlen(s2); j++)
	{
		con[j] = s2[j];
	}
	}
	else 
	{
		for (i = 0; i < strlen(s1); i++)
		{
			con[i] = s1[i];
		}
		for  (j = 0; j < strlen(s2); j++)
		{
			con[i] = s2[j];
			i++;
		}
	}
	return (con);
}
