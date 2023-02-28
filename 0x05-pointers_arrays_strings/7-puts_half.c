#include<stdio.h>
#include<string.h>

/**
 *puts_half - prints second half
 *
 *@str:parameter for the string
 *
 * Return:nothing
 */

void puts_half(char *str)
{
        long unsigned i = strlen(str) / 2;
	long unsigned j = (strlen(str) - 1) / 2 ;
	if (strlen(str) % 2 == 0)
	{
		for (;i < strlen(str) ; i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}else if (strlen(str) % 2 == 0)
	{
		for (; j < strlen(str) ; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
}