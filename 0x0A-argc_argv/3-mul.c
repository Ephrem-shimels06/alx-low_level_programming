#include "main.h"
#include <stdio.h>

/**
 * main - prints the multiplication result of two numbers
 * @argc:  number of arguments
 * @argv: array of arguments
 * Return: always 1
 */

int main(int argc, char *argv)
{
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	printf("Error");
	return (1);
}
