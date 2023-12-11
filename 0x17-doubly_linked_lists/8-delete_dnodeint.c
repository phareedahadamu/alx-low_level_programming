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
	dlistint_t *current = NULL, *back = NULL, *front = NULL, *tmp = NULL;
	unsigned int len = 0, count = 0;

	if (!*head)
		return (-1);
	tmp = *head;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	if (index >= len)
		return (-1);
	if (len == 1 && index == 0)
	{
		*head = NULL;
		return (1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	back = current->prev;
	front = current->next;
	back->next = front;
	if (index < len - 1)
		front->prev = back;
	free(current);
	return (1);
}
