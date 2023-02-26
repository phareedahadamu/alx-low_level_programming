#include <stdio.h>
#include "main.h"

/**
 * _isdigit -checks for a digit 0-9
 * @c: the digit being checked for
 * Return: 1 if digit other wise 0
 */

int _isdigit(int c)
{
	int start = 48;
	int end = 57;

	if (c >= start && c <= end)
		return (1);
	else
		return (0);
}
