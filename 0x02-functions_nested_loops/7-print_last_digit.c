#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: Input (integer)
 * Return: Value of last digit
 */
int print_last_digit(int x)
{
	_putchar('0' + _abs(x % 10));
	return (_abs(x % 10));
}
