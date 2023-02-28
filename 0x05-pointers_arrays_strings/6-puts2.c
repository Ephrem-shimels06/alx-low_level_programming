#include<stdio.h>

/**
 *puts2 - prints other
 *
 *@str: variable as parameter for string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		printf("%c\n", str[i]);
		i += 2;
	}
}
