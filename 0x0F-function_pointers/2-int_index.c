#include "function_pointers.h"

/**
 * int_index - returns the first integer found by the cmp function
 *
 * @array: the array
 * @size: size of the array
 * @cmp: compare function to call back
 *
 * Return: index of first int if success, -1 if failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
