#include<stdio.h>
#include<string.h>

/**
 * rev_string - reverses a string
 *
 * @s: parameter for the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int index = 0;
	char s1[strlen(s)];
	int i = strlen(s) - 1;

	for(; i >= 0; i--)
	{
		s1[index] = s[i];
		index += 1;
	}

	int i = 0;

	for(; i < strlen(s1) - 1; i++)
	{
		s[i] = s1[i]
	}
}
