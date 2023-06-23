#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pak;
	const char *ptr = separator;

	va_start(pak, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(pak, int));
		if (separator && i != n - 1)
			printf("%s", ptr);
	}
	printf("\n");
}
