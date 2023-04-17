#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of members
 * @size: size
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *py;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	py = malloc(nmemb * size);

	if (py == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		py[i] = 0;
	}
	return (py);
}
