#include "holberton.h"

/**
 * swap_int - Swaps the values of 2 ints
 *
 * @a: pointer to the first int
 * @b: pointer to the 2nd int
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
