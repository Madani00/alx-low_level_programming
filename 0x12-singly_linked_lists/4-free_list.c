#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  a function that frees a list_t list.
 * @head: a pointer
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
// another way to do it
/*
void free_list(list_t *head)
{
        list_t *temp;

        if (head == NULL)
                return;
        temp = head;
        while (temp != NULL)
        {
                temp = temp->next;
                free(head->str);
                free(head);
                head = temp;
        }
}
*/
