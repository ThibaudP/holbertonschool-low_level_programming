#include "holberton.h"

/**
 * free_grid - de-allocates a 2D array in case of failure
 *
 * @arr: array to deallocate
 * @i: index of the failure
 */

void free_grid(int **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}

	free(arr);
}


/**
 * alloc_grid - Returns pointer to 2D array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free_grid(arr, i);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
