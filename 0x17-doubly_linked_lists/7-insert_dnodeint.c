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
	dlistint_t *new, *tmp, *tmp2;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmp2 = *h;
	while (tmp2 != NULL)
	{
		len++;
		tmp2 = tmp2->next;
	}
	if (idx >= len)
		return (NULL);
	new->n = n;
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));
	tmp = *h;
	while (count < idx - 1 && tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	tmp->next->prev = new;
	return (new);
}
