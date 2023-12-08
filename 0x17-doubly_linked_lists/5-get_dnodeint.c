#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the node
 *                         at the specified index
 * @head: The head pointer to the first node
 * @index: The position to be fetched starting from 0
 * Return: The node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp != NULL)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
