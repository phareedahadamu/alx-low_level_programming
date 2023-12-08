#include "lists.h"
/**
 * dlistint_len - A function that counts the nodes of a singly linked list
 * @h: The head pointer to the first node
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
