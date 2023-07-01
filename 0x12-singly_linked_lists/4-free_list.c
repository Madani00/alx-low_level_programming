#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: a pointer
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
	}
}
