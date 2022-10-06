#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 *
 * @min: Lowest point of the range
 *
 * @max: Highest point of the range
 *
 * Return: A pointer to the newly created array. NULL if malloc
 * fails. NULL if min > max
 */

int *array_range(int min, int max)
{
	int *ptr_int;
	int i;

	if (min > max)
		return (NULL);

	ptr_int = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (ptr_int == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		ptr_int[i] = min;

	return (ptr_int);
}
