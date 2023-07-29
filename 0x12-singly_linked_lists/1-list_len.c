#include "lists.h"

/**
 * list_len - A function that returns the number of items in a linked list
 * @h: A pointer to the first node
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
