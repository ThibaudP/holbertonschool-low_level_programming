#include "lists.h"

/**
 * print_list - prints every element from a linked list
 *
 * @h: pointer to head of a linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		cnt++;
		h = h->next;
	}

	return (cnt);
}
