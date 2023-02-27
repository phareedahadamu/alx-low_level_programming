#include "main.h"
#include <std.io>

/**
 * _puts -prints a string followed by a newline
 * @str: the string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
