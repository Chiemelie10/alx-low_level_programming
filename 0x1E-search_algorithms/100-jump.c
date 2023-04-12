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
	size_t i, start, end;

	if ((array == NULL) || (size <= 0))
		return (-1);

	end = sqrt(size);
	start = 0;

	while ((array[end] < value) && (start < size))
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end = end + sqrt(size);
		if (end > size - 1)
			break;
	}

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i <= end; i++)
	{
		if (end > size - 1)
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
