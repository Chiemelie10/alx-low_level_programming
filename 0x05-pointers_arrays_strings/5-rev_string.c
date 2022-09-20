#include "main.h"

/**
 * rev_string - A function that reverses a string
 *
 * @s: String constant
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int a, length;

	length = strlen(s);
	for (a = length - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar(10);
}
