#include "main.h"
/**
 * print_times_table -Print the 0-15 times table
 * @n: number to be printed
 */
void print_times_table(int n)
{
	int mult;
	int prod;

	for (n = 0; n <= 15; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 15; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			if (prod <= 15)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
	_putchar('\n');
	}
}
