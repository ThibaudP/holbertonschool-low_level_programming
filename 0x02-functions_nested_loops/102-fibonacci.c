#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long prepre, pre, cur;
	int i = 0;
	int j = 1;
	int k = 2;

	printf("%d, ", j);
	printf("%d, ", k);

	prepre = j;
	pre = k;
	while (i < 48)
	{
		cur = prepre + pre;
		prepre = pre;
		pre = cur;
		if (i == 47)
			printf("%lu\n", cur);
		else
			printf("%lu, ", cur);
		i++;
	}
	return (0);
}
