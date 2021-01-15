#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned int i = 0, cnt = 0;

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node)
			{
				printf("%s", cnt == 0 ? "" : ", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				cnt++;
			}
			i++;
		}
		printf("}\n");
	}
}
