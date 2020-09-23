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
	unsigned long pp = 1, p = 2, cur, sum;
	int i;

	cur = p;
	sum = cur;
	while (cur < 4000000)
	{
		cur = pp + p;
		pp = p;
		p = cur;
		if (cur % 2 == 0)
			sum += cur;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
