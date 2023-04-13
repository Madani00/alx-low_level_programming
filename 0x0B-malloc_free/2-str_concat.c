#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/

char *str_concat(char *s1, char *s2)
{
	char *py;
	int len = strlen(s1);
	int lent = strlen(s2);

	py = malloc(sizeof(char) * len + lent);

	if (py == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	strcat(py, s1);
	strcat(py, s2);

	return (py);
}
