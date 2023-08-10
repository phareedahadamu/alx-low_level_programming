#include "lists.h"

/**
 * free_listint - A function that frees a list
 * @head: A pointer to the head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
