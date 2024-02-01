#include "hash_tables.h"

/**
 * key_index - Assigns an index in which the key value pair will be stored
 * @key: The key
 * @size: The size of the table
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
