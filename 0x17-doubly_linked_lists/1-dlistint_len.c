#include "lists.h"

/**
 *dlistint_len - Counts the number of nodes in the list
 *
 *@h: Pointer to the head od doubly linked list
 *
 *Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
