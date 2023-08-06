#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you need to
 *             flip to get from one number to another
 * @n: The decimal number to be converted to binary and bits flipped
 * @m:The number you are to be achieved by flipping m (in binary)
 * Return: The number of bits that needs to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int a;

	a = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		current = a >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
