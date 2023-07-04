#include "lists.h"

/**
 * free_listint2 -  a function that frees a list.
 * @head: a pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tm;

	if (head == NULL)
		return;

	while ((tm = *head) != NULL)
	{
		(*head) = (*head)->next;
		free(tm);
	}
}
