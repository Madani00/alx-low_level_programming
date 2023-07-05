#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a list
 * @head: This is a pointer to listint_t structure.
 *
 * Return: The head node's data from deleted element
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	i = (*head)->n;
	if (*head == NULL)
		return (0);

	temp = *head;
	(*head) = (*head)->next;
	free(temp);
	temp = NULL;

	return (i);
}
