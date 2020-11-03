#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 *
 * @head: pointer to pointer to head node
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;

	if (!h)
		return (98);

	while (*h != NULL)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}

	*h = NULL;

	return (0);
}
