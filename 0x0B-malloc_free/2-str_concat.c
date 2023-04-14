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
	int length1, length2, i;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (*(s1 + length1) != '\0')
	{
		length1++;
	}

	length2 = 0;
	while (*(s2 + length2) != '\0')
	{
		length2++;
	}

	p =  malloc(sizeof(char) * (length1 + length2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		p[i] = s1[i];
	for (i = 0; i < length2; i++)
		p[i + length1] = s2[i];

	return (p);
}
