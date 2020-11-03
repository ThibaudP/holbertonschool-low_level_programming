#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list
 *
 * @head: pointer to pointer to head node
 * @n: the int to store in the new node
 *
 * Return: address of new node if success, NULL if failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *cur = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
		{
			while (cur->next != NULL)
				cur = cur->next;

			cur->next = new;
		}
	}

	return (new);
}
