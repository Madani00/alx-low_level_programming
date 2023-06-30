#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
	}
	return (i);
}
