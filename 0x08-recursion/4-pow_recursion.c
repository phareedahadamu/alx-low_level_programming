#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: base number
 * @y: exponent
 * Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result = result * _pow_recursion(x, y - 1);
	return (result);
}
