#include "lists.h"

/**
* *add_nodeint_end - This function adds a node to tail of a linked list
* @head: This is the pointer to a listint_t pointer
* @n: integer
* Return: The pointer to new element of list, NULL in case of failure
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		for (temp = *head; temp->next != NULL; temp = temp->next)
			;
		temp->next = new_node;
	}

	temp = new_node;
	return (new_node);
}
