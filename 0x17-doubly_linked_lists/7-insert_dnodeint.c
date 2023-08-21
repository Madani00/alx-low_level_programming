#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - This function will insert a node in a given index
 * @h: a pointer to dlistint_t structure
 * @idx: refers to the index of the list
 * @n: This represents an integer data of a new node
 *
 * Return: A new node address at the specified index or NULL for failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		idx--;

	}

	if (temp->next == NULL)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node ==	NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
