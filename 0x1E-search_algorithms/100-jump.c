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
	size_t strt = 0, jmp, end;


	if (array == NULL || size < 1)
		return (-1);

	jmp = sqrt(size);
	end = 0;

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%lu] = %d\n", end, array[end]);
		strt = end;
		end += jmp;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", strt, end);

	if (end >= size)
		end = size - 1;

	while  (strt <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", strt, array[strt]);
		if (array[strt] == value)
			return ((int)strt);
		strt++;
	}

	return (-1);
}
