#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - Compute the first 98 Fibonacci numbers without using long longs
 *
 * 1st for loop computes #2-#92 (93 overflows the unsigned long)
 * Setup for 2nd loop splits the previous value & the previous previous
 * at an arbitrary 1 billion (plenty enough to not overflow either half).
 * Both halves are then added together separately. If the 2nd half overflows
 * our 1B limit, we only keep the 9 rightmost digits and carry over +1
 * to the 1st half. Then display the result.
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long prepre = 1, pre = 2, cur, prepre_half1, prepre_half2;
	unsigned long pre_half1, pre_half2, cur_half1, cur_half2;
	int i = 2;

	printf("1, 2, ");

	for (i = 2; i < 92; i++)
	{
		cur = prepre + pre;
		printf("%lu, ", cur);
		prepre = pre;
		pre = cur;
	}

	pre_half1 = pre / 1000000000;
	pre_half2 = pre % 1000000000;
	prepre_half1 = prepre / 1000000000;
	prepre_half2 = prepre % 1000000000;

	for (i = 93; i < 99; i++)
	{
		cur_half1 = prepre_half1 + pre_half1;
		cur_half2 = prepre_half2 + pre_half2;

		if (prepre_half2 + pre_half2 > 999999999)
		{
			cur_half1 = cur_half1 + 1;
			cur_half2 = cur_half2 % 1000000000;
		}

		printf("%lu%lu", cur_half1, cur_half2);

		printf((i != 98) ? ", " : "\n");

		prepre_half1 = pre_half1;
		prepre_half2 = pre_half2;
		pre_half1 = cur_half1;
		pre_half2 = cur_half2;
	}
	return (0);
}
