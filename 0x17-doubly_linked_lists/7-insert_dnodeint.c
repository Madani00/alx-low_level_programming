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
	dlistint_t *new_node, *temp = *h, *temp2;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || *h == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = NULL;

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	temp2 = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = temp2;
	temp2->prev = new_node;
	return (*h);
}
