#include "main.h"
#include <string.h>

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int i, c = strlen(str);

	for (i = 0; i < c; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
