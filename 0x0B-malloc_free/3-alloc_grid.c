#include "main.h"

/**
 * alloc_grid - create two dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Retrun: pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr[height][width];
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
