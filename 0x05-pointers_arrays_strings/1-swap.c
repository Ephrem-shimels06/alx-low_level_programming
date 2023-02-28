#include<stdio.h>
/**
 *swap_int - function that swap the value of two variables
 *
 *@temp: temporary variable that holds the value of a
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a =*b;
	*b = temp;
}
