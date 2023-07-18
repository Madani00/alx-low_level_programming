#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	return (strlen(s));
}

/**
* another way to do it
* 
*int _strlen(char *s)
*{
*	int i = 0;
*
*	if (!s)
*		return (0);
*
*	while (*s++)
*		i++;
*	return (i);
*}
*/
