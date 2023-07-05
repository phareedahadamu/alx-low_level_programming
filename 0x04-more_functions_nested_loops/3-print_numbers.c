#include <stdio.h>
#include "main.h"

/**
 * print_numbers -print numbers 0-9 then new line
 */

void print_numbers(void)
{
	int a = 0, b = 9;

	while (a <= b)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
