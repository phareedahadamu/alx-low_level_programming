#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table. You should print the key/value
 *                    in the order that they appear in the array of hash
 *                    table. Order: array, list
 * @ht: Pointer to the table to be printed. if NULL dont print anything.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL)
			{
				tmp = ht->array[i]->next;
				while (tmp != NULL)
				{
					printf(", '%s': '%s'", tmp->key, tmp->value);
					tmp = tmp->next;
				}
			}
			i++;
			break;
		}
		i++;
	}
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				printf(", '%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
