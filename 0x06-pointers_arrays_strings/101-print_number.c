#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer parameter
 * Returns: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

// my way
/*
void print_number(int n)
{
    if (n < 0)
	{
		putchar('-');
		n = n*-1;
	}
    if (n >= 10) {
        print_number(n / 10);
    }
    putchar((n % 10) + '0');
}
*/
