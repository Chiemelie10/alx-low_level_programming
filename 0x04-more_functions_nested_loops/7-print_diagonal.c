#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on
 * the terminal
 * @n: The number of times the character "\\" should be printed
 * Return: Void
 */

void print_diagonal(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('\\');
			_putchar(10);
			_putchar(' ');
		}
	}
	else
		_putchar(10);
}
