#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head node to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
