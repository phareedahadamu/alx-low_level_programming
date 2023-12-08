#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list
 * @head: The head pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
