#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the hash table to be updated
 * @key: The key which cannot be an empty string
 * @value: The value associated with the key
 * Return: 1 on success else 0
 * In case of collision, add new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL, *tmp = NULL;
	char *value_copy = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || !value)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = value_copy;
				return (1);
			}
			tmp = tmp->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->next = ht->array[index];
	new->key = strdup(key);
	new->value = value_copy;
	ht->array[index] = new;
	return (1);
}
