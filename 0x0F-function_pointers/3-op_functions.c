#include "3-calc.h"

/**
 * op_add - A function that adds two integers
 * @a: int 1
 * @b: int 2
 * Return: The result
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - A function that subtracts int b from int a
 * @a: int 1
 * @b: int 2
 * Return: The result
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - A function that multiplies two integers
 * @a: int 1
 * @b: int 2
 * Return: The result
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - A function that divides int a by int b
 * @a: int 1
 * @b: int 2
 * Return: The result
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - A function that gets the remainder from dividing
 *          int a by int b
 * @a: int 1
 * @b: int 2
 * Return: The result
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
