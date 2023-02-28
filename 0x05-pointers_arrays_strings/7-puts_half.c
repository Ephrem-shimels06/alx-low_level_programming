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
	int i = strlen(s) / 2;
	int j = (strlen(s) - 1) / 2 ;
	if (strlen(str) % 2 == 0)
	{
		for (;i < strlen(s) ; i++)
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
