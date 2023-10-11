#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key to get
 * @size: size of hash table array
 * Return: index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
