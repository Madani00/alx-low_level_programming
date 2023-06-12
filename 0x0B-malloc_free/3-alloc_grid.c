#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (0);

	p = malloc(sizeof(int *) * height);

	if (p == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			if (p[i] == NULL)
			{
				free(p);
				free(p[i]);
			}
			p[i][j] = 0;
		}
		printf("\n");
	}
	return (p);
}
