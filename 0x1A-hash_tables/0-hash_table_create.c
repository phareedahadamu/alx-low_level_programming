#include "hash_tables.h"
/**
 * hash_table_create - Creates a new hash table
 * @size: The size of the hash table to be created
 * Return: A pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t) * size);
	if (new_table->array == NULL)
		return (NULL);
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	return (new_table);
}
