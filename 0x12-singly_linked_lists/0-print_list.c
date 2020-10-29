#include "lists.h"

/**
 * print_list - prints every element from a linked list
 *
 * @h: the first element of a linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;
	list_t *node;

	node = h;

	while (node->next != NULL)
	{
		printf("%s", node->str);
		cnt++;
		node = node->next;
	}

	return (cnt);
}
