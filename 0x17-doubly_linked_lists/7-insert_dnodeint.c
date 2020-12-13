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
 * insert_dnodeint_at_index - insert a node at requested index
 *
 * @h: head node to the list
 * @idx: index of new node
 * @n: value to add in the node
 *
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *cur = *h;
	unsigned int cnt = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new || idx > list_len(*h))
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*h == NULL)
		*h = new;
	else
	{
		while (cur && cnt != idx)
		{
			cur = cur->next;
			cnt++;
		}
		if (cur && cnt == idx)
		{
			new->next = cur;
			if (cur->prev)
			{
				new->prev = cur->prev;
				cur->prev->next = new;
			}
			else
				*h = new;
			cur->prev = new;
		}
		else if (cnt == idx)
			new = add_dnodeint_end(h, n);

	}
	return (new);
}
