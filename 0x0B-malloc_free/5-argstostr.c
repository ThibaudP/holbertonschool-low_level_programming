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
 * argstostr - Concatenates args in a string separated by newlines
 *
 * @ac: argument count
 * @av: argument values
 *
 * Return: a pointer to the result string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}

	len += ac + 1;

	res = malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			res[k++] = av[i][j];
		}
		res[k++] = '\n';
	}

	res[k] = '\0';

	return (res);
}
