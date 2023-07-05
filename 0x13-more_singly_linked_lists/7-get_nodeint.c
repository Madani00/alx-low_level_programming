#include "lists.h"

/**
 * get_nodeint_at_index - This function gets a node of list at specific index
 * @head: This is a pointer to listint_t structure
 * @index: This is the index of the node
 * Return: Returns a pointer to node at specified index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
