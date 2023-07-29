#include "lists.h"

/**
 * add_node_end - A function that adds a new node to the end of the list
 * @head: A pointer to the first node
 * @str: The string to be duplicated to the list
 * Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node, *temp;

	temp = *head;
	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (temp);
}
