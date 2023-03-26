#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	unsigned long n, f;

	n = 612852475143;
	for (f = 2; f <= n; f++)
	{
		if (n % f == 0)
		{
			n /= f;
			f--;
		}
	}
	printf("%lu\n", f);
	return (0);
}
