#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: A pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
