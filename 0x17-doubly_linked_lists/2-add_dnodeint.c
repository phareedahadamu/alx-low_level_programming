#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning of
 *               a doubly linked list
 * @head: The head pointer to the first node
 * @n: The integer to be stored in the new node
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
