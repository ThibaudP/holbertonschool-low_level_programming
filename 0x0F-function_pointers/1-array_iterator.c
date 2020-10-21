#include "function_pointers.h"

/**
 * array_iterator - calls a function on every element of array
 *
 * @array: the array
 * @size: size
 * @action: function to call back
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array = NULL || action == NULL)
		exit(98);

	for (i = 0; i < size; i++)
		action(array[i]);
}
