#include <stdio.h>
/**
 * main - Print fibonacci numbers
 * Return: 0 Success
 */

int main(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long n3;
	int n = 50;
	int i;

	n3 = n1 + n2;
	printf("%ld, ", n1);
	printf("%ld, ", n2);

	n3 = n1 + n2;

	for (i = 3; i <= n; i++)
	{
		printf("%ld", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
		if (i < n)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
