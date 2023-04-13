#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the first value is located. It also returns
 * -1 if the value is not present in array or if array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	int index, start, step, prev;

	if ((array == NULL) || (size <= 0))
		return (-1);

	step = (int)sqrt((double)size);
	start = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		start += 1;
		prev = index;
		index = start * step;
	} while ((array[index] < value) && (index < (int)size));

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
