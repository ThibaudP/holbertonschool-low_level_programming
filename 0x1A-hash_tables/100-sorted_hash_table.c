#include "hash_tables.h"

/**
 * shash_table_create - creates the hash table.
 *
 * @size: size of the table
 *
 * Return: pointer to new hash table, NULL if error
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	ht = malloc(sizeof(shash_table_t));
	if (ht)
	{
		ht->array = calloc(size, sizeof(shash_node_t *));
		if (!ht->array)
		{
			free(ht);
			return (NULL);
		}
		ht->size = size;
		ht->shead = NULL;
		ht->stail = NULL;
	}

	return (ht);
}

/**
 * shash_table_set - adds an element to the hash table
 *
 * @ht: the hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success, 0 if failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *new_node = NULL;

	if (!key || strlen(key) == 0 || !ht)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new_node = sadd_update_node(&(ht->array[idx]), key, value);
	if (new_node == NULL)
		return (0);
	if (sinsert_node(ht, new_node) == NULL)
		return (0);
	return (1);
}

/**
 * sadd_update_node - adds or updates a node
 *
 * @head: pointer to head of the list
 * @key: key
 * @value: value
 *
 * Return: address of new node, or NULL if failure
 */

shash_node_t *sadd_update_node(
	shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *new_node = NULL;
	shash_node_t *node = *head;

	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (node);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->snext = NULL;
	new_node->sprev = NULL;
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * sinsert_node - inserts the node in the doubly linked list
 *
 * @ht: hash table
 * @new: the new node to insert
 *
 * Return: the new node
 */

shash_node_t *sinsert_node(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *head = NULL;
	shash_node_t *tmp = NULL;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		new->snext = NULL;
		new->sprev = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(new->key, ht->shead->key) <= 0)
	{
		new->snext = ht->shead;
		new->snext->sprev = new;
		ht->shead = new;
	}
	else
	{
		head = ht->shead;
		while (head->snext && strcmp(new->key, head->snext->key) > 0)
		{
			head = head->snext;
		}
		new->snext = head->snext;
		new->sprev = head;
		tmp = head->snext;
		head->snext = new;
		if (tmp != NULL)
			tmp->sprev = new;
		else
			ht->stail = new;
	}

	return (new);
}

/**
 * shash_table_get - gets an element from a hash table
 *
 * @ht: the hash table
 * @key: key
 *
 * Return: the value requested if success, NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	shash_node_t *node = NULL;

	if (!key && !strlen(key))
		return (NULL);
	if (ht && ht->size)
	{
		idx = key_index((unsigned char *)key, ht->size);
		node = sget_node_from_key(ht->array[idx], key);
		if (node)
			return (node->value);
	}

	return (NULL);
}

/**
 * sget_node_from_key - gets a node from its key
 *
 * @head: pointer to head node
 * @key: key of the node we want
 *
 * Return: the node itself or NULL if not found
 */

shash_node_t *sget_node_from_key(shash_node_t *head, const char *key)
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

/**
 * shash_table_print - prints a hash table
 *
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = ht->shead;
	unsigned int cnt = 0;

	if (ht)
	{
		printf("{");
		while (node)
		{
			printf("%s", cnt == 0 ? "" : ", ");
			cnt = 1;
			printf("'%s': '%s'", node->key, node->value);
			node = node->snext;
			cnt++;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints a hash table
 *
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = ht->stail;
	unsigned int cnt = 0;

	if (ht)
	{
		printf("{");
		while (node)
		{
			printf("%s", cnt == 0 ? "" : ", ");
			cnt = 1;
			printf("'%s': '%s'", node->key, node->value);
			node = node->sprev;
			cnt++;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL;
	shash_node_t *prev = NULL;
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
