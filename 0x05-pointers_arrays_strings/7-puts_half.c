#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, c = strlen(str);

	for (i = 0; i < c; i++)
	{
		if (i > 4)
		_putchar(str[i]);
	}
	_putchar('\n');
}
