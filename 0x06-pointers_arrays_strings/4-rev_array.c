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
 * reverse_array - Reverses an array
 *
 * @a: the array to be reversed
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j = 0, tmp;

	for (i = (n - 1); i > j ; i--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j++;
	}
}
