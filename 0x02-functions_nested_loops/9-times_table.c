#include <stdio.h>
#include "holberton.h"

/**
 * times_table - Prints all the multiplication tables
 */

void times_table(void)
{
	int n = 0;
	int m, res;

	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			res = m * n;
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res < 10 && m != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (m == 0)
			{
				_putchar((res % 10) + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
