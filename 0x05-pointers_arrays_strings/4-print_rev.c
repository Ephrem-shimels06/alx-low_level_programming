#include<stdio.h>
#include<string.h>

/**
 * print_rev - reverses a string
 *
 * @s: parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	for (int i = strlen(s); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
