#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: pointer to the memory area to copy @src into
 * @src: source buffer to copy characters from
 * @n: the number of bytes to copy from @src
 * Return: pointer to the destination buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
