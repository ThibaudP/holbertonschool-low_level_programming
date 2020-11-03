#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list
 *
 * @head: pointer to pointer to head node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
