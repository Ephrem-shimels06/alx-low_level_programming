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
	char *s1;
	int i = strlen(s) - 1;
	long unsigned j = 0;

	for(; i >= 0; i--)
	{
		s1[index] = s[i];
		index += 1;
	}

	for(; j < strlen(s1) - 1; j++)
	{
		s[j] = s1[j];
	}
}
