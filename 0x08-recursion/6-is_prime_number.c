#include "main.h"

/**
 * is_prime_number - checks for prime numbers.
 * @n: integer
 * Return: 0 or 1;
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - checks for prime numbers.
 * @n: integer
 * @i: iterator
 * Return: 0 or 1.
 */

int prime(int n, int a)
{
	if (a >= n && n > 1)
	{
		return (1);
	}
	if (n % a ==  0 || n <= 1)
	{
		return (0);
	}
	return (prime(n, a + 1));
}
