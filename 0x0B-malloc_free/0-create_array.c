#include "main.h"
#include <stdlib.h>

/**
 * create_array - writes the character c to stdout
 * @size: The character to print
 * @c: The character to print
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
