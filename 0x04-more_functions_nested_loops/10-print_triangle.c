#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 *
 * @size: The size of the triangle
 *
 * Return; Void
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = size; a >= 1; a--)
		{
			for (b = 1; b <= size; b++)
			{
				if (a > b)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
