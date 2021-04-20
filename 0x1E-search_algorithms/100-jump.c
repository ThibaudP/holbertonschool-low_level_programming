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
	size_t start = 0, jump = sqrt(size), end = jump, i;

	if (array && size > 0)
	{
		printf("Value checked array[%lu] = %d\n", start, array[start]);
		while (array[end] < value && end < size)
		{
			printf("Value checked array[%lu] = %d\n", end, array[end]);
			start = end;
			end += jump;
				}

		printf("Value found between indexes [%ld] and [%ld]\n", start, end);

		if (array[end] >= value)
		{
			for (i = start; i <= end; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		else
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}

	return (-1);
}
