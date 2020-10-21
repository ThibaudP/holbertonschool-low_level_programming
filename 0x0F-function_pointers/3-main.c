#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: Number of args
 * @argv: Value of args
 *
 * Return: 0 if success, 98, 99 or 100 if error
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", op(a, b));
	return (0);
}
