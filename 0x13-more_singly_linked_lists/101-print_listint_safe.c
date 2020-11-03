#include "lists.h"

/**
 * _islooped - Checks if linked list is not looped
 *
 * @head: pointer to head node of list
 * @curr: current node to check against
 * @idx: the position of current as read by main function
 *
 * Return: 0 if the list loops somewhere, 1 if not (expected outcome)
 */

int _islooped(const listint_t *head, const listint_t *curr, size_t idx)
{
	size_t count = 0;

	while (head != curr)
	{
		head = head->next;
		count++;
	}

	if (count == idx)
		return (1);
	else
		return (0);
}

/**
 * print_listint_safe - Prints a linked list of ints
 *
 * @head: pointer to head of list
 *
 * Return: the size of the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t idx = 0;
	const listint_t *start = head;
	
	if (head)
	{
		while (head && _islooped(start, head, idx))
		{
			printf("[%p] %i\n", (void *)head, head->n);
			idx++;
			head = head->next;
		}

		if (head)
			printf("-> [%p] %i\n", (void *)head, head->n);
	}
	return (idx);
}
