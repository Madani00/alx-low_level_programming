#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to a list_t pointer
 * @str: pointer to string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int lent = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[lent])
		lent++;

	new_node->len = lent;
	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
