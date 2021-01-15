#include "hash_tables.h"

/**
 * hash_table_create - creates the sash table.
 *
 * @size: size of the table
 *
 * Return: pointer to new hash table, NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht)
	{
		ht->array = calloc(size, sizeof(hash_node_t *));
		if (!ht->array)
		{
			free(ht);
			return (NULL);
		}
		ht->size = size;
	}

	return (ht);
}
