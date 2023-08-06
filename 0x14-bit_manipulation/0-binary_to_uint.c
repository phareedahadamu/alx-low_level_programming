#include "main.h"

/**
 * binary_to_uint - A function that converts a string
 *                  comprising of 0 and 1 from binary to int
 * @b: The string
 * Return: The converted unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, rem, base = 1;
	unsigned long long int result = 0, n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= '0' && b[i] <= '1')
			result = result * 10 + (b[i] - '0');
		else
			return (0);

	}

	while (result != 0)
	{
		rem = result % 10;
		result = result / 10;
		n = n + (rem * base);
		base = base * 2;
	}
	return (n);
}
