#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list
 *
 * @head: pointer to pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
