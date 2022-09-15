#include "main.h"

/**
 * print_numbers - A function that prints numbers from 0 - 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar(10);
}
