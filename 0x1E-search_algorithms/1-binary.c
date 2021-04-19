#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 *
 * @array: the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located if found, -1 if not found
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t mid, start = 0, end = size - 1;

	while (start <= end)
	{
		mid = start + (end - start) / 2;
		print_array(array, start, end);
		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

/**
 * print_array - prints a subarray (from start to end passed as args)
 *
 * @array: the array to print
 * @start: start index of subarray
 * @end: end index of subarray
 *
 **/

void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	printf("Searching in array: ");
	while (i <= end)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
		i++;
	}
	printf("\n");
}
