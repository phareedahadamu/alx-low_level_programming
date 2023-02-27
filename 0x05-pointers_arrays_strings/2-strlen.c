#include "main.h"

/**
 * _strlen -Prints / returns the length of a string
 * @s: string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count ++;
	return (count);
}
