#include <stdio.h>
#include "main.h"

/**
 * _isupper -checks for uppercase char
 * @c: the char to be checked
 * Return: 1 if found otherwise 0
 */

int _isupper(int c)
{
	int start = 65;
	int end = 90;

	if (c >= start && c <= end)
		return (1);
	else
		return (0);
}
