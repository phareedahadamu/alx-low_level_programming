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
	unsigned int count = 0, len = 0;
	dlistint_t *new, *tmp, *current, *back;

	tmp = *h;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	if (idx > len)
		return (NULL);
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	else if (idx == len)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *h;
	while (current != NULL && count < idx)
	{
		count++;
		current = current->next;
	}
	back = current->prev;
	new->prev = back;
	back->next = new;
	new->next = current;
	current->prev = new;
	return (new);
}
