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
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
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

int _strlen(char *str);

char *_strdup(char *str)
{
	char *ptr;
	int i, len = _strlen(str) + 1;

	if (str == NULL)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	return (ptr);
}
