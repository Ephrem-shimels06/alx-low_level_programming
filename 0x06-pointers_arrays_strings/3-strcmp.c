#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for(; i < len1 && i < len2; i++)
	{
		if (s1[i] >  s2[i])
		{
			return 15;
		
		} else if (s1[i] < s2[i])
		{
			return -15;
		
		} else {
			
			return 0;
		}
	putchar('\n');
