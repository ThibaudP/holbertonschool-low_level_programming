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

	while (s[len] != '\0')
		len++;

	return (len);
}


/**
 * alloc_grid - allocates memory for a 2D array 
 *
 * @width: width of the array
 * @height: height of the array
 * 
 * Return: a pointer to the array 
 */

char **alloc_grid(int width, int height)
{
	unsigned int i, j;
	char *res;

	if (width <= 0 || height <= 0)
		return (NULL);


	while (1)
	{
		res = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)));
		if (res == NULL)
			return ("Error!");
		break;
	}

	for (i = 0; s1[i]; i++)
		res[i] = s1[i];

	for (j = 0; s2[j]; j++)
	{
		res[i] = s2[j];
		i++;
	}

	return (res);
}
