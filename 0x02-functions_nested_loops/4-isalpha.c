#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: ASCII character
 * Return: 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar(10);
}
