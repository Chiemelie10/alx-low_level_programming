#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers 0 to 9
 * but does not print 2 and 4
 * Return: Void
 */

void print_most_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		if (num == '2' || num == '4')
			num++;
		_putchar(num);
		num++;
	}
	_putchar(10);
}
