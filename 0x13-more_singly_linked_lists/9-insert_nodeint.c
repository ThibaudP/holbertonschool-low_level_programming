#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a linked list at index idx
 *
 * @head: pointer to pointer to head node
 * @idx: index where node should be added
 * @n: int to store in node
 *
 * Return: the node itself or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur = *head;
	listint_t *new = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (cur && count != (idx - 1))
		{
			cur = cur->next;
			count++;
		}

		if (cur && count == (idx - 1))
		{
			new->next = cur->next;
			cur->next = new;
		}
		else
			return (NULL);
	}

	return (new);
}
