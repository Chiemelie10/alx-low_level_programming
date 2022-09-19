#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: 1st number (integer)
 * @b: 2nd number (integer)
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
