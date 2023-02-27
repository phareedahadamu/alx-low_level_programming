#include "main.h"

/**
 * _strlen -Prints / returns the length of a string
 * @s: string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
