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
	size_t strt = 0, jmp, end, i;

	if (array && size)
	{
		jmp = sqrt(size);
		end = jmp;

		printf("Value checked array[%lu] = %d\n", strt, array[strt]);
		while (array[end] < value && end < size)
		{
			printf("Value checked array[%lu] = %d\n", end, array[end]);
			strt = end;
			end += jmp;
		}

		printf("Value found between indexes [%ld] and [%ld]\n", strt, end);

		end = end > size ? size - 1 : end;

		for (i = strt; i <= end; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
