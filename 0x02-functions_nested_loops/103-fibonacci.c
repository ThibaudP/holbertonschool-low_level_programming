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
	unsigned long prepre, pre, cur, tot;
	int i = 0;
	int j = 1;
	int k = 2;

	prepre = j;
	pre = k;
	tot = k;
	cur = k;
	while (cur < 4000000)
	{
		cur = prepre + pre;
		prepre = pre;
		pre = cur;
		if (cur % 2 == 0)
			tot = tot + cur;
		i++;
	}
	printf("%lu\n", tot);
	return (0);
}
