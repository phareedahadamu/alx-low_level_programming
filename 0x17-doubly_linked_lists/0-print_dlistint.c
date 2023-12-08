#include "lists.h"

/**
 * print_dlistint - A function that count the elements in a doubly linked list
 * @h: Head pointer to the first node
 * Return: The number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
