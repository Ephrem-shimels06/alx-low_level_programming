#include "main.h"
#include<stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for(; s1[i] != '\0' || s2[i] != '\0'; i++)
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

