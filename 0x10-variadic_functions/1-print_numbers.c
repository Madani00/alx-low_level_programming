#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	const char *p = separator;
	unsigned int i;
	va_list madani;

	va_start(madani, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(madani, int);

		printf("%d", x);
		if (separator != NULL && i != n - 1)
		printf("%s", p);
	}
	va_end(madani);
	printf("\n");
}
