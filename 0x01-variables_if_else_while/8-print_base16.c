#include <stdio.h>
/**
 * main- prints in base 16
 * Return: 0 (Success)
 */

int main(void)
{
	int x;
	char lo;

	for (x = 0; x < 10;  x++)
		putchar((x % 10) + '0');
	for (lo = 'a'; lo <= 'f'; lo++)
		putchar(lo);
	putchar('\n');
	return (0);
}
