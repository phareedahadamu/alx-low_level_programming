#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a
 *                           specified index starting from 0
 * @head: A pointer to the head pointer
 * @idx: The specified index
 * @n: The data(n) at the new node
 * Return: The address to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	temp = *head;
	if (idx == 0)
		new_node->next = *head;
	else
	{
		while (i < idx)
		{
			if (temp == NULL || temp->next == NULL)
				return (NULL);
			temp = temp->next;
			i++;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
