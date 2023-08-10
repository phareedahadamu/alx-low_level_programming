#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a list
 * @head: A pointer to the head pointer
 * @n: The integer at the new node
 * Return: THe address to the new node on success else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->next = NULL;
	}
	return (new_node);
}
