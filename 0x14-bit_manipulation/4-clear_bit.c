#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long to change
 * @index: index of the bit you want to set
 *
 * Return: 1 on success, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
