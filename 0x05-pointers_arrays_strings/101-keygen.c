#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a keygen for 101-crackme
 *
 */

int main(void)
{
	char arr[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char pwd[100];
	int i, val, sum = 0;

	srand(time(0));

	for (i = 0; sum < (2772 - 122); i++)
	{
		val = rand() % 62;
		pwd[i] = arr[val];
		sum += pwd[i];
	}
	pwd[i] = 2772 - sum;

	printf("%s", pwd);
	return (0);
}
