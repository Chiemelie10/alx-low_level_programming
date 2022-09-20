#include "main.h"

/**
 * puts_half - A function that prints secon half of a string
 *
 * @str: Pointer variable
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int a, leng, half_leng, b, n;

	leng = strlen(str);
	half_leng = leng / 2;
	for (a = half_leng; a < leng; a++)
	{
		if (leng % 2 != 0)
		{
			n = (leng - 1) / 2;
			for (b = n; b < leng; b++)
				_putchar(str[b]);
		}
		_putchar(str[a]);
	}
	_putchar(10);
}
