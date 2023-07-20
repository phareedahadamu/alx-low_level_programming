#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - A function that prints anything
 * @format: the types of arguments that can be passed
 * c = char
 * i = int
 * f = float
 * s = string
 */

void print_all(const char * const format, ...)
{
	int j = 0, typei;
	float typef;
	char typec;
	char *typestr, *separator = "";
	va_list input;

	va_start(input, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					typec = va_arg(input, int);
					printf("%s%c", separator, typec);
					break;
				case 'i':
					typei = va_arg(input, int);
					printf("%s%d", separator, typei);
					break;
				case 'f':
					typef = va_arg(input, double);
					printf("%s%f", separator, typef);
					break;
				case 's':
					typestr = va_arg(input, char *);
					if (typestr == NULL)
						typestr = "(nil)";
					printf("%s%s", separator, typestr);
					break;
				default:
					j++;
					continue;
			}
			j++;
			separator = ", ";
		}
	}
	printf("\n");
}
