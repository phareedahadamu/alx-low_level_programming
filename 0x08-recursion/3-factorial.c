#include "main.h"

/**
 * factorial - Calculates the factorial of a given number
 * @n: The number to be calculated
 * Return: -1 if n is less than 0 to indicate error.
 */

int factorial(int n)
{
	int result = 0;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n < 2)
		return (1);
	result = n * factorial(n - 1);
	return (result);
}
