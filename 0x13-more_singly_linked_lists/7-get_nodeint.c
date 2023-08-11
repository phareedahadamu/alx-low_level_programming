#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a list
 * @head: The pointer to the head node
 * @index: The specified index strting from 0
 * Return: The node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
