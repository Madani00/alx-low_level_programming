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
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < max + 1; i++)
	{
		if (max > min)
			p[i] = i;
	}
	return (p);
}
