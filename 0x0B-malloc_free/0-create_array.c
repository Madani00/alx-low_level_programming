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
	char *ptr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int)size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);

}
