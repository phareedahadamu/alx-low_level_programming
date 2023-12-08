#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a
 *                dlistint_t list
 * @head: The head pointer to the first node
 * Return: The total
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		total += tmp->n;
		tmp = tmp->next;
	}
	return (total);
}
