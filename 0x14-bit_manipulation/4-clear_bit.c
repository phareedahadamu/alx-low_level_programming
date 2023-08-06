#include "main.h"

/**
 * clear_bit - A function that sets the bit at a specified index to 0
 * @n: The decimal number to be converted to binary
 * @index: The specified index
 * Return: 1 on success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
