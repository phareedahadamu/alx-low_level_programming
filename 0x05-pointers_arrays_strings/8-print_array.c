#include "main.h"
#include <stdio.h>

/**
 * print_array -print n elements of an array then newline
 * @a: pointer
 * @n: integer
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	putchar('\n');
}
