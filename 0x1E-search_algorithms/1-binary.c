#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located. It also returns -1 if the
 * value is not present in the aray or if the array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, start, end, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");

		for (i = start; i < end; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	return (-1);
}
