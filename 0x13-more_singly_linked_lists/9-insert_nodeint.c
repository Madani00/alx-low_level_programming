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
	listint_t *ptr = *head, *addnode;
	unsigned int i;

	addnode = malloc(sizeof(listint_t));
	if (addnode == NULL)
	{
		return (NULL);
	}

	addnode->n = n;
	addnode->next = NULL;

	if (idx == 0)
	{
		addnode->next = *head;
		*head = addnode;
		return (addnode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	addnode->next = ptr->next;
	ptr->next = addnode;

	return (addnode);
}
