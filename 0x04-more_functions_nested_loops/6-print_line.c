#include "main.h"

/**
 * print_line - A funtion that draws a straight line in the terminal
 *
 * @n: The number of times the character "_" should be printed
 *
 * Return: Void
 */

void print_line(int n)
{
	int l;

	for (l = 1; l <= n; l++)
	{
		_putchar('_');
	}
	_putchar(10);
}
