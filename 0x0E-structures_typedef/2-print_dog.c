#include "dog.h"

/**
 * print_dog - Prints a struct dog
 *
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
