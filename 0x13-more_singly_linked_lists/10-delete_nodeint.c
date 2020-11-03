#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in a linked list at index idx
 *
 * @head: pointer to pointer to head node
 * @index: index of node to be deleted
 *
 * Return: 1 if success, -1 if FAIL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head;
	listint_t *tmp = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	else
	{
		while (count != (index - 1))
		{
			cur = cur->next;
			count++;
		}

		tmp = cur->next->next;
		free(cur->next);
		cur->next = tmp;
		return (1);
	}

	return (-1);
}
