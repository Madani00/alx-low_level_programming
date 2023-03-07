#include "main.h"

/**
 * leet - a function that encodes into 1337
 * @n: the input value
 * Return: n value
 */

char *leet(char *n)
{
	int x, y;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "43071";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == s1[y])
			{
				n[x] = s2[y];
			}
		}
	}
	return (n);
}
