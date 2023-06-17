#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int min
 * @max: int max
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = i;
	}
	return (p);
}
