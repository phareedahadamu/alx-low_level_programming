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

	tmp2 = *h;
	while (tmp2 != NULL)
	{
		len++;
		tmp2 = tmp2->next;
	}
	if (idx > len || *h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == len)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;
	while (tmp != NULL)
	{
		if (count < idx - 1)
		{
			count++;
			tmp = tmp->next;
		}
		else
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			tmp->next->prev = new;
			return (new);
		}
	}
	return (NULL);
}
