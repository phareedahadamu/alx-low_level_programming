#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a list
 * @h: A pointer to the head node
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	printf("%d\n", temp->n);
	count++;
	return (count);
}
