#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memeory for an
 * array using malloc
 *
 * @nmemb: Number of elements of the array
 *
 * @size: Size in byte(s) of each element
 *
 * Return: A pointer to the allocated memory if success.
 * If malloc fails it returns NULL. it also returns NULL
 * if the number of elements or size is zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr_array;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr_array = (unsigned int *)malloc(sizeof(unsigned int) * nmemb);
	if (ptr_array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr_array[i] = 0;

	return (ptr_array);
}
