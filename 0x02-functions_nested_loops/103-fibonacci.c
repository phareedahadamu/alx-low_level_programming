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
	int i;

		for (i > 0; i <= 50; i++)
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
			n3++;

			while (n3 < 4000000)
			{
				if ((n3 % 2) == 0)
				{
				sum = sum + n3;
				printf("%ld", sum);
				}
			putchar('\n');
			}
		}
	return (0);
}
