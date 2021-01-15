#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL;
	hash_node_t *prev = NULL;
	unsigned int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			free(node->key);
			free(node->value);
			prev = node;
			node = node->next;
			free(prev);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
