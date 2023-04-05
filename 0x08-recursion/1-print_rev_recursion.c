#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: string
 * return : 0
 */

void _print_rev_recursion(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
