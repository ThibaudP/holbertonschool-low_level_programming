#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list
 *
 * @head: pointer to pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = *head;
		free(tmp);
		*head = (*head)->next;
	}

	*head = NULL;
}
