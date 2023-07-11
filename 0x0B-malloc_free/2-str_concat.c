#include "main.h"
#include <stdlib.h>

/**
 * _strlen - A function that checks the length of a string
 * @str: The string
 * Return: The length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * *str_concat - A funtion that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: A newly allocated memory space with the concat strings.
 *         returns null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int l1 = _strlen(s1), l2 = _strlen(s2), i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = (char *) malloc(sizeof(char) * (l1 + l2) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
