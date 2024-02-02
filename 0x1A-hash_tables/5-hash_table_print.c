#include "hash_tables.h"

/**
 * hash_table_print - print a hash table.
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	char *flag = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (i < ht->size)
	{
		node = ((ht->array)[i]);
		while (node)
		{
			printf("%s'%s': '%s'", flag, node->key, node->value);
			flag = ", ";
			node = node->next;
		}
		i++;
	}
	puts("}");
}
