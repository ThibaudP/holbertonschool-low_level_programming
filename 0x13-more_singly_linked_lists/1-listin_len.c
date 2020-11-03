#include "lists.h"

/**
 * listint_len - Prints the number of nodes in a linked list
 *
 * @h: pointer to head of list
 *
 * Return: the size of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
