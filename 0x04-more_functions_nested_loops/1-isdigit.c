#include "main.h"

/**
 * _isdigit - A program that checks for a digit (0 through 9)
 *
 * @c: Integer number to be checked
 *
 * Return: 1 if the c is digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
