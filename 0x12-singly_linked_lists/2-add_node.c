#include "lists.h"

/**
 * add_node - A function that adds a node at the beginning of the list
 * @head:a pointer to the new node to be added
 * @str: The string which will be duplicated to the list
 * Return: The address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node;

	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
