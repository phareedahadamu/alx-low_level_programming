#include "main.h"

/**
 * find_sqrt - function that finds the natural
 *                   square root of a number
 * @num: The number to be calculated
 * @root: The square root of num
 * Return: -1 if n does not have a natural square root.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) > num)
		return (-1);
	else if ((root * root) == num)
		return (root);
	else
		return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: The number to be calculated
 * Return: -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 0));
}

