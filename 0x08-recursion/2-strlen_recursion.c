#include "main.h"

/**
 * _strlen_recursion -Calculates the length of a string.
 * @s: The string whose length is to be calculated
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = length + _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
