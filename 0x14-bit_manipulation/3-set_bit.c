#include "main.h"

/**
 * set_bit - A function that sets the bit at a specified index to 1
 * @n: A pinter to the decimal number to be converted to binary
 * @index: The specified index
 * Return: 1 on success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
