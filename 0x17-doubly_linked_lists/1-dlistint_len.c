#include "lists.h"

/**
 * dlistint_len - returns the length of a linked list
 *
 * @h: head node to the list
 *
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
