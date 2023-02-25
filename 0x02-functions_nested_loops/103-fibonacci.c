#include <stdio.h>
/**
 * main -Sum up fibonacci numbers
 * Return: 0 Success
 */
int main(void)
{

	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long n3;
	unsigned long sum = 0;

		for (n3 > 0; n3 <= 4000000; n3++)
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;

			sum = sum + n3;

			if ((n3 % 2) == 0)
			{
				printf("%ld", sum);
			}
		putchar('\n');
		}
	return (0);
}
