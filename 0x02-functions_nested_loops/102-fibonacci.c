#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long pp = 1, p = 2, cur;
	int i;

	printf("1, 2, ");

	for (i = 0; i < 48; i++)
	{
		cur = pp + p;	
		printf("%lu", cur);
		printf ((i == 47) ? "\n" : ", ");
		pp = p;
		p = cur;
	}
	return (0);
}
