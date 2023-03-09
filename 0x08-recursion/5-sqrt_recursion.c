#include "main.h"

/**
 *_sqrt_recursion - finds the natural square root of a number
 *@n: number whose square root is going to find
 *Return: integer
 */
int _sqrt_recursion(int n)
{
        return sqrtt(n,1);
}


int sqrtt(int n, int j)
{
	if (n < 0)
		return (-1);
	if (j * j > n)
	{
		return (-1);
	}
	else if (j * j == n)
	{
		return (j);
	}
	return (sqrtt(n,j + 1));
}
int _sqrt_recursion(int n)
{
        return sqrtt(n,1);
}
