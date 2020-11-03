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
	int data = 0;

	if (*head)
	{
		data = (*head)->n;
		*head = (*head)->next;
	}

	return (data);
}
