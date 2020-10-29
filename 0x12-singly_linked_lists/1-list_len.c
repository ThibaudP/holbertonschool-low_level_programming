#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to head of a linked list
 *
 * Return: the number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
