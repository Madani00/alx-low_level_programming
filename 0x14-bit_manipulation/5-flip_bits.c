#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, ex = n ^ m;

	while (ex > 0)
	{
		count += (ex & 1);
		ex >>= 1;
	}

	return (count);
}
