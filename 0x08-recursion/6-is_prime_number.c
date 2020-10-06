#include "holberton.h"

/**
 * prime_test - checks if can is prime
 *
 * @fac: possible factor
 * @can: prime candidate
 *
 * Return: 1 if prime, 0 if not
 */

int prime_test(int fac, int can)
{
	if (can % fac == 0)
		return (0);
	if (fac * fac < can)
		return (1);
	return (prime_test((fac + 1), can));
}

/**
 * is_prime_number - checks if n is prime
 *
 * @n: an int
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_test(2, n));
}
