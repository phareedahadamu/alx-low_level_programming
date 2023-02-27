#include "main.h"

/**
 * rev_string -Reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int count = 0, i = 0;
	char lc;

	while (*s)
	{
		s++;
		count++;
	}

	for (i = 0; i < count; i++)
		s--;

	for (i = 0; i < (count / 2); i++)
	{
		int last = count - 1;

		lc = s[last - i];
		s[last - i] = s[i];
		s[i] = lc;
	}
}
