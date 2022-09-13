#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: A number
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
	_putchar(10);
}
