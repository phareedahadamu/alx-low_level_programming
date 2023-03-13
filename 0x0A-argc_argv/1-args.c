#include <stdio.h>
#include "main.h"

/**
 * main -Prints the number of arguments passed
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv)
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
