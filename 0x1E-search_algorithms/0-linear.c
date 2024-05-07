#include "search_algos.h"

/**
 * linear_search - searche for a value in an array using  Linear search algm
 * @array: a pointer to the first element
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index where value is located or -1 if it fails
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	int found = 0;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
			found += 1;
		}
	}
	if (found == 0)
	{
		return (-1);
	}
	return (0);
}
