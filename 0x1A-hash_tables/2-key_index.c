#include "hash_tables.h"

/**
 * key_index - returns an index at which the key should be stored
 *
 * @key: key we want to find the index of
 * @size: size of the table
 *
 * Return: pointer to new hash table, NULL if error
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == '\0' || size == 0)
		return (0);
	else
		return (hash_djb2(key) % size);
}
