#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char ch1, ch2;

	for (ch1 = 1; ch1 <= 10; ch1++)
	{
		for (ch2 = 'a'; ch2 <= 'z'; ch2++)
			_putchar(ch2);
	_putchar(10);
	}
}
