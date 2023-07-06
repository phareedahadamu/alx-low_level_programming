#include "main.h"

/**
 * check_prime -Checks if a number is a prime number
 * @n: the number to be checked
 * @i: iterator
 * Return: 1 if the number is prime else 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

int check_prime(int n, int i);
/**
 * is_prime_number - prime identifier
 * @n: number
 * Return: 1 if integer otherwise 0.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
