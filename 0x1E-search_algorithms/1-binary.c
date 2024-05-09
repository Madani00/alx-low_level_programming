#include "search_algos.h"

/**
 * binary_search - searche for a value in an array using  Linear search algm
 * @array: a pointer to the first element
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index where value is located or -1 if it fails
 */

int binary_search(int *array, size_t size, int value)
{
	size_t index;
	int mid;
	size_t high = size - 1, low = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (index = low; index < high; index++)
		{
			printf("%d, ", array[index]);
		}
		printf("%lu\n", high);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
