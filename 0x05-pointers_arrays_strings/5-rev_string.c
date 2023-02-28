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
	int size = strlen(s);
	char s1[size];
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
