#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers
 * @separator: THe separator between the numbers
 * @n: THe number of args to be received
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, int);
		printf("%d", j);

		if (i < (n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
