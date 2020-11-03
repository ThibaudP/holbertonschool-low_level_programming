#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to pointer to head node
 *
 * Return: a pointer to the head node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = *head;
	listint_t *prev = NULL;

	if (*head)
	{
		while (cur)
		{
			*head = (*head)->next;
			cur->next = prev;
			prev = cur;
			cur = *head;
		}
		*head = prev;
	}

	return (*head);
}
