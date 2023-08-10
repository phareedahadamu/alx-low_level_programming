#include "lists.h"

/**
 * free_listint2 - A function that frees a list and resets
 *                 the head pointer to NULL
 * @head: A pointer to the head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	temp1 = temp2 = *head;
	*head = NULL;

	while (temp1 != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
}
