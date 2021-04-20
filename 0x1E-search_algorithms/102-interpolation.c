#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm
 *
 * @array: the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located if found, -1 if not found
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, lo = 0, hi = (size - 1);

	if (!array || size == 0)
		return (-1);

	while (lo < hi)
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
			    (value - array[lo]));

		if (pos < lo || pos > hi)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			hi = pos - 1;
		else if (array[pos] < value)
			lo = pos + 1;
		else
			return (pos);
	}

	return (-1);
}
