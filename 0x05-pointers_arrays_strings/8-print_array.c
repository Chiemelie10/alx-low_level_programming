#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers
 *
 * @n: Number of elements of the array to be printed
 *
 * @a: String
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
