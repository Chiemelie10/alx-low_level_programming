#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on
 * the terminal
 * @n: The number of times the character "\\" should be printed
 * Return: Void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (a > b)
				{
					_putchar(' ');
				}
				else if (a == b)
				{
					_putchar('\\');
				}
				else
				{
					continue;
				}
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
