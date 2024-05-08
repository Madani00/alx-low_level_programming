#include "search_algos.h"

/**
 * interpolation_search - searche for a value in an array using interpolation.
 * @array: a pointer to the first element
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index where value is located or -1 if it fails
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, top = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= top)
	{
		pos = low +
			(((double)(top - low) / (array[top] - array[low]))
			 * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (value == array[pos])
			return (pos);
		if (value < array[pos])
			top = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
