#include "main.h"

/**
 * print_rev - A functions that prints a string in reverse
 *
 * @s: String
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int leng, g;

	leng = strlen(s);
	for (g = leng - 1; g >= 0; g--)
		_putchar(s[g]);
	_putchar(10);
}
