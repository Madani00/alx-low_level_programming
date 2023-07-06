#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer 
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *previous;
	unsigned int i = 0;

	if (current == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (i < (index - 1))
	{
		if (current->next == NULL)
		{
			return (-1);
		}

		current = current->next;
		i++;
	}

	previous = current->next;
	current->next = previous->next;
	free(previous);
	return (1);
}
