#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return:  converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int len = 0, base_two = 1, i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			total = total + base_two;
		}
	base_two = base_two * 2;
	}
	return (total);
}
