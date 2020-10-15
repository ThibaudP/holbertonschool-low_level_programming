#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory w/ malloc\
 * & initializes everything to 0
 *
 * @nmemb: number if items
 * @size: size of the items
 *
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);


	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		exit(-1);
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}


	return ((void *)ptr);
}
