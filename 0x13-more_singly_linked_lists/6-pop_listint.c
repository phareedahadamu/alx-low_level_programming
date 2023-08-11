#include "lists.h"

/**
 * pop_listint - A function that deletes the head node
 * @head: A pointer to the head node pointer
 * Return: The int value at the deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
