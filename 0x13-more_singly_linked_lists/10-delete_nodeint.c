#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node
 *                           at the specified index
 * @head: A pointer to the head pointer
 * @index: The specified index
 * Return: 1 on success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp1, *temp2;

	if (head == NULL || *head == NULL)
		return (-1);
	temp1 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp1);
	}
	else
	{
		while (i < index)
		{
			temp2 = temp1;
			temp1 = temp1->next;
			if (temp1 == NULL || temp2 == NULL)
				return (-1);
			i++;
		}
		temp2->next = temp1->next;
		free(temp1);
	}
	return (1);
}
