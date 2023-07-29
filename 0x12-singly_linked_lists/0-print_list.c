#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: The pointer to the first node
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return(0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	count++;
	return (count);
}
