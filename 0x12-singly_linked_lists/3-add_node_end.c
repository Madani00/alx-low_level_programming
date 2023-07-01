#include "lists.h"
#include <string.h>

/**
* add_node_end - This function adds a node to tail of a linked list
* @head: This is the pointer to a list_t pointer
* @str: The string to add as node
* Return: The pointer to new element of list, NULL in case of failure
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int lent = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[lent])
		lent++;

	new_node->len = lent;
	new_node->str = strdup(str);

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
