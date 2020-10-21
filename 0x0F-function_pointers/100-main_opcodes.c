#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Prints n bytes of the opcodes of itself
 *
 * @argc: Number of args
 * @argv: Value of args
 *
 * Return: 0 if success, exits if failure
 */

int main(int argc, char **argv)
{
	int n, i = 0;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	p = (unsigned char *)main;

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < n)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", p[i]);
		i++;
	}
	printf("\n");

	return (0);
}
