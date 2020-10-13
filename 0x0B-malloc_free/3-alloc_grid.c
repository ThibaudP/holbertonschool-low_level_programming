#include "holberton.h"

/**
 * _strlen  - Returns the length of a string s
 *
 * @s: pointer to a string
 *
 * Return: the length of string s
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - Duplicates a string
 *
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < (len + 1); i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * free_arr - de-allocates a 2D array in case of failure
 *
 * @arr: array to deallocate
 * @i: index of the failure
 */

void free_arr(int **arr, int i)
{
	while (i > 0)
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

	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i] = malloc(sizeof(int) * width);
			if (arr[i] == NULL)
			{
				free_arr(arr, i);
				return (NULL);
			}

			arr[i][j] = 0;
		}
	}

	return (arr);
}
