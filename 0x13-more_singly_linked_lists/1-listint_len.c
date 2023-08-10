#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in a list
 * @h: Pointer to the head node
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	count++;
	return (count);
}
