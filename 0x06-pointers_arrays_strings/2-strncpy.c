#include "main.h"
#include <string.h>

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	strncpy(dest, src, n);
	return (dest);
}
