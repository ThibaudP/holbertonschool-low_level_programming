#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * natural - prints the sum of all the multiples of 3 and 4 under 1024 excl.
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
	while (i < 48)
	{
		cur = prepre + pre;
		prepre = pre;
		pre = cur;
		
		tot = tot + cur;

		if (cur > 4000000)
		{
			printf("%lu\n", tot);
			return (0);
		}

		i++;
	}
	return (0);
}
