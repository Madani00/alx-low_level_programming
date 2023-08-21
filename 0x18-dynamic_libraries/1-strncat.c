#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: bytes from src
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	strncat(dest, src, n);
	return (dest);
}
