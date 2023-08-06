#include "main.h"

/**
 * print_binary - A function that converts a decimal number to binary
 * @n: The number to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned long int result;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		result = n >> i;
		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count != 0)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
