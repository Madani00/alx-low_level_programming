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

/**
*
* another way to do it.
*
* char *_strcat(char *dest, char *src)
* {
*	char *ret = dest;
*
*	while (*dest)
*		dest++;
*	while (*src)
*		*dest++ = *src++;
*	*dest = *src;
*	return (ret);
* }
*
*/
