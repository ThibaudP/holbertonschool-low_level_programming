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
	unsigned long prepre, pre, cur, prepre_half1, prepre_half2;
	unsigned long pre_half1, pre_half2, cur_half1, cur_half2;
	int i = 2;

	prepre = 1;
	pre = 2;
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
		if (i != 98)
			printf(", ");
		prepre_half1 = pre_half1;
		prepre_half2 = pre_half2;
		pre_half1 = cur_half1;
		pre_half2 = cur_half2;
	}
	printf("\n");
	return (0);
}
