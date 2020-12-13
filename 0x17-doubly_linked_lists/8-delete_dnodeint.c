#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to head of a linked list
 *
 * Return: the number of nodes in the list
 */

size_t list_len(dlistint_t *h)
{
	unsigned int cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}


/**
 * delete_dnodeint_at_index - deletes a node at requested index
 *
 * @head: head node to the list
 * @idx: index of new node
 *
 * Return: 1 if success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *cur = *head;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	if (idx > list_len(*head))
		return (-1);

	while (cur && cnt != idx)
	{
		cur = cur->next;
		cnt++;
	}

	if (cur && cnt == idx)
	{
		if (cur->prev && cur->next)
		{
			cur->prev->next = cur->next;
			cur->next->prev = cur->prev;
		}
		else if (cur->prev && !cur->next)
			cur->prev->next = NULL;
		else if (!cur->prev && cur->next)
		{
			cur->next->prev = NULL;
			*head = cur->next;
		}
		else if (!cur->next && !cur->prev)
			*head = NULL;
		free(cur);
	}

	return (1);
}
