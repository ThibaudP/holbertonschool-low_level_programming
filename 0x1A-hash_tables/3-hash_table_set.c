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
		if (!add_update_node(&(ht->array[idx]), key, value))
			return (0);
	}

	return (1);
}

/**
 * add_update_node - adds or updates a node
 *
 * @head: pointer to head of the list
 * @key: key
 * @value: value
 *
 * Return: address of new node, or NULL if failure
 */

hash_node_t *add_update_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node = *head;
	hash_node_t *new_node = NULL;

	while (node)
	{
		if (!strcmp(key, node->key))
		{
			free(node->value);
			node->value = strdup(value);
			return (node);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
