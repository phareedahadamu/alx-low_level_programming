#include <stdio.h>

/**
 * main - A program that prints the name of the file i was compiled from
 * Return: returns 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
