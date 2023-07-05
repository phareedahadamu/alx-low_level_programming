#include <stdio.h>
/**
 * main- print in lowercase
 * Return: 0 (success)
 */
int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++)
{
	putchar(lc);
}
putchar('\n');
return (0);
}
