#include "search_algos.h"

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

/**
 * minval - finds the minimum value
 * 
 * @a: first value
 * @b: second value
 * 
 * Return: the lowest of the two values
 **/

size_t minval(size_t a, size_t b)
{
	if (b < a)
		return (b);
	return (a);
}

/**
 * _binary_search - binary search algorithm
 *
 * @array: the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located if found, -1 if not found
 **/

int _binary_search(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (array)
	{
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
	}
	return (-1);
}

/**
 * exponential_search - exponential search algorithm
 *
 * @array: the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located if found, -1 if not found
 **/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2,
	       minval(bound, size - 1));
	       
	return (_binary_search(array, bound / 2, minval(bound, size - 1), value));

}
