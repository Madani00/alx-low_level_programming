#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at index 
 * @head: pointer to the head node
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tm = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (tm == NULL)
			return (-1);
		tm = tm->next;
		index--;
	}

	if (tm == *head)
	{
		*head = tm->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tm->prev->next = tm->next;
		if (tm->next != NULL)
			tm->next->prev = tm->prev;
	}
	free(tm);
	return (1);
}
