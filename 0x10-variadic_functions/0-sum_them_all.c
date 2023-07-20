#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: The number of parameters to be passed
 * Return: 0 if n is 0, else sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		j = va_arg(ap, int);
		sum = sum + j;
	}
	va_end(ap);
	return (sum);
}
