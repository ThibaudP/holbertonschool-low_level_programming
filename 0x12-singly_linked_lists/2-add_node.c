#include "lists.h"

/**
 * add_node - adds a node at the beginning of a linked list
 *
 * @head: pointer to head of a linked list
 * @str: the str to store in node->str
 *
 * Return: address of new node, or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
		return (NULL);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
