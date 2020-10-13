#include "holberton.h"

/**
 * free_grid - de-allocates a 2D array in case of failure
 *
 * @grid: array to deallocate
 * @height: index of the failure
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
