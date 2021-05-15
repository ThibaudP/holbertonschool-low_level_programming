#include "holberton.h"

/**
 * _memcpy - copies n bytes from *src to *dest
 *
 * @src: pointer to source buffer
 * @dest: pointer to dest buffer
 * @n: number of bytes to write
 *
 * Return: a string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
