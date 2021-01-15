#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;

	if (!key && !strlen(key))
		return (0);
	if (ht)
	{
		idx = key_index((unsigned char *)key, ht->size);
		if (!add_node(&(ht->array[idx]), key, value))
			return (0);
	}

	return (1);

}


/**
 * add_node - adds a node at the beginning of a linked list
 *
 * @head: pointer to head of the list
 * @key: key
 * @value: value
 *
 * Return: address of new node, or NULL if failure
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = *head;
	*head = node;

	return (node);
}
