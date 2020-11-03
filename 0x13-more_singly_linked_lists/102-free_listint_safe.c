#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of ints
 *
 * @head: pointer to pointer to head of list
 *
 * Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t idx = 0;
	size_t i = 0;
	listint_t *start = *head;
	listint_t *tmp;

	if (*head)
	{
		while (*head && _islooped(start, *head, idx))
		{
			tmp = (*head)->next;
			*head = tmp;
			idx++;
		}

		*head = start;

		while (i < idx)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
			i++;
		}

		if (*head)
			*head = NULL;
	}
	return (idx);
}
