#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds the integer arguments of a program
 * @argc: number of arguments
 * @argv: array of argments
 * Return: always 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			if (*argv[i] >= 0 || *argv[i] <= 10)
			{
				sum += *argv[i];
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n",atoi(sum));
	}
	else
	{
		printf("0\n");
	}
	return (1);
}
