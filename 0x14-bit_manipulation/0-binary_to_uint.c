#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int i, rem, base = 1;
	unsigned int result = 0, n = 0;
	
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
