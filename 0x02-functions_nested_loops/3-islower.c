#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Parameter of the funtion
 * Return: Results 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar(10);
}
