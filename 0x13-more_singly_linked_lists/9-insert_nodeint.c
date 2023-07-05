#include "lists.h"

/**
 * insert_nodeint_at_index - This function will insert a node in a given index
 * @head: a pointer to listint_t structure
 * @idx: refers to the index of the list
 * @n: This represents an integer data of a new node
 *
 * Return: A new node address at the specified index or NULL for failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	for (i = 0; i < idx && *head != NULL; i++)
	{
		(*head) = (*head)->next;
		(*head)->n = n;
	}
	return (*head);
}
