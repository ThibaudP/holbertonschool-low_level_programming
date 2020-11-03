#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a linked list
 *
 * @head: pointer to pointer to head node
 * @n: the int to store in the new node
 *
 * Return: address of new node if success, NULL if failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (new);
}
