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

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		new->next = NULL;
		new->key = strdup(key);
		new->value = strdup(value);
		ht->array[index] = new;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				break;
			}
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			new->next = ht->array[index];
			new->key = strdup(key);
			new->value = strdup(value);
			ht->array[index] = new;
		}
	}
	return (1);
}
