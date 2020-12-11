#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 *
 * @head: head node to the list
 * @n: value to add in the node
 *
 * Return: the new (head) node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *cur = *head;


	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (cur->next != NULL)
			cur = cur->next;
		new->prev = cur;
		cur->next = new;
	}

	return (new);
}
