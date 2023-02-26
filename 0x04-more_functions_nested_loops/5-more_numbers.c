#include "main.h"

/**
 * more_numbers -Prints 0-14 10 times then newline
 */

void more_numbers(void)
{
	int a = 0, b = 14, i;

	for (i = 1; i <= 10; i++)
	{
		while (a <= b)
		{
			_putchar(a > 9 ? (a / 10) + '0' : a + '0');

			if (a > 9)
				_putchar((a % 10) + '0');
			a++;
		}
		a = 0;
		_putchar('\n');
	}
}
