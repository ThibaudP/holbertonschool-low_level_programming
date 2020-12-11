#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a linked list
 *
 * @head: head node to the list
 * @n: value to add in the node
 *
 * Return: the new (head) node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
