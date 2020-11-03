#include "lists.h"

/**
 * sum_listint - sums all elements of a linked list
 *
 * @head: pointer to head node
 *
 * Return: the node itself
 */

int sum_listint(listint_t *head)
{
	int res = 0; 

	while (head)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
