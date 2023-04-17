#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int min
 * @max: intmax
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		p[i] = min + i;
	return (p);
}

