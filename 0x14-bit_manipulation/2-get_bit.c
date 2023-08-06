#include "main.h"

/**
 * get_bit - A function that gets the bit (from a decimal
 *           number converted to binary) at a specified index no.
 * @n: The decimal number to be converted
 * @index: The specified index which starts from 0
 * Return: The bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n > 0 && i <= index)
	{
		if (i == index)
			return (n % 2);
		n = n / 2;
		i++;
	}
	return (-1);
}
