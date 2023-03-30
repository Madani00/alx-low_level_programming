#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @n: string
 * Return: pointer to the string
 */

char *rot13(char *n)
{
	int x, y;

	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 49; y++)
		{
			if (n[x] == s1[y])
			{
				n[x] = s2[y];
				break;
			}
		}
	}
	return (n);
}
