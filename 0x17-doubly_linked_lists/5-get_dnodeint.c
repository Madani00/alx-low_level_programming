#include "lists.h"

/**
 * get_dnodeint_at_index - get a node of a linked list at index
 * @head: pointer to the beginning of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the indexed node, or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
