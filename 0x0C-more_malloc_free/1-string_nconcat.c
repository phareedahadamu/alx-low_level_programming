#include "main.h"
#include <stdlib.h>

/**
 * _strlen- A function that calculates the length of a string
 * @str: The string
 * Return: The length of the string
 */

int _strlen(char *str)
{
	unsigned int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * *string_nconcat - A function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: number of characters in s2 to be added to s1
 * If null is passed, treat as an empty string
 * If n is >= the size of s2 then use the entire string
 * Return: Null if the function fails else return  the
 *         pointer to the new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, l1 = _strlen(s1), l2 = _strlen(s2), len = l1 + l2 + 1;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';

	if (l2 < n)
	{
		ptr = malloc(sizeof(char) * len);
	}
	else
	{
		ptr = malloc(sizeof(char) * (l1 + n + 1));
	}

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];

	if (l2 <= n)
	{
		for (j = 0; j < l2; j++)
			ptr[i + j] = s2[j];
	}

	else
	{
		for (j = 0; j < n; j++)
			ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
