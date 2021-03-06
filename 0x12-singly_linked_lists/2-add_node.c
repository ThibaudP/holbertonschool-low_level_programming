#include "lists.h"

/**
 * _strlen - returns the length of the string str
 *
 * @str: The string to measure length
 *
 * Return: the length of the str string
 */

int _strlen(const char *str)
{
	int len = 0;

	if (str)
		while (str[len])
			len++;
	return (len);
}

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
	node->len = _strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
