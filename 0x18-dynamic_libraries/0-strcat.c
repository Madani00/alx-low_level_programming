#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	strcat(dest, src);
	return (dest);
}
