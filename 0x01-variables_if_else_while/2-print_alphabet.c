#include <stdio.h>

/**
 * main- print in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}
