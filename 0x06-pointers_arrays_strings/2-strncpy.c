#include "main.h"
#include<stdio.h>

/**
 *_strncpy - copy specified number of characters form one string to another
 *@dest: destination string pointer
 *@src: source string pointer
 *@n: interger which tells number of charcters to be copied
 *Return: destination string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;
	
	for(;i < n && k < 98 && src[k] != '\0'; i++)
	{
		dest[i] = src[i];
		k++;
	}
	return (dest);
}

