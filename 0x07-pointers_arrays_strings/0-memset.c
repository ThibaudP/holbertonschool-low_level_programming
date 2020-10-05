#include "holberton.h"

/**
 * _memset - fills n bytes after *s with char b
 *
 * @s: pointer to buffer
 * @b: char to be written
 * @n: number of bytes to write
 *
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
