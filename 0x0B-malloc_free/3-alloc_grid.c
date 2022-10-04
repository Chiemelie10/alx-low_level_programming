#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Afunction that returns a pointer
 * to a 2 dimensionsal array of integers
 *
 * @width: width of the 2 dimensional array
 *
 * @height: height of the 2 dimensional array
 *
 * Return: NULL if on failure or if width or height
 * is negative, otherwise a pointer to the 2 dimensional
 * array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr_array;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	ptr_array = malloc(sizeof(int *) * height);
	if (ptr_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr_array[i] = (int *) malloc(sizeof(int) * width);
		if (ptr_array[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(ptr_array[j]);
			free(ptr_array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr_array[i][j] = 0;
		}
	}
	return (ptr_array);
}

