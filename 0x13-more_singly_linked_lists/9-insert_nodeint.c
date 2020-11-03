#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a linked list at index idx
 *
 * @head: pointer to pointer to head node
 * @idx: index where node should be added
 * @n: int to store in node
 *
 * Return: the node itself or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur = *head;
	listint_t *new = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));

	new->n = n;

	while (count != (idx - 1))
	{
		cur = cur->next;
		count++;
	}
	new->next = cur->next;
	cur->next = new;

	return (new);
}
