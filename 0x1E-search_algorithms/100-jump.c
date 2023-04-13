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
	size_t i, index, start, step, prev;

	if (array == NULL)
		return (-1);

	step = (int)sqrt((double)size);
	start = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		start += 1;
		prev = index;
		index = start * step;
		if (index > size - 1)
			break;
	} while ((array[index] < value) && (index < size));

	printf("Value found between indexes [%ld] and [%ld]\n", prev, index);

	for (i = prev; i <= index; i++)
	{
		if (index > size - 1)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
