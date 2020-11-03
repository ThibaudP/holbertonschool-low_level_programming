#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth elemenet of a linked list
 *
 * @head: pointer to head node
 * @index: index of the node we want
 *
 * Return: the node itself or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head && count != index)
		{
			head = head->next;
			count++;
		}
	}

	if (head && count == index)
		return (head);

	return (NULL);
}
