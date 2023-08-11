#include "lists.h"

/**
 * sum_listint - A function that returns the sum of data(n) in a list
 * @head: The pointer to the head node
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
