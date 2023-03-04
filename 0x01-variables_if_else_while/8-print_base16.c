#include<stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * Return: always 0
 */

int main(void)
{
char hexa[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hexa[i]);
	}
	putchar('\n');
	return (0);
}

