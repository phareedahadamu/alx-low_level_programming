#include "hash_tables.h"

/**
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(sizeof(char) * (strlen(key) + 1));
	new->key = (char *)key;
	new->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		new->next = NULL;
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
