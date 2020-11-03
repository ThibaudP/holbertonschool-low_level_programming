#include "lists.h"

/**
 * print_listint - Prints a linked list of ints
 *
 * @h: pointer to head of list
 *
 * Return: the size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t len;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
