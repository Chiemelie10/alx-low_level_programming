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
	int a, leng, half_leng, b;

	leng = strlen(str);
	half_leng = leng / 2;
	if (leng % 2 != 0)
	{
		for (b = half_leng + 1; b < leng; b++)
			_putchar(str[b]);
	}
	else
	{
		for (a = half_leng; a < leng; a++)
			_putchar(str[a]);
	}
	_putchar(10);
}
