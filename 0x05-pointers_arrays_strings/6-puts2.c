#include "main.h"

/**
 * puts2 - A function that prints every other character of a string.
 * starting with the first character, followed by a new line
 * @str: String constant
 * Return: Void
 */

void puts2(char *str)
{
	int a, leng;

	leng = strlen(str);
	for (a = 0; a < leng; a += 2)
		_putchar(str[a]);
	_putchar(10);
}
