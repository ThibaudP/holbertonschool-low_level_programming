#include <stdio.h>

/**
 * premain - code to be excuted before the main function
 */

void __attribute__((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
