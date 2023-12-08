#include "lists.h"

/**
 * print_dlistint - A function that count the elements in a doubly linked list
 * @h: Head pointer to the first node
 * Return: The number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp->next != NULL)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	printf("%d\n", tmp->n);
	count++;
	return (count);
}
