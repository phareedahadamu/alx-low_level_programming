#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_digit - Checks if characters in a string is a digit
 * Return: 0 if not a digit else 1
 * @str: The string
 */

int check_digit(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (!isdigit(str[a]))
			return (0);
		a++;
	}
	return (1);
}

/**
 * main - A program that adds positive numbers
 * Return: 0 if no number is passed, 1 if one of the number contains
 *         symbols that are not digits.
 * @argc: Argument count
 * @argv: Argument vector
 */

int main(int argc, char *argv[])
{
	int check_digit(char *str);
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!check_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
