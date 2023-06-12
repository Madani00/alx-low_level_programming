#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to array or NULL
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * 10);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < 10; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
