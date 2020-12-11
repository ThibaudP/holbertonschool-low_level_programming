#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 *
 * @head: head node to the list
 * @index: index to fetch
 *
 * Return: the node at index or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int cnt = 0;

	while (cur && cnt != index)
	{
		cur = cur->next;
		cnt++;
	}

	if (cur && cnt == index)
		return (cur);

	return (NULL);
}
