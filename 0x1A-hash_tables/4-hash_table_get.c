#include "hash_tables.h"

/**
 * hash_table_get - gets an element from a hash table
 *
 * @ht: the hash table
 * @key: key
 *
 * Return: the value requested if success, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL;

	if (!key && !strlen(key))
		return (NULL);
	if (ht && ht->size)
	{
		idx = key_index((unsigned char *)key, ht->size);
		node = get_node_from_key(ht->array[idx], key)
		if (node)
			return (node->value);
	}

	return (NULL);
}

/**
 * get_node_from_key - gets a node from its key
 *
 * @head: pointer to head node
 * @key: key of the node we want
 *
 * Return: the node itself or NULL if not found
 */

hash_node_t *get_node_from_key(hash_node_t *head, const char *key)
{
	if (head)
	{
		while (head && strcmp(head->key, key))
			head = head->next;
	}

	if (head && !strcmp(head->key, key))
		return (head);

	return (NULL);
}
