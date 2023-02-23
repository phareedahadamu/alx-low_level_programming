#include "main.h"
/**
 * print_alphabet_x10 -Print 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char ch;
	int num;

	num = 0;

	while (num < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		num++;
	}
}
