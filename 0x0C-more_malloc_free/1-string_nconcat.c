#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, len;
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

	if (n > len2)
	{
		n = len2;
	}

	len = len1 + n;
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
	p[i] = '\0';
	return (p);
}
