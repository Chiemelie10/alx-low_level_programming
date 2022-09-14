#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: Natural number (integer)
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
		putchar(10);
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
		}
		putchar(10);
	}
	else
		printf("%d\n", n);
}
