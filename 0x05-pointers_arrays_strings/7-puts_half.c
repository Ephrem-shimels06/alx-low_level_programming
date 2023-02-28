#include<stdio.h>
#include<string.h>

/**
 *
 *
 *
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
	}else if (strlen(str) % 2 == 0)
	{
		for (; j < strlen(str) ;j++)
		{
			printf("%c",str[j]);
		}
	}
}
