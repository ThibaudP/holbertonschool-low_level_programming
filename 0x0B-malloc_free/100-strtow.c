#include "holberton.h"

/**
 * word_cnt - Counts the number of words (sep = ' ')
 *
 * @str: a string
 *
 * Return: the number of words
 */

int word_cnt(char *str)
{
	int i = 0, cnt = 0;

	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			while (str[i] && str[i] != ' ')
				i++;
			cnt++;
		}
	}
	return (cnt);
}

/**
 * word_len - returns the length of the word starting at current index
 *
 * @str: a string
 *
 * Return: the length of the word
 */

int word_len(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] && str[i] != ' ')
		i++;

	return (i);
}

/**
 * free_2d- de-allocates a 2D array in case of failure
 *
 * @grid: array to deallocate
 * @height: index of the failure
 */

void free_2d(char **grid, int height)
{
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}

	free(grid);
}

/**
 * strtow - Splits a string into words
 *
 * @str: a string
 *
 * Return: an array of strings
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k, cnt;
	char **res;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	cnt = word_cnt(str);

	if (cnt == 0)
		return (NULL);

	res = malloc(sizeof(char *) * (cnt + 1));
	if (res == NULL)
		return (NULL);

	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			res[j] = malloc(sizeof(char) * (1 + word_len(str + i)));
			if (res[j] == NULL)
			{
				free_2d(res, cnt);
				return (NULL);
			}
			k = 0;
			while (str[i] && str[i] != ' ')
			{
				res[j][k] = str[i];
				k++;
				i++;
			}
			res[j][k] = '\0';
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
