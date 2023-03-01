#include "main.h"

/**
 * _strcat -The function that appends the src string to the dest string
 * overwriting the terminating null byte at the end of dest
 * and then ands a terminating null byte
 * @dest: string 1
 * @src: string 2
 * Return: returns a pointer to the resilting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
