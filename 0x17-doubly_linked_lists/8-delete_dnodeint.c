#include "lists.h"
/**
 * delete_dnodeint_at_index - A function that deletes a note at a
 *                            specified index from a doubly linked list
 * @head: THe head pointer to the first node
 * @index: THe spectified index / position starting from 0
 * Return: 1 if successful else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp2;
	unsigned int len = 0, count = 0;

	if (!*head)
		return (-1);
	tmp2 = *head;
	while (tmp2 != NULL)
	{
		len++;
		tmp2 = tmp2->next;
	}
	if (index >= len)
		return (-1);
	if (len == 1 && index == 0)
	{
		*head = NULL;
		return (1);
	}
	tmp = *head;
	if (index == 0)
	{
		tmp->next->prev = NULL;
		*head = tmp->next;
		return (1);
	}

	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	tmp->prev->next = tmp->next;
	if (index < len - 1)
		tmp->next->prev = tmp->prev;
	return (1);
}
