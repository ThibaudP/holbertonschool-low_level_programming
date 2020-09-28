#include <stdio.h>
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
 * print_arry - prints an array
 *
 * @a: an array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		printf((i != (n - 1)) ? ", " : "");
	}
	printf("\n");
}
