#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searche for a value in an array using Jump search algm
 * @array: a pointer to the first element
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index where value is located or -1 if it fails
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j, step, fr = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = (size_t)sqrt(size);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		fr = i;
		i += step;
	}
	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", fr, fr + step);
	
	j = fr;
	while (j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
