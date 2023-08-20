#include "lists.h"

/**
 * sum_dlistint - This function sums given values from dlistint_t linked list.
 * @head: This is a pointer to the dlistint_t structure
 *
 * Return: the sum of all the data n from the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
