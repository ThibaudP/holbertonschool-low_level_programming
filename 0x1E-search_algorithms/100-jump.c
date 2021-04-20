#include "search_algos.h"

/**
 * jump_search - jump search algorithm
 *
 * @array: the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located if found, -1 if not found
 **/

int jump_search(int *array, size_t size, int value)
{
	size_t block, idx = 0, jdx = 0;

	if (!array || size == 0)
		return (-1);

	block = sqrt(size);

	while (idx < size && value > array[idx])
	{
		printf("Value checked array[%lu] = [%d]\n",
		       idx, array[idx]);
		idx += block;
	}

	jdx = idx - block;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       jdx, idx);

	idx = idx >= size ? size - 1 : idx;
	while (jdx <= idx)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       jdx, array[jdx]);
		if (array[jdx] == value)
			return ((int)jdx);
		jdx++;
	}
	return (-1);
}