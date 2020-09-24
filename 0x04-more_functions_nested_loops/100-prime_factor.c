#include <stdio.h>

/**
 * main - Entry point, prints the largest prime factor of 612852475143
 *
 * Return: The largest prime factor of 612852475143
 */

int main(void)
{
	unsigned long res = 612852475143;
	unsigned long fac = 2;

	while (res != 1)
	{
		if (res % fac == 0)
			res = res / fac;
		else
			fac++;
	}

	printf("%lu\n", fac);

	return (0);
}
