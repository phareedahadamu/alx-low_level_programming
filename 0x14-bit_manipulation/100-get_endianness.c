#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 * Return: o if big endianness or 1 if small endianness
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
