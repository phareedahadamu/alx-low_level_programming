#include "main.h"
#include <stdlib.h>

/**
 * _strlen - A function that calculates the length of a
 *           string
 * @str: The string
 * Return: the length of the string.
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strdup - A function that returns a pointer to a newly
 *            allocated space in memory, which contains a
 *            copy of a string
 * @str: The string to be copied
 * Return: NULL if str is null, on success returns a pointer
 *         to the duplicated string, returns NULL if memory
 *         is insufficient.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str) + 1;

	ptr = (char *) malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
