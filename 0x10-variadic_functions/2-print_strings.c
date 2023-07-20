#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings
 * @separator: The set of chars separating the strings
 * @n: The number of args to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			printf("(nil)");
		else
		printf("%s", string);

		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
