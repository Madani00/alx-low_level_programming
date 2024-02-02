#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to find the value.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node_1;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node_1 = ht->array[index];
	while (node_1 && strcmp(node_1->key, key) != 0)
		node_1 = node_1->next;

	return ((node_1 == NULL) ? NULL : node_1->value);
}
