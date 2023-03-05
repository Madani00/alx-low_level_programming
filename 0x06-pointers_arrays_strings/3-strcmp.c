#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int result = strcmp(s1, s2);

	if (result < 0)
	{
		return (*s1 - *s2);
	}
	else if (result > 0)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (*s1 - *s2);
	}
	return (result);
}
