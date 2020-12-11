#include "lists.h"

/**
 * print_dlistint - prints every element of a doubly linked list
 *
 * @head: head node to the list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
