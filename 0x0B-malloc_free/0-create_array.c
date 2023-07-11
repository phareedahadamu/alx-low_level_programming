#include "main.h"
#include <stdlib.h>

/**
 * *create_array - A function that creates an array of chars
 *                 and initializes it with a specific char
 * @size: Size of the array
 * @c: char variable
 * Return: NULL if size is 0, function should return a pointer
 *         to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(c) * size);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			*(ptr + i) = c;
	}
	return (ptr);
}
