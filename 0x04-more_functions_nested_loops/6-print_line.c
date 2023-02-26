#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal.
 *@n: is the number of times the character _ should be printed.
 * Return: Always 0.
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
