#include "main.h"

/**
 * print_most_numbers -Prints numbers 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int a = 0, b = 9;

	while (a <= b)
	{
		if ((a != 2) && (a != 4))
			_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
