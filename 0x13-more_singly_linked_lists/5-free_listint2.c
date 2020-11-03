#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list
 *
 * @head: pointer to pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *next = *head;

	if (!head)
		return;

	while (next != NULL)
	{
		tmp = next;
		free(tmp);
		next = next->next;
	}

	*head = NULL;
}
