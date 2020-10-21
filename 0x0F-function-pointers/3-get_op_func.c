#include "3-calc.h"

/**
 * get_op_func - Selects the correct operation to perform
 *
 * @s: a string containing the operator
 *
 * Return: a pointer to the correct operation function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strlen(s) == 1 && s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
