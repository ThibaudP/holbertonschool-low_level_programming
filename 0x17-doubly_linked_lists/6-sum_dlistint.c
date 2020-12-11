#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a dlistint_t list
 *
 * @head: head node to the list
 *
 * Return: the sum of all data in the linked list 
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur = head;

	if (!head)
		return (0);

	while (cur)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
