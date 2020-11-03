#include "lists.h"

/**
 * pop_listint - pops the head elemenet of a linked list
 *
 * @head: pointer to pointer to head node
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int data = 0;

	if (*head)
	{
		data = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	return (data);
}
