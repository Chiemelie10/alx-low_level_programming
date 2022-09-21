#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * of integers
 *
 * @a: Pointer variable
 *
 * @n: Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < (n / 2))
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
		i++;
	}
}
