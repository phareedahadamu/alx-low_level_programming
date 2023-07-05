#include "main.h"

/**
 * swap_int -Swaps he value of two integers
 * @a: int 1
 * @b: int 2
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
