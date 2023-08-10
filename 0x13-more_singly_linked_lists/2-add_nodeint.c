#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the start of the list
 * @head: A pointer to the head pointer
 * @n: The integer at athe the new node
 * Return: The address of the new node on success else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
