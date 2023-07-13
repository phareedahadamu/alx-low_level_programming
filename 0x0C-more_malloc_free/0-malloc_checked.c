#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - A function that allocates memory using malloc
 * @b: The size of the memory to be allocated
 * Return: A pointer to the allocated memory, on failure returns
 *         98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
