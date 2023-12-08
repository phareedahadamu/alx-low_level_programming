#include "lists.h"
/**
 * insert_dnodeint_at_index - A function that inserts a new node at
 *                            the specified index
 * @h: The head pointer to the first node
 * @idx: The position for the new node
 * @n: the integer to be stored in the new node
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || *h == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	tmp = *h;
	while (tmp->next != NULL)
	{
		if (count + 1 == idx)
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			tmp->next->prev = new;
			return (new);
		}
		count++;
		tmp = tmp->next;
	}
	return (new);
}
