#include "lists.h"
#include <stdio.h>

/**
 *listint_len - returns the number of elements
 *
 *@h: Pointer to the head of the list
 *
 *Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
