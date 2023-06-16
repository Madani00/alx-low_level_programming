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
	unsigned int i;
	unsigned int len1 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	p = malloc(len1 + n + 1);
	if (p == 0)
		return (0);

	for (i = 0; i < len1 + n; i++)
	{
		if (i < len1)
			p[i] = s1[i];
	else
		p[i] = s2[i - len1];

	}
	return (p);
}
