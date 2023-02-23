#include "main.h"
/**
 * _isalpha -Checks for alphabetic character
 * @c: is the character being checked for
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
