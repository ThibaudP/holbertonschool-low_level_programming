#include <stdio.h>

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
	int i;
	unsigned long pp = 1, p = 2;
	unsigned long pp_p1, pp_p2, p_p1, p_p2, cur_p1, cur_p2;

	printf("1, 2, ");

	p_p1 = p / 1000000000;
	p_p2 = p % 1000000000;
	pp_p1 = pp / 1000000000;
	pp_p2 = pp % 1000000000;

	for (i = 3; i < 99; i++)
	{
		cur_p1 = pp_p1 + p_p1;
		cur_p2 = pp_p2 + p_p2;

		if (cur_p2 > 999999999)
		{
			cur_p1 += 1;
			cur_p2 %= 1000000000;
		}

		if (cur_p1 > 0)
			printf("%lu%09lu", cur_p1, cur_p2);
		else
			printf("%lu", cur_p2);

		printf((i != 98) ? ", " : "\n");

		pp_p1 = p_p1;
		pp_p2 = p_p2;
		p_p1 = cur_p1;
		p_p2 = cur_p2;
	}
	return (0);
}
