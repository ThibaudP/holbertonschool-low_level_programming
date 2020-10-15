#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory w/ malloc\
 * & initialized every item of the array to 0
 *
 * @nmemb: number of elements
 * @size: 
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
