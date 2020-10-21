#include "function_pointers.h"

/**
 * print_name - Calls back to more specific print name funcs
 *
 * @name: a string
 * @f: function to call back
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
