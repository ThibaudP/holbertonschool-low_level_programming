#include "lists.h"

/**
 * free_list - frees a linked list
 *
 * @head: pointer to the head of a linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	tmp = head;
	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
