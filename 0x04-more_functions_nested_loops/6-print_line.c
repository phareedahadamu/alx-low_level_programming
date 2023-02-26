#include "main.h"

/**
 * print_line - draws a straing line in the terminal
 * @n: the number of times _ prints
 */

void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}

}
