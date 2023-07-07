#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers passed in the argument
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 1 if two arguments are not received
 */

int main(int argc, char *argv[])
{
	int mul;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}

	mul = (atoi(argv[1]) * atoi(argv[2]));

	printf("%d\n", mul);
	return (0);
}
