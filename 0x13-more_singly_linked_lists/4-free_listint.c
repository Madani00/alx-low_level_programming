#include "lists.h"

/**
 * free_listint -  a function that frees a list.
 * @head: a pointer
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tm;

	while ((tm = head) != NULL)
	{
		head = head->next;
		free(tm);
	}
}
