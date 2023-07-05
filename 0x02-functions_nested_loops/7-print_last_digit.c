#include "main.h"
/**
 * print_last_digit -prints last digit of a number
 * @n: the number whose last digit will be printed
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	n = -n;

	ld = n % 10;

	if (ld < 0)
		ld = -ld;

	_putchar(ld + '0');
	return (ld);
}
