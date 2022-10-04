#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees a 2 dimensional grid
 * previously created
 *
 * @grid: Pointer to previous function
 *
 * @height: Height of the array in 3-alloc_grid.c file
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
