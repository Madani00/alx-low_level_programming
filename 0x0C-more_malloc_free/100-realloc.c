#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size of the old allocated space
 * @new_size: size of the new allocated space
 *
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		void *new_ptr = malloc(new_size);

		if (ptr != NULL)
		{
			memcpy(new_ptr, ptr, old_size);
		}
		return (new_ptr);
	}
	else
	{
		if (new_size == old_size)
			return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
