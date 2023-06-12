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
	int i, len;
	int len1 = 0;
	int len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len  = len1 + len2;
	p = malloc(len + 1);
	if (p == 0)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (i < len1)
			p[i] = s1[i];
	else
		p[i] = s2[i - len1];

	}
	return (p);
}
