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
	int len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	py = malloc(sizeof(char) * len + 1);

	if (py == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		py[i] = str[i];
	}
	py[i] = '\0';
	return (py);
}
