#include "lists.h"

/**
 * get_nodeint - gets the nth elemenet of a linked list
 *
 * @head: pointer to head node
 * @index: index of the node we want
 *
 * Return: the node itself
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (count != index)
		{
			head = head->next;
			count++;
		}
	}

	return (head);
}
