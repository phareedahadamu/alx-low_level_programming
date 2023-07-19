#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - A function that searches an array for
 *             a particular integer
 * @array: An array of integers
 * @size: The size of the array
 * @cmp: A function pointer
 * Return: Returns the first index where the integer is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
