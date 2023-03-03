#include<stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * Return: always 0
 */

int main(void)
{
	char hexa[] = "123456789abcdef";
	int i;

	for (i = 0; hexa[i] != '\0'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

