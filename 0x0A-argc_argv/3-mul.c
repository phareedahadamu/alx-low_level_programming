#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -Prints two number and the result of multiplying them
 * @argc: Argument count
 * @argv: Argument vector
 * print 'Error' if 2 arguments are not received then newline
 * and return 1
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%d\n", mul);
	return (0);
}
