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
	char *py;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	py = malloc(sizeof(char) * len + 1);

	if (py == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		py[i] = str[i];
	}
	return (py);
}
